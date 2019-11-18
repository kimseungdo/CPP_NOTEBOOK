#include <cmath>
#include "vect.h"
using std::sqrt, std::sin, std::cos, std::atan, std::atan2, std::cout;
/*
sqrt = Î£®Ìä∏Í∞? Î∞òÌôò
atan = accept tan ?åå?ùºÎØ∏ÌÑ∞Í∞? 1Í∞? (b/a)
atan2 = ?åå?ùºÎØ∏ÌÑ∞Í∞? 2Í∞?(b, a)
*/
namespace VECTOR{
    const double Rad_to_deg = 45.0 / atan(1.0);

    void Vector::set_x() { x = mag*cos(ang); }
    void Vector::set_y() { y = mag*sin(ang); }
    void Vector::set_mag() { mag = sqrt(x*x + y*y); }
    void Vector::set_ang() { if(x==0.0 && y==0.0) ang = 0.0;
                              else ang = atan2(y, x); }

    Vector::Vector(){//?îî?è¥?ä∏ ?Éù?Ñ±?ûê
        x = y = mag = ang = 0.0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode form){
        mode = form;
        if (form == RECT){
            x = n1, y = n2;
            set_mag(); set_ang();
        }
        else if(form == POL){
            mag = n1, ang = n2/Rad_to_deg;
            set_x(); set_y();            
        }
        else{
            cout<<"?ùë ?ù¥Í±∞ÏïÑ?ãàÍ≥?"<<std::endl;
            cout<<"Î≤°ÌÑ∞Î•? 0?úºÎ°? ?Ñ§?†ï"<<std::endl;
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }//end Ï¢åÌëú?Éù?Ñ±?ûê
    void Vector::reset(double n1, double n2, Mode form){
        mode = form;
        if (form == RECT){
            x = n1, y = n2;
            set_mag(); set_ang();
        }
        else if(form == POL){
            mag = n1, ang = n2/Rad_to_deg;
            set_x(); set_y();
        }
        else{
            cout<<"?ùë ?ù¥Í±∞ÏïÑ?ãàÍ≥?"<<std::endl;
            cout<<"Î≤°ÌÑ∞Î•? 0?úºÎ°? ?Ñ§?†ï"<<std::endl;
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }
    Vector::~Vector(){}

    void Vector::polar_mode(){ mode = POL; }
    void Vector::rect_mode(){ mode = RECT; }

    Vector Vector::operator+(const Vector &b){ return Vector(x+b.x, y+b.y); }
    Vector Vector::operator-(const Vector &b){ return Vector(x-b.x, y-b.y); }
    Vector Vector::operator-(){ return Vector(-x, -y); }
    Vector Vector::operator*(double n){ return Vector(n*x, n*y); }
    Vector operator*(double n, const Vector&a){ return a*n; }

    std::ostream & operator << (std:: ostream & os, const Vector & v){
        if(v.mode == Vector::RECT)
            os << "(x, y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Vector::POL)
            os << "(m, a) = (" << v.mag << ", " << v.ang * Rad_to_deg << ")";
        else
            os << "VectorÍ∞ùÏ≤¥ Î™®ÎìúÏß??†ï?ù¥ ???Î¶?" << std::endl;

        return os;
    }

}