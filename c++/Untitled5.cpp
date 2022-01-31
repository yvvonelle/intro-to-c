#include<iostream>
using namespace std;
int  main()
{
	int customer_number,price,quantity,total,discount;
	char customer_name[20],product_name[6];
	cout<<"enter customer number: ";
	cin>>customer_number;
	cout<<"enter customer name: ";
	cin>>customer_name;
	cout<<"enter product name: ";
	cin>>product_name;
	cout<<"enter price: ";
	cin>>price;
	cout<<"enter quantity: ";
	cin>>quantity;
	total=price*quantity;
	if(total>=5000)
	discount=total*0.3;
	cout<<"discount is"<<discount<<endl;
	cout<<"total is"<<total<<endl;
	{
	if((total>=3000)&& (total<5000))
	discount=total*0.2;
		else
	{
		if ((total>=2000)&&(total<3000))
		discount=total*0.1;
		else
	
			if(total<=2000);
			discount=0;
	}	
	return 0;

	}
}
