
class Employee{
	
	String name;
	double salary;
	static double bonusRate;
	
	static {
		bonusRate=5;
	}
	
	Employee() {
		
		this.name = "NA";
		this.salary = 0;
	}
	Employee(String name, double salary) {
	
		this.name = name;
		this.salary = salary;
	}


	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}

	double getSalary() {
		return salary;
	}
	void setSalary(double salary) {
		this.salary = salary;
	}


	static double getBonusRate() {
		return bonusRate;
	}
	static void setBonusRate(double br) {
		bonusRate = br;
	}
	void display()
	{
		System.out.println("Employee Name:"+this.name);
		System.out.println("Employee Salary:"+this.salary);
		System.out.println("Bonus rate:"+this.bonusRate);
	}
	void calculate()
	{
		double totalSalary=salary+(salary*bonusRate/100);
		System.out.println("Total Salary"+totalSalary);
	}
}
class TestEmpSalary{

	public static void main(String[] args) {
		Employee e1=new Employee("Viraj",50000);
		e1.display();
		e1.calculate();
		
		Employee e2=new Employee("Sahil",60000);
		e2.display();
		e2.calculate();
		
		Employee e3=new Employee("Tanmay",70000);
		e3.display();
		e3.calculate();
		
		Employee.setBonusRate(4.5);
		e1.display();
		e1.calculate();
		e2.display();
		e2.calculate();
		e3.display();
		e3.calculate();
		
	}

}
