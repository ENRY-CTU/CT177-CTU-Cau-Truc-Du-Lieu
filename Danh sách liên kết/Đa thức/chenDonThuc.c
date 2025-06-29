void chenDonThuc(DonThuc s, DaThuc *L){
    Position p = *L;
    Position q = NULL;
    while((p->Next != NULL) && p->Next->e.bac > s.bac){
        q = p;
        p = p->Next;
    }
    if(p->Next != NULL && p->Next->e.bac == s.bac){
        p->Next->e.he_so += s.he_so;
        return; 
    } else {
        Position t = (Position)malloc(sizeof(struct Node));
        t->e = s;
        t->Next = p->Next;
        p->Next = t;
    }
    if(q == NULL){
        *L = p;
    } else {
        q->Next = p;
    }
}
