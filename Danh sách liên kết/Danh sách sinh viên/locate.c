struct Node* locate(char x[10], List L){
    struct Node* p = L;
    int found = 0;
    while((p->Next != NULL) && (!found)){
        if(strcmp(p->Next->Element.ID, x) == 0){
            found = 1;            
        }
        else{
            p = p->Next;
        }
    }
    return p;
}
