#ifndef LINK_H
#define LINK_H

typedef struct {
    char id[10];
    char name[50];
    char course[20];
    int year;
} studentList;

typedef struct node{
    studentList data;
    struct node *link;
} *LinkList;

void linkInsertFirst(LinkList *list, studentList s);
void linkInsertLast(LinkList *list, studentList s);
void linkInsertLastUnique(LinkList *list, studentList s);
void linkInsertAtPosition(LinkList *list, studentList s, int pos);
studentList linkDeleteElem(LinkList *list, char id[]);
LinkList linkSeparateCourse(LinkList *list, char course[]);
void listDisplay(LinkList list);

#endif


