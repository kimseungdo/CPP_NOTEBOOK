#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR{
    class Vector{
        public:
            enum Mode {RECT, POL};

        private:
            double x, y;
            double mag, ang;
            Mode mode;

            void set_x(), set_y(), set_mag(), set_ang();
        
        public:
            Vector();
            Vector(double n1, double n2, Mode form = RECT);
            void reset(double n1, double n2, Mode from = RECT);
            ~Vector();
            double xval() const{return x;} double yval() const{return y;}
            double magval() const{return mag;} double ang() {return ang;}
            void polar_mode(); void rect_mode();

            Vector operator+(const Vector &b);
            Vector operator-(const Vector &b);
            Vector operator-();
            Vector operator*(double n);

            friend Vector operator*(double n, const Vector &a);
            friend std::ostream & operator<<(std::ostream&os, const Vector & v);
    };//end class Vector
}
#endif