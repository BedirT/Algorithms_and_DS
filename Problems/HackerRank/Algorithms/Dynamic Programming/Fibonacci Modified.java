import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Solution {
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        BigInteger t1 = new BigInteger(sc.next());
        BigInteger t2 = new BigInteger(sc.next());
        int n = sc.nextInt();
        BigInteger holder = new BigInteger("0");
        
        for(int i = 0 ; i < n-2 ; ++i){
            
            holder = t2;
            t2 = t1.add(t2.multiply(t2));
            //System.out.println(t2);
            t1 = holder;
            
        }
        
        System.out.println(t2);
        
    }
}