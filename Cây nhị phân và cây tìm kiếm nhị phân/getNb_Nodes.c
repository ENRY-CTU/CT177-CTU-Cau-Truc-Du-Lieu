//
int getNb_Nodes(Tree T){
    int count = 1;
    if(T == NULL) return 0;
    count += getNb_Nodes(T->Left);
    count += getNb_Nodes(T->Right);
    return count;
}
