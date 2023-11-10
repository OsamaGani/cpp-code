 #include<iostream>
 using namespace std;
 int main()
 {
 	int i,sum=0;
 	for(i=10;i<=50;i++){
 		if(i%2==0){
 			cout<<i<<endl;
		 }
		 sum=sum+i;
	 }
	 cout<<"total sum"<<sum;
 }
