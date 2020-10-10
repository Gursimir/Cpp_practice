#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
      int a,stnd;
      string fn,ln;
    public:
     void set_age( int age){
          a=age;
      }
      int get_age(){
          return a;
      }
      void set_standard(int standard){
          stnd=standard;
      }
      int get_standard(){
          return stnd;
      }
      void set_first_name(string first_name){
          fn = first_name;
      }
      string get_first_name(){
          return fn;
      }
      void set_last_name(string last_name){
          ln = last_name;
      }
      string get_last_name(){
          return ln;
      }
      string to_string(){
          ostringstream ss;
          string ch = "," ;
          ss<<a<<ch<<fn<<ch<<ln<<ch<<stnd;
          string student = ss.str();
          return student;
      }
};

int main() {
     # ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
      #endif
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}