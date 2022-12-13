#include <iosfwd>

struct Rdec2D {
    double x = 0.0;
    double y = 0.0;
};

std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& vec);

Rdec2D& operator+=(Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D& operator+(const Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D& operator-(const Rdec2D& lhs, const Rdec2D& rhs);

double r_len(const Rdec2D& vec);

Rdec2D& operator*(const Rdec2D& lhs, const double mul);

Rdec2D& operator/(const Rdec2D& lhs, const double div);

double Dot(const Rdec2D& lhs, const Rdec2D& rhs);

double Norm(const Rdec2D& r);
