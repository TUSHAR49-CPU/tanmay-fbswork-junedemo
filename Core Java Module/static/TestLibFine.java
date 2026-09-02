class Library{
	String userName;
	int lateDays;
	static double fineCharged;
	
	static {
		fineCharged=50;
	}
	
	Library() {
		
		this.userName = "NA";
		this.lateDays= 0;
	}
	Library(String userName, int lateDays) {
		
		this.userName = userName;
		this.lateDays = lateDays;
	}

	String getUserName() {
		return userName;
	}

	void setUserName(String userName) {
		this.userName = userName;
	}

	
	int getLateDays() {
		return lateDays;
	}

	void setLateDays(int late) {
		this.lateDays = lateDays;
	}

	static double getFineCharged() {
		return fineCharged;
	}

	static void setFineCharged(double fc) {
		Library.fineCharged = fc;
	}
	void display()
	{
		System.out.println("User Name:"+this.userName);
		System.out.println("Late Days:"+this.lateDays);
		System.out.println("Fine Charged:"+this.fineCharged);
	}
	void calculate()
	{
		double totalFine=lateDays*fineCharged;
		System.out.println("Total Fine:"+totalFine);
	}
	
}
class TestLibFine{

	public static void main(String[] args) {
		
		Library l1=new Library("Viraj",5);
		l1.display();
		l1.calculate();
		
		Library l2=new Library("Sahil",10);
		l2.display();
		l2.calculate();

		Library l3=new Library("Rajvir",15);
		l3.display();
		l3.calculate();

		Library.setFineCharged(60);
		l1.display();
		l1.calculate();
		l2.display();
		l2.calculate();
		l3.display();
		l3.calculate();

	}

}
