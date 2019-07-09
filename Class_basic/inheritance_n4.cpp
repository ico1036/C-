#include <iostream>
using namespace std;


// Inheritance class
// pure virutal function 

class Food{
public:
	virtual void SetPrice(int myprice)=0; // pure virtual function
	int GetPrice(){
		return price;
	}

protected:
	int price;
};

class Fruit : public Food{
public:
	void SetPrice(int myprice){
		price = myprice - 20;
	}
	
};

class Fish : public Food{
public:
	void SetPrice(int myprice){
		price = myprice/2;
	}

};


int main() {

	Food *pFood;
	Fruit myFruit;
	//Fish myFish;

	//pFood = &myFruit;
	//pFood->SetPrice(100);
	//cout << "myFruit price: " << pFood->GetPrice() << endl;


	//pFood = &myFish;
	//pFood->SetPrice(100);
	//cout << "myfish price: " << pFood->GetPrice() << endl;





return 0;
}
