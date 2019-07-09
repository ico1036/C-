#include <iostream>
using namespace std;

// Inheritance of class 
// Modifying Member fucntion 


class Food{
public:
	void SetPrice(int myprice){
		price=myprice;
	}

	int GetPrice(){
		return price;
	}

private:
	int price;
};

class Fruit : public Food{
public:
	void SetPrice(int myprice){
			Food::SetPrice(myprice-20);

	}
};

int main() {

	Food myFood;
	Fruit myFruit;

	myFood.SetPrice(100); 
	myFruit.SetPrice(100);

	cout << "myFood  price: " << myFood.GetPrice() << endl;
	cout << "myFruit price: " << myFruit.GetPrice() << endl;

return 0;
}
