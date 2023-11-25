package problem1;

public class LockScreen extends SignUp implements Password {
	
	public LockScreen (String Password, String RePassword) {
		super(Password,RePassword);
	}
	
	
	@Override
	public String writePassword() {
		
		return Password;
		
	}

	@Override
	public String ReWritePassword() {
		
			if (Password.equals(RePassword)) {
					return "Wellcome";
			}
			else {
					return "Incorrect password";
			}
		}
		
	}
	


