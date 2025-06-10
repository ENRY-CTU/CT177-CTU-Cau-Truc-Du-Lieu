#include "AListLib.c"
#include <stdio.h>
void nhapDS(List *L){
    makenullList(L);
    int i,x,n;
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
void xoaCuoi(ElementType x, List *L){
	Position found = -1;
	for(Position i = L->Last; i >= 1; i--){
		if(L->Elements[i - 1] == x){
			found = i;
			break;
		}
	}
	if(found != -1){
		deleteList(found, L);
	}
	else{
		printf("Khong co phan tu x\n");
	}
}
int main(){
	List L;
	nhapDS(&L);
	inDS(L);
	int x; scanf("%d", &x);
	xoaCuoi(x,&L);
	inDS(L);
	return 0;
}