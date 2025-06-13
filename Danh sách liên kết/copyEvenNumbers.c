void copyEvenNumbers(List L1, List *L){
    makenullList(L);
    for(Position p = L1->Next; p!= NULL; p = p->Next){
        if(p->Element % 2 == 0){
            append(p->Element, L);
        }
    }
}
