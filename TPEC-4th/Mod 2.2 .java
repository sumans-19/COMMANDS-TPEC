import java.util.Scanner;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int testCases = Integer.parseInt(in.nextLine());
        
        while (testCases > 0) {
            String pattern = in.nextLine();
            
            try {
                // Try compiling the pattern
                Pattern.compile(pattern);
                System.out.println("Valid");
            } catch (PatternSyntaxException e) {
                // If pattern is invalid, catch the exception and print "Invalid"
                System.out.println("Invalid");
            }
            
            testCases--; // Decrease the test case count
        }
        
        in.close(); // Close the scanner
    }
}
