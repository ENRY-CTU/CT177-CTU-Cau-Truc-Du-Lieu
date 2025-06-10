DanhSach chepKhongDat(DanhSach L){
    DanhSach L1;
    L1 = dsRong();
    int i;
    for(i=0; i<L.n; i++){
        float tong = 0;
        tong = L.A[i].DiemLT + L.A[i].DiemTH1 + L.A[i].DiemTH2;
        if(tong < 4.0){
            chenCuoi(L.A[i], &L1);
        }
    }
    return L1;
}