void printList(List L){
	int p = 1;
	while(p != L.Last + 1){
		printf("%d ", L.Elements[p - 1]);
		p++;
	}
}