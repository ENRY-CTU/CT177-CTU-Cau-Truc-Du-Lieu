void makenullList(List *L){
    (*L) = (struct Node*)malloc(sizeof(struct Node));
    (*L)->Next = NULL;
}
