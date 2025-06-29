DaThuc nhanDaThuc(DaThuc d1, DaThuc d2){
    DaThuc kq = khoitao();
    Position p1 = d1->Next;
    Position p2;
    while(p1 != NULL){
        p2 = d2->Next;
        while(p2 != NULL){
            DonThuc s;
            s.he_so = p1->e.he_so * p2->e.he_so;
            s.bac = p1->e.bac + p2->e.bac;
            chenDonThuc(s, &kq);
            p2 = p2->Next;
        }
        p1 = p1->Next;
    }
    return kq;
}
