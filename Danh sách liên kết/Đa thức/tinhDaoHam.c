//CÁCH 1
//----------------------------------------------------------
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
//----------------------------------------------------------
//CÁCH 2
DaThuc tinhDaoHam( DaThuc D)
{
    DaThuc Kq =khoitao();
    Position p=D;
    DonThuc x;
    while (p->Next!= NULL){  
        x.he_so = p->Next->e.he_so * p->Next->e.bac;
        x.bac = p->Next->e.bac-1;
        if (x.he_so!=0){
        chenDonThuc( x, &Kq);
        }
        p=p->Next;
    }
    
    return Kq;
}
//----------------------------------------------------------
