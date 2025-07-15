void deleteNode(int x, Tree *T) {
    if (*T == NULL) return;
    if (x < (*T)->Key) {
        deleteNode(x, &((*T)->Left));
    } else if (x > (*T)->Key) {
        deleteNode(x, &((*T)->Right));
    } else {
        Tree temp = *T;
        if ((*T)->Left == NULL) {
            *T = (*T)->Right;
        } else if ((*T)->Right == NULL) {
            *T = (*T)->Left;
        } else {
            Tree next = (*T)->Right;
            while (next->Left != NULL) {
                next = next->Left;
            }
            (*T)->Key = next->Key;
            deleteNode(next->Key, &((*T)->Right));
        }
        free(temp);
    }
}
