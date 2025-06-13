void printOddNumbers(List L){
    for(Position P = L; P->Next != NULL; P = P->Next){
        if(P->Next->Element % 2 != 0){
            printf("%d ", P->Next->Element);
        }
    }
    printf("\n");
}
