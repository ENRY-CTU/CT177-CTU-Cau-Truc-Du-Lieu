//Tạo một cây từ duyệt tiền tự và trung tự, chỉ số bắt đầu trung tự, chỉ số kết thúc trung tự
Tree createTree(char pre[], char in[], int start, int end){
    static int preIndex = 0;
    if (start > end) return NULL;
    
    Tree node = (Tree)malloc(sizeof(struct Node));
    node->Data = pre[preIndex++];
    node->Left = node->Right = NULL;

    if (start == end) return node;

    int inIndex;
    for (inIndex = start; inIndex <= end; inIndex++) {
        if (in[inIndex] == node->Data) break;
    }

    node->Left = createTree(pre, in, start, inIndex - 1);
    node->Right = createTree(pre, in, inIndex + 1, end);
    
    return node;
}
