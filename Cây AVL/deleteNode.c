Tree deleteNode(Tree T, int x) {
    if (T == NULL) return T;
    if (x < T->key) {
        T->left = deleteNode(T->left, x);
    } else if (x > T->key) {
        T->right = deleteNode(T->right, x);
    } else {
        if ((T->left == NULL) || (T->right == NULL)) {
            Tree temp = T->left ? T->left : T->right;
            if (temp == NULL) {
                temp = T;
                T = NULL;
            } else {
                *T = *temp;
            }
            free(temp);
        } else {

            Tree temp = T->right;
            while (temp && temp->left != NULL) {
                temp = temp->left;
            }
            T->key = temp->key;
            T->right = deleteNode(T->right, temp->key);
        }
    }

    if (T == NULL) return T;

    T->height = 1 + max(height(T->left), height(T->right));
    int balance = getBalance(T);
    // LL Case
    if (balance > 1 && getBalance(T->left) >= 0) {
        return rightRotate(T);
    }

    // LR Case
    if (balance > 1 && getBalance(T->left) < 0) {
        T->left = leftRotate(T->left);
        return rightRotate(T);
    }

    // RR Case
    if (balance < -1 && getBalance(T->right) <= 0) {
        return leftRotate(T);
    }

    // RL Case
    if (balance < -1 && getBalance(T->right) > 0) {
        T->right = rightRotate(T->right);
        return leftRotate(T);
    }

    return T; 
}
