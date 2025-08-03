Tree insertNode(Tree T, int x){
    if (T == NULL) {
        Tree T = (Tree)malloc(sizeof(struct Node));
        T->key = x;
        T->left = T->right = NULL;
        T->height = 1;
        return T;
    }
    if (x < T->key) {
        T->left = insertNode(T->left, x);
    } else if (x > T->key) {
        T->right = insertNode(T->right, x);
    } else {
        return T; 
    }

    T->height = 1 + max(height(T->left), height(T->right));
    
    int balance = getBalance(T);

    // LL 
    if (balance > 1 && x < T->left->key) {
        return rightRotate(T);
    }
    
    // RR 
    if (balance < -1 && x > T->right->key) {
        return leftRotate(T);
    }
    
    // LR 
    if (balance > 1 && x > T->left->key) {
        T->left = leftRotate(T->left);
        return rightRotate(T);
    }
    
    // RL 
    if (balance < -1 && x < T->right->key) {
        T->right = rightRotate(T->right);
        return leftRotate(T);
    }

    return T; 
}
