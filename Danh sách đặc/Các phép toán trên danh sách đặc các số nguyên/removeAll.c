void removeAll(ElementType x, List *pL){
	Position p;
	while((p = locate(x, *pL)) <= pL->Last){
		deleteList(p, pL);
	}
}