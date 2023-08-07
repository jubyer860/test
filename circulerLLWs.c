#include <stdio.h>
#include <stdlib.h>

typedef struct node C_NODE;

struct node {
    int data;
    C_NODE *next;
};

typedef struct node2 SEN_NODE;
struct node2 {
    char sen_data;
    SEN_NODE *n;
};

int main() {
    C_NODE *head = NULL, *temp = NULL, *prev = NULL;
    SEN_NODE *sentinal = NULL;
    int choice = 1, data;

    sentinal = (SEN_NODE*)malloc(sizeof(SEN_NODE));

    if(sentinal != NULL) {
        sentinal->sen_data = 'A';
        sentinal->n = NULL;

        while(choice) {
                temp = (C_NODE*)malloc(sizeof(C_NODE));
                if(temp != NULL) {
                    printf("We have get address %x\n\n", temp);
                    printf("Enter a data for insert into the linked list: ");
                    scanf("%d", &data);

                    temp->data = data;
                    temp->next = NULL;

                    if(head == NULL) {
                        sentinal->n = head = prev = temp;
                    }
                    else {
                        prev->next = temp;
                        prev = prev->next;
                    }
                    printf("Do you want to continue: ");
                    scanf("%d", &choice);
                }
        }
    }
    prev->next = sentinal;

    printf("Your list is: ");
    temp = head;
    while(1) {
        printf("%d", temp->data);
        temp=temp->next;

        if(temp->data == 'A') {
            break;
        }
    }

    return 0;
}
