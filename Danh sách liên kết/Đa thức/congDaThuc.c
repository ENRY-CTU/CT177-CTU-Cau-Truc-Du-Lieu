DaThuc congDaThuc(DaThuc d1, DaThuc d2){
    DaThuc kq = khoitao();
    Position p1 = d1->Next;
    Position p2 = d2->Next;
    while(p1 != NULL){
        
        chenDonThuc(p1->e, &kq);
        p1 = p1->Next;
    }
    while(p2 != NULL){
        
        chenDonThuc(p2->e, &kq);
        p2 = p2->Next;
    }
    return kq;
}
