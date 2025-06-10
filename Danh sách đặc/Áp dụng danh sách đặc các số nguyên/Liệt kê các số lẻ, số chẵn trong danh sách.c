//#include "AListLib.c"
#include <stdio.h>
#define Maxlength 100
typedef int Position;
typedef int ElementType;
typedef struct{
	Position Last;
	ElementType Elements[Maxlength];
}List;
void makenullList(List *L){
	L->Last = 0;
}
Position endList(List L){
	return L.Last + 1;
}
void insertList(ElementType x, Position p, List *L){
	int i = 0;
	if(L->Last == Maxlength){
		printf("danh sach day\n");
	}
	else if((p < 1) || (p > L->Last + 2)){
		printf("vi tri khong hop le\n");
	}
	else{
		for(i = L->Last; i >= p; i--){
			L->Elements[i] = L->Elements[i - 1];
		}
		L->Elements[p - 1] = x;
		L->Last++;
	}
}
void nhapDS(List *L){
    makenullList(L);
    ElementType x;
    int n,i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        insertList(x, endList(*L), L);
    }
}
void inDS(List L){
    for(int i = 0; i < L.Last; i++){
        printf("%d ", L.Elements[i]);
    }
    printf("\n");
}
void inSoLe(List L){
    for(int i = 0; i < L.Last + 1; i++){
        if(L.Elements[i] % 2 != 0){
            printf("%d ", L.Elements[i]);
        }
    }
    printf("\n");
}
void saochepSoChan(List L1, List *L){
    makenullList(L);
    for(int i = 0; i < L1.Last; i++){
        if(L1.Elements[i] % 2 == 0){
            insertList(L1.Elements[i], endList(*L), L);
        }
    }
}
int main(){
    List L1, L2;
    makenullList(&L1); 
	makenullList(&L2);
    nhapDS(&L1);
    inDS(L1);
    inSoLe(L1);
    saochepSoChan(L1,&L2);
    inDS(L2);
    return 0;
}