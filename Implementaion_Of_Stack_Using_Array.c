#include <stdio.h>
#define N 50

int stack[N];
int top = -1;

void push();
void pop();
void peek();
void display();

int main() 
{
    int ch;
    do
    {
        printf("\nEnter choice: 1.Push 2.Pop 3.Peek 4.Display 5.Exit: ");
        scanf("%d", &ch);
        switch (ch) 
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5: printf("Exiting...\n");
                    return 0;
            default: printf("Invalid Choice\n");
        }
    } while(ch != 0);
    
    return 0;
}

void push()
{
    int x;
    if (top >= N-1) {
        printf("Stack Overflow!\n");
        return;
    }
    printf("Enter Data: ");
    scanf("%d", &x);
    top++;
    stack[top] = x;
    printf("%d pushed to stack\n", x);
}

void pop()
{
    if (top == -1) {
        printf("Stack Underflow!\n");
        return;
    }
    printf("Popped element: %d\n", stack[top]);
    top--;
}

void peek()
{
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Top element: %d\n", stack[top]);
}

void display()
{
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}