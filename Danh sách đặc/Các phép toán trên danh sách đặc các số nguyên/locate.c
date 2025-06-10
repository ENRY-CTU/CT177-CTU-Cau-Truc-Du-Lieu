Position locate(ElementType x, List L){
	Position p = 1;
	int found = 0;
	while((p != L.Last+1) && (found == 0)){
		if(L.Elements[p - 1] == x){
			found = 1;
		}
		else{
			p++;
		}
	}
	return p;
}