#include<iostream>
using namespace std;


int arrSum(int saveArray[],int size){
	int sum = 0;
	for(int i = 0; i<size;i++){
		sum += saveArray[i];
	}
	cout<<"\n[!] The Summation of Array's Element is  : " <<sum;
}

	int subArr(int saveArray[],int size){
	
	int sub = saveArray[0];
	for(int i = 1; i<size;i++){
		sub -= saveArray[i];
	}
	cout<<"\n[!] The Subtraction of Array's Element is  : " <<sub;
	}
	int MutArr(int saveArray[],int size){
	
	int Mut = saveArray[0];
	for(int i = 1; i<size;i++){
		Mut *= saveArray[i];
	}
	cout<<"\n[!] The Multiplication of Array's Element is  : " <<Mut;
	}
	int divArr(int saveArray[],int size){
	
	double div = saveArray[0];
	for(int i = 1; i<size;i++){
		div /= saveArray[i];
	}
	cout<<"\n[!] The Division of Array's Element is  : " <<div<<endl;
	}
	int checkerArr(int saveArr[]){
	for(int i=0;i<5;i++)
	{
		if(saveArr[i]%2==0)
			cout<<"[!] "<<saveArr[i]<<" is even .\n";
		else
		    cout<<"[!] "<<saveArr[i]<<" is odd .\n";
	}
	}
	
	int pnCheck(int saveArr[]){
	for(int i=0;i<5;i++)
	{
		if(saveArr[i] < 0)
			cout<<"[!] "<<saveArr[i]<<" is Negative .\n";
		else
		    cout<<"[!] "<<saveArr[i]<<" is Positive .\n";
	}
	}
	
	
	void sortArr(int myArr[]){
		
		int des;
		for(int i = 0;i<5;i++){
			for(int j = i+1; j<5;j++){
				if(myArr[i] > myArr[j]){
					des = myArr[i];
					myArr[i] = myArr[j];
					myArr[j] = des;
				}
			}	
		}
		cout<<"[!] Array In Deceding Order :";
		for (int i = 0; i<5; i++){
			cout<<myArr[i]<<", ";
		}
		cout<<endl;
	}
		void primeArr(int saveArr[])
		{
			bool isnotPrime = false;
			for(int i = 0; i<5; i++){
				for(int counter = 2; counter<saveArr[i];counter++){
					if(saveArr[i] % counter == 0 ){
						isnotPrime = true;
						break;
					}
				}
			
			if(isnotPrime == true) {
				cout<<"[!] "<<saveArr[i]<<" is Not Primary Number.\n";
			} else {
				cout<<"[!] "<<saveArr[i]<<" is a Primary Number.\n";
			}
			}
		}
	
int main()
{
	int size = 5;
	int arr[size];
	for(int i = 0; i<size;i++){
		cout<<"[?] Enter The ["<<i<<"] Element : ";
		cin>>arr[i];
	}
	system("cls");
	
	cout<<"<====================================>\n";
	cout<<"The Elements of Array  : ";
	for(int i = 0; i<size;i++){
		cout<<arr[i]<<", ";
	}
	
	
	arrSum(arr,size);
	subArr(arr,size);
	MutArr(arr,size);
	divArr(arr,size);
	checkerArr(arr);
	sortArr(arr);
	pnCheck(arr);
	primeArr(arr);
	return 0;
}


//#include<iostream>
//using namespace std;
//
//double d_cm(double value){
//	return value*100;
//}
//double d_km(double value){
//	return value/1000;
//}
//double d_lbs(double value){
//	return value*39.36;
//}
//double d_ft(double value){
//	return value*3.28;
//}
//double d_ml(double value){
//	return value/1000/1.67;
//}
//
//int main()
//{
//	double d_meter;
//	cout<<"[?] Please Enter The Distance In METER : ";
//	cin>>d_meter;
//	system("cls");
//	cout<<"###########################################################\n";
//	cout<<"############	  Unit Conversion By Baraa   ##############\n";
//	cout<<"############	      +(218)925527495        ##############\n";
//	cout<<"##########################################################\n";
//	cout<<"[!] The Distance "<<d_meter<<"m is = "<<d_cm(d_meter)<<"cm ."<<endl;
//	cout<<"[!] The Distance "<<d_meter<<"m is = "<<d_km(d_meter)<<"km ."<<endl;
//	cout<<"[!] The Distance "<<d_meter<<"m is = "<<d_lbs(d_meter)<<"inches ."<<endl;
//	cout<<"[!] The Distance "<<d_meter<<"m is = "<<d_ft(d_meter)<<"ft ."<<endl;
//	cout<<"[!] The Distance "<<d_meter<<"m is = "<<d_ml(d_meter)<<"mile ."<<endl;
//	return 0;
//}
//

