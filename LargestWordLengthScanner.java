import java.util.Scanner;

public class LargestWordLengthScanner {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter words separated by spaces:");
        String input = scanner.nextLine();  // Read full line of words
        String[] words = input.split("\\s+"); // Split words by spaces

        String largestWord = "";
        int maxLength = 0;

        for (String word : words) {
            if (word.length() > maxLength) {
                maxLength = word.length();
                largestWord = word;
            }
        }

        System.out.println("The largest word is: \"" + largestWord + "\" with length: " + maxLength);
        scanner.close();
    }
}
