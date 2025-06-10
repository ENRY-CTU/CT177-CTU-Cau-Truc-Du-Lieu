void chenCuoi(struct SinhVien s, DanhSach *pL){
    if(pL->n == 40){
        printf("Loi! Danh sach day!");
        return;
    }
	if(pL->n < 40){
		pL->A[pL->n] = s;
		pL->n++;
	}
}