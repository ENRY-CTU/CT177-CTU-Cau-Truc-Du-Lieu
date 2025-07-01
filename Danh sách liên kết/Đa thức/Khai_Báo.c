//Khai báo đơn thức
typedef struct {
    double he_so;
    int bac;
} DonThuc;
//Khai báo đa thức
struct Node{
    DonThuc e;
    struct Node* Next;
};
typedef struct Node* Position;
typedef Position DaThuc;
