#include "geom.hpp"

#include <iostream>
#include <cmath>

std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& vec) {
    return ostrm << '(' << vec.x << "; " << vec.y << ')';
}

Rdec2D& operator+=(Rdec2D& lhs, const Rdec2D& rhs) {
    lhs.x += rhs.x;
    lhs.y += rhs.y;
    return lhs;
}

Rdec2D& operator+(const Rdec2D& lhs, const Rdec2D& rhs) {
    Rdec2D res = lhs;
    res += rhs;
    return res;
}

Rdec2D& operator-(const Rdec2D& lhs, const Rdec2D& rhs) {
    Rdec2D res = lhs;
    res.x = res.x - rhs.x;
    res.y = res.y - rhs.y;
    return res;
}

double r_len(const Rdec2D& vec) {
    return std::abs((vec.x * vec.x) + (vec.y * vec.y));
}

Rdec2D& operator*(const Rdec2D& lhs, const double mul) {
    Rdec2D res = lhs;
    res.x = lhs.x * mul;
    res.y = lhs.y * mul;
    return res;
}

Rdec2D& operator/(const Rdec2D& lhs, const double div) {
    Rdec2D res = lhs;
    res.x = lhs.x / div;
    res.y = lhs.y / div;
    return res;
}

double Dot(const Rdec2D& lhs, const Rdec2D& rhs) {
    double res = 0.0;
    res += lhs.x * rhs.x + lhs.y * lhs.x;
    return res;
}

double Norm(const Rdec2D& r) {
    double res = 0.0;
    res += (r.x * r.x);
    res += (r.y * r.y);
    res = std::sqrt(res);
    return res;
}