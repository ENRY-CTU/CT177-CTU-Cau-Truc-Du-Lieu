void erase(ElementType x, List *L){
    if(locate(x,*L)->Next != NULL){
        deleteList(locate(x, *L), L);
    }
    else{
        printf("Not found %d\n", x);
    }
}
