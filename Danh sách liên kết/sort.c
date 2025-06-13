void sort(List *L){
    for(Position p = *L; p->Next != NULL; p = p->Next){
        for(Position q = p->Next; q->Next != NULL; q = q->Next){
            if(p->Next->Element > q->Next->Element){
                int temp = p->Next->Element;
                p->Next->Element = q->Next->Element;
                q->Next->Element = temp;
            }
        }
    }
}
