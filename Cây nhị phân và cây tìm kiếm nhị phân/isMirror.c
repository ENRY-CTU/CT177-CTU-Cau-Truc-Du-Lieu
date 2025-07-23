int isMirrors(Tree T1, Tree T2) {
    if (T1 == NULL && T2 == NULL) return 1;
    if (T1 == NULL || T2 == NULL) return 0;
    return (T1->Data == T2->Data) &&
           isMirrors(T1->Left, T2->Right) &&
           isMirrors(T1->Right, T2->Left);
}
