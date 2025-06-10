void insertList(int x, Position p, List *pL){
	if(pL->Last == Maxlength){
		printf("Danh sach day");
	}
	else if((p > pL->Last+1) || (p < 1)){
		printf("Vi tri khong hop le");
	}
	else{
		Position Q;
		for(Q = pL->Last; Q > p - 1; Q--){
			pL->Elements[Q] = pL->Elements[Q-1];
		}
		pL->Elements[Q] = x;
		pL->Last++;
	}
}