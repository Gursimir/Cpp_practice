#include<bits/stdc++.h>

using namespace std;
//Implement the class Box 
class Box{

  private:
    int l,b,h;
 
public:
   Box(){
       l=0;
       b=0;
       h=0;
   }
   
   Box(int length,int breadth,int height){
       l = length;
       b = breadth;
       h=height;
   }
   Box(const Box &B){
       l = B.l ;
       b = B.b;
       h = B.h;
   }

   public:
   int getLength(){
       return l;
   }

   int getBreadth(){
       return b;
   }

   int getHeight(){
       return h;
   }

   long long CalculateVolume(){
      return (long long)(b)*l*h;
   }

    bool operator<(Box &B) {
    if (l < B.l) {
      return true;
    } 
    else if (l == B.l) {
      if (b < B.b) {
        return true;
      } 
      else if (b == B.b) {
        if (h < B.h) {
          return true;
        }
      }
    }

    return false;
  }
};
ostream &operator<<(ostream &out, Box &B) {
  out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
  return out;
};

void check2()
{
     # ifndef ONLINE_JUDGE
         freopen("inputb.txt","r",stdin);
         freopen("outputb.txt","w",stdout);
      #endif

	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
     # ifndef ONLINE_JUDGE
         freopen("inputb.txt","r",stdin);
         freopen("outputb.txt","w",stdout);
      #endif

	check2();
}