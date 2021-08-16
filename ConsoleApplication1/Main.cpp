#include"BaseObject.h"
#include"DynamicObject.h"
#include"Car.h"
#include"Motorbike.h"
#include"Tree.h"
#include"House.h"
#include<list>

int main() {
	list<BaseObject*> Obj_ls;

	BaseObject* Tree_1 = new Tree(1, "Birch", Postion(1, 1));
	BaseObject* House_1 = new House(2, "WareHouse", Postion(5, 6));
	BaseObject* Car_1 = new Car(2, "Xichlo", Postion(2, 1));
	BaseObject* Moto_1 = new Motorbike(3, "Vision", Postion(4, 2));

	Obj_ls.push_back(Tree_1);
	Obj_ls.push_back(House_1);
	Obj_ls.push_back(Car_1);
	Obj_ls.push_back(Moto_1);

	for (auto obj : Obj_ls) 
		cout << obj->getName() << " ";

	cout << endl;

	for (auto obj : Obj_ls) 
		obj->printPosition();

	cout << endl << "Move obj:\n";

	for (auto obj : Obj_ls) {
		Postion pos(99, 99);
		obj->move(pos);
	}
	cout << endl << "Obj after move: \n";

	for (auto obj : Obj_ls) 
		obj->printPosition();

	delete Tree_1;
	delete House_1;
	delete Moto_1;
	delete Car_1;
	Obj_ls.clear();

}
