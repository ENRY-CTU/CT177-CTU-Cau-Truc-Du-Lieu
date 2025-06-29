void printList(List L){
  int count = 1;
  for(struct Node* p = L->Next; p != NULL; p = p->Next){
    float tb = (p->Element.R1 + p->Element.R2 + p->Element.R3) / 3;
    printf(" %d - %10s - %50s - %.3f - %.3f - %.3f - %.3f\n", count, p->Element.ID, p->Element.Name, p->Element.R1, p->Element.R2, p->Element.R3, tb);
    count++;
  }
}
