void printPath(int x, Tree T) {
	int found = 0;
	while(T != NULL && !found) {
			printf("%d ", T->Key);
			found = 1;
		if(x < T->Key) {
			T = T->Left;
		} else if(x > T->Key) {
			T = T->Right;
		} else {
			found = 1;
		}
	}
  if(found){
    printf("-> Tim thay");
  }
  else{
    printf("-> Khong tim thay");
  }
}
