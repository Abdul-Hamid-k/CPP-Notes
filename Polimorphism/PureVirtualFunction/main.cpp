#include<iostream>
#include<vector>

using namespace std;

// Abstract Class can not be instanciate, means we can't create objects of Abstract class. e.g., Shape *ptr; 
class Shape{                          // Abstract Base Class
private:
    // Attribute collumn for all the shapes
public:
    virtual void draw() = 0;    // Pure virtual function
    virtual void rotate() = 0;  // Pure virtual function
    virtual ~Shape() {}
};

class Open_shape: public Shape{       // Abstract Class
public:
    virtual ~Open_shape() {}
};

// Pure virtual functions can not be override, if they are inherit to a Abstract class.
class Close_shape: public Shape{
public:
    virtual ~Close_shape() {}
};

class Line: public Open_shape{       // Concreate Class
public:
    virtual void draw(){
        cout<<"Drawing Line"<<endl;
    }
    virtual void rotate(){
        cout<<"Rotating a line"<<endl;
    }
    virtual ~Line() {}
};

class Circle: public Close_shape{    // Concreate Class
public:
    virtual void draw(){
        cout<<"Drawing a circle"<<endl;
    }
    virtual void rotate(){
        cout<<"Rotating a Circle"<<endl;
    }
    virtual ~Circle() {}
};

class Square: public Close_shape{    // Concreate Class
public:
    virtual void draw(){
        cout<<"Drawing a Square"<<endl;
    }
    virtual void rotate(){
        cout<<"Rotating a Square"<<endl;
    }
    virtual ~Square() {}
};

void Screen_refresh(const vector<Shape *> &shapes){
    cout<<"========== Refreshing ==========\n"<<endl;
    for(const auto p : shapes){
        p->draw();
        p->rotate();
        cout<<endl;
    }
}

int main(){
    // Shape s;                 // Error- Abstract class is not allowed to be instantiate
    // Shape s = new Shape();

    // Circle c;
    // c.draw();
    // c.rotate();

    // Shape *ptr = new Circle();  // Dinemic base class pointer
    // ptr->draw();

    Shape *s1 = new Circle();
    Shape *s2 = new Square();
    Shape *s3 = new Line();

    vector<Shape *> shapes {s1, s2, s3};
    
   Screen_refresh(shapes); 

    delete s1;
    delete s2;
    delete s3;

    return 0;
}