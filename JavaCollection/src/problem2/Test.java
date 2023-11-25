package problem2;

public class Test {
	public static void main(String [] args) {

		Bird eagle = new Bird(true, 10000.101);

		System.out.println(eagle.MoveForward());

		System.out.println(eagle.canFly());

		System.out.println(eagle.maxHeight());
	}

}
