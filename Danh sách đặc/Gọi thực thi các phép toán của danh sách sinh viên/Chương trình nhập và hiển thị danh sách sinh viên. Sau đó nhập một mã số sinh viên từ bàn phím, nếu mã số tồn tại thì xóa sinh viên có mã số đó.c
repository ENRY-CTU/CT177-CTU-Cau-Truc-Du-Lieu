#include <string.h>
#include <stdio.h>
typedef struct{
    char MSSV[10];
    char HoTen[50];
    float DiemLT, DiemTH1, DiemTH2;
}SinhVien;
typedef struct{
    SinhVien A[40];
    int n;
}DanhSach;
DanhSach dsRong(){
    DanhSach L;
    L.n = 0;
    return L;
}
int tim(char x[10], DanhSach L){
    for(int i = 0; i < L.n; i++){
        if(strcmp(L.A[i].MSSV, x) == 0){
            return i + 1;
        }
    }
    return L.n + 1;
}
void chenCuoi(SinhVien s, DanhSach *L){
    if(L->n < 40){
        L->A[L->n] = s;
        L->n++;
    }
    else{
        return;
    }
}
void xoa(DanhSach *L, SinhVien s){
    int pos = tim(s.MSSV, *L);
    if(pos != L->n + 1){ 
        int index = pos - 1; 
        for(int i = index; i < L->n - 1; i++){
            L->A[i] = L->A[i + 1];
        }
        L->n--;
    } else {
        printf("Khong tim thay sinh vien %s\n", s.MSSV);
    }
}

DanhSach nhap(){
    DanhSach L = dsRong();
    SinhVien sv;
    int n;
    scanf("%d ", &n);
    for(int i = 0; i < n; i++){
        fgets(sv.MSSV, 10, stdin);
        sv.MSSV[strlen(sv.MSSV) - 1] = '\0';
        fgets(sv.HoTen, 50, stdin);
        sv.HoTen[strlen(sv.HoTen) - 1] = '\0';
        scanf("%f%f%f ", &sv.DiemLT, &sv.DiemTH1, &sv.DiemTH2);
        if(tim(sv.MSSV, L) == L.n + 1){
            chenCuoi(sv, &L);
        }
    }
    return L;
}
void hienthi(DanhSach L){
    for(int i = 0; i < L.n; i++){
        printf("%s - %s - %.2f - %.2f - %.2f\n", L.A[i].MSSV, L.A[i].HoTen, L.A[i].DiemLT, L.A[i].DiemTH1, L.A[i].DiemTH2);
    }
}
int main(){
    DanhSach L = dsRong();
    L = nhap();
    hienthi(L);
    char mssv[10];
    fgets(mssv, sizeof(mssv), stdin);
    mssv[strcspn(mssv, "\n")] = '\0';
    int pos = tim(mssv, L);
    if(pos != L.n + 1){
        printf("Tim thay sinh vien %s. Thong tin sinh vien:\n", mssv);
        printf("%s - %s - %.2f - %.2f - %.2f\n", L.A[pos -1].MSSV, L.A[pos -1].HoTen,
        L.A[pos -1].DiemLT, L.A[pos -1].DiemTH1, L.A[pos -1].DiemTH2);
        xoa(&L, L.A[pos - 1]);
    } 
        else {
        printf("Khong tim thay sinh vien %s\n", mssv);
    }
return 0;
}
