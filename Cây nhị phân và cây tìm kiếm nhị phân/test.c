#include <stdio.h>
struct Node{
    int Key;
    struct Node *Left, *Right;
};
typedef struct Node* Tree;
void preOrder(Tree T) {
    if (T == NULL) return;
    printf("%d ", T->Key);
    preOrder(T->Left);
    preOrder(T->Right);
}
void inOrder(Tree T) {
    if (T == NULL) return;
    inOrder(T->Left);
    printf("%d ", T->Key);
    inOrder(T->Right);
}
void posOrder(Tree T) {
    if (T == NULL) return;
    posOrder(T->Left);
    posOrder(T->Right);
    printf("%d ", T->Key);
}
int member(int x, Tree T) {
    if (T == NULL) return 0;
    if (T->Key == x) return 1;
    if (x < T->Key) return member(x, T->Left);
    else return member(x, T->Right);
}
void insertNode(int x, Tree *T){
    if (*T == NULL) {
        *T = (Tree)malloc(sizeof(struct Node));
        (*T)->Key = x;
        (*T)->Left = (*T)->Right = NULL;
    if(!member(x, *T)) {
        return;
    }
    } else if (x < (*T)->Key) {
        insertNode(x, &((*T)->Left));
    } else if (x > (*T)->Key) {
        insertNode(x, &((*T)->Right));
    }
}
Tree getNext(int x, Tree T) {
    Tree p = T;
    Tree q = NULL;
    while (p != NULL) {
        if (x < p->Key) {
            q = p;
            p = p->Left;
        } else {
            p = p->Right;
        }
    }
    return q;
}
Tree getNext(int x, Tree T){
    if(T == NULL) return NULL;
    if(T->Key <= x) {
        return getNext(x, T->Right);
    } else {
        Tree left = getNext(x, T->Left);
        return (left != NULL) ? left : T;
    }
}
int getHeight(Tree T) {
    if (T == NULL) return -1;
    int left_Height = getHeight(T->Left);
    int right_Height = getHeight(T->Right);
    return (left_Height > right_Height ? left_Height : right_Height) + 1;
}
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
int hNode(int x, Tree T) {
    if (T == NULL) return -1;
    if (T->Key == x) return getHeight(T);
    if (x < T->Key) return hNode(x, T->Left);
    return hNode(x, T->Right);
}
int getNb_Nodes(Tree T){
    int count = 0;
    if(T == NULL) return 0;
    count += getNb_Nodes(T->Left);
    count += getNb_Nodes(T->Right);
    return count + 1;
}
Tree initTree(){
    Tree T = NULL;
    return T;
}
Tree rightSibling(int x, Tree T){
    if(T == NULL) return 0;
    if(T->Left != NULL && T->Left->Key == x) return T->Right;
    if(T->Right != NULL && T->Right->Key == x) return T->Left;
    Tree left = rightSibling(x, T->Left);
    if(left != NULL) return left;
    return rightSibling(x, T->Right);
}
void printPath(int x, Tree T) {
    Tree p = T;
    int found = 0;
    while(p != NULL && !found) {
        printf("%d ", p->Key);
        if (p->Key == x) {
            found = 1;
        } else if (x < p->Key) {
            p = p->Left;
        } else {
            p = p->Right;
        }
    }
    if (found) {
        printf("-> Tim thay");
    } else {
        printf("-> Khong tim thay");
    }
}
Tree getPrevious(int x, Tree T) {
    if(T == NULL) return NULL;
    Tree p = T;
    Tree q = NULL;
    while(p != NULL) {
        if(x < p->Key) {
            p = p->Left;
        } else if(x > p->Key) {
            q = p;
            p = p->Right;
        } else {
            break;
        }
    }
    if(p == NULL) return NULL;
    if(p->Left != NULL) {
        p = p->Left;
        while(p->Right != NULL) {
            p = p->Right;
        }
        return p;
    }
    return q;
}
Tree getPrevious(int x, Tree T){
    if(T == NULL) return NULL;
    if(T->Key >= x) {
        return getPrevious(x, T->Left);
    } else {
        Tree right = getPrevious(x, T->Right);
        return (right != NULL) ? right : T;
    }
}
Tree getParent(int x, Tree T) {
    if(T == NULL || T->Key == x) return NULL;
    if((T->Left != NULL && T->Left->Key == x) || (T->Right != NULL && T->Right->Key == x)) {
        return T;
    }
    if(x < T->Key) {
        return getParent(x, T->Left);
    } else {
        return getParent(x, T->Right);
    }
}
int getFullNodes(Tree T){
    if(T == NULL) return 0;
    if(T->Left == NULL && T->Right == NULL) return 0;
    if(T->Left != NULL && T->Right == NULL) return getFullNodes(T->Left);
    if(T->Left == NULL && T->Right != NULL) return getFullNodes(T->Right);
    return 1 + getFullNodes(T->Left) + getFullNodes(T->Right);
}
Tree searchNode(int x, Tree T){

    if(T == NULL) return NULL;
    if(T->Key == x) return T;
    if(x < T->Key) {
        return searchNode(x, T->Left);
    } else {
        return searchNode(x, T->Right);
    }
}
//Loop version of these functions
int hNode(int x, Tree T) {
    while (T != NULL) {
        if (T->Key == x) return getHeight(T);
        if (x < T->Key) T = T->Left;
        else T = T->Right;
    }
    return -1;
}
int getNb_Nodes(Tree T) {
    int count = 0;
    while (T != NULL) {
        count++;
        T = T->Left;
    }
    return count;
}
Tree rightSibling(int x, Tree T) {
    while (T != NULL) {
        if (T->Left != NULL && T->Left->Key == x) return T->Right;
        if (T->Right != NULL && T->Right->Key == x) return T->Left;
        if (x < T->Key) T = T->Left;
        else T = T->Right;
    }
    return NULL;
}
Tree getParent(int x, Tree T) {
    while (T != NULL && T->Key != x) {
        if ((T->Left != NULL && T->Left->Key == x) || (T->Right != NULL && T->Right->Key == x)) {
            return T;
        }
        if (x < T->Key) T = T->Left;
        else T = T->Right;
    }
    return NULL;
}
int getFullNodes(Tree T) {
    int count = 0;
    if (T == NULL) return 0;
    if (T->Left != NULL && T->Right != NULL) {
        count = 1;
    }
    count += getFullNodes(T->Left);
    count += getFullNodes(T->Right);
    return count;
}
Tree searchNode(int x, Tree T) {
    while (T != NULL) {
        if (T->Key == x) return T;
        if (x < T->Key) T = T->Left;
        else T = T->Right;
    }
    return NULL;
}