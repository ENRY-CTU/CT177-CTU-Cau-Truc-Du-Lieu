int findMax(Tree T){
    if (T == NULL) return -1;
    int maxNode = T->Data;
    int leftMax = findMax(T->Left);
    int rightMax = findMax(T->Right);
    if (leftMax > maxNode) {
        maxNode = leftMax;
    }
    if (rightMax > maxNode) {
        maxNode = rightMax;
    }
    return maxNode;
}
