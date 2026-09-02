class Shape{
	double area;
}
class Triangle{
	double base;
	double height;
	
	void Triangle(double base,double height)
	{
		System.out.println(base*height);
	}
}
class Rectangle{
	double length;
	double breadth;
	void Rectangle(double length,double breadth)
	{
		System.out.println(length*breadth);
	}
}
class Circle{
	double radius;
	void Circle(double radius)
	{
		System.out.println(radius);
	}
}
class CalculateArea {
	double Triangle(double base, double height)
	{
		return 0.5 * base * height; 
	} 
	double Rectangle(double length, double breadth) 
	{
		return length * breadth;
	}
	double Circle(double radius)
	{
		return 3.14 * radius * radius;
	}
	void calculateArea()
	{
		double triangleArea = Triangle(6.5, 8); 
		double rectangleArea = Rectangle(80, 7.8);
		double circleArea = Circle(9.4);
		System.out.println("Area of Triangle = " +triangleArea);
		System.out.println("Area of Rectangle = " +rectangleArea);
		System.out.println("Area of Circle = " +circleArea);
	}
}

class TestArea{
    public static void main(String[] args) {

        CalculateArea ca1 = new CalculateArea();

        ca1.calculateArea();
    }
}
