void deleteList(Position p, List *pL){
	if((p > pL->Last) || (p < 1)){
		printf("Vi tri khong hop le\n");
	}
	else if(p == pL->Last){
		printf("Danh sach day\n");
	}
	else{
	Position i;
	for(i = p; i < pL->Last; i++){
			pL->Elements[i - 1] = pL->Elements[i];
		}
		pL->Last--;
	}
}