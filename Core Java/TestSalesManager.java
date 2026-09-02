import java.util.Scanner;

class SalesManager
{
	int id;
	String name;
	double salary;
	double incentive;
	int target;
	
	void setId(int id)
	{
		this.id=id;
	}
	void setName(String nm)
	{
		this.name=nm;
	}
	void setSalary(double sal)
	{
		this.salary=sal;
	}
	void setIncentive(double incent)
	{
		this.incentive=incent;
	}
	void setTarget(int tar)
	{
		this.target=tar;
	}
	void display()
	{
		System.out.println("SalesManager ID is: "+this.id);
		System.out.println("SalesManager Name is: "+this.name);
		System.out.println("SalesManager Salary is: "+this.salary);
		System.out.println("SalesManager Incentive is: "+this.incentive);
		System.out.println("SalesManager Target is: "+this.target);
	}
	int getId()
	{
		return this.id;
	}
	String getName()
	{
		return this.name;
	}
	double getSalary()
	{
		return this.salary;
	}
	double getIncentive()
	{
		return this.incentive;
	}
	int getTarget()
	{
		return this.target;
	}
	SalesManager() {
		this.id = 103;
		this.name = "Viraj";
		this.salary = 25000;
		this.incentive = 1000;
		this.target = 600;
	}

	SalesManager(int id, String name, double salary, double incentive, int target) {
		super();
		this.id = id;
		this.name = name;
		this.salary = salary;
		this.incentive = incentive;
		this.target = target;
	}
	
}//class SalesManger ends here

class TestSalesManager
{
	public static void main(String args[])
	{
		SalesManager sm1; //reference
		sm1=new SalesManager();
		sm1.display();
	}

	public static void main3(String args[])
	{
		Scanner sc;
		sc=new Scanner(System.in);
		SalesManager sm1;//reference
		sm1=new SalesManager();//class ka variable
		System.out.println("Enter SalesManager ID: ");
		int id=sc.nextInt();
		sm1.setId(id);
		System.out.println("Enter SalesManager Name: ");
		sc.nextLine();
		String nm=sc.nextLine();
		sm1.setName(nm);
		System.out.println("Enter SalesManager Salary: ");
		double sal=sc.nextDouble();
		sm1.setSalary(sal);
		System.out.println("Enter SalesManager Incentive: ");
		double incent=sc.nextDouble();
		sm1.setIncentive(incent);
		System.out.println("Enter SalesManager Target: ");
		int tar=sc.nextInt();
		sm1.setTarget(tar);
	}
	public static void main2(String args[])
	{
		SalesManager sm1; //reference
		sm1=new SalesManager(); //class ka variable
		sm1.setId(301);
		sm1.setName("Viraj");
		sm1.setSalary(40000);
		sm1.setIncentive(1000);
		sm1.setTarget(500);
		System.out.println("\n");
		sm1.display();
		
		SalesManager sm2; //reference
		sm2=new SalesManager(); //class ka variable
		sm2.setId(204);
		sm2.setName("Raj");
		sm2.setSalary(50000);
		sm2.setIncentive(1200);
		sm2.setTarget(700);
		System.out.println("\n");
		sm2.display();
		
		if(sm1.getId()>sm2.getId())
			System.out.println("sm1 id is greater!!");
		else
			System.out.println("sm2 id is greater!!");
		if(sm1.getSalary()>sm2.getSalary())
			System.out.println("sm1 Salary is greater!!");
		else
			System.out.println("sm2 Salary is greater!!");
		if(sm1.getIncentive()>sm2.getIncentive())
			System.out.println("sm1 Incentive is greater!!");
		else
			System.out.println("sm2 Incentive is greater!!");
		if(sm1.getTarget()>sm2.getTarget())
			System.out.println("sm1 Target is greater!!");
		else
			System.out.println("sm2 Target is greater!!");
	}
	public static void main1(String args[])
	{
		System.out.println("Hello SalesManager1!!");
		SalesManager sm1; //reference
		sm1=new SalesManager(); //class ka variable
		sm1.id=301;
		sm1.name="Viraj";
		sm1.salary=40000;
		sm1.incentive=1000;
		sm1.target=500;
		System.out.println("SalesManager ID is: "+sm1.id);
		System.out.println("SalesManager Name is: "+sm1.name);
		System.out.println("SalesManager Salary is: "+sm1.salary);
		System.out.println("SalesManager Incentive is: "+sm1.incentive);
		System.out.println("SalesManager Target is: "+sm1.target);
		System.out.println("\n");
		
		System.out.println("Hello SalesManager2!!");
		SalesManager sm2; //reference
		sm2=new SalesManager(); //class ka variable
		sm2.id=204;
		sm2.name="Raj";
		sm2.salary=50000;
		sm2.incentive=1200;
		sm2.target=700;
		System.out.println("SalesManager ID is: "+sm2.id);
		System.out.println("SalesManager Name is: "+sm2.name);
		System.out.println("SalesManager Salary is: "+sm2.salary);
		System.out.println("SalesManager Incentive is: "+sm2.incentive);
		System.out.println("SalesManager Target is: "+sm2.target);
		System.out.println("\n");
	}
}
		