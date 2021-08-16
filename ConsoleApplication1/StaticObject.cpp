#include"StaticObject.h"
using namespace std;

StaticObject::StaticObject() :BaseObject() {

}
StaticObject::~StaticObject() {

}
StaticObject::StaticObject(int id, string name, Postion pos) : BaseObject(id, name, pos) {

}
void StaticObject::move(Postion pos) {
	cout << this->getName() << "cant move, because static"<<endl;
}