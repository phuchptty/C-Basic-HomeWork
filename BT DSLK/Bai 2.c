#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Basic Struct */

typedef struct SinhVien {
    int maSV;
    char hoTen[100];
    char gioiTinh[5];
    float dtb;
} SinhVien;

typedef struct Node {
    SinhVien data;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
} List;

void InitSLL(List *list) {
    list->head = list->tail = NULL;
}

Node *createNode(SinhVien *SV) {
    Node *p = (Node *)malloc(sizeof(Node));

    if (p == NULL) {
        return NULL;
    }

    p->data = *SV;
    p->next = NULL;

    return p;
}

void addTail(List *list, Node *p) {
    if (list->head == NULL) {
        list->head = list->tail = p;
    } else {
        list->tail->next = p;
        list -> tail = p;
    }
}

/* Mysc */

void showMenu() {
    printf("\t\tMENU\n");
    printf("\t1. Tao danh sach sinh vien\n");
    printf("\t2. Hien thi danh sach sinh vien\n");
    printf("\t3. Them sinh vien theo ten\n");
    printf("\t4. Xoa mot sinh vien\n");
    printf("\t5. Ket thuc\n");
    printf("\t\tVui long chon: ");
}

void createNewSLL() {
    char choose;

    do {

        


        printf("\tNhap tiep? (y/n) \n");
        fflush(stdin);
        choose = getchar();
    } while (choose != "n");
}

void main() {
    int choose;

    while (1) {
        showMenu();
        scanf("%d", &choose);

        switch (choose) {
        case 1:
            system("cls");
            printf("\tBan da chon tao danh sach sinh vien\n");
            createNewSLL();
            printf("\tBam phim bat ky de tro ve menu");
            getch();
            break;

        default:
            break;
        }
    }
}