#include <iostream>


class Figure {

public:
	Figure() {
		Figure::Figure(sides_count, name);
	};
	int get_sides_count() { return this->sides_count; };

	std::string get_name() { return this->name; };

protected:
	
	int sides_count = 0;
	std::string name = "Фигура";
	
	Figure(int sides_count, std::string name) {
		sides_count = this->sides_count;
		name = this->name;
	};

	
};

class Triangle : public Figure {

public:
	Triangle() {};
	
	int get_sides_count() {return this->sides_count; };

	std::string get_name() {return this->name;	};

protected:
		int sides_count = 3;
		std::string name = "Треугольник";

	Triangle(int sides_count, std::string name) : Figure(sides_count, name) {
		sides_count = this->sides_count;
		name = this->name;
	};

};

class Quadrangle : public Figure {

public:
	Quadrangle() {};
		
	int get_sides_count() {
		return this->sides_count;
	};
	std::string get_name() {
		return this->name;
	}
		
protected:

	int sides_count = 4;
	std::string name = "Четырехугольник";
	Quadrangle(int sides_count, std::string name) : Figure(sides_count, name) {
		sides_count = this->sides_count;
		name = this->name;
	};

};

int main() {
	setlocale(LC_ALL, "Ru");
	Figure f;
	std::cout << "Количество сторон: " << std::endl;
	std::cout << f.get_name() << " : " << f.get_sides_count() << std::endl;
	
	Triangle t;
	std::cout << t.get_name() << " : " << t.get_sides_count() << std::endl;
	
	Quadrangle q;
	std::cout << q.get_name() << " : " << q.get_sides_count() << std::endl;
	
	return 0;
}