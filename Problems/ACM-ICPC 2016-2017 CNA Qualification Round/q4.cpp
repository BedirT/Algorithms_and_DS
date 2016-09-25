//#include <iostream>
//#include <climits>
//using namespace std;
//
//int main ()
//{
//    int t;
//    cin >> t;
//    int l1,a1,l2,a2,lT,aT;
//    int r2, holder1, holder2;
//    while (t--) {
//        cin >> l1 >> a1 >> l2 >> a2 >> lT >> aT;
//        int counter = 0;
//        for(int i = 0 ; i <= lT/l1 ; ++i){
//            r2 = (lT - aT - i * (l1-a1))/(l2-a2);
//            if(r2*l2+i*l1 == lT && r2*a2 + i*a1 == aT)
//                holder1 = i, holder2 = r2, counter++;
//            if(counter == 2)
//                break;
//        }
//        if (counter == 1) {
//            cout << holder1 << " " << holder2 << endl;
//        }else
//            cout << "?" << endl;
//        
//    }
//    return 0;
//}

#include <iostream>
using namespace std;

int main ()
{
    int t;
    int aa1,aa2,ll1,ll2,aaT,llT;
    int a1, a2, l1, l2, aT, lT;
    int x, y;
    cin >> t;
    while (t--) {
        cin >> ll1 >> aa1 >> ll2 >> aa2 >> llT >> aaT;
        l1 = ll1*aa1, l2 = ll2*aa1, lT = llT*aa1;
        a1 = aa1*ll1, a2 = aa2*ll1, aT = aaT*ll1;
        
        if ((l2-a2) && l1 && !( (lT-aT) % (l2-a2) ) && !( (lT-l2*y) % l1 ))
        {
            y = (lT-aT)/(l2-a2);
            x = (lT-l2*y)/l1;
            cout << x << " " << y << endl;
        }
        else
            cout << "?" << endl;
    }
    
}
