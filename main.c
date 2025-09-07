#include <stdio.h>
#include <string.h>
#include "array.h"
#include "list.h"

int main(){
    int choice, subchoice, pos;
    ArrayList arrList;
    Student arrStud;
    char id[10], course[20];
    arrList.size = 0;

    LinkList L, temp;
    studentList studList;

    do {
        printf("Categories:\n");
        printf("[1]Array [2]Linked List\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        while (getchar() != '\n');

        switch (choice){
            case 1: {
                do {
                    printf("\nSelected Array\n");
                    printf("\nSubhoice:\n");
                    printf("\n[1]Insert First [2]Insert Last [3]Insert Last Unique\n");
                    printf("[4]Insert at Position [5]Delete Elem [6]Separate Course\n");
                    printf("[7]Display [8]Exit\n");

                    printf("\nEnter subchoice: ");
                    scanf("%d", &subchoice);
                    while (getchar() != '\n');

                    switch(subchoice){
                        case 1: {
                            printf("\nEnter id: ");
                            fgets(arrStud.id, sizeof(arrStud.id), stdin);
                            arrStud.id[strcspn(arrStud.id, "\n")] = '\0';
                            printf("Enter name: ");
                            fgets(arrStud.name, sizeof(arrStud.name), stdin);
                            arrStud.name[strcspn(arrStud.name, "\n")] = '\0';
                            printf("Enter course: ");
                            fgets(arrStud.course, sizeof(arrStud.course), stdin);
                            arrStud.course[strcspn(arrStud.course, "\n")] = '\0';
                            printf("Enter year: ");
                            scanf("%d", &arrStud.year);
                            while(getchar() != '\n'); 

                            arrayInsertFirst(&arrList, arrStud);
                            break;
                        }
                        case 2: {
                            printf("\nEnter id: ");
                            fgets(arrStud.id, sizeof(arrStud.id), stdin);
                            arrStud.id[strcspn(arrStud.id, "\n")] = '\0';
                            printf("Enter name: ");
                            fgets(arrStud.name, sizeof(arrStud.name), stdin);
                            arrStud.name[strcspn(arrStud.name, "\n")] = '\0';
                            printf("Enter course: ");
                            fgets(arrStud.course, sizeof(arrStud.course), stdin);
                            arrStud.course[strcspn(arrStud.course, "\n")] = '\0';
                            printf("Enter year: ");
                            scanf("%d", &arrStud.year);
                            while(getchar() != '\n'); 

                            arrayInsertLast(&arrList, arrStud);
                            break;
                        }
                        case 3: {
                            printf("\nEnter id: ");
                            fgets(arrStud.id, sizeof(arrStud.id), stdin);
                            arrStud.id[strcspn(arrStud.id, "\n")] = '\0';
                            printf("Enter name: ");
                            fgets(arrStud.name, sizeof(arrStud.name), stdin);
                            arrStud.name[strcspn(arrStud.name, "\n")] = '\0';
                            printf("Enter course: ");
                            fgets(arrStud.course, sizeof(arrStud.course), stdin);
                            arrStud.course[strcspn(arrStud.course, "\n")] = '\0';
                            printf("Enter year: ");
                            scanf("%d", &arrStud.year);
                            while(getchar() != '\n'); 

                            arrayInsertLastUnique(&arrList, arrStud);
                            break;
                        }
                        case 4: {
                            printf("\nEnter id: ");
                            fgets(arrStud.id, sizeof(arrStud.id), stdin);
                            arrStud.id[strcspn(arrStud.id, "\n")] = '\0';
                            printf("Enter name: ");
                            fgets(arrStud.name, sizeof(arrStud.name), stdin);
                            arrStud.name[strcspn(arrStud.name, "\n")] = '\0';
                            printf("Enter course: ");
                            fgets(arrStud.course, sizeof(arrStud.course), stdin);
                            arrStud.course[strcspn(arrStud.course, "\n")] = '\0';
                            printf("Enter year: ");
                            scanf("%d", &arrStud.year);
                            while(getchar() != '\n'); 

                            printf("Enter position: ");
                            scanf("%d", &pos);
                            while(getchar() != '\n'); 

                            arrayInsertAtPosition(&arrList, arrStud, pos);
                            break;
                        }
                        case 5: {
                            printf("\nEnter id: ");
                            fgets(id, sizeof(id), stdin);
                            id[strcspn(id, "\n")] = '\0';
                            arrStud = arrayDeleteElem(&arrList, id);

                            printf("\nStudent ID#%s name: %s, course: %s, year %d", arrStud.id, arrStud.name, arrStud.course, arrStud.year);
                            break;
                        }
                        case 6: {
                            printf("\nEnter course: ");
                            fgets(course, sizeof(course), stdin);
                            course[strcspn(course, "\n")] = '\0';
                            arrList = arraySeparateCourse(&arrList, course);
                            int i;

                            for (i = 0; i < arrList.size; i++){
                                printf("Student id#%s, name %s, course: %s, year: %d\n", arrList.data[i].id, arrList.data[i].name, arrList.data[i].course, arrList.data[i].year);
                            }
                            break;
                        }
                        case 7: {
                            arrDisplay(arrList);
                            break;
                        }
                        case 8: { 
                            printf("Exited from array option.\n");
                            break;
                        }
                        default: {
                            printf("Invalid Input\n");
                            break;
                        }
                    }
                } while(subchoice != 8);

                break;
            }
            case 2: {
                do {
                    printf("\nSelected Linked-List\n");
                    printf("\nSubhoice:\n");
                    printf("\n[1]Insert First [2]Insert Last [3]Insert Last Unique\n");
                    printf("[4]Insert at Position [5]Delete Elem [6]Separate Course\n");
                    printf("[7]Display [8]Exit\n");

                    printf("Enter subchoice: ");
                    scanf("%d", &subchoice);
                    while(getchar() != '\n');

                    switch (subchoice){
                        case 1: { 
                            printf("Enter id: ");
                            fgets(studList.id, sizeof(studList.id), stdin);
                            studList.id[strcspn(studList.id, "\n")] = '\0';
                            printf("Enter name: ");
                            fgets(studList.name, sizeof(studList.name), stdin);
                            studList.name[strcspn(studList.name, "\n")] = '\0';
                            printf("Enter course: ");
                            fgets(studList.course, sizeof(studList.course), stdin);
                            studList.course[strcspn(studList.course, "\n")] = '\0';
                            printf("Enter year: "); 
                            scanf("%d", &studList.year);

                            linkInsertFirst(&L, studList);
                            break;
                        }
                        case 2: { 
                            printf("Enter id: ");
                            fgets(studList.id, sizeof(studList.id), stdin);
                            studList.id[strcspn(studList.id, "\n")] = '\0';
                            printf("Enter name: ");
                            fgets(studList.name, sizeof(studList.name), stdin);
                            studList.name[strcspn(studList.name, "\n")] = '\0';
                            printf("Enter course: ");
                            fgets(studList.course, sizeof(studList.course), stdin);
                            studList.course[strcspn(studList.course, "\n")] = '\0';
                            printf("Enter year: "); 
                            scanf("%d", &studList.year);

                            linkInsertLast(&L, studList);
                            break;
                        }
                        case 3: { 
                            printf("Enter id: ");
                            fgets(studList.id, sizeof(studList.id), stdin);
                            studList.id[strcspn(studList.id, "\n")] = '\0';
                            printf("Enter name: ");
                            fgets(studList.name, sizeof(studList.name), stdin);
                            studList.name[strcspn(studList.name, "\n")] = '\0';
                            printf("Enter course: ");
                            fgets(studList.course, sizeof(studList.course), stdin);
                            studList.course[strcspn(studList.course, "\n")] = '\0';
                            printf("Enter year: "); 
                            scanf("%d", &studList.year);

                            linkInsertLastUnique(&L, studList);

                            break;
                        }
                        case 4: { 
                            printf("Enter id: ");
                            fgets(studList.id, sizeof(studList.id), stdin);
                            studList.id[strcspn(studList.id, "\n")] = '\0';
                            printf("Enter name: ");
                            fgets(studList.name, sizeof(studList.name), stdin);
                            studList.name[strcspn(studList.name, "\n")] = '\0';
                            printf("Enter course: ");
                            fgets(studList.course, sizeof(studList.course), stdin);
                            studList.course[strcspn(studList.course, "\n")] = '\0';
                            printf("Enter year: "); 
                            scanf("%d", &studList.year);

                            printf("Enter position: ");
                            scanf("%d", &pos);
                            linkInsertAtPosition(&L, studList, pos);
                            break;
                        }
                        case 5: { 
                            printf("Enter id: ");
                            fgets(id, sizeof(id), stdin);
                            id[strcspn(id, "\n")] = '\0';

                            studList = linkDeleteElem(&L, id); 
                            printf("Student ID#%s, name: %s, course: %s, year: %d\n", studList.id, studList.name, studList.course, studList.year);
                            break;
                        }
                        case 6: { 
                            printf("Enter course: ");
                            fgets(course, sizeof(course), stdin);
                            course[strcspn(course, "\n")] = '\0';

                            L = linkSeparateCourse(&L, course);
                            temp = L;
                            while(temp != NULL){
                                printf("Student ID#%s, name: %s, course: %s, year: %d", temp->data.id, temp->data.name, temp->data.course, temp->data.year);
                                temp = temp->link;
                            }

                            break;
                        }
                        case 7: { 
                            listDisplay(L);
                            break;
                        }
                        case 8: { 
                            printf("Exited from Linked-List option.");
                            break;
                        }
                        default: { 
                            printf("\nInvalid Input\n");
                            break;
                        }
                    }
                } while(subchoice != 8);

                break;
            }
            case 3: {
                printf("Program exited.");
                break;
            }
            case 4: { 
                printf("\nInvalid Input.");
                break;
            }
        }
    } while (choice != 3);

    return 0;
}