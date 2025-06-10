void erase(int x, List *pL){
	Position pos = locate(x, *pL);
	if(pos != pL->Last + 1){
		deleteList(pos, pL);
	}
}