#include <stdio.h>
#include <stdlib.h>

//using namespace std;

typedef struct node
    {
        int num;
        struct node *next;
    } nodeType;

int main()
{
    nodeType *first = NULL;
    nodeType *temp = NULL;
    nodeType *p = NULL;
    int val;
// enter the first number
    printf("Enter a number: ");
    scanf("%d", &val);

    while (val != -1){
        temp = (nodeType*)malloc(sizeof(nodeType));
        temp->num = val;
        temp->next=NULL;

    if (first == NULL) //first node
    {
        first = temp;
    }
    else //add to the end of the list
    {
        p = first;
        // go to the end of list
        while (p->next != NULL) {
            p = p ->next;
        }
            p->next = temp;
        }
        printf("Enter a number: ");
        scanf("%d",&val);
    }
p = first;
    printf("Here are the numbers you entered:\n");
    printf("%d\t", p->num);
    while(p->next != NULL) {
    p = p->next;
    printf("%d\t",p->num);
    }
    return 0;
}





