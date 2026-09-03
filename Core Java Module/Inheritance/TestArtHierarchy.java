class Artist{
	String name;
	int age;
	
	Artist() {
		super();
		this.name = "na";
		this.age = 0;
	}

	Artist(String name, int age) {
		super();
		this.name = name;
		this.age = age;
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
	public String toString() {
		return "Name:"+this.name+"\nAge:"+this.age;
	}
	
}
class Painter extends Artist{
	String paintingStyle;
	String mediumUsed;
	int numberOfPaintings;
	
	Painter() { 
		super();
		this.paintingStyle = "PS";
		this.mediumUsed = "MU"; 
		this.numberOfPaintings = 0; 
	} 
	Painter(String name, int age, String paintingStyle, String mediumUsed, int numberOfPaintings) { 
		super(name, age);
		this.paintingStyle = paintingStyle; 
		this.mediumUsed = mediumUsed;
		this.numberOfPaintings = numberOfPaintings;
	}
	String getPaintingStyle() {
		return paintingStyle;
	}
	void setPaintingStyle(String paintingStyle) {
		this.paintingStyle = paintingStyle;
	}
	String getMediumUsed() {
		return mediumUsed;
	}
	void setMediumUsed(String mediumUsed) {
		this.mediumUsed = mediumUsed;
	}
	int getNumberOfPaintings() {
		return numberOfPaintings;
	}
	void setNumberOfPaintings(int numberOfPaintings) {
		this.numberOfPaintings = numberOfPaintings;
	}
	void Performance() {
		System.out.println("Painter is Painting");
	}
	public String toString() {
		return super.toString()+"\nPainting Style:"+this.paintingStyle+"\nMedium Used:"+this.mediumUsed+"\nNumber of Paintings:"+this.numberOfPaintings;
	}
}
class Musician extends Artist{
	String instrument;
	String musicGenre; 
	int numberOfAlbums;
	
	Musician() { 
		super(); 
		this.instrument = "I";
		this.musicGenre = "MG";
		this.numberOfAlbums = 0; 
	} 
	
	Musician(String name, int age, String instrument, String musicGenre, int numberOfAlbums) { 
		super(name, age);
		this.instrument = instrument;
		this.musicGenre = musicGenre; 
		this.numberOfAlbums = numberOfAlbums;
	}

	String getInstrument() {
		return instrument;
	}

	void setInstrument(String instrument) {
		this.instrument = instrument;
	}

	String getMusicGenre() {
		return musicGenre;
	}

	void setMusicGenre(String musicGenre) {
		this.musicGenre = musicGenre;
	}

	int getNumberOfAlbums() {
		return numberOfAlbums;
	}

	void setNumberOfAlbums(int numberOfAlbums) {
		this.numberOfAlbums = numberOfAlbums;
	}
	void Performance() {
		System.out.println("Musician is Performing");
	}
	public String toString() {
		
		return super.toString()+"\nInstrument:"+this.instrument+"\nMusic Genre:"+this.musicGenre+"\nNumber of Albums:"+this.numberOfAlbums;
	}
	

}
class Actor extends Artist{
	String filmIndustry;
	int numberOfMovies;
	
	Actor() { 
		super();
		this.filmIndustry = "FI";
		this.numberOfMovies = 0;
		} 
	
	Actor(String name, int age, String filmIndustry, int numberOfMovies) { 
		super(name, age); 
		this.filmIndustry = filmIndustry; 
		this.numberOfMovies = numberOfMovies; 
	}

	String getFilmIndustry() {
		return filmIndustry;
	}

	void setFilmIndustry(String filmIndustry) {
		this.filmIndustry = filmIndustry;
	}

	int getNumberOfMovies() {
		return numberOfMovies;
	}

	void setNumberOfMovies(int numberOfMovies) {
		this.numberOfMovies = numberOfMovies;
	}
	void Performance() {
		System.out.println("Actor is Acting");
	}
	public String toString() {
	
		return super.toString()+"\nFilm Industry:"+this.filmIndustry+"\nNumber of Movies:"+this.numberOfMovies;
	}
}
class TestArtHierarchy {

	public static void main(String[] args) {
		Artist a1;
		
		a1 = new Painter( "Picasso", 91, "Cubism", "Oil", 5000 ); 
		System.out.println(a1);
		
		a1 = new Musician( "A R Rahman", 59, "Piano", "Film Music", 20 ); 
		System.out.println(a1);
		
		a1 = new Actor( "Tiger Shroff", 38, "Bollywood", 40 );
		System.out.println(a1);

	}

}
