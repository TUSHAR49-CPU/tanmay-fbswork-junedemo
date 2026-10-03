package p1;

public class Test {

	public static void main(String[] args) {
		Voter v1=new Voter(16);
		try {
			v1.verifyAge();
		}catch(InvalidAgeException e) {
			System.out.println(e.getMessage());
			e.printStackTrace();
		}

	}

}
