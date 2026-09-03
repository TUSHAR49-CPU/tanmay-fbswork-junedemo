class Player{
	String name;
	int age;
	String country;
	int matchesPlayed;
	int jerseyNumber;
	
	Player() {
		super();
		this.name = "na";
		this.age = 0;
		this.country = "co";
		this.matchesPlayed = 0;
		this.jerseyNumber = 0;
	}
	Player(String name, int age, String country, int matchesPlayed, int jerseyNumber) {
		super();
		this.name = name;
		this.age = age;
		this.country = country;
		this.matchesPlayed = matchesPlayed;
		this.jerseyNumber = jerseyNumber;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		this.age = age;
	}

	String getCountry() {
		return country;
	}

	void setCountry(String country) {
		this.country = country;
	}

	int getMatchesPlayed() {
		return matchesPlayed;
	}

	void setMatchesPlayed(int matchesPlayed) {
		this.matchesPlayed = matchesPlayed;
	}

	int getJerseyNumber() {
		return jerseyNumber;
	}

	void setJerseyNumber(int jerseyNumber) {
		this.jerseyNumber = jerseyNumber;
	}
	public String toString() {
		
		return "Name: "+this.name+"\nAge: "+this.age+"\nCountry: "+this.country+"\nMatches Played: "+this.matchesPlayed+"\nJersey Number: "+this.jerseyNumber;
	}
	
	void display() {
		System.out.println("Name: " + name);
		System.out.println("Age: " + age); 
		System.out.println("Country: " + country); 
		System.out.println("Matches Played: " + matchesPlayed);
		System.out.println("Jersey Number: " + jerseyNumber); 
	}
	
}
class CricketPlayer extends Player{
	int totalRuns;
	int totalWickets;
	String battingStyle;
	String bowlingStyle;
	
	CricketPlayer() {
		super();
		this.totalRuns = 0;
		this.totalWickets = 0;
		this.battingStyle = "Ba";
		this.bowlingStyle = "Bs";
	}

	CricketPlayer(String name, int age, String country, int matchesPlayed, int jerseyNumber,int totalRuns, int totalWickets, String battingStyle, String bowlingStyle) {
		super(name,age,country,matchesPlayed,jerseyNumber);
		this.totalRuns = totalRuns;
		this.totalWickets = totalWickets;
		this.battingStyle = battingStyle;
		this.bowlingStyle = bowlingStyle;
	}

	int getTotalRuns() {
		return totalRuns;
	}

	void setTotalRuns(int totalRuns) {
		this.totalRuns = totalRuns;
	}

	int getTotalWickets() {
		return totalWickets;
	}

	void setTotalWickets(int totalWickets) {
		this.totalWickets = totalWickets;
	}

	String getBattingStyle() {
		return battingStyle;
	}

	void setBattingStyle(String battingStyle) {
		this.battingStyle = battingStyle;
	}

	String getBowlingStyle() {
		return bowlingStyle;
	}

	void setBowlingStyle(String bowlingStyle) {
		this.bowlingStyle = bowlingStyle;
	}

	public String toString() {
		
		return super.toString()+"Total Runs: "+this.totalRuns+"\nTotal Wickets: "+this.totalWickets+"\nBatting Style: "+this.battingStyle
				+"\nBowling Style: "+this.bowlingStyle;
	}
	
}
class FootballPlayer extends  Player{
	int totalGoals;
	String playingPosition;
	
	FootballPlayer() {
		super();
		this.totalGoals = 0;
		this.playingPosition = "PP";
	}
	FootballPlayer(String name, int age, String country, int matchesPlayed, int jerseyNumber,int totalGoals, String playingPosition) {
		super(name,age,country,matchesPlayed,jerseyNumber);
		this.totalGoals = totalGoals;
		this.playingPosition = playingPosition;
	}
	int getTotalGoals() {
		return totalGoals;
	}
	void setTotalGoals(int totalGoals) {
		this.totalGoals = totalGoals;
	}
	String getPlayingPosition() {
		return playingPosition;
	}
	void setPlayingPosition(String playingPosition) {
		this.playingPosition = playingPosition;
	}
	public String toString() {
		
		return super.toString()+"\nTotal Goals: "+this.totalGoals+"\nPlaying Position: "+this.playingPosition;
	}
}
class TestPlyHierarchy{

	public static void main(String[] args) {
		Player p1;
		
		p1=new CricketPlayer("Virat",38,"India",800,17,4000,50,"Right-Handed","Right-Arm Spinner");
		System.out.println(p1);
		
		p1=new FootballPlayer("Messi",40,"Argentina",300,10,400,"Striker");
		System.out.println(p1);
	}

}
