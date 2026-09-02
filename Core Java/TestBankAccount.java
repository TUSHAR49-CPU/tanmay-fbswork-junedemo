import java.util.Scanner;

class BankAccount
{
	int accountNumber;
	String holderName;
	double currentBalance;
	static double interestRate;
	
	static {
		interestRate=8;
	}
	
	BankAccount()
	{
		this.accountNumber=00;
		this.holderName="NA";
		this.currentBalance=00;
	}
	BankAccount(int accountNumber,String holderName,double currentBalance)
	{
		this.accountNumber=accountNumber;
		this.holderName=holderName;
		this.currentBalance=currentBalance;
	}

	int getAccountNumber() {
		return accountNumber;
	}
	void setAccountNumber(int accountNumber) {
		this.accountNumber = accountNumber;
	}
	String getHolderName() {
		return holderName;
	}
	void setHolderName(String holderName) {
		this.holderName = holderName;
	}
	double getCurrentBalance() {
		return currentBalance;
	}
	void setCurrentBalance(double currentBalance) {
		this.currentBalance = currentBalance;
	}
	static void setInterestRate(double ir) {
		interestRate = ir;
	}
	static double getInterestRate() {
		return interestRate;
	}
	
	void display()
	{
		System.out.println("Account Number is:"+this.accountNumber);
		System.out.println("Accountholder Name is:"+this.holderName);
		System.out.println("Accountholder Balance is:"+this.currentBalance);
		System.out.println("Interest Rate: "+this.interestRate);
		System.out.println();
	}
		
}//class BankAccount ends here

class TestBankAccount
{
	public static void main(String args[])
	{
		BankAccount ba1=new BankAccount(10,"Viraj",20000);
		ba1.display();
		
		BankAccount ba2=new BankAccount(20,"Sahil",30000);
		ba2.display();
		
		BankAccount ba3=new BankAccount(40,"Tanmay",50000);
		ba3.display();
		
		BankAccount.setInterestRate(7);
		ba1.display();
		ba2.display();
		ba3.display();
	}
	public static void main4(String args[])
	{
		BankAccount ba1;//reference
		ba1=new BankAccount();//class ka variable
		ba1.display();
	}
	public static void main3(String args[])
	{
		Scanner sc;
		sc=new Scanner(System.in);
		BankAccount ba1;//reference
		ba1=new BankAccount();//class ka variable
		System.out.println("Enter Account Number: ");
		int acnm=sc.nextInt();
		ba1.setAccountNumber(acnm);
		System.out.println("Enter Account Holder Name: ");
		sc.nextLine();
		String hn=sc.nextLine();
		ba1.setHolderName(hn);
		System.out.println("Enter Current Balance: ");
		double cbal=sc.nextDouble();
		ba1.setCurrentBalance(cbal);
		System.out.println("Enter Interest Rate: ");
		double intrat=sc.nextDouble();
		ba1.setInterestRate(intrat);
	}
	
	public static void main2(String args[])
	{
		BankAccount ba1;//reference
		ba1=new BankAccount();//class ka variable
		ba1.setAccountNumber(10620100);
		ba1.setHolderName("Viraj Londhe");
		ba1.setCurrentBalance(90000);
		ba1.setInterestRate(8.6);
		System.out.println("\n");
		ba1.display();
		
		BankAccount ba2;//reference
		ba2=new BankAccount();//class ka variable
		ba2.setAccountNumber(20640100);
		ba2.setHolderName("Yash Patil");
		ba2.setCurrentBalance(100000);
		ba2.setInterestRate(7.6);
		System.out.println("\n");
		ba2.display();
		
		if(ba1.getAccountNumber()>ba2.getAccountNumber())
			System.out.println("ba1 AccountNumber is greater!!");
		else
			System.out.println("ba2 AccountNumber is greater!!");
		if(ba1.getCurrentBalance()>ba2.getCurrentBalance())
			System.out.println("ba1 Current Balance is greater!!");
		else
			System.out.println("ba2 Current Balance is greater!!");
		if(ba1.getInterestRate()>ba2.getInterestRate())
			System.out.println("ba1 Interest Rate is greater!!");
		else
			System.out.println("ba2 Interest Rate is greater!!");
	}

	public static void main1(String args[])
	{
		System.out.println("Hello BankAccount1!!");
		BankAccount ba1;//reference
		ba1=new BankAccount();//class ka variable
		ba1.accountNumber=10620100;
		ba1.holderName="Viraj Londhe";
		ba1.currentBalance=90000;
		ba1.interestRate=8.6;
		
		System.out.println("Account Number is:"+ba1.accountNumber);
		System.out.println("Accountholder Name is:"+ba1.holderName);
		System.out.println("Accountholder Balance is:"+ba1.currentBalance);
		System.out.println("Interest Rate is:"+ba1.interestRate);
		System.out.println("\n");
		
		System.out.println("Hello BankAccount2!!");
		BankAccount ba2;//reference
		ba2=new BankAccount();//class ka variable
		ba2.accountNumber=20640100;
		ba2.holderName="Yash Patil";
		ba2.currentBalance=100000;
		ba2.interestRate=7.6;
		
		System.out.println("Account Number is:"+ba2.accountNumber);
		System.out.println("Accountholder Name is:"+ba2.holderName);
		System.out.println("Accountholder Balance is:"+ba2.currentBalance);
		System.out.println("Interest Rate is:"+ba2.interestRate);
		System.out.println("\n");
	}
}

		