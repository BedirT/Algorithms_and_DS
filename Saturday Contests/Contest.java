/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package contest;

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author BedirTapkan
 */
public class Contest {
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int i;
        boolean fail = false;
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        int[] dirty = new int[m];
        for (i = 0; i < m; i++) {
            dirty[i] = scan.nextInt();
        }
        Arrays.sort(dirty, 0, dirty.length);
        
        if (dirty[m-1] == n || dirty[0] == 1) {
            fail = true;
        }
        
        for (i = 0; i < m - 1; i++) {
            if (dirty[i] + 1 == dirty[i + 1] && dirty[i + 1] + 1 == dirty[i + 2]) {
                fail = true;
                break;
            }
        }
        if (fail) {
            System.out.println("NO");
        } else {
            System.out.println("YES");
        }
    }
    
}
