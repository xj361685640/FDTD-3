#ifndef FDTD_ENUMS
#define FDTD_ENUMS
    enum class POLARIZATION {EX,EY,EZ,HX,HY,HZ,L,R};
    enum class PLSSHAPE {GAUSSIAN, CONTINUOUS,RICKER, RAMP_CONT,BH,RECT};
    enum class SHAPE {SPHERE,HEMISPHERE,BLOCK,ELLIPSOID, HEMIELLIPSOID,CONE,CYLINDER,ROUNDED_BLOCK, TRIANGLE_PRISM, TRAPEZOIDAL_PRISM, TERS_TIP, PARABOLIC_TERS_TIP};
    enum class DIRECTION {X,Y,Z, NONE};
    enum class PLOTTYPE  {REAL,IMAG, MAG, POW, LNPOW};
    enum class GRIDOUTFXN{REAL,IMAG, POW, MAG, LNPOW};
    enum class GRIDOUTTYPE{BOX, LIST, NONE};
    enum class DTCTYPE{EX, EY, EZ, HX, HY, HZ, EPOW, HPOW, PX, PY, PZ, MX, MY, MZ};
    enum class DTCCLASS{COUT, TXT, BIN, BMP, FREQ};
    enum class DTCCLASSTYPE{FIELD, POW, POL};
    enum class PROC_DIR {UP, DOWN, LEFT, RIGHT, NONE };
    enum class DISTRIBUTION {GAUSSIAN, DELTAFXN, SKEW_NORMAL, CHI_SQUARED};
#endif
