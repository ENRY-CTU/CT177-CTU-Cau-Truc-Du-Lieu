char findMax(Tree T){
    if(T == NULL) return '\0';
    char max = T->Data;
    if(max < findMax(T->Left)) {
        max = findMax(T->Left);
    }
    if(max < findMax(T->Right)) {
        max = findMax(T->Right);
    }
    return max;
}
