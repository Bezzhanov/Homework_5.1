#include <iostream> 

class Figure {

public:
	Figure() {
		this->sides_count = 0;
		this->name = "Фигура";
	};
	int get_sides_count() { return this->sides_count; };
	std::string get_name() { return this->name; };

protected:
	int sides_count{};
	std::string name{};

};

class Triangle : public Figure {

public:
	Triangle() {
		sides_count = 3;
		name = "Треугольник";
	};

protected:
	

};

class Quadrangle : public Figure {

public:
	Quadrangle() {
		sides_count = 4;
		name = "Четырехугольник";
	};

protected:


};

int main() {
	setlocale(LC_ALL, "Ru");
	Figure f;
	std::cout << "Количество сторон: " << std::endl;
	std::cout << f.get_name() << ' ' << f.get_sides_count() << std::endl;
	Triangle t;
	std::cout << t.get_name() << ' ' << t.get_sides_count() << std::endl;
	Quadrangle q;
	std::cout << q.get_name() << ' ' << q.get_sides_count() << std::endl;

	return 0;
}