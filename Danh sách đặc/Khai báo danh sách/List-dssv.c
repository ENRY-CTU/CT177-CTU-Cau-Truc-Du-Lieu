#define MAX 40
typedef struct{
	char MSSV[10];
	char Hoten[50];
	float LT, TH1, TH2;
}SinhVien;
typedef struct{
	SinhVien A[MAX];
	int n;
}List;