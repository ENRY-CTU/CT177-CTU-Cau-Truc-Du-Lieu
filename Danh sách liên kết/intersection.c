List intersection(List L1, List L2){
    List L;
    makenullList(&L);
    for(Position P = L1->Next; P != NULL; P = P->Next){
        if(member(P->Element, L2)){
            append(P->Element, &L);
        }
    }
    return L;
}
