Tree findElement(char x, Tree T) {
    if (T == NULL) return NULL;
    if (T->Data == x) return T;
    Tree leftResult = findElement(x, T->Left);
    if (leftResult != NULL) return leftResult;
    return findElement(x, T->Right);
}
