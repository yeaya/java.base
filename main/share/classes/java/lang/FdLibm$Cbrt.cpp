#include <java/lang/FdLibm$Cbrt.h>

#include <java/lang/FdLibm.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

#undef C
#undef D
#undef E
#undef F
#undef G

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FdLibm = ::java::lang::FdLibm;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace lang {

$FieldInfo _FdLibm$Cbrt_FieldInfo_[] = {
	{"B1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FdLibm$Cbrt, B1)},
	{"B2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FdLibm$Cbrt, B2)},
	{"C", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Cbrt, C)},
	{"D", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Cbrt, D)},
	{"E", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Cbrt, E)},
	{"F", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Cbrt, F)},
	{"G", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm$Cbrt, G)},
	{}
};

$MethodInfo _FdLibm$Cbrt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FdLibm$Cbrt::*)()>(&FdLibm$Cbrt::init$))},
	{"compute", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&FdLibm$Cbrt::compute))},
	{}
};

$InnerClassInfo _FdLibm$Cbrt_InnerClassesInfo_[] = {
	{"java.lang.FdLibm$Cbrt", "java.lang.FdLibm", "Cbrt", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FdLibm$Cbrt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.FdLibm$Cbrt",
	"java.lang.Object",
	nullptr,
	_FdLibm$Cbrt_FieldInfo_,
	_FdLibm$Cbrt_MethodInfo_,
	nullptr,
	nullptr,
	_FdLibm$Cbrt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.FdLibm"
};

$Object* allocate$FdLibm$Cbrt($Class* clazz) {
	return $of($alloc(FdLibm$Cbrt));
}

double FdLibm$Cbrt::C = 0.0;
double FdLibm$Cbrt::D = 0.0;
double FdLibm$Cbrt::E = 0.0;
double FdLibm$Cbrt::F = 0.0;
double FdLibm$Cbrt::G = 0.0;

void FdLibm$Cbrt::init$() {
	$throwNew($UnsupportedOperationException);
}

double FdLibm$Cbrt::compute(double x) {
	$init(FdLibm$Cbrt);
	double t = 0.0;
	double sign = 0.0;
	if (x == 0.0 || !$Double::isFinite(x)) {
		return x;
	}
	sign = (x < 0.0) ? -1.0 : 1.0;
	x = $Math::abs(x);
	if (x < 2.2250738585072014E-308) {
		t = 1.8014398509481984E16;
		t *= x;
		t = $FdLibm::__HI(t, $FdLibm::__HI(t) / 3 + FdLibm$Cbrt::B2);
	} else {
		int32_t hx = $FdLibm::__HI(x);
		t = $FdLibm::__HI(t, hx / 3 + FdLibm$Cbrt::B1);
	}
	double r = 0.0;
	double s = 0.0;
	double w = 0.0;
	r = t * t / x;
	s = FdLibm$Cbrt::C + r * t;
	t *= FdLibm$Cbrt::G + FdLibm$Cbrt::F / (s + FdLibm$Cbrt::E + FdLibm$Cbrt::D / s);
	t = $FdLibm::__LO(t, 0);
	t = $FdLibm::__HI(t, $FdLibm::__HI(t) + 1);
	s = t * t;
	r = x / s;
	w = t + t;
	r = (r - t) / (w + r);
	t = t + t * r;
	return sign * t;
}

FdLibm$Cbrt::FdLibm$Cbrt() {
}

void clinit$FdLibm$Cbrt($Class* class$) {
	FdLibm$Cbrt::C = 0.5428571428571428;
	FdLibm$Cbrt::D = -0.7053061224489796;
	FdLibm$Cbrt::E = 1.4142857142857144;
	FdLibm$Cbrt::F = 1.6071428571428572;
	FdLibm$Cbrt::G = 0.35714285714285715;
}

$Class* FdLibm$Cbrt::load$($String* name, bool initialize) {
	$loadClass(FdLibm$Cbrt, name, initialize, &_FdLibm$Cbrt_ClassInfo_, clinit$FdLibm$Cbrt, allocate$FdLibm$Cbrt);
	return class$;
}

$Class* FdLibm$Cbrt::class$ = nullptr;

	} // lang
} // java