#include <iostream>
using namespace std;

int main(){
    int n  = 1000;
    int i = 1;
    while(n!=0){
        cout<<n<<"  ";
        n = n -5;
        i = i + 1;
        if(i == 6) i = 1;
    }
}

/*সমস্যার বিবরণ
এমন একটি প্রোগ্রাম লিখতে হবে, যেটি 1 থেকে 1000 পর্যন্ত সবগুলো সংখ্যাকে বড়ো থেকে ছোটো ক্রমানুসারে প্রিন্ট করবে।

ইনপুট
কোনো ইনপুট নেই

আউটপুট
প্রতিটি লাইনে মোট 5 টি করে সংখ্যা থাকবে এবং প্রতিটি সংখ্যা একটি '\t' (ট্যাব) ক্যারেক্টার দিয়ে আলাদা করা থাকবে।

নমুনা ইনপুট আউটপুট
নমুনা #১

ইনপুট
nei
 
আউটপুট
1000    999     998     997     996
995     994     993     992     991
990     989     988     987     986
...     ...     ...     ...     ...
...     ...     ...     ...     ...
10      9       8       7       6
5       4       3       2       1*/