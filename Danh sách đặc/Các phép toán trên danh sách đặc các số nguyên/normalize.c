void normalize(List *pL){
	int p = 1;
	while(p != pL->Last + 1){
		int q = p + 1;
		while(q != pL-> Last + 1){
			if(pL->Elements[p - 1] == pL->Elements[q - 1]){
				deleteList(q, pL);
			}
			else{
				q++;
			}
		}
		p++;
	}
}