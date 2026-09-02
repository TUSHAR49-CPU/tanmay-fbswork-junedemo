import java.util.Scanner;
class Date{
	int day;
	int month;
	int year;
	String dow;
	
	void setDay(int d)
	{
		this.day=d;
	}
	void setMonth(int m)
	{
		this.month=m;
	}
	void setYear(int y)
	{
		this.year=y;
	}
	void setDOW(String d)
	{
		this.dow=d;
	}
	void display()
	{
		System.out.println("Day is:"+this.day);
		System.out.println("Month is:"+this.month);
		System.out.println("Month is:"+year);
		System.out.println("DateOfWeek is:"+dow);
	}
	int getDay()
	{
		return this.day;
	}
	int getMonth()
	{
		return this.month;
	}
	int getYear()
	{
		return this.year;
	}
	String getDOW()
	{
		return this.dow;
	}
	Date() {
		this.day = 15;
		this.month = 8;
		this.year = 1947;
		this.dow = "Friday";
	}
	Date(int day, int month, int year, String dow) {
		super();
		this.day = day;
		this.month = month;
		this.year = year;
		this.dow = dow;
	}
}//class date ends here

class TestDate
{
	public static void main(String args[])
	{
		Date d1;
		d1=new Date();
		d1.display();
	}
	public static void main3(String args[])
	{
		Scanner sc;
		sc=new Scanner(System.in);
		Date d1;
		d1=new Date();
		System.out.println("Enter Day: ");
		int d=sc.nextInt();
		d1.setDay(d);
		System.out.println("Enter Month: ");
		int m=sc.nextInt();
		d1.setMonth(m);
		System.out.println("Enter Year: ");
		int y=sc.nextInt();
		d1.setYear(y);
		System.out.println("Enter Day of Week: ");
		sc.nextLine();
		String dw=sc.nextLine();
		d1.setDOW(dw);
	}
	public static void main2(String args[])
	{
		Date d1;//reference
		d1=new Date();//class ka variable
		d1.setDay(9);
		d1.setMonth(12);
		d1.setYear(2004);
		d1.setDOW("Sunday");
		System.out.println("\n");
		d1.display();
		
		Date d2;//reference
		d2=new Date();//class ka variable
		d2.setDay(18);
		d2.setMonth(6);
		d2.setYear(2004);
		d2.setDOW("Monday");
		System.out.println("\n");
		d2.display();
		
		if(d1.getDay()>d2.getDay())
			System.out.println("d2 is elder!!");
		else
			System.out.println("d1 is elder!!");
		if(d1.getMonth()>d2.getMonth())
			System.out.println("d2 by month is elder!!");
		else
			System.out.println("d1 by month is elder!!");
		if(d1.getYear()>d2.getYear())
			System.out.println("d2 by year is elder!!");
		else
			System.out.println("d1 by year is elder!!");
		
	}
		
	public static void main1(String args[])
	{
		
		System.out.println("Date1 is!!");
		Date d1;//reference
		d1=new Date();//class ka variable
		d1.day=9;
		d1.month=12;
		d1.year=2004;
		d1.dow="Sunday";
		
		System.out.println("Day is: "+d1.day);
		System.out.println("Month is: "+d1.month);
		System.out.println("Year is: "+d1.year);
		System.out.println("DayofWeek is: "+d1.dow);
		System.out.println("\n");
		
		System.out.println("Date2 is!!");
		Date d2;//reference
		d2=new Date();//class ka variable
		d2.day=18;
		d2.month=6;
		d2.year=2004;
		d2.dow="Monday";
		
		System.out.println("Day is: "+d2.day);
		System.out.println("Month is: "+d2.month);
		System.out.println("Year is: "+d2.year);
		System.out.println("DayofWeek is: "+d2.dow);
	
	}
}
		