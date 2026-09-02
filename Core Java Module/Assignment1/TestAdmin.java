import java.util.Scanner;

class Admin
{
	int id;
	String name;
	double salary;
	double allowance;
	
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
	void setAllowance(double allow)
	{
		this.allowance=allow;
	}
	void display()
	{
		System.out.println("Admin ID is: "+this.id);
		System.out.println("Admin Name is: "+this.name);
		System.out.println("Admin Salary is: "+this.salary);
		System.out.println("Admin Allowance is: "+this.allowance);
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
	double getAllowance()
	{
		return this.allowance;
	}
	Admin() {
		this.id = 103;
		this.name = "Viraj";
		this.salary = 25000;
		this.allowance = 1000;
	}

	Admin(int id, String name, double salary, double allowance)
	{
		this.id = id;
		this.name = name;
		this.salary = salary;
		this.allowance = allowance;
	}
}//class Admin ends here

class TestAdmin
{
	public static void main(String args[])
	{
		Admin ad1;//reference
		ad1=new Admin();//class ka variable
		ad1.display();
	}
	public static void main3(String args[])
	{
		Scanner sc;
		sc=new Scanner(System.in);
		Admin ad1;//reference
		ad1=new Admin();//class ka variable
		System.out.println("Enter Admin ID: ");
		int id=sc.nextInt();
		ad1.setId(id);
		System.out.println("Enter Admin Name: ");
		sc.nextLine();
		String nm=sc.nextLine();
		ad1.setName(nm);
		System.out.println("Enter Admin Salary: ");
		double sal=sc.nextDouble();
		ad1.setSalary(sal);
		System.out.println("Enter Admin Allowance: ");
		double allow=sc.nextDouble();
		ad1.setAllowance(allow);
	}
	public static void main2(String args[])
	{
		Admin ad1;//reference
		ad1=new Admin();//class ka variable
		ad1.setId(501);
		ad1.setName("Viraj");
		ad1.setSalary(40000);
		ad1.setAllowance(2.5);
		System.out.println("\n");
		ad1.display();
		
		Admin ad2;//reference
		ad2=new Admin();//class ka variable
		ad2.setId(505);
		ad2.setName("Raj");
		ad2.setSalary(50000);
		ad2.setAllowance(1.5);
		System.out.println("\n");
		ad2.display();
		
		if(ad1.getId()>ad2.getId())
			System.out.println("ad1 id is greater!!");
		else
			System.out.println("ad2 id is greater!!");
		if(ad1.getSalary()>ad2.getSalary())
			System.out.println("ad1 Salary is greater!!");
		else
			System.out.println("ad2 Salary is greater!!");
		if(ad1.getAllowance()>ad2.getAllowance())
			System.out.println("ad1 Allowance is greater!!");
		else
			System.out.println("ad2 Allowance is greater!!");
	}
	
	public static void main1(String args[])
	{
		System.out.println("Hello Admin1!!");
		Admin ad1;//reference
		ad1=new Admin();//class ka variable
		ad1.id=501;
		ad1.name="Viraj";
		ad1.salary=40000;
		ad1.allowance=2000;
		System.out.println("Admin ID is: "+ad1.id);
		System.out.println("Admin Name is: "+ad1.name);
		System.out.println("Admin Salary is: "+ad1.salary);
		System.out.println("Admin Allowance is: "+ad1.allowance);
		System.out.println("\n");
		
		System.out.println("Hello Admin2!!");
		Admin ad2;//reference
		ad2=new Admin();//class ka variable
		ad2.id=505;
		ad2.name="Raj";
		ad2.salary=50000;
		ad2.allowance=3000;
		System.out.println("Admin ID is: "+ad2.id);
		System.out.println("Admin Name is: "+ad2.name);
		System.out.println("Admin Salary is: "+ad2.salary);
		System.out.println("Admin Allowance is: "+ad2.allowance);
		System.out.println("\n");
		
	}
}
		