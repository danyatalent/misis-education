#include "geom.hpp"
#include <iostream>
#include <fstream>


int main()
{
    std::ofstream of("table.tsv");
    Rdec2D v0{ 1.0, 1.0 };
    Rdec2D a0{ -1.0, 1.0 };
    Rdec2D r{ 8.0, 0.0 };
    Rdec2D l{ 0.0, 0.0 };
    double v_noise = 333.0;
    double g = 9.81;
    double t = 10.0;
    double alpha = 45.0;
    double x = -1.0, y = -1.0;
    int n = 0;
    of << "n\tt\tx\ty\tv_x\tv_y\ta_x\ta_y\n";

    for (double delta_t = 0.0; delta_t < t; delta_t += 0.5) {
        of << n << 't' << delta_t << 't' << l.x << 't' << l.y << 't' << v0.x << 't' << v0.y << 't' << a0.x << 't' << a0.y << '\n';
        n += 1;
        r.x = a0.x * delta_t * cos(alpha);
        r.y = a0.y * delta_t * sin(alpha) - g * t * t / 2;

        l.x = v0.x * delta_t * cos(alpha);
        l.y = v0.y * delta_t * sin(alpha) - g * t * t / 2;

        if (abs(r.x - l.x) < 0.00001 && abs(r.y - l.y) < 0.00001) {
            x = r.x;
            y = r.y;
            break;
        }
    }

}