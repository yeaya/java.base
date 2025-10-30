#include <java/lang/FdLibm$Hypot.h>

#include <java/lang/AssertionError.h>
#include <java/lang/FdLibm.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

#include <limits>

#undef MIN_NORMAL
#undef TWO_MINUS_600
#undef TWO_PLUS_600

using $AssertionError = ::java::lang::AssertionError;
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

$FieldInfo _FdLibm$Hypot_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FdLibm$Hypot, $assertionsDisabled)},
	{"TWO_MINUS_600", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FdLibm$Hypot, TWO_MINUS_600)},
	{"TWO_PLUS_600", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FdLibm$Hypot, TWO_PLUS_600)},
	{}
};

$MethodInfo _FdLibm$Hypot_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FdLibm$Hypot::*)()>(&FdLibm$Hypot::init$))},
	{"compute", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&FdLibm$Hypot::compute))},
	{}
};

$InnerClassInfo _FdLibm$Hypot_InnerClassesInfo_[] = {
	{"java.lang.FdLibm$Hypot", "java.lang.FdLibm", "Hypot", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FdLibm$Hypot_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.FdLibm$Hypot",
	"java.lang.Object",
	nullptr,
	_FdLibm$Hypot_FieldInfo_,
	_FdLibm$Hypot_MethodInfo_,
	nullptr,
	nullptr,
	_FdLibm$Hypot_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.FdLibm"
};

$Object* allocate$FdLibm$Hypot($Class* clazz) {
	return $of($alloc(FdLibm$Hypot));
}

bool FdLibm$Hypot::$assertionsDisabled = false;
double FdLibm$Hypot::TWO_MINUS_600 = 0.0;
double FdLibm$Hypot::TWO_PLUS_600 = 0.0;

void FdLibm$Hypot::init$() {
	$throwNew($UnsupportedOperationException);
}

double FdLibm$Hypot::compute(double x, double y) {
	$init(FdLibm$Hypot);
	double a = $Math::abs(x);
	double b = $Math::abs(y);
	bool var$0 = !$Double::isFinite(a);
	if (var$0 || !$Double::isFinite(b)) {
		if (a == $Double::POSITIVE_INFINITY || b == $Double::POSITIVE_INFINITY) {
			return $Double::POSITIVE_INFINITY;
		} else {
			return a + b;
		}
	}
	if (b > a) {
		double tmp = a;
		a = b;
		b = tmp;
	}
	if (!FdLibm$Hypot::$assertionsDisabled && !(a >= b)) {
		$throwNew($AssertionError);
	}
	int32_t ha = $FdLibm::__HI(a);
	int32_t hb = $FdLibm::__HI(b);
	if ((ha - hb) > 0x03C00000) {
		return a + b;
	}
	int32_t k = 0;
	if (a > 3.2733937296446915E150) {
		ha -= 0x25800000;
		hb -= 0x25800000;
		a = a * FdLibm$Hypot::TWO_MINUS_600;
		b = b * FdLibm$Hypot::TWO_MINUS_600;
		k += 600;
	}
	double t1 = 0.0;
	double t2 = 0.0;
	if (b < 3.0549363634996047E-151) {
		if (b < $Double::MIN_NORMAL) {
			if (b == 0.0) {
				return a;
			}
			t1 = 4.49423283715579E307;
			b *= t1;
			a *= t1;
			k -= 1022;
		} else {
			ha += 0x25800000;
			hb += 0x25800000;
			a = a * FdLibm$Hypot::TWO_PLUS_600;
			b = b * FdLibm$Hypot::TWO_PLUS_600;
			k -= 600;
		}
	}
	double w = a - b;
	if (w > b) {
		t1 = (double)0;
		t1 = $FdLibm::__HI(t1, ha);
		t2 = a - t1;
		w = $Math::sqrt(t1 * t1 - (b * (-b) - t2 * (a + t1)));
	} else {
		double y1 = 0.0;
		double y2 = 0.0;
		a = a + a;
		y1 = (double)0;
		y1 = $FdLibm::__HI(y1, hb);
		y2 = b - y1;
		t1 = (double)0;
		t1 = $FdLibm::__HI(t1, ha + 0x00100000);
		t2 = a - t1;
		w = $Math::sqrt(t1 * y1 - (w * (-w) - (t1 * y2 + t2 * b)));
	}
	if (k != 0) {
		return $Math::powerOfTwoD(k) * w;
	} else {
		return w;
	}
}

void clinit$FdLibm$Hypot($Class* class$) {
	FdLibm$Hypot::TWO_MINUS_600 = 2.409919865102884E-181;
	FdLibm$Hypot::TWO_PLUS_600 = 4.149515568880993E180;
	$load($FdLibm);
	FdLibm$Hypot::$assertionsDisabled = !$FdLibm::class$->desiredAssertionStatus();
}

FdLibm$Hypot::FdLibm$Hypot() {
}

$Class* FdLibm$Hypot::load$($String* name, bool initialize) {
	$loadClass(FdLibm$Hypot, name, initialize, &_FdLibm$Hypot_ClassInfo_, clinit$FdLibm$Hypot, allocate$FdLibm$Hypot);
	return class$;
}

$Class* FdLibm$Hypot::class$ = nullptr;

	} // lang
} // java