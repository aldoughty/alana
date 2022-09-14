public class Artist {

   private String artistName;
   private int birthYear;
   private int deathYear;

   public Artist() {
      artistName = "unknown";
      birthYear = -1;
      deathYear = -1;
   }

   public Artist(String artistName, int birthYear, int deathYear) {
      this.artistName = artistName;
      this.birthYear = birthYear;
      this.deathYear = deathYear;
   }

   public String getName() { return artistName; }

   public int getBirthYear() { return birthYear; }

   public int getDeathYear() { return deathYear; }

   public void printInfo() {                           
      System.out.print("Artist: ");
   if (birthYear > 0 && deathYear > 0)
      System.out.println(artistName + " (" + birthYear + " to " + deathYear + ")");
   else if (birthYear > 0 && deathYear < 0)
      System.out.println(artistName + " (" + birthYear + " to present)");
   else System.out.println(artistName + " (unknown)");
   }
}
