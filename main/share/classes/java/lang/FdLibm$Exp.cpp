#include <java/lang/FdLibm$Exp.h>

#include <java/lang/FdLibm.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FdLibm = ::java::lang::FdLibm;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace lang {

$FieldInfo _FdLibm$Exp_FieldInfo_[] = {
	{"one", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, one)},
	{"half", "[D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, half)},
	{"huge", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, huge)},
	{"twom1000", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, twom1000)},
	{"o_threshold", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, o_threshold)},
	{"u_threshold", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, u_threshold)},
	{"ln2HI", "[D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, ln2HI)},
	{"ln2LO", "[D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, ln2LO)},
	{"invln2", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, invln2)},
	{"P1", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, P1)},
	{"P2", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, P2)},
	{"P3", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, P3)},
	{"P4", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, P4)},
	{"P5", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Exp, P5)},
	{}
};

$MethodInfo _FdLibm$Exp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(FdLibm$Exp, init$, void)},
	{"compute", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(FdLibm$Exp, compute, double, double)},
	{}
};

$InnerClassInfo _FdLibm$Exp_InnerClassesInfo_[] = {
	{"java.lang.FdLibm$Exp", "java.lang.FdLibm", "Exp", $STATIC},
	{}
};

$ClassInfo _FdLibm$Exp_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.FdLibm$Exp",
	"java.lang.Object",
	nullptr,
	_FdLibm$Exp_FieldInfo_,
	_FdLibm$Exp_MethodInfo_,
	nullptr,
	nullptr,
	_FdLibm$Exp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.FdLibm"
};

$Object* allocate$FdLibm$Exp($Class* clazz) {
	return $of($alloc(FdLibm$Exp));
}

double FdLibm$Exp::one = 0.0;
$doubles* FdLibm$Exp::half = nullptr;
double FdLibm$Exp::huge = 0.0;
double FdLibm$Exp::twom1000 = 0.0;
double FdLibm$Exp::o_threshold = 0.0;
double FdLibm$Exp::u_threshold = 0.0;
$doubles* FdLibm$Exp::ln2HI = nullptr;
$doubles* FdLibm$Exp::ln2LO = nullptr;
double FdLibm$Exp::invln2 = 0.0;
double FdLibm$Exp::P1 = 0.0;
double FdLibm$Exp::P2 = 0.0;
double FdLibm$Exp::P3 = 0.0;
double FdLibm$Exp::P4 = 0.0;
double FdLibm$Exp::P5 = 0.0;

void FdLibm$Exp::init$() {
	$throwNew($UnsupportedOperationException);
}

double FdLibm$Exp::compute(double x) {
	$init(FdLibm$Exp);
	double y = 0.0;
	double hi = 0.0;
	double lo = 0.0;
	double c = 0.0;
	double t = 0.0;
	int32_t k = 0;
	int32_t xsb = 0;
	int32_t hx = 0;
	hx = $FdLibm::__HI(x);
	xsb = (int32_t)((hx >> 31) & (uint32_t)1);
	hx &= (uint32_t)0x7FFFFFFF;
	if (hx >= 0x40862E42) {
		if (hx >= 0x7FF00000) {
			if ((((int32_t)(hx & (uint32_t)0x000FFFFF)) | $FdLibm::__LO(x)) != 0) {
				return x + x;
			} else {
				return (xsb == 0) ? x : 0.0;
			}
		}
		if (x > FdLibm$Exp::o_threshold) {
			return FdLibm$Exp::huge * FdLibm$Exp::huge;
		}
		if (x < FdLibm$Exp::u_threshold) {
			return FdLibm$Exp::twom1000 * FdLibm$Exp::twom1000;
		}
	}
	if (hx > 0x3FD62E42) {
		if (hx < 0x3FF0A2B2) {
			hi = x - $nc(FdLibm$Exp::ln2HI)->get(xsb);
			lo = $nc(FdLibm$Exp::ln2LO)->get(xsb);
			k = 1 - xsb - xsb;
		} else {
			k = $cast(int32_t, (FdLibm$Exp::invln2 * x + $nc(FdLibm$Exp::half)->get(xsb)));
			t = (double)k;
			hi = x - t * $nc(FdLibm$Exp::ln2HI)->get(0);
			lo = t * $nc(FdLibm$Exp::ln2LO)->get(0);
		}
		x = hi - lo;
	} else if (hx < 0x3E300000) {
		if (FdLibm$Exp::huge + x > FdLibm$Exp::one) {
			return FdLibm$Exp::one + x;
		}
	} else {
		k = 0;
	}
	t = x * x;
	c = x - t * (FdLibm$Exp::P1 + t * (FdLibm$Exp::P2 + t * (FdLibm$Exp::P3 + t * (FdLibm$Exp::P4 + t * FdLibm$Exp::P5))));
	if (k == 0) {
		return FdLibm$Exp::one - ((x * c) / (c - 2.0) - x);
	} else {
		y = FdLibm$Exp::one - ((lo - (x * c) / (2.0 - c)) - hi);
	}
	if (k >= -1021) {
		y = $FdLibm::__HI(y, $FdLibm::__HI(y) + (k << 20));
		return y;
	} else {
		y = $FdLibm::__HI(y, $FdLibm::__HI(y) + ((k + 1000) << 20));
		return y * FdLibm$Exp::twom1000;
	}
}

void clinit$FdLibm$Exp($Class* class$) {
	FdLibm$Exp::one = 1.0;
	FdLibm$Exp::huge = 1.0E300;
	FdLibm$Exp::twom1000 = 9.332636185032189E-302;
	FdLibm$Exp::o_threshold = 709.782712893384;
	FdLibm$Exp::u_threshold = -745.1332191019411;
	FdLibm$Exp::invln2 = 1.4426950408889634;
	FdLibm$Exp::P1 = 0.16666666666666602;
	FdLibm$Exp::P2 = -0.0027777777777015593;
	FdLibm$Exp::P3 = 6.613756321437934E-5;
	FdLibm$Exp::P4 = -1.6533902205465252E-6;
	FdLibm$Exp::P5 = 4.1381367970572385E-8;
	$assignStatic(FdLibm$Exp::half, $new($doubles, {
		0.5,
		-0.5
	}));
	$assignStatic(FdLibm$Exp::ln2HI, $new($doubles, {
		0.6931471803691238,
		-0.6931471803691238
	}));
	$assignStatic(FdLibm$Exp::ln2LO, $new($doubles, {
		1.9082149292705877E-10,
		-1.9082149292705877E-10
	}));
}

FdLibm$Exp::FdLibm$Exp() {
}

$Class* FdLibm$Exp::load$($String* name, bool initialize) {
	$loadClass(FdLibm$Exp, name, initialize, &_FdLibm$Exp_ClassInfo_, clinit$FdLibm$Exp, allocate$FdLibm$Exp);
	return class$;
}

$Class* FdLibm$Exp::class$ = nullptr;

	} // lang
} // java