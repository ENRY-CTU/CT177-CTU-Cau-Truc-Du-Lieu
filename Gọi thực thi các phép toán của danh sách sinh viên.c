#include <string.h>
#include <stdio.h>
struct SinhVien{
    char MSSV[10];
    char HoTen[50];
    float DiemLT, DiemTH1, DiemTH2;
};
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
void chenCuoi(struct SinhVien s, DanhSach *L){
    if(L->n < 40){
        L->A[L->n] = s;
        L->n++;
    }
    else{
        return;
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
        scanf("%f%f%f", &sv.DiemLT, &sv.DiemTH1, &sv.DiemTH2);
        getchar();
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
void lietkeDat(DanhSach L){
    printf("Sinh vien DAT\n");
    for(int i = 0; i < L.n; i++){
        float tong = 0;
        tong = L.A[i].DiemLT + L.A[i].DiemTH1 + L.A[i].DiemTH2;
        if(tong >= 4){
            printf("%s - %s - %.2f - %.2f - %.2f\n", L.A[i].MSSV, L.A[i].HoTen, L.A[i].DiemLT, L.A[i].DiemTH1, L.A[i].DiemTH2);
        }
    }
}
int main(){
    DanhSach L = dsRong();
    L = nhap();
    hienthi(L);
    lietkeDat(L);
    return 0;
}
