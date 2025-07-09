//ĐỆ QUY
Tree rightSibling(int x, Tree T){
    if(T == NULL) return 0;
    if(T->Left != NULL && T->Left->Key == x) return T->Right;
    if(T->Right != NULL && T->Right->Key == x) return T->Left;
    Tree left = rightSibling(x, T->Left);
    if(left != NULL) return left;
    return rightSibling(x, T->Right);
}
//VÒNG LẶP
Tree rightSibling(int x, Tree T)
{
    Tree pr=NULL;
    Tree p=T;
    int finish=0;
    while (p!= NULL && finish==0)
    {
        if (p->Key ==x) finish=1;
        else
        if (p->Key >x) {
            pr=p;
            p=p->Left;
        }
        else
        {
            pr=p;
            p=p->Right;
        }
    }
    if (finish ==0)
       return NULL;
    else 
      if (pr == NULL) return NULL;
      else if (pr->Left == p) return pr->Right;
      else return NULL;
}
