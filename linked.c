// Write a program that prompts the user to type in integers, adds each integer one at a time to the head of a linked list, 
// and then prints out the integers in the linked list (they'll be in reverse order from the input).
// Note: When running the program, press Ctrl-D to stop entering numbers. 


#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    node *list = NULL;

    while (true)
    {
        int x = get_int("Number: ");
        if (x == INT_MAX)
        {
            printf("\n");
            break;
        }

        // TODO: Allocate a new node.
				// TODO: Add new node to head of linked list.

    }

	// TODO: Print all nodes.
	// TODO: Free all nodes.

}
