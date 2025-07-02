void xoaSinhVien(char x[], DanhSach *pL){
	int p = tim(x, *pL);
	if(p >= 0){
		xoaTai(p, pL);
	}
}
