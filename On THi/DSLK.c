#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct {
    char hoTen[100];
    char gioiTinh[5];
    float dtb;
} SinhVien;

typedef struct Node {
    SinhVien data;
    struct Node *next;
} Node;

Node* list = NULL;

SinhVien inputData(){
    SinhVien SV;

    printf("\t\tHo Ten: ");
    fflush(stdin);
    gets(SV.hoTen);

    printf("\t\tGioi Tinh: ");
    fflush(stdin);
    gets(SV.gioiTinh);

    printf("\t\tDiem TB: ");
    scanf("%f", &SV.dtb);

    return SV;
}

Node* createNode(){

    Node* p = (Node*) malloc(sizeof(Node));

    p -> data = inputData();

    p -> next = NULL;

    return p;
}

Node* checkExsist(char name[]){

    Node *p;

    for (p = list; p != NULL; p = p -> next){
        if (strcmp(p -> data.hoTen, name) == 0){
            return p;
        }
    }

    return NULL;
}

void createFirstNode(){
    Node *p = createNode();
    list = p;
}

void addNode(){
    if (list == NULL){
        createFirstNode();
    } else {

        Node *p = createNode();

        //Tim vi tri cuoi
        Node *tail;
        for (tail = list; tail -> next != NULL; tail = tail -> next);

        tail -> next = p;

    }
}

void createSVList(){
    for (int i = 1;;i++)
	{
		printf("\n\tNhap sinh vien thu %d\n",i);

		addNode();

		printf("\tNhap tiep? (y/n) \n");
		fflush(stdin);
		char c = getch();
		if (c=='n'||c=='N')
			break;
	}

}

void menu(){

    printf("\n\n\t%40s\n", "========================================");
    printf("\t|\t%20s           |\n", "1. Tao DS Sinh Vien");
    printf("\t|\t%17s          |\n", "2. Hien Thi Danh Sach");
    printf("\t|\t%19s            |\n", "3. Xoa Sinh Vien");
    printf("\t%40s\n", "========================================");
}

void showList(){
    printf("\n\t%3s | %-20s | %9s | %7s \n", "STT", "Ho Ten", "Gioi Tinh", "Diem TB");

    int i;
    Node *p;

    for (p = list, i=1; p != NULL; p = p -> next ){
        printf("\t%3d | %-20s | %9s | %6.2f \n", i++ , p -> data.hoTen,p -> data.gioiTinh, p -> data.dtb );
    }

}

void deleteItemFromList(){

    if (list == NULL){
        printf("\n\tDanh Sach SV Trong");
    } else {
        char name[100];

        printf("\n\tNhap Ten Nguoi Ban Muon Xoa: ");
        fflush(stdin);
        gets(name);

        Node* p = checkExsist(name);

        if (p == NULL){
            printf("\n\tTen Nguoi Khong Ton Tai");
        }else{
            if (p == list){
                // Dau danh sach
                list = p -> next;
                free(p);
            } else {

                // Tim vi tri truoc can xoa
                Node *tmp;
                for (tmp = list; tmp -> next != p; tmp = tmp -> next);

                tmp -> next = p -> next;
                free(p);
            }
        }
    }
}

void main(){

    int choose;

    while(1){

        menu();

        printf("\n\tChoose Action ? ");
        scanf("%d", &choose);

        switch(choose){

        case 1:
            createSVList();
            break;

        case 2:
            if (list==NULL){

                printf("\tVui long nhap danh sach sinh vien truoc\n");

            } else {

                showList();

            }
            printf("\n\tBam phim bat ky de tro ve menu");
            getch();
            break;
        case 3:
            deleteItemFromList();
            printf("\n\tBam phim bat ky de tro ve menu");
            getch();
            break;
        }
    }

}
