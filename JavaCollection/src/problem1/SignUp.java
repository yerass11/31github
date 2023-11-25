package problem1;

public  abstract class SignUp implements Password, Email{
	

		String Email;
		String Code;
		String SettedCode;
		
		String Password;
		String RePassword;
		
		public SignUp(String Password, String RePassword) {
			this.Password = Password;
			this.RePassword = RePassword;
		}
		
		public SignUp(String Email,String Code, String SettedCode, String Password, String RePassword) {
			
			this.Email = Email;
			this.Code = Code;
			this.SettedCode = SettedCode;
			this.Password = Password;
			this.RePassword = RePassword;
			
		}
		
		@Override
		public String writePassword() {
			return Password;
		}

		@Override
		public String ReWritePassword() {
			if(RePassword.equals(Password)) {
				return "You are successfully signed up";
			}
			else {
				return "Incorrect password";
			}
		}

	@Override
	public String SetEmail() {
		return Email;
	}


	@Override
	public String GetCode() {
		if(Code.equals(SettedCode)) {
			return "Your email passed";
			}
		else {
			return "incorrect code";
		}

	
	}
	}	


	
	


