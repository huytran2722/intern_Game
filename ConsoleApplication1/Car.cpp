#include"Car.h"

Car::Car() : DynamicObject(){

}
Car::~Car() {

}
Car::Car(int id, string name, Postion pos) : DynamicObject(id, name, pos) {

}
