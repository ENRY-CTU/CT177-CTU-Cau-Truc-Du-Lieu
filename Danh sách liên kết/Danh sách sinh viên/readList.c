List readList()
{
	int n,i;
	Student s;
	char st[50];
	List L = getList();
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf(" "); 
		fgets(st,10,stdin);
		if (st[strlen(st)-1] == '\n')
			st[strlen(st)-1] = '\0';
		strcpy(s.ID, st);
		fgets(st,50,stdin);
		if (st[strlen(st)-1] == '\n')
			st[strlen(st)-1] = '\0';
		strcpy(s.Name, st);
		scanf("%f%f%f",&s.R1,&s.R2,&s.R3);
     if(!append(s, &L)){
    printf("%s exists\n", s.ID);
  }
append(s, &L);
	}
	return L;
}    
