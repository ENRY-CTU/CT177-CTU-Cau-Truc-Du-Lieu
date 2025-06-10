DanhSach nhap(){
	int N, i;
	DanhSach L;
	L= dsRong();
	struct SinhVien X;
	scanf("%d ", &N);
	for(i=1; i<=N; i++){
		fgets(X.MSSV, 10, stdin);
		X.MSSV[strlen(X.MSSV)-1]='\0';
		fgets(X.HoTen, 50, stdin);
		X.HoTen[strlen(X.HoTen)-1]='\0';
		scanf("%f%f%f ", &X.DiemLT, &X.DiemTH1, &X.DiemTH2);
		if (tim(X.MSSV,L)==L.n+1){chenCuoi(X, &L);
		}
	}
	return L;
}