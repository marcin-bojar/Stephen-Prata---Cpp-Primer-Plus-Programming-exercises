#ifndef STONEWT_H_INCLUDED
#define STONEWT_H_INCLUDED

class StoneWt
{
    public:
        enum Mode {STN, PDS, FPDS};
    private:
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
        Mode mode;
        void set_stn();
        void set_pds();
    public:
        StoneWt(double lbs);
        StoneWt(int stn, double lbs);
        StoneWt();
        ~StoneWt();
        StoneWt operator+(const StoneWt & a) const;
        StoneWt operator-(const StoneWt & a) const;
        StoneWt operator*(double m) const;
        void stn_mode();
        void pds_mode();
        void fpds_mode();
        friend StoneWt operator*(double m, const StoneWt & a);
        friend std::ostream & operator<<(std::ostream & os, const StoneWt & a);



};


#endif // STONEWT_H_INCLUDED
