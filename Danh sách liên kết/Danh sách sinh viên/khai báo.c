typedef struct{
    char ID[10];
    char Name[50];
    float R1, R2, R3;
}Student;
typedef struct Node{
    Student Element;
    struct Node* Next;
}Node;
typedef Node* List;
