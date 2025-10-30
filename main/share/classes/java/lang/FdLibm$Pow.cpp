#include <java/lang/FdLibm$Pow.h>

#include <java/lang/FdLibm.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

#include <limits>

#undef BP
#undef CP
#undef CP_H
#undef CP_L
#undef DP_H
#undef DP_L
#undef INV_LN2
#undef INV_LN2_H
#undef INV_LN2_L
#undef LG2
#undef LG2_H
#undef LG2_L
#undef MAX_VALUE
#undef OVT

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FdLibm = ::java::lang::FdLibm;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace lang {

$MethodInfo _FdLibm$Pow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FdLibm$Pow::*)()>(&FdLibm$Pow::init$))},
	{"compute", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&FdLibm$Pow::compute))},
	{}
};

$InnerClassInfo _FdLibm$Pow_InnerClassesInfo_[] = {
	{"java.lang.FdLibm$Pow", "java.lang.FdLibm", "Pow", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FdLibm$Pow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.FdLibm$Pow",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FdLibm$Pow_MethodInfo_,
	nullptr,
	nullptr,
	_FdLibm$Pow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.FdLibm"
};

$Object* allocate$FdLibm$Pow($Class* clazz) {
	return $of($alloc(FdLibm$Pow));
}

void FdLibm$Pow::init$() {
	$throwNew($UnsupportedOperationException);
}

double FdLibm$Pow::compute(double x, double y) {
	$useLocalCurrentObjectStackCache();
	double z = 0.0;
	double r = 0.0;
	double s = 0.0;
	double t = 0.0;
	double u = 0.0;
	double v = 0.0;
	double w = 0.0;
	int32_t i = 0;
	int32_t j = 0;
	int32_t k = 0;
	int32_t n = 0;
	if (y == 0.0) {
		return 1.0;
	}
	bool var$0 = $Double::isNaN(x);
	if (var$0 || $Double::isNaN(y)) {
		return x + y;
	}
	double y_abs = $Math::abs(y);
	double x_abs = $Math::abs(x);
	if (y == 2.0) {
		return x * x;
	} else if (y == 0.5) {
		if (x >= -$Double::MAX_VALUE) {
			return $Math::sqrt(x + 0.0);
		}
	} else if (y_abs == 1.0) {
		return (y == 1.0) ? x : 1.0 / x;
	} else if (y_abs == $Double::POSITIVE_INFINITY) {
		if (x_abs == 1.0) {
			return y - y;
		} else if (x_abs > 1.0) {
			return (y >= 0) ? y : 0.0;
		} else {
			return (y < 0) ? -y : 0.0;
		}
	}
	int32_t hx = $FdLibm::__HI(x);
	int32_t ix = (int32_t)(hx & (uint32_t)0x7FFFFFFF);
	int32_t y_is_int = 0;
	if (hx < 0) {
		if (y_abs >= 9.007199254740992E15) {
			y_is_int = 2;
		} else if (y_abs >= 1.0) {
			int64_t y_abs_as_long = $cast(int64_t, y_abs);
			if (((double)y_abs_as_long) == y_abs) {
				y_is_int = 2 - (int32_t)((int64_t)(y_abs_as_long & (uint64_t)(int64_t)1));
			}
		}
	}
	if (x_abs == 0.0 || x_abs == $Double::POSITIVE_INFINITY || x_abs == 1.0) {
		z = x_abs;
		if (y < 0.0) {
			z = 1.0 / z;
		}
		if (hx < 0) {
			if (((ix - 0x3FF00000) | y_is_int) == 0) {
				z = (z - z) / (z - z);
			} else if (y_is_int == 1) {
				z = -1.0 * z;
			}
		}
		return z;
	}
	n = (hx >> 31) + 1;
	if ((n | y_is_int) == 0) {
		return (x - x) / (x - x);
	}
	s = 1.0;
	if ((n | (y_is_int - 1)) == 0) {
		s = -1.0;
	}
	double p_h = 0.0;
	double p_l = 0.0;
	double t1 = 0.0;
	double t2 = 0.0;
	if (y_abs > 2.1474856959999995E9) {
		double INV_LN2 = 1.4426950408889634;
		double INV_LN2_H = 1.4426950216293335;
		double INV_LN2_L = 1.9259629911266175E-8;
		if (x_abs < 0.9999995231628418) {
			return (y < 0.0) ? s * $Double::POSITIVE_INFINITY : s * 0.0;
		}
		if (x_abs > 1.0000009536743162) {
			return (y > 0.0) ? s * $Double::POSITIVE_INFINITY : s * 0.0;
		}
		t = x_abs - 1.0;
		w = (t * t) * (0.5 - t * (0.3333333333333333 - t * 0.25));
		u = INV_LN2_H * t;
		v = t * INV_LN2_L - w * INV_LN2;
		t1 = u + v;
		t1 = $FdLibm::__LO(t1, 0);
		t2 = v - (t1 - u);
	} else {
		double CP = 0.9617966939259756;
		double CP_H = 0.9617967009544373;
		double CP_L = -7.028461650952758E-9;
		double z_h = 0.0;
		double z_l = 0.0;
		double ss = 0.0;
		double s2 = 0.0;
		double s_h = 0.0;
		double s_l = 0.0;
		double t_h = 0.0;
		double t_l = 0.0;
		n = 0;
		if (ix < 0x00100000) {
			x_abs *= 9.007199254740992E15;
			n -= 53;
			ix = $FdLibm::__HI(x_abs);
		}
		n += ((ix) >> 20) - 1023;
		j = (int32_t)(ix & (uint32_t)0x000FFFFF);
		ix = j | 0x3FF00000;
		if (j <= 0x0003988E) {
			k = 0;
		} else if (j < 0x000BB67A) {
			k = 1;
		} else {
			k = 0;
			n += 1;
			ix -= 0x00100000;
		}
		x_abs = $FdLibm::__HI(x_abs, ix);
		$var($doubles, BP, $new($doubles, {
			1.0,
			1.5
		}));
		$var($doubles, DP_H, $new($doubles, {
			0.0,
			0.5849624872207642
		}));
		$var($doubles, DP_L, $new($doubles, {
			0.0,
			1.350039202129749E-8
		}));
		double L1 = 0.5999999999999946;
		double L2 = 0.4285714285785502;
		double L3 = 0.33333332981837743;
		double L4 = 0.272728123808534;
		double L5 = 0.23066074577556175;
		double L6 = 0.20697501780033842;
		u = x_abs - BP->get(k);
		v = 1.0 / (x_abs + BP->get(k));
		ss = u * v;
		s_h = ss;
		s_h = $FdLibm::__LO(s_h, 0);
		t_h = 0.0;
		t_h = $FdLibm::__HI(t_h, ((ix >> 1) | 0x20000000) + 0x00080000 + (k << 18));
		t_l = x_abs - (t_h - BP->get(k));
		s_l = v * ((u - s_h * t_h) - s_h * t_l);
		s2 = ss * ss;
		r = s2 * s2 * (L1 + s2 * (L2 + s2 * (L3 + s2 * (L4 + s2 * (L5 + s2 * L6)))));
		r += s_l * (s_h + ss);
		s2 = s_h * s_h;
		t_h = 3.0 + s2 + r;
		t_h = $FdLibm::__LO(t_h, 0);
		t_l = r - ((t_h - 3.0) - s2);
		u = s_h * t_h;
		v = s_l * t_h + t_l * ss;
		p_h = u + v;
		p_h = $FdLibm::__LO(p_h, 0);
		p_l = v - (p_h - u);
		z_h = CP_H * p_h;
		z_l = CP_L * p_h + p_l * CP + DP_L->get(k);
		t = (double)n;
		t1 = (((z_h + z_l) + DP_H->get(k)) + t);
		t1 = $FdLibm::__LO(t1, 0);
		t2 = z_l - (((t1 - t) - DP_H->get(k)) - z_h);
	}
	double y1 = y;
	y1 = $FdLibm::__LO(y1, 0);
	p_l = (y - y1) * t1 + y * t2;
	p_h = y1 * t1;
	z = p_l + p_h;
	j = $FdLibm::__HI(z);
	i = $FdLibm::__LO(z);
	if (j >= 0x40900000) {
		if (((j - 0x40900000) | i) != 0) {
			return s * $Double::POSITIVE_INFINITY;
		} else {
			double OVT = 8.008566259537294E-17;
			if (p_l + OVT > z - p_h) {
				return s * $Double::POSITIVE_INFINITY;
			}
		}
	} else if (((int32_t)(j & (uint32_t)0x7FFFFFFF)) >= 0x4090CC00) {
		if (((j - (int32_t)0xC090CC00) | i) != 0) {
			return s * 0.0;
		} else if (p_l <= z - p_h) {
			return s * 0.0;
		}
	}
	double P1 = 0.16666666666666602;
	double P2 = -0.0027777777777015593;
	double P3 = 6.613756321437934E-5;
	double P4 = -1.6533902205465252E-6;
	double P5 = 4.1381367970572385E-8;
	double LG2 = 0.6931471805599453;
	double LG2_H = 0.6931471824645996;
	double LG2_L = -1.904654299957768E-9;
	i = (int32_t)(j & (uint32_t)0x7FFFFFFF);
	k = (i >> 20) - 1023;
	n = 0;
	if (i > 0x3FE00000) {
		n = j + ($sr(0x00100000, k + 1));
		k = (((int32_t)(n & (uint32_t)0x7FFFFFFF)) >> 20) - 1023;
		t = 0.0;
		t = $FdLibm::__HI(t, ((int32_t)(n & (uint32_t)~($sr(0x000FFFFF, k)))));
		n = $sr(((int32_t)(n & (uint32_t)0x000FFFFF)) | 0x00100000, 20 - k);
		if (j < 0) {
			n = -n;
		}
		p_h -= t;
	}
	t = p_l + p_h;
	t = $FdLibm::__LO(t, 0);
	u = t * LG2_H;
	v = (p_l - (t - p_h)) * LG2 + t * LG2_L;
	z = u + v;
	w = v - (z - u);
	t = z * z;
	t1 = z - t * (P1 + t * (P2 + t * (P3 + t * (P4 + t * P5))));
	r = (z * t1) / (t1 - 2.0) - (w + z * w);
	z = 1.0 - (r - z);
	j = $FdLibm::__HI(z);
	j += (n << 20);
	if ((j >> 20) <= 0) {
		z = $Math::scalb(z, n);
	} else {
		int32_t z_hi = $FdLibm::__HI(z);
		z_hi += (n << 20);
		z = $FdLibm::__HI(z, z_hi);
	}
	return s * z;
}

FdLibm$Pow::FdLibm$Pow() {
}

$Class* FdLibm$Pow::load$($String* name, bool initialize) {
	$loadClass(FdLibm$Pow, name, initialize, &_FdLibm$Pow_ClassInfo_, allocate$FdLibm$Pow);
	return class$;
}

$Class* FdLibm$Pow::class$ = nullptr;

	} // lang
} // java