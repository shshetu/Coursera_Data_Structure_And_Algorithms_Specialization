import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class MaxPairWiseProduct {
    public static void main(final String[] args) {
        FastScanner fastScanner = new FastScanner(System.in);
        // Do Stress Test
        while(true){
        //Generate : random index, insert random numbers inside the array
        int randomIndex = (int)(Math.random()*12);
        System.out.println("Generated index: "+randomIndex);
        int[] randomNumbersArray = new int[randomIndex];
        System.out.print("Generated numbers: ");
        for (int i = 0; i < randomNumbersArray.length; i++) {
            randomNumbersArray[i] = (int)(Math.random()*1000);
            System.out.print(" "+randomNumbersArray[i]);
        }
        // Call the method
        System.out.println("\nOutput: "+findPairWiseMaximumProduct(randomNumbersArray));
        }
        
        // int index = fastScanner.nextInt();
        // int[] numbersArray = new int[index];
        // for (int i = 0; i < numbersArray.length; i++) {
        //     numbersArray[i] = fastScanner.nextInt();
        // }
        // System.out.println(findPairWiseMaximumProduct(numbersArray));
    }

    // Create a method: to find maximum pair wise product. input: Array of
    // Integers(int). return type: int
    static int findPairWiseMaximumProduct(int[] numbers) {
        // Create a variable maximumProduct
        int maximumProduct = 0;

        // Use 2 for loops. Inside 2nd loop the local variable will start from : i+1
        for (int i = 0; i < numbers.length; i++) {
            for (int j = i + 1; j < numbers.length; j++) {
                // logic: numbers[i]*numbers[j]
                // Use Math.max() function to the maximum
                maximumProduct = Math.max(maximumProduct, numbers[i] * numbers[j]);
            }
        }
        return maximumProduct;
    }

}

// Create class for taking input using Buffered Reader
class FastScanner {
    // Create 2 variables: BufferedReader and StringTokenizer type
    BufferedReader bufferedReader;
    StringTokenizer stringTokenizer;

    // Using Parameterized constructor, create an object of the BufferedRead
    FastScanner(final InputStream inputStream) {
        try {
            bufferedReader = new BufferedReader(new InputStreamReader(inputStream));
        } catch (final Exception e) {
            e.printStackTrace();
        }
    }

    // Create method: next()
    String next() {
        while (stringTokenizer == null || !stringTokenizer.hasMoreTokens()) {
            // Create an object of String tokenizer using the buffered reader
            try {
                stringTokenizer = new StringTokenizer(bufferedReader.readLine());
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        // return nextToken
        return stringTokenizer.nextToken();
    }

    // Create method: nextInt(), returns by parsing the string to integer
    int nextInt() {
        return Integer.parseInt(next());
    }
}