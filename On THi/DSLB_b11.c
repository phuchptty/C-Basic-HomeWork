#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

typedef struct {
    char hoTen[100];
    int tuoi;
    float dtb;
} SinhVien;

typedef struct node {
    SinhVien data;
    struct node *next;
} node;

node *list = NULL;

SinhVien nhapDuLieu(){

    SinhVien SV;

    printf("\t\tHo Ten: ");
    fflush(stdin);
    gets(SV.hoTen);

    printf("\t\tTuoi: ");
    scanf("%d", &SV.tuoi);

    printf("\t\tDiem TB: ");
    scanf("%f", &SV.dtb);

    return SV;
}

node *taoNode(){

        // B! cap phat bo nho
        node *p = (node *) malloc(sizeof(node));

        p -> data = nhapDuLieu();

        p -> next = NULL;

        return p;
}

void taoNodeDau(){
    node *p = taoNode();
    list = p;
}

void themNodeCuoi(){

    if (list == NULL){
        taoNodeDau();
    } else {

        node *p = taoNode();
        node *tmp;

        for (tmp = list; tmp -> next != NULL; tmp = tmp -> next);

        tmp -> next = p;
    }

}

void xoaDanhSach(){
    node *p;
    for (p = list; list != NULL; ){
        list = list -> next;
        free(p);
        p = list;
    }
}

void taoDanhSach(){
    char c;
    int i =1;

    xoaDanhSach();

    do {
        printf("\n\tNhap Sinh Vien Thu %d \n", i++);
        themNodeCuoi();

        printf("\tNhap tiep ? y/n \n");
        fflush(stdin);
        c = getch();
    } while (c != 'n' );
}

node *laSinhVien(char ten[]){
    node *p;

    for (p = list; p != NULL; p = p -> next){
        if (strcmp(p -> data.hoTen, ten) == 0){
            return p;
        }
    }

    return NULL;
}

void chenSinhVien(){

    char ten[100];

    printf("\n\tNhap Ten Ban Muon Chen Sau: ");
    fflush(stdin);
    gets(ten);

    if (laSinhVien(ten) == NULL){
        printf("\n\tSinh vien co ten %s hong ton tai ", ten);
    } else {
        node *sv = laSinhVien(ten);

        node *p = taoNode();

        p -> next = sv -> next;
        sv -> next = p;

//        if (sv == list){
//            p -> next = list;
//            list = p;
//        } else {
//            node *tmp;
//            for (tmp = list; tmp -> next != sv; tmp = tmp -> next);
//
//            p -> next = tmp -> next;
//            tmp -> next = p;
//        }

    }
}


void xoaSinhVien(){

    char ten[100];

    printf("\n\tNhap Ten Ban Muon Xoa: ");
    fflush(stdin);
    gets(ten);

    if (laSinhVien(ten) == NULL){
        printf("\n\tSinh vien co ten %s hong ton tai ", ten);
    } else {

        node *p = laSinhVien(ten);

        if (p == list){
            list = p -> next;
            free(p);
        } else {
            node *tmp;
            for (tmp = list; tmp -> next != p; tmp = tmp -> next);

            tmp -> next = p -> next;
            free(p);
        }
    }
}

void suaSinhVien(){

    char ten[100];

    printf("\n\tNhap Ten Ban Muon Sua: ");
    fflush(stdin);
    gets(ten);

    if (laSinhVien(ten) == NULL){
        printf("\n\tSinh vien co ten %s hong ton tai ", ten);
    } else {

        node *p = laSinhVien(ten);

        p -> data = nhapDuLieu();
    }
}

void sapXepTheoTen(){

    if (list == NULL || list -> next == NULL){
        printf("\n\tDanh sach rong !!!");
    } else {

        node *i,*j;

        for (i = list; i -> next != NULL; i = i -> next){
            for (j = i -> next; j != NULL; j = j -> next){
                if (strcmp(i -> data.hoTen, j -> data.hoTen) == 1){
                    SinhVien tmp = i -> data;
                    i -> data = j -> data;
                    j -> data = tmp;
                }
            }
        }
    }
}

void menu(){

    printf("\n\n\t%40s\n", "========================================");
    printf("\t|\t%20s           |\n", "1. Tao DS Sinh Vien");
    printf("\t|\t%17s          |\n", "2. Hien Thi Danh Sach");
    printf("\t|\t%17s              |\n", "3. Chen Sinh Vien");
    printf("\t|\t%17s              |\n", "4. Xoa Sinh Vien");
    printf("\t|\t%19s           |\n", "5. Sua Mot Sinh Vien");
    printf("\t|\t%19s            |\n", "6. Sap Xep Theo Ten");
    printf("\t|\t%17s              |\n", "7. Ket Thuc");
    printf("\t%40s\n", "========================================");

}

void hienThiDanhSach(){

    printf("\n\t%5s | %-20s | %5s | %8s\n", "STT", "Ho Ten", "Tuoi", "Diem TB");

    int i = 1;
    node *p;

    for (p = list; p != NULL; p = p -> next ){
        printf("\t%5d | %-20s | %5d | %6.2f\n", i++ , p -> data.hoTen, p -> data.tuoi, p -> data.dtb );
    }
}

void main(){
    int ch;

    while (1) {
        system("cls");
        menu();

        printf("\n\tNhap So: ");
        scanf("%d", &ch);

        switch (ch){
        case 1:
            system("cls");
            taoDanhSach();
            break;


        case 2:
            system("cls");
            hienThiDanhSach();
            break;

        case 3:
            system("cls");
            chenSinhVien();
            break;

        case 4:
            system("cls");
            xoaSinhVien();
            break;

        case 5:
            system("cls");
            suaSinhVien();
            break;

        case 6:
            system("cls");
            sapXepTheoTen();
            break;

        case 7:
            system("cls");
            printf("\n\tBye Bye Bye Bye");
            exit(0);
        }

        printf("\n\tBam phim bat ky de ve menu");
        getch();
    }
}
