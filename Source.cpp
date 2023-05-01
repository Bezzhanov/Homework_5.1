#include <iostream>


class Figure {

public:
	Figure() {};
	Figure(int sides_count, std::string name) {
		sides_count = this->sides_count;
		name = this->name;
	};
	int get_sides_count() { return this->sides_count = sides_count; };

	std::string get_name() { return this->name = name; };

protected:
	
	int sides_count = 0;
	std::string name = "Фигура";	
};

class Triangle : public Figure {

public:
	Triangle() {};
	Triangle(int sides_count, std::string name) : Figure(sides_count, name) {
		this->sides_count = sides_count;
		this->name = name;
	};	
};

class Quadrangle : public Figure {

public:
	Quadrangle() {};
	Quadrangle(int sides_count, std::string name) : Figure(sides_count, name) {
		this->sides_count = sides_count;
		this->name = name;
	};
};

int main() {
	setlocale(LC_ALL, "Ru");
	Figure f;
	std::cout << "Количество сторон: " << std::endl;
	std::cout << f.get_name() << " : " << f.get_sides_count() << std::endl;
	
	Triangle t(3, "Треугольник");
	std::cout << t.get_name() << " : " << t.get_sides_count() << std::endl;
	
	Quadrangle q(4, "Четырехугольник");
	std::cout << q.get_name() << " : " << q.get_sides_count() << std::endl;
	
	return 0;
}