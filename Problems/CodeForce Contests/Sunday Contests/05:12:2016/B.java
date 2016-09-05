/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

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
        
        Scanner scan = new Scanner(System.in);
        String a1 = scan.nextLine();
        String a2 = scan.nextLine();
        String a3 = "";
        int i;
        for (i = 0; i < a1.length(); i++) {
            if (a1.charAt(i) != a2.charAt(i)) {
                a3 += '1';
                
            } else {
                a3 += '0';
            }
        }
        System.out.println(a3);
    }
    
}
