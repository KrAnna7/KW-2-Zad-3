#include <iostream>

using namespace std;

class Point{	
private:
	float x,y;
public:
	Point(float x,float y){
		this->x=x;
		this->y=y;
	}
	float getX(){
		return x;
	}
	float getY(){
		return y;
	}
	void move(Point p){
		x+=p.getX();
		y+=p.getY();
	}
};
int main(int argc, char** argv) {
	Point w = Point(1.0,2.0);
	Point p = Point(5.5,8.0);
	p.move(w);
	cout<<p.getX()<<" "<<p.getY()<<endl;
	return 0;
}
