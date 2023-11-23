package problem1b;

import java.util.*;

public class LibraryItemTest {

	public static void main(String[] args) {
		
		ArrayList<LibraryItem> books = new ArrayList<>();
		
		books.add(new Book("Abay zholy", "Mukhtar Auezov", 1942, 357));
		books.add(new Book("New Area", "Wallker Rack", 1918, 213));
	
		for(LibraryItem book : books) {
			System.out.println(book.getInfo());
		}
		
	}
}
