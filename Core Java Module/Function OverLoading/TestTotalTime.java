class Time{
	int hr,min,sec;

	Time() {
		super();
		this.hr = 0;
		this.min = 0;
		this.sec = 0;
	}
	Time(int hr, int min, int sec) {
		super();
		this.hr = hr;
		this.min = min;
		this.sec = sec;
	}	
}

class TimeOperation{
	void add(Time t1,Time t2) {
		int sec = t1.sec + t2.sec;
		int min = t1.min + t2.min; 
		int hr = t1.hr + t2.hr;
	
		if (sec >= 60) {
			min += sec / 60;
			sec = sec % 60;
		}
		if (min >= 60) {
			hr += min / 60; 
			min = min % 60;
		}
		hr = hr % 24;
		System.out.printf("%02d:%02d:%02d%n", hr, min, sec);
	}
	void add(Time t, int hours) {
		int hr = (t.hr + hours) % 24; 
		
		System.out.printf("%02d:%02d:%02d%n", hr, t.min, t.sec);
	} 
	void add(int minutes, Time t) {
		int min = t.min + minutes;
		int hr = t.hr + min / 60; 
		min = min % 60;
		hr = hr % 24;
		
		System.out.printf("%02d:%02d:%02d%n", hr, min, t.sec);
	}
	void add(Time t, int seconds, String unit) { 
		int sec = t.sec + seconds;
		int min = t.min + sec / 60;
		sec = sec % 60;
		int hr = t.hr + min / 60; 
		min = min % 60; 
		hr = hr % 24; 
		System.out.printf("%02d:%02d:%02d%n", hr, min, sec);
	}
}

class TestTotalTime{

	public static void main(String[] args) {
		
		Time t1 = new Time(10, 45, 50);
		Time t2 = new Time(5, 20, 30);
		
		TimeOperation to = new TimeOperation();
		
		System.out.print("Time + Time = ");
		to.add(t1, t2); 
		
		System.out.print("Time + Hours = "); 
		to.add(t1, 5);
		
		System.out.print("Time + Minutes = "); 
		to.add(30, t1); 
		
		System.out.print("Time + Seconds = ");
		to.add(t1, 25, "seconds");

	}

}
