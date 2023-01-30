#include <iostream>

class Shape {
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;  
};

class Rectangle : public Shape {
private:
    float length;
    float breath;
public:
    Rectangle(float l = 1, float b = 1){
        length = l;
        breath = b;
    }

    float area(){
        return length * breath;
    }
    float perimeter(){
        return length*2 + breath*2;
    }
};

class Circle : public Shape {
private:
    float radius;
    const float pi = 3.14;
public:
    Circle(float radius = 1){
        this->radius = radius;
    }
    float area(){
        return pi*radius*radius;
    }
    float perimeter(){
        return 2*pi*radius;
    }


};

int main(void)
{
    Shape *ptr;
    Rectangle r1(1.3, 3.3);
    ptr = &r1;
    std::cout << "rec area - " << ptr->area() << std::endl;
    std::cout << "rec perim - " << ptr->perimeter() << std::endl;
    
    Circle c1(3);
    ptr = &c1;
    std::cout << "circle area - " << ptr->area() << std::endl;
    std::cout << "circle perimeter - " << ptr->perimeter() << std::endl;

}