import java.util.Scanner;
class PlacedStudent
{
	int frn;
	String studentName;
	String companyName;
	String designation;
	double distanceCovered;
	
	void setFrn(int fn)
	{
		this.frn=fn;
	}
	void setStudentName(String sn)
	{
		this.studentName=sn;
	}
	void setCompanyName(String cn)
	{
		this.companyName=cn;
	}
	void setDesignation(String des)
	{
		this.designation=des;
	}
	void setDistanceCovered(double dc)
	{
		this.distanceCovered=dc;
	}
	void display()
	{
		System.out.println("Student Frn is: "+this.frn);
		System.out.println("Student Name is: "+this.studentName);
		System.out.println("Company Name is: "+this.companyName);
		System.out.println("Designation is: "+this.designation);
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
	String getCompanyName()
	{
		return this.companyName;
	}
	String getDesignation()
	{
		return this.designation;
	}
	double getDistanceCovered()
	{
		return this.distanceCovered;
	}
	PlacedStudent() {
		this.frn = 2409;
		this.studentName = "Viraj";
		this.companyName="Infosys";
		this.designation="FullStackDeveloper";
		this.distanceCovered = 8.8;
	}

	PlacedStudent(int frn, String studentName,String companyName,String Designation,double distanceCovered) {
		super();
		this.frn = frn;
		this.studentName = studentName;
		this.companyName= companyName;
		this.designation= designation;
		this.distanceCovered = distanceCovered;
	}
}//class PlacedStudent ends here

class TestPlacedStudent
{
	public static void main(String args[]) {
		PlacedStudent ps1;//reference
		ps1=new PlacedStudent();//class ka variable
		ps1.display();
	}

	public static void main3(String args[])
	{
		Scanner sc;
		sc=new Scanner(System.in);
		PlacedStudent ps1;//reference
		ps1=new PlacedStudent();//class ka variable
		System.out.println("Enter Frn number: ");
		int frn=sc.nextInt();
		ps1.setFrn(frn);
		System.out.println("Enter Student Name: ");
		sc.nextLine();
		String sn=sc.nextLine();
		ps1.setStudentName(sn);
		System.out.println("Enter Company Name: ");
		String cn=sc.nextLine();
		ps1.setCompanyName(cn);
		System.out.println("Enter Designation: ");
		String des=sc.nextLine();
		ps1.setDesignation(des);
		System.out.println("Enter Distance Covered: ");
		double dc=sc.nextDouble();
		ps1.setDistanceCovered(dc);
	}
	public static void main2(String args[])
	{
		PlacedStudent ps1;//reference
		ps1=new PlacedStudent();//class ka variable
		ps1.setFrn(2308);
		ps1.setStudentName("Raj");
		ps1.setCompanyName("Infosys");
		ps1.setDesignation("FullStackDeveloper");
		ps1.setDistanceCovered(7.6);
		System.out.println("\n");
		ps1.display();
		
		PlacedStudent ps2;//reference
		ps2=new PlacedStudent();//class ka variable
		ps2.setFrn(2310);
		ps2.setStudentName("Rajvir");
		ps2.setCompanyName("Wipro");
		ps2.setDesignation("WebDeveloper");
		ps2.setDistanceCovered(5.9);
		System.out.println("\n");
		ps2.display();
		
		if(ps1.getFrn()>ps2.getFrn())
			System.out.println("s1 frn comes first!!");
		else
			System.out.println("s2 frn comes first!!");
		if(ps1.getDistanceCovered()>ps2.getDistanceCovered())
			System.out.println("s1 Covers Distance the most!!");
		else
			System.out.println("s2 Covers Distance the most!!");
	}
		
	public static void main1(String args[])
	{
		System.out.println("Hello PlacedStudent1!!");
		PlacedStudent ps1;//reference
		ps1=new PlacedStudent();//class ka variable
		ps1.frn=2308;
		ps1.studentName="Raj";
		ps1.companyName="Infosys";
		ps1.designation="FullStackDeveloper";
		ps1.distanceCovered=200;
		System.out.println("Student Frn is: "+ps1.frn);
		System.out.println("Student Name is: "+ps1.studentName);
		System.out.println("Company Name is: "+ps1.companyName);
		System.out.println("Designation is: "+ps1.designation);
		System.out.println("Distance Covered is: "+ps1.distanceCovered);
		System.out.println("\n");
		
		System.out.println("Hello PlacedStudent2!!");
		PlacedStudent ps2;//reference
		ps2=new PlacedStudent();//class ka variable
		ps2.frn=2310;
		ps2.studentName="Rajvir";
		ps2.companyName="Wipro";
		ps2.designation="WebDeveloper";
		ps2.distanceCovered=100;
		System.out.println("Frn is: "+ps2.frn);
		System.out.println("Student Name is: "+ps2.studentName);
		System.out.println("Company Name is: "+ps2.companyName);
		System.out.println("Designation is: "+ps2.designation);
		System.out.println("Distance Covered is: "+ps2.distanceCovered);
		System.out.println("\n");	
	}
}
		