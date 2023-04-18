void Insertion_Sort(int a[], int n){
	int pos, i;
	int x;
	for(i=1; i<n; i++){
		x = a[i]; pos = i-1;
		//tìm vị trí chèn x
		while((pos>=0)&&(a[pos]>x)){
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;
	}
}
void main()
{
	int a[6] = {41 , 23 , 4, 14, 56, 1};
	Insertion_Sort(a, 6);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}
