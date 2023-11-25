package problem4;

import java.util.*;

public class Person {
	private String name;

	public Person(String name) {
		this.name = name;

		}
		public String getName() {
	        return name;
		}

	    @Override
	    public String toString() {
	        return "Person [name=" + name + "]";
	    }

	@Override
		public boolean equals(Object o) {
			if (this == o)
				return true;
			if (o == null)
				return false;
			if (getClass() != o.getClass())
				return false;
		Person other = (Person) o;
		return Objects.equals(name, other.name);
	}



}


