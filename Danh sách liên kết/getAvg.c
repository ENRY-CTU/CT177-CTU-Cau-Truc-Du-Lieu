float getAVG(List L){
    if(L->Next == NULL) return -10000;
    float S = 0;
    int count = 0;
    for(Position P = *L; P->Next != NULL; P = P->Next){
        S+= P->Next->Element;
        count++;
    }
    return S / count;
}
