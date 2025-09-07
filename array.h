#ifndef ARRAY_H
#define ARRAY_H

#define MAX 100

typedef struct {
    char id[10];
    char name[50];
    char course[20];
    int year;
} Student;

typedef struct {
    Student data[MAX];
    int size;
} ArrayList;

void arrayInsertFirst(ArrayList *list, Student s);
void arrayInsertLast(ArrayList *list, Student s);
void arrayInsertLastUnique(ArrayList *list, Student s);
void arrayInsertAtPosition(ArrayList *list, Student s, int pos);
Student arrayDeleteElem(ArrayList *list, char id[]);
ArrayList arraySeparateCourse(ArrayList *list, char course[]);
void arrDisplay(ArrayList list);

#endif
