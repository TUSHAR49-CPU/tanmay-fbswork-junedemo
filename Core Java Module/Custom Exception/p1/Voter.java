package p1;

public class Voter {
	int age;

	Voter(int age) {
		
		this.age = age;
	}
	public void verifyAge() throws InvalidAgeException{
		if(this.age<18) {
			throw new InvalidAgeException("You are not eligible to Vote!!!");
		}else {
			System.out.println("You are Eligible to Vote!!!");
		}
	}
	
}
