Position locate1(ElementType x, List L){
	Position p = 1;
	int KQ = L.Last + 1;
	while(p != (L.Last + 1)){
		if(L.Elements[p - 1] == x){
			KQ = p;
		}
		p++;
	}
	return KQ;
}