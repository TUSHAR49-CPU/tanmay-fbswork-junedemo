import java.util.Scanner;

class HR{
	int id;
	String name;
	double salary;
	double commission;
	
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
	void setCommission(double com)
	{
		this.commission=com;
	}
	void display()
	{
		System.out.println("HR ID is: "+this.id);
		System.out.println("HR Name is: "+this.name);
		System.out.println("HR Salary is: "+this.salary);
		System.out.println("HR Commission is: "+this.commission);
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
	double getCommission()
	{
		return this.commission;
	}
	
		
}//class HR ends here

class TestHR
{
	public static void main(String args[])
	{
		Scanner sc;
		sc=new Scanner(System.in);
		HR hr1;//reference
		hr1=new HR();//class ka variable
		System.out.println("Enter HR ID: ");
		int id=sc.nextInt();
		hr1.setId(id);
		System.out.println("Enter HR Name: ");
		sc.nextLine();
		String nm=sc.nextLine();
		hr1.setName(nm);
		System.out.println("Enter HR Salary: ");
		double sal=sc.nextDouble();
		hr1.setSalary(sal);
		System.out.println("Enter HR Commission: ");
		double com=sc.nextDouble();
		hr1.setCommission(com);
	}
	public static void main2(String args[])
	{
		HR hr1;//reference
		hr1=new HR();//class ka variable
		hr1.setId(301);
		hr1.setName("Viraj");
		hr1.setSalary(40000);
		hr1.setCommission(1000);
		System.out.println("\n");
		hr1.display();
		
		HR hr2;//reference
		hr2=new HR();//class ka variable
		hr2.setId(201);
		hr2.setName("Rajvir");
		hr2.setSalary(50000);
		hr2.setCommission(1200);
		System.out.println("\n");
		hr2.display();
		
		if(hr1.getId()>hr2.getId())
			System.out.println("hr1 id is greater!!");
		else
			System.out.println("hr2 id is greater!!");
		if(hr1.getSalary()>hr2.getSalary())
			System.out.println("hr1 Salary is greater!!");
		else
			System.out.println("hr2 Salary is greater!!");
		if(hr1.getCommission()>hr2.getCommission())
			System.out.println("hr1 Commission is greater!!");
		else
			System.out.println("hr2 Commission is greater!!");
	}
	public static void main1(String args[])
	{
		System.out.println("Hello HR1!!");
		HR hr1;//reference
		hr1=new HR();//class ka variable
		hr1.id=301;
		hr1.name="Viraj";
		hr1.salary=40000;
		hr1.commission=1000;
		System.out.println("HR ID is: "+hr1.id);
		System.out.println("HR Name is: "+hr1.name);
		System.out.println("HR Salary is: "+hr1.salary);
		System.out.println("HR Commission is: "+hr1.commission);
		System.out.println("\n");
		
		System.out.println("Hello HR2!!");
		HR hr2;//reference
		hr2=new HR();//class ka variable
		hr2.id=201;
		hr2.name="Rajvir";
		hr2.salary=50000;
		hr2.commission=1200;
		System.out.println("HR ID is: "+hr2.id);
		System.out.println("HR Name is: "+hr2.name);
		System.out.println("HR Salary is: "+hr2.salary);
		System.out.println("HR Commission is: "+hr2.commission);
		System.out.println("\n");
	}
}
		