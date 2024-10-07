#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

   double h_angle = 0.5 * (H * 60 + M); // 360/12=30 , 30/60=0.5
   double m_angle = 6 * M; // 360/12= 30 ; 30/5=6

   double angle = abs(h_angle - m_angle);

    // Return the smaller angle of the two possible angles
    double x= min(360 - angle, angle);
    cout<<x;

    return 0;
}
