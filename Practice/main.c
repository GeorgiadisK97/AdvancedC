#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define MAX_EXPRESSION_LENGTH 100

// Stack structure for operands
typedef struct {
    double *items;
    int top;
    int size;
} Stack;

// Function to initialize a stack
void initializeStack(Stack *stack, int size) {
    stack->items = (double *)malloc(sizeof(double) * size);
    stack->top = -1;
    stack->size = size;
}

// Function to check if the stack is empty
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Function to push an item onto the stack
void push(Stack *stack, double value) {
    if (stack->top == stack->size - 1) {
        printf("Error: Stack overflow\n");
        exit(1);
    }
    stack->items[++stack->top] = value;
}

// Function to pop an item from the stack
double pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack underflow\n");
        exit(1);
    }
    return stack->items[stack->top--];
}

// Function to get the precedence of an operator
int getPrecedence(char operator) {
    if (operator == '+' || operator == '-')
        return 1;
    if (operator == '*' || operator == '/')
        return 2;
    if (operator == '^')
        return 3;
    return 0; // Default precedence for other symbols
}

// Function to perform binary operations
double performOperation(double operand1, char operator, double operand2) {
    switch (operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 != 0.0) {
                return operand1 / operand2;
            } else {
                printf("Error: Division by zero is undefined.\n");
                exit(1);
            }
        case '^':
            return pow(operand1, operand2);
        default:
            printf("Error: Invalid operator\n");
            exit(1);
    }
}

// Function to evaluate an expression using the Shunting Yard algorithm
double evaluateExpression(char *expression) {
    Stack operatorStack;
    Stack operandStack;
    initializeStack(&operatorStack, MAX_EXPRESSION_LENGTH);
    initializeStack(&operandStack, MAX_EXPRESSION_LENGTH);

    int i = 0;
    while (expression[i] != '\0') {
        if (isdigit(expression[i]) || (expression[i] == '-' && (i == 0 || expression[i - 1] == '('))) {
            // If the character is a digit or a negative sign at the beginning or after an opening parenthesis
            double value;
            sscanf(&expression[i], "%lf", &value);
            push(&operandStack, value);
            while (isdigit(expression[i]) || expression[i] == '.' || expression[i] == 'e' || expression[i] == 'E') {
                i++;
            }
        } else if (expression[i] == '(') {
            // If the character is an opening parenthesis
            push(&operatorStack, '(');
            i++;
        } else if (expression[i] == ')') {
            // If the character is a closing parenthesis
            while (!isEmpty(&operatorStack) && operatorStack.items[operatorStack.top] != '(') {
                char operator = (char)pop(&operatorStack);
                double operand2 = pop(&operandStack);
                double operand1 = pop(&operandStack);
                double result = performOperation(operand1, operator, operand2);
                push(&operandStack, result);
            }
            if (!isEmpty(&operatorStack) && operatorStack.items[operatorStack.top] == '(') {
                pop(&operatorStack); // Pop the opening parenthesis
            } else {
                printf("Error: Mismatched parentheses\n");
                exit(1);
            }
            i++;
        } else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' ||
                   expression[i] == '/' || expression[i] == '^') {
            // If the character is an operator
            while (!isEmpty(&operatorStack) && getPrecedence(operatorStack.items[operatorStack.top]) >= getPrecedence(expression[i])) {
                char operator = (char)pop(&operatorStack);
                double operand2 = pop(&operandStack);
                double operand1 = pop(&operandStack);
                double result = performOperation(operand1, operator, operand2);
                push(&operandStack, result);
            }
            push(&operatorStack, expression[i]);
            i++;
        } else if ((expression[i] >= 'a' && expression[i] <= 'z') || (expression[i] >= 'A' && expression[i] <= 'Z')) {
            // If the character is an alphabetical character (assumed to be a function name)
            char function[10];
            int j = 0;
            while ((expression[i] >= 'a' && expression[i] <= 'z') || (expression[i] >= 'A' && expression[i] <= 'Z')) {
                function[j++] = expression[i++];
            }
            function[j] = '\0';

            if (expression[i] == '(') {
                // If the next character is an opening parenthesis, assume it's a function call
                push(&operatorStack, '(');
                push(&operandStack, 0.0); // Placeholder for function result

                // TODO: Implement additional functions (e.g., sin, cos, sqrt)
                // Note: The implementation below only handles the 'sqrt' function as an example.
                if (strcmp(function, "sqrt") == 0) {
                    push(&operatorStack, 's');
                    push(&operandStack, 0.0); // Placeholder for the argument of the sqrt function
                } else {
                    printf("Error: Unknown function '%s'\n", function);
                    exit(1);
                }

                i++;
            } else {
                // If the next character is not an opening parenthesis, assume it's a variable or constant
                // TODO: Implement additional variables/constants as needed
                if (strcmp(function, "pi") == 0) {
                    push(&operandStack, M_PI);
                } else {
                    printf("Error: Unknown variable/constant '%s'\n", function);
                    exit(1);
                }
            }
        } else {
            // Skip other characters (whitespace, commas, etc.)
            i++;
        }
    }

    // Pop remaining operators from the stack
    while (!isEmpty(&operatorStack)) {
        char operator = (char)pop(&operatorStack);
        double operand2 = pop(&operandStack);
        double operand1 = pop(&operandStack);
        double result = performOperation(operand1, operator, operand2);
        push(&operandStack, result);
    }

    // The final result should be at the top of the operand stack
    return pop(&operandStack);
}

int main() {
    char expression[MAX_EXPRESSION_LENGTH];

    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);

    // Remove the newline character from the input
    if (expression[strlen(expression) - 1] == '\n') {
        expression[strlen(expression) - 1] = '\0';
    }

    double result = evaluateExpression(expression);

    printf("Result: %.6lf\n", result);

    return 0;
}
