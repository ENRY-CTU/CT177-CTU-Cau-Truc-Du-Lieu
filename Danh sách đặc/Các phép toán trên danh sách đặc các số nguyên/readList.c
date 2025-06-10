void readList(List *pL){
	makenullList(pL);
	int X,n;
	scanf("%d", &n); fflush(stdin);
	for(int i = 1; i <= n; i++){
		scanf("%d", &X);fflush(stdin);
		insertList(X,pL->Last + 1, pL);
	}
}