List unionSet(List L1, List L2){
    List L;
    makenullList(&L);
    for(Position p = L1->Next; p != NULL; p = p->Next){
        append(p->Element, &L);
    }
    for(Position q = L2->Next; q != NULL; q = q->Next)
        if(!member(q->Element, L)){
            append(q->Element, &L);
        }
    return L;
}
