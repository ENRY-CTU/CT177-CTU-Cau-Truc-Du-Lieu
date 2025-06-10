#include <stdio.h>
#include "AListLib.c"
int member(Position x, List L){
	for(int i = 0; i < L.Last; i++){
		if(L.Elements[i] == x){
			return 1;
		}
	}
	return 0;
}
void insertSet(ElementType x, List *pL){
	if(!member(x, *pL)){
		pL->Elements[pL->Last] = x;
		pL->Last++; 
	}
}
void nhapDS(List *pL){
	int i,n;
	makenullList(pL);
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &pL->Elements[i]);
		insertSet(pL->Elements[i], pL);
	}
	
}
void inDS(List L){
	for(int i = 0; i < L.Last; i++){
		printf("%d ", L.Elements[i]);
	}
	printf("\n");
}
void intersection(List L1, List L2, List *L){
	makenullList(L);
	for(int i = 0; i < L1.Last; i++){
		if(member(L1.Elements[i], L2)){
			insertSet(L1.Elements[i], L);
		}
	}
}
int main(){
	List L1, L2, L;
	nhapDS(&L1);
	inDS(L1);
	nhapDS(&L2);
	inDS(L2);
	intersection(L1, L2 ,&L);
	inDS(L);
	return 0;
}