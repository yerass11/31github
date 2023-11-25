package problem1;

public class Test {
	public static void main(String[] args) {


		Browser browser1 = new Browser("something@kbtu.kz", "abc23", "abc23", "554411", "554411");
		
		
		browser1.SetEmail();
		System.out.println(browser1.GetCode());
		
		
		browser1.writePassword();
		System.out.println(browser1.ReWritePassword());
		
		
		
		LockScreen lock = new LockScreen("1027", "1027" );
		
		lock.writePassword();
		System.out.println(lock.ReWritePassword());
	
		
		
	}
	
}
