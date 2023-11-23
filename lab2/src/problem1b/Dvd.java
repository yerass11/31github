package problem1b;

public class Dvd extends LibraryItem {
	private int year; 
	
	public Dvd(String title, String author, int publicationYear, int year) {
		super(title, author, publicationYear);
		this.year = year;
	}
	
	@Override
	public String getInfo() {
		return title + " "  + author + " " + publicationYear + " " + year;
	}	
}
 