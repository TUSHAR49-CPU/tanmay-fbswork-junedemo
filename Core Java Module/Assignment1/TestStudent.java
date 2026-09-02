import java.util.Scanner;

class Student
{
	int frn;
	String studentName;
	double distanceCovered;
	
	void setFrn(int fn)
	{
		this.frn=fn;
	}
	void setStudentName(String sn)
	{
		this.studentName=sn;
	}
	void setDistanceCovered(double dc)
	{
		this.distanceCovered=dc;
	}
	void display()
	{
		System.out.println("Frn is: "+this.frn);
		System.out.println("Student Name is: "+studentName);
		System.out.println("Distance Covered is: "+this.distanceCovered);
	}
	int getFrn()
	{
		return this.frn;
	}
	String getStudentName()
	{
		return this.studentName;
	}
	double getDistanceCovered()
	{
		return this.distanceCovered;
	}
	Student() {
		this.frn = 2409;
		this.studentName = "Viraj";
		this.distanceCovered = 8.8;
	}

	Student(int frn, String studentName, double distanceCovered) {
		super();
		this.frn = frn;
		this.studentName = studentName;
		this.distanceCovered = distanceCovered;
	}

}//class Student ends here

class TestStudent
{
	public static void main(String args[]) {
		Student s1;//reference
		s1=new Student();//class ka variable
		s1.display();
	}
	public static void main3(String args[])
	{
		Scanner sc;
		sc=new Scanner(System.in);
		Student s1;//reference
		s1=new Student();//class ka variable
		System.out.println("Enter Frn number: ");
		int frn=sc.nextInt();
		s1.setFrn(frn);
		System.out.println("Enter Student Name: ");
		sc.nextLine();
		String sn=sc.nextLine();
		s1.setStudentName(sn);
		System.out.println("Enter Distance Covered: ");
		double dc=sc.nextDouble();
		s1.setDistanceCovered(dc);
	}
	public static void main2(String args[])
	{
		Student s1;//reference
		s1=new Student();//class ka variable
		s1.setFrn(2408);
		s1.setStudentName("Viraj");
		s1.setDistanceCovered(4.9);
		System.out.println("\n");
		s1.display();
		
		Student s2;//reference
		s2=new Student();//class ka variable
		s2.setFrn(2407);
		s2.setStudentName("Sahil");
		s2.setDistanceCovered(5.9);
		System.out.println("\n");
		s2.display();
		
		if(s1.getFrn()>s2.getFrn())
			System.out.println("s1 frn comes First!!");
		else
			System.out.println("s2 frn comes First!!");
		if(s1.getDistanceCovered()>s2.getDistanceCovered())
			System.out.println("s1 distanceCovered is most!!");
		else
			System.out.println("s2 distanceCovered is most!!");	
	}
	public static void main1(String args[])
	{
		System.out.println("Hello Student1!!");
		Student s1;//reference
		s1=new Student();//class ka variable
		s1.frn=2408;
		s1.studentName="Viraj";
		s1.distanceCovered=400;
		System.out.println("Frn is: "+s1.frn);
		System.out.println("Student Name is: "+s1.studentName);
		System.out.println("Distance Covered is: "+s1.distanceCovered);
		System.out.println("\n");
		
		System.out.println("Hello Student2!!");
		Student s2;//reference
		s2=new Student();//class ka variable
		s2.frn=2407;
		s2.studentName="Sahil";
		s2.distanceCovered=300;
		System.out.println("Frn is: "+s2.frn);
		System.out.println("Student Name is: "+s2.studentName);
		System.out.println("Distance Covered is: "+s2.distanceCovered);
		System.out.println("\n");	
	}
}
		