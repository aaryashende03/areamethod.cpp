#include<iostream>
using namespace std;
class Demo
{ 
         public:

            	/* floatArea(float fRadius,float fPI)
                  {
                    float fANS= 0.0; 
                    fANS = fPI*fRadius*fRadius;
                    return fANS;
                  }*/
                 float Area( float fRadius, float fPI= 3.14)
                 {
                   float fAns= 0.0;
                   fAns= fPI*fRadius*fRadius;
                   return fAns;
		}
};
                     int main ()
                              {
                                 float fvalue1= 0.0 , fvalue2 = 0.0 , fRet= 0.0;

                                 cout<<"enter the value of Radius\n";
                                 cin>>fvalue1;

                                 cout<<"enter the value of PI\n";
                                 cin>>fvalue2;
                                 
                                 Demo obj;

                                 fRet= obj.Area(fvalue1,fvalue2);
                                 cout<<"Areaofcircle is"<<fRet<<"\n";

                                 fRet= obj.Area(fvalue1);
                                 cout<<"Area of circle is"<<fRet<<"\n";

                                 cout<<"Size of object is:"<<sizeof (obj)<<"\n";
                                 return 0;
                               }