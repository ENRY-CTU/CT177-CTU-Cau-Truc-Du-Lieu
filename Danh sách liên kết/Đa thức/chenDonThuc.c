#Cách 1
//----------------------------------------------------------
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
//----------------------------------------------------------
#Cách 2
void chenDonThuc(DonThuc s, DaThuc *L){
    Position p = (*L);
    int found = 0;
    while(p->Next != NULL && !found){
        if(p->Next->e.bac > s.bac) p = p->Next;
        else{
            if(p->Next->e.bac == s.bac){
                p->Next->e.he_so += s.he_so;
                found = 1;
            }
            else{
                found = 1;
                struct Node* t = (struct Node*)malloc(sizeof(struct Node));
                t->e = s;
                t->Next = p->Next;
                p->Next = t;
            }
        }
    }
    if(found == 0){
        Position t = (Position)malloc(sizeof(struct Node));
        t->e = s;
        t->Next = NULL;
        p->Next = t;
    }
}
//----------------------------------------------------------

