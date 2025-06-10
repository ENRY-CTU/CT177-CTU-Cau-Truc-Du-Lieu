float getAvg(List L){
	if(L.Last <= 0) return -10000.0000;
	float S = 0;
	for(int i = 0; i < L.Last; i++){
		S += L.Elements[i];
	}
	return S / (L.Last);
}