void insertNode(int x, Tree *T){
    if (*T == NULL) {
        *T = (Tree)malloc(sizeof(struct Node));
        (*T)->Key = x;
        (*T)->Left = (*T)->Right = NULL;
    } else if (x < (*T)->Key) {
        insertNode(x, &((*T)->Left));
    } else if (x > (*T)->Key) {
        insertNode(x, &((*T)->Right));
    }
}
