#include <bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

struct dientich{
      double x,y;
};

bool ktra(double x,double y, double z)
{
      if(x+y > z && x+z > y && y+z > x) return true ;
      return false ;
}

double tinh(struct dientich a,struct dientich b)
{
      return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}

int main()
{
      int t;
      cin >> t;
      while(t--)
      {
            struct dientich m,n,o;
            cin >> m.x >> m.y >> n.x >> n.y >> o.x >> o.y;
            double a = tinh(m,n);
            double b = tinh(n,o);
            double c = tinh(o,m);
            if(ktra(a,b,c))
            {
                  double p = (a+b+c)*(a+b-c)*(b+c-a)*(a+c-b);
                  double s = sqrt(p);
                  double r = a*b*c/s;
                  double S = PI*r*r;
                  cout << fixed << setprecision(3) << S << endl;
            }
            else  cout << "INVALID" << endl;
      }
      return 0;
}
