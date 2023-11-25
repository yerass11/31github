package time;

public class Time {
	private int hour;
	private int minute;
	private int second;

	public Time(int hour, int minute, int second) {
		this.hour = hour;
		this.minute = minute;
		this.second = second;
	}

	public String toUniversalFormat() {
		return String.format("%02d:%02d:%02d", hour, minute, second);
	}

	public String toStandardFormat() {
		String period = (hour < 12) ? "AM" : "PM";
		int standardHour = (hour == 0 || hour == 12) ? 12 : hour % 12;
		return String.format("%02d:%02d:%02d %s", standardHour, minute, second, period);
	}

	public static Time add(Time time1, Time time2) {
		int newHour = (time1.hour + time2.hour + (time1.minute + time2.minute) / 60) % 24;
		int newMinute = (time1.minute + time2.minute + (time1.second + time2.second) / 60) % 60;
		int newSecond = (time1.second + time2.second) % 60;
		return new Time(newHour, newMinute, newSecond);
	}

	public void add(Time otherTime) {
		this.hour = (this.hour + otherTime.hour + (this.minute + otherTime.minute) / 60) % 24;
		this.minute = (this.minute + otherTime.minute + (this.second + otherTime.second) / 60) % 60;
		this.second = (this.second + otherTime.second) % 60;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Time time1 = new Time(15, 30, 45);
		Time time2 = new Time(4, 45, 20);
		System.out.println("Time 1 (Universal): " + time1.toUniversalFormat());
		System.out.println("Time 1 (Standard): " + time1.toStandardFormat());

		System.out.println("Time 2 (Universal): " + time2.toUniversalFormat());
		System.out.println("Time 2 (Standard): " + time2.toStandardFormat());

		Time sumStatic = Time.add(time1, time2);
		System.out.println("Sum (Static Method): " + sumStatic.toUniversalFormat());

		time1.add(time2);
		System.out.println("Sum (Instance Method): " + time1.toUniversalFormat());
		System.out.println("Time(sum) (Standard): " + sumStatic.toStandardFormat());
	}
}
