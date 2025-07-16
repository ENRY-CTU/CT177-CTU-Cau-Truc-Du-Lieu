int getHeight(Tree T){
  if(T == NULL) return -1;
  return 1 + (getHeight(T->Left) > getHeight(T->Right) ? getHeight(T->Left) : getHeight(T->Right));
}
int hNodes(int x, Tree T){
  if(T == NULL) return -1;
  if(T->Key == x) return getHeight(T);
  if(x > T->Key) return hNodes(x, T->Right);
  else if(x < T->Key) return hNodes(x, T->Left);
}
