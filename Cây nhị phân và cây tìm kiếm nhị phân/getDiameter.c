int getDiameter(Tree T, int *diameter) {
    if (T == NULL) return 0;
    int leftHeight = getDiameter(T->Left, diameter);
    int rightHeight = getDiameter(T->Right, diameter);
    *diameter = max(*diameter, leftHeight + rightHeight + 1);
    return max(leftHeight, rightHeight) + 1;
}
