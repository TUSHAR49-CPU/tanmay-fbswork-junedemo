class Employee{
	int id;
	String name;
	double salary;
	
	Employee() {
		super();
		this.id = 0;
		this.name = "NA";
		this.salary = 0;
	}

	Employee(int id, String name, double salary) {
		super();
		this.id = id;
		this.name = name;
		this.salary = salary;
	}
	
	int getId() {
		return id;
	}

	void setId(int id) {
		this.id = id;
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
	
	void display()
	{
		System.out.println("ID is: "+this.id);
		System.out.println("Name is: "+this.name);
		System.out.println("Salary is: "+this.salary);
	}
	
}//class Employee ends here

class HR extends Employee{
	
	double commission;
	
	HR() {
		super();
		this.commission =0;
	}
	HR(int id,String name,double salary,double commission) {
		super(id,name,salary);
		this.commission = commission;
	}
	void setCommission(double com)
	{
		this.commission=com;
	}
	double getCommission()
	{
		return commission;
	}
	
	void display()
	{
		super.display();
		System.out.println("Commission is: "+this.commission);
	}	
	
}//class HR ends here

class Admin extends Employee
{
	double allowance;
	
	Admin() {
		super();
		this.allowance = 0;
	}

	Admin(int id, String name, double salary,double allowance)
	{
		super(id,name,salary);
		this.allowance = allowance;
	}
	void setAllowance(double allowance)
	{
		this.allowance=allowance;
	}
	double getAllowance()
	{
		return this.allowance;
	}

	void display()
	{
		super.display();
		System.out.println("Allowance is: "+this.allowance);
	}
}

class SalesManager extends Employee
{
	double incentive;
	int target;
	
	SalesManager() {
		super();
		this.incentive = 0;
		this.target = 0;
	}
	SalesManager(int id, String name, double salary, double incentive, int target) {
		
		super(id,name,salary);
		this.incentive = incentive;
		this.target = target;
	}
	
	void setIncentive(double incentive)
	{
		this.incentive=incentive;
	}
	void setTarget(int target)
	{
		this.target=target;
	}
	
	double getIncentive()
	{
		return this.incentive;
	}
	int getTarget()
	{
		return this.target;
	}

	void display()
	{
		super.display();
		System.out.println("Incentive is: "+this.incentive);
		System.out.println("Target is: "+this.target);
	}
}

class TestEmpHierarchy
{
	public static void main(String args[])
	{
		Employee e1;
		
		e1=new Admin(101,"Raj",25000,1000);
		e1.display();
		
		e1=new SalesManager(102,"Yash",50000,5000,500);
		e1.display();
		
		e1=new HR(103,"Anish",30000,4000);
		e1.display();
		
	}
}
