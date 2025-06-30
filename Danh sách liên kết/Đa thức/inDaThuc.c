//Cách 1
//---------------------------------------------------//
void inDaThuc(DaThuc d){
    int first = 1;
    Position p = d->Next;
    while(p != NULL){
        if(!first && p->e.he_so > 0) {
            printf("+ ");
        }
        if(p->e.he_so != 0) {
            printf("%.3fX^%d ", p->e.he_so, p->e.bac);
            first = 0;
        }
        p = p->Next;
    }
}
//---------------------------------------------------//
//Cách 2
//---------------------------------------------------//
void inDaThuc(DaThuc d){
    Position p = d->Next;
    printf("%.3fX^%d", p->e.he_so, p->e.bac);
    p = p->Next;
    while(p != NULL){
        printf(" + %.3fX^%d", p->e.he_so, p->e.bac);
        p = p->Next;
    }
    printf("\n");
}
//---------------------------------------------------//
