DaThuc tinhDaoHam(DaThuc d){
    DaThuc kq = khoitao();
    Position p = d->Next;
    while(p != NULL){
        if(p->e.bac > 0) {
            DonThuc s;
            s.he_so = p->e.he_so * p->e.bac;
            s.bac = p->e.bac - 1;
            chenDonThuc(s, &kq);
        }
        p = p->Next;
    }
    return kq;
}
