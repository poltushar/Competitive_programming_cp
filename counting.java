package competativeprogramming;

import java.io.*;
import java.util.Scanner;

// Number of ways in which
// participant can take part.

// Java program to count ways to
// write 'n' as sum of digits

public class counting {

    // Function to count 'num' as
    // sum of digits(1, 2, 3, 4)
    static int countWays(int num) {

        // Initialize dp[] array
        int[] dp = new int[num + 1];
        int MOD = (int) 1E9 + 7;

        // Base case
        dp[1] = 2;

        for (int i = 2; i <= num; ++i) {
            // Initialize the current
            // dp[] array as '0'
            dp[i] = 0;

            for (int j = 1; j <= 3; ++j) {
                // if i == j then there is
                // only one way to write with
                // element itself 'i'
                if (i - j == 0)
                    dp[i] += 1;

                // If j == 1, then there exist
                // two ways, one from '1' and
                // other from '4'
                else if (j == 1)
                    dp[i] += dp[i - j] * 2;

                // if i - j is positive then
                // pick the element from 'i-j'
                // element of dp[] array
                else if (i - j > 0)
                    dp[i] += dp[i - j];

                // Check for modulus
                if (dp[i] >= MOD)
                    dp[i] %= MOD;
            }

        }

        // return the final answer
        return dp[num];
    }

    // Driver code
    static public void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // int n = 2;
        System.out.println(" output=" + countWays(n));

    }
}

// This code is contributed by vt_m
