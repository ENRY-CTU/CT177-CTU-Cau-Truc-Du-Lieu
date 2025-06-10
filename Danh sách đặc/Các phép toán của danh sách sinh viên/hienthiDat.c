void hienthiDat(DanhSach L){
	for(int i = 0; i < L.n; i++){
		float tongdiem = L.A[i].DiemLT + L.A[i].DiemTH1 + L.A[i].DiemTH2;
			if(tongdiem >= 4.0){
				printf("%s - %s - %.2f - %.2f - %.2f - %.2f\n", L.A[i].MSSV, L.A[i].HoTen, L.A[i].DiemLT , L.A[i].DiemTH1 , L.A[i].DiemTH2,  tongdiem);
		}
	}
}