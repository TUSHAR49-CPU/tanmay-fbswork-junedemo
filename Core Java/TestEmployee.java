import java.util.Scanner;

class Employee{
	int id;
	String name;
	double salary;
	
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
	void display()
	{
		System.out.println("Employee ID is: "+this.id);
		System.out.println("Employee Name is: "+this.name);
		System.out.println("Employee Salary is: "+this.salary);
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
	
}//class Employee ends here

class TestEmployee
{
	public static void main(String args[])
	{
		Scanner sc;
		sc=new Scanner(System.in);
		Employee e1;//reference
		e1=new Employee();//class ka variable
		System.out.println("Enter Employee ID: ");
		int id=sc.nextInt();
		e1.setId(id);
		System.out.println("Enter Employee Name: ");
		sc.nextLine();
		String nm=sc.nextLine();
		e1.setName(nm);
		System.out.println("Enter Employee Salary: ");
		double sal=sc.nextDouble();
		e1.setSalary(sal);
	}
	public static void main2(String args[])
	{
		Employee e1;//reference
		e1=new Employee();//class ka variable
		e1.setId(408);
		e1.setName("Viraj");
		e1.setSalary(40000);
		System.out.println("\n");
		e1.display();
		
		Employee e2;//reference
		e2=new Employee();//class ka variable
		e2.setId(410);
		e2.setName("Sahil");
		e2.setSalary(50000);
		System.out.println("\n");
		e2.display();
		
		if(e1.getId()>e2.getId())
			System.out.println("s1 id is greater!!");
		else
			System.out.println("s2 id is greater!!");
		if(e1.getSalary()>e2.getSalary())
			System.out.println("s1 Salary is greater!!");
		else
			System.out.println("s2 Salary is greater!!");
	}
		
	public static void main1(String args[])
	{
		System.out.println("Hello Employee1!!");
		Employee e1;//reference
		e1=new Employee();//class ka variable
		e1.id=408;
		e1.name="Viraj";
		e1.salary=40000;
		System.out.println("Employee ID is: "+e1.id);
		System.out.println("Employee Name is: "+e1.name);
		System.out.println("Employee Salary is: "+e1.salary);
		System.out.println("\n");
		
		System.out.println("Hello Employee2!!");
		Employee e2;//reference
		e2=new Employee();//class ka variable
		e2.id=410;
		e2.name="Sahil";
		e2.salary=50000;
		System.out.println("ID is: "+e1.id);
		System.out.println("Employee Name is: "+e1.name);
		System.out.println("Employee Salary is: "+e1.salary);
		System.out.println("\n");
		
		
	}
}
		