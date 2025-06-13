Position locate(ElementType x, List L){
    Position p = L;
    int found = 0;
    while(p->Next != NULL && (!found)){
        if(p->Next->Element == x){
            found = 1;
        }
        else{
            p = p->Next;
        }
    }
    return p;
}
