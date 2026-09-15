abstract class Shape{
	double area;
	
	Shape() {
		super();
		this.area = 0;
	}
	Shape(double area) {
		super();
		this.area = area;
	}
	double getArea() {
		return area;
	}
	void setArea(double area) {
		this.area = area;
	}
	abstract double calArea();
	void display() {
		System.out.println("Area is:"+this.area);
	}
}
class Circle extends Shape{
	double radius;
	
	Circle() {
		super();
		this.radius = 0;
	}
	Circle(double area,double radius) {
		super(area);
		this.radius = radius;
	}
	double getRadius() {
		return radius;
	}
	void setRadius(double radius) {
		this.radius = radius;
	}
	double calArea(){
		return 3.14*radius*radius;
	}
	void display() {
		super.display();
		System.out.println("Radius is:"+this.radius);
	}	
}
class Triangle extends Shape{
	double base;
	double height;
	
	Triangle() {
		super();
		this.base = 0;
		this.height = 0;
	}
	Triangle(double area,double base, double height) {
		super(area);
		this.base = base;
		this.height = height;
	}
	double getBase() {
		return base;
	}
	void setBase(double base) {
		this.base = base;
	}
	double getHeight() {
		return height;
	}
	void setHeight(double height) {
		this.height = height;
	}
	double calArea() { 
		return 0.5 * base * height;
	}
	void display() {
		super.display();
		System.out.println("Base is:"+this.base);
		System.out.println("Height is:"+this.height);
	}
}
class Rectangle extends Shape{
	double length;
	double breadth;

	Rectangle() {
		super();
		this.length = 0;
		this.breadth = 0;
	}
	Rectangle(double area,double length, double breadth) {
		super(area);
		this.length = length;
		this.breadth = breadth;
	}
	double getLength() {
		return length;
	}
	void setLength(double length) {
		this.length = length;
	}
	double getBreadth() {
		return breadth;
	}
	void setBreadth(double breadth) {
		this.breadth = breadth;
	}
	double calArea() { 
		return length * breadth;
	}
	void display() {
		super.display();
		System.out.println("Length is:"+this.length);
		System.out.println("Breadth is:"+this.breadth);
	}
	
}
class TestShPolymorphism {

	public static void main(String[] args) {
		Shape s1;
		
		s1=new Circle(7.56,5);
		s1.display();
		System.out.printf("Calculated Area: %.2f ",s1.calArea());
		System.out.println();
		System.out.println();
		
		s1=new Triangle(45.78,7.9,8.5);
		s1.display();
		System.out.printf("Calculated Area: %.2f ",s1.calArea());
		System.out.println();
		System.out.println();
		
		s1=new Rectangle(50.78,9.9,6.5);
		s1.display();
		System.out.printf("Calculated Area: %.2f ",s1.calArea());
		System.out.println();

	}

}
