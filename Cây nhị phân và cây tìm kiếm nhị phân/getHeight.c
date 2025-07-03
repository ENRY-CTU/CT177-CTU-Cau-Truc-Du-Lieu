int getHeight(Tree T) {
    if (T == NULL) return -1;
    int left_Height = getHeight(T->Left);
    int right_Height = getHeight(T->Right);
    return (left_Height > right_Height ? left_Height : right_Height) + 1;
}
