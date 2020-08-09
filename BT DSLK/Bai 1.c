#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Step 1: Create Struct

typedef struct SV {
    int maSV;
    char hoTen[100];
    char gioiTinh[5];
    float dtb;
} SinhVien;

typedef struct node {
    SinhVien data;
    struct Node *next;
} Node;

typedef struct list {
    Node *head;
    Node *tail;
} List;

// Step 2: Create Single Linked List
void InitSLL(List *list) {

    list->head = list->tail = NULL;
}

// Step 3: Create Node
Node *createNode(SinhVien *SV) {
    Node *p = (Node *)malloc(sizeof(Node));

    if (p == NULL) {
        return NULL;
    }

    p->data = *SV;
    p->next = NULL;

    return p;
}

// Step 4: Add Head

void addHead(List *list, Node *p) {

    if (list->head == NULL) {
        list->head = list->tail = p;
        p->next = NULL;
    } else {
        p->next = list->head;
        list->head = p;
    }
}

void addTail(List *list, Node *p) {
    if (list->head == NULL) {
        list->head = list->tail = p;
    } else {
        list->tail->next = p;
        list -> tail = p;
    }
}

// Step 5: Add data

void insertData(List *list, SinhVien *SV) {

    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    InitSLL(list);

    for (int i = 0; i < n; i++) {

        printf("Nhap sinh vien thu %d: \n", i + 1);

        printf("\tNhap Ma SV: ");
        scanf("%d", &SV->maSV);

        printf("\tNhap Ten: ");
        fflush(stdin);
        gets(SV->hoTen);

        printf("\tNhap Gioi Tinh: ");
        fflush(stdin);
        gets(SV->gioiTinh);

        printf("\tNhap Diem TB: ");
        scanf("%f", &SV->dtb);

        Node *p = createNode(SV);

        addTail(list, p);
    }
}

// Step 6: Output data

void outputData(List *list) {

    printf("\n\n\t\tDANH SACH\n");
    printf("\t%4s | %5s | %-20s | %12s | %6s |\n", "STT", "Ma SV", "Ho ten", "Gioi Tinh", "DiemTB");

    int i;
    Node *p;

    for (p = list->head, i = 1; p != NULL; p = p->next) {
        printf("\t%4d | %5d | %-20s | %12s | %6.2f |\n", i++, p->data.maSV, p->data.hoTen, p->data.gioiTinh, p->data.dtb);
    }
}

// Step 7: Sort ascending by average point

void sortAscAverPoint(List *list) {
    Node *i, *j;

    for (i = list->head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data.dtb > j->data.dtb) {
                SinhVien tmp;
                tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
        }
    }
}

// Step 7: Listed average pass 5

void listedAverP5(List *list) {
    Node *i;

    printf("\n\n\t\tDANH SACH SV DTB >= 5\n");
    printf("\t%5s | %-20s | %12s | %6s |\n", "Ma SV", "Ho ten", "Gioi Tinh", "DiemTB");

    for (i = list -> head; i != NULL; i = i -> next){
        if (i -> data.dtb >= 5){
            printf("\t %5d | %-20s | %12s | %6.2f |\n", i->data.maSV, i->data.hoTen, i->data.gioiTinh, i->data.dtb);
        }
    }
}

//Step 8: Count Male Student

void countMale(List *list){
    Node *i;
    int count =0;

    for (i = list -> head; i != NULL; i = i -> next){
        if (strcmp(i -> data.gioiTinh, "nam") == 0){
            count++;
        }
    }

    printf("\n\n\t\tCO %d NAM", count);
}

void main() {
    List list;
    SinhVien SV;

    insertData(&list, &SV);
    outputData(&list);

    sortAscAverPoint(&list);
    printf("\n\n\t\tDANH SACH SAU KHI SAP XEP: ");
    outputData(&list);

    listedAverP5(&list);

    countMale(&list);

    getch();
}