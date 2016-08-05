// https://www.hackerrank.com/challenges/countingsort4
import java.io.*;
import java.util.*;

public class CountingSort4 {
    
    public static void main(String[] args) {
        
        Scanner in =new Scanner(System.in);
        int n=in.nextInt();
        List<StringBuilder> ar=new ArrayList<>();
        for(int i=0;i<100;i++){
            StringBuilder a=new StringBuilder();
            ar.add(a);
        }
        
        for(int i=0;i<n;i++){
            int num=in.nextInt();
            String word=in.next();
            if (i>=n/2){
                ar.get(num).append(word);
                ar.get(num).append(" ");
            }else{
                ar.get(num).append("-");
                ar.get(num).append(" ");
            }
            
            
        }
        for(int i=0;i<100;i++){
            if(ar.get(i).length()>0){
                System.out.print(ar.get(i));
            }
            
        }
        
    }
}