import java.util.Scanner;

// Main class to handle user input
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input for number of rows and columns
        System.out.print("Enter number of rows: ");
        int r = scanner.nextInt();
        System.out.print("Enter number of columns: ");
        int c = scanner.nextInt();

        // Declare matrix with user-defined size
        int[][] matrix = new int[r][c];

        // Input for matrix elements
        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        // Calculate and display the sum of each row
        System.out.println("Sum of Rows:");
        for (int i = 0; i < r; i++) {
            long rowSum = 0;
            for (int j = 0; j < c; j++) {
                rowSum += matrix[i][j];
            }
            System.out.println("Row " + (i + 1) + ": " + rowSum);
        }

        scanner.close();
    }
}
