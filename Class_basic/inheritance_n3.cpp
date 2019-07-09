#include <iostream>
using namespace std;

// Inheritance of class 
// Modifying Member fucntion 
// Usage of virtual function



class Food{
public:
	virtual void SetPrice(int myprice){
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

	Food *pFood;
	Fruit myFruit;

	pFood = &myFruit; // pFood 로 Fruit 객체를 호출할수 있게해줌

	pFood->SetPrice(100); // virutal 이 아니면 일반적으로 수정 이전의 멤버함수가 불러와짐

	cout << "Food  price: " << pFood->GetPrice() << endl;

return 0;
}
