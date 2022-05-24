#ifndef CHIPHI_H
#define CHIPHI_H

class ChiPhi {
protected:
    double sinhhoat;
    double khac;
public:
    ChiPhi();
    ChiPhi(const ChiPhi&cp);
    ChiPhi(double, double);
    void set_sinhhoat(double);
    void set_khac(double);
    double get_sinhhoat();
    double get_khac();
    void nhap();
    void xuat();
    double tong();
};

#endif
