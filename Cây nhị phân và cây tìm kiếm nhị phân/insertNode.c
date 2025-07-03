int member(int x, Tree T) {
    if (T == NULL) return 0;
    if (T->Key == x) return 1;
    if (x < T->Key) return member(x, T->Left);
    else return member(x, T->Right);
}
void insertNode(int x, Tree *T){
    if (*T == NULL) {
        *T = (Tree)malloc(sizeof(struct Node));
        (*T)->Key = x;
        (*T)->Left = (*T)->Right = NULL;
    if(!member(x, *T)) {
        return;
    }
    } else if (x < (*T)->Key) {
        insertNode(x, &((*T)->Left));
    } else if (x > (*T)->Key) {
        insertNode(x, &((*T)->Right));
    }
}
