void printOddNumbers(List L){
	for(int i = 0; i < L.Last + 1; i++){
		if(L.Elements[i] % 2 != 0){
			printf("%d ", L.Elements[i]);
		}
	}
}
