void sort(List *pL){
	for(int p = 1; p <= pL->Last; p++){
		for(int q = 0; q < pL->Last - p; q++){
			if(pL->Elements[q] > pL->Elements[q + 1]){
				ElementType temp = pL->Elements[q];
				pL->Elements[q] = pL->Elements[q + 1];
				pL->Elements[q + 1] = temp;
			}
		}
	}
}