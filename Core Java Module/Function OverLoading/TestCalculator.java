class Calculator{
	void add(int a,int b) {
		System.out.println("a+b");
	}
	void add(int b,double a) {
		System.out.println(" b+a");
	}
	void add(double a,int b) {
		System.out.println(" a+b");
	}
	void add(double a,double b) {
		System.out.println("a+b");
	}
	void sub(int a,int b) {
		System.out.println("a-b");
	}
	void sub(int b,double a) {
		System.out.println(" b-a");
	}
	void sub(double a,int b) {
		System.out.println(" a-b");
	}
	void sub(double a,double b) {
		System.out.println("a-b");
	}
	void mult(int a,int b) {
		System.out.println("a*b");
	}
	void mult(int b,double a) {
		System.out.println(" b*a");
	}
	void mult(double a,int b) {
		System.out.println(" a*b");
	}
	void mult(double a,double b) {
		System.out.println("a*b");
	}
	void div(int a,int b) {
		System.out.println("a/b");
	}
	void div(int b,double a) {
		System.out.println(" b/a");
	}
	void div(double a,int b) {
		System.out.println(" a/b");
	}
	void div(double a,double b) {
		System.out.println("a/b");
	}
}
class TestCalculator{

	public static void main(String[] args) {
		Calculator c1=new Calculator();
		c1.add(10.6, 10);
		c1.sub(15, 10.7);
		c1.mult(5, 4.5);
		c1.div(25, 5);
	}

}
