import java.io.*;
import java.security.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        // Read input string from STDIN
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        scanner.close();
        
        try {
            // Get the MessageDigest instance for SHA-256
            MessageDigest digest = MessageDigest.getInstance("SHA-256");
            
            // Compute the hash
            byte[] hashBytes = digest.digest(input.getBytes());
            
            // Convert the byte array to a hexadecimal string
            StringBuilder hexString = new StringBuilder();
            for (byte b : hashBytes) {
                hexString.append(String.format("%02x", b));
            }
            
            // Output the hexadecimal representation of the hash
            System.out.println(hexString.toString());
            
        } catch (NoSuchAlgorithmException e) {
            System.out.println("Error: SHA-256 algorithm not found.");
        }
    }
}
