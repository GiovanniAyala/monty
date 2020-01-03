#include "monty.h"
void _push(stack_t **stack, unsigned int line_number)
{
        stack_t *new_node;
        new_node = malloc(sizeof(stack_t));
        if (new_node == NULL)
        {
                printf("Error: malloc failed");
                exit(EXIT_FAILURE);
        }
        new_node->n = line_number;
        if (*stack == NULL)
        {
                new_node->next = NULL;
                new_node->prev = NULL;
                (*stack) = new_node;
        }
        else
        {
                new_node->prev = NULL;
                new_node->next = *stack;
                (*stack)->prev = new_node;
                (*stack) = new_node;
        }
}


void _pall(stack_t **stack, unsigned int line_number)
{
        stack_t *new_node = *stack;
        line_number = line_number;
        while (new_node != NULL)
        {
                printf("%i\n", new_node->n);
                new_node = new_node->next;
        }
}

void _pint(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || stack == NULL)
    {
        printf("L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*stack)->n);
}

void _pop(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = *stack;

    if (*stack == NULL)
    {
        printf("L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }
    if ((*stack)->next != NULL)
    {
        *stack = (*stack)->next;
        (*stack)->prev = NULL;
    }
    else
    {
        free(tmp);
        *stack = NULL;
    }
}

void _add(stack_t **stack, unsigned int line_number)
{

        int i = 0;
        stack_t *temp;
        if (*stack == NULL)
        {
                prinf("L%d: can't add, stack too short", line_number);
                exit(EXIT_FAILURE);
        }
        temp = *stack;
        while (temp != NULL)
        {
awdawd
        }

}
