#include <java/lang/Math2/MinMax.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Float.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace Math2 {

$MethodInfo _MinMax_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MinMax::*)()>(&MinMax::init$))},
	{"go", "(Ljava/lang/String;FF)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,float,float)>(&MinMax::go))},
	{"go", "(Ljava/lang/String;DD)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,double,double)>(&MinMax::go))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MinMax::main))},
	{}
};

$ClassInfo _MinMax_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.Math2.MinMax",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MinMax_MethodInfo_
};

$Object* allocate$MinMax($Class* clazz) {
	return $of($alloc(MinMax));
}

void MinMax::init$() {
}

void MinMax::go($String* what, float result, float correctResult) {
	$useLocalCurrentObjectStackCache();
	$var($String, v, $str({what, ": got "_s, $$str(result), ", expected "_s, $$str(correctResult)}));
	if (!($nc($($Float::toString(result)))->equals($($Float::toString(correctResult))))) {
		$throwNew($RuntimeException, v);
	}
	$init($System);
	$nc($System::err)->println(v);
}

void MinMax::go($String* what, double result, double correctResult) {
	$useLocalCurrentObjectStackCache();
	$var($String, v, $str({what, ": got "_s, $$str(result), ", expected "_s, $$str(correctResult)}));
	if (!($nc($($Double::toString(result)))->equals($($Double::toString(correctResult))))) {
		$throwNew($RuntimeException, v);
	}
	$init($System);
	$nc($System::err)->println(v);
}

void MinMax::main($StringArray* args) {
	float fnz = -0.0f;
	float fpz = +0.0f;
	go("Math.min(fnz, fnz)"_s, $Math::min(fnz, fnz), fnz);
	go("Math.min(fnz, fpz)"_s, $Math::min(fnz, fpz), fnz);
	go("Math.min(fpz, fnz)"_s, $Math::min(fpz, fnz), fnz);
	go("Math.min(fpz, fpz)"_s, $Math::min(fpz, fpz), fpz);
	go("Math.min(-1.0f, fnz)"_s, $Math::min(-1.0f, fnz), -1.0f);
	go("Math.min(-1.0f, fpz)"_s, $Math::min(-1.0f, fpz), -1.0f);
	go("Math.min(+1.0f, fnz)"_s, $Math::min(+1.0f, fnz), fnz);
	go("Math.min(+1.0f, fpz)"_s, $Math::min(+1.0f, fpz), fpz);
	go("Math.min(-1.0f, +1.0f)"_s, $Math::min(-1.0f, +1.0f), -1.0f);
	go("Math.min(fnz, -1.0f)"_s, $Math::min(fnz, -1.0f), -1.0f);
	go("Math.min(fpz, -1.0f)"_s, $Math::min(fpz, -1.0f), -1.0f);
	go("Math.min(fnz, +1.0f)"_s, $Math::min(fnz, +1.0f), fnz);
	go("Math.min(fpz, +1.0f)"_s, $Math::min(fpz, +1.0f), fpz);
	go("Math.min(+1.0f, -1.0f)"_s, $Math::min(+1.0f, -1.0f), -1.0f);
	go("Math.max(fnz, fnz)"_s, $Math::max(fnz, fnz), fnz);
	go("Math.max(fnz, fpz)"_s, $Math::max(fnz, fpz), fpz);
	go("Math.max(fpz, fnz)"_s, $Math::max(fpz, fnz), fpz);
	go("Math.max(fpz, fpz)"_s, $Math::max(fpz, fpz), fpz);
	go("Math.max(-1.0f, fnz)"_s, $Math::max(-1.0f, fnz), fnz);
	go("Math.max(-1.0f, fpz)"_s, $Math::max(-1.0f, fpz), fpz);
	go("Math.max(+1.0f, fnz)"_s, $Math::max(+1.0f, fnz), +1.0f);
	go("Math.max(+1.0f, fpz)"_s, $Math::max(+1.0f, fpz), +1.0f);
	go("Math.max(-1.0f, +1.0f)"_s, $Math::max(-1.0f, +1.0f), +1.0f);
	go("Math.max(fnz, -1.0f)"_s, $Math::max(fnz, -1.0f), fnz);
	go("Math.max(fpz, -1.0f)"_s, $Math::max(fpz, -1.0f), fpz);
	go("Math.max(fnz, +1.0f)"_s, $Math::max(fnz, +1.0f), +1.0f);
	go("Math.max(fpz, +1.0f)"_s, $Math::max(fpz, +1.0f), +1.0f);
	go("Math.max(+1.0f, -1.0f)"_s, $Math::max(+1.0f, -1.0f), +1.0f);
	double dnz = -0.0;
	double dpz = +0.0;
	go("Math.min(dnz, dnz)"_s, $Math::min(dnz, dnz), dnz);
	go("Math.min(dnz, dpz)"_s, $Math::min(dnz, dpz), dnz);
	go("Math.min(dpz, dnz)"_s, $Math::min(dpz, dnz), dnz);
	go("Math.min(dpz, dpz)"_s, $Math::min(dpz, dpz), dpz);
	go("Math.min(-1.0d, dnz)"_s, $Math::min(-1.0, dnz), -1.0);
	go("Math.min(-1.0d, dpz)"_s, $Math::min(-1.0, dpz), -1.0);
	go("Math.min(+1.0d, dnz)"_s, $Math::min(+1.0, dnz), dnz);
	go("Math.min(+1.0d, dpz)"_s, $Math::min(+1.0, dpz), dpz);
	go("Math.min(-1.0d, +1.0d)"_s, $Math::min(-1.0, +1.0), -1.0);
	go("Math.min(dnz, -1.0d)"_s, $Math::min(dnz, -1.0), -1.0);
	go("Math.min(dpz, -1.0d)"_s, $Math::min(dpz, -1.0), -1.0);
	go("Math.min(dnz, +1.0d)"_s, $Math::min(dnz, +1.0), dnz);
	go("Math.min(dpz, +1.0d)"_s, $Math::min(dpz, +1.0), dpz);
	go("Math.min(+1.0d, -1.0d)"_s, $Math::min(+1.0, -1.0), -1.0);
	go("Math.max(dnz, dnz)"_s, $Math::max(dnz, dnz), dnz);
	go("Math.max(dnz, dpz)"_s, $Math::max(dnz, dpz), dpz);
	go("Math.max(dpz, dnz)"_s, $Math::max(dpz, dnz), dpz);
	go("Math.max(dpz, dpz)"_s, $Math::max(dpz, dpz), dpz);
	go("Math.max(-1.0d, dnz)"_s, $Math::max(-1.0, dnz), dnz);
	go("Math.max(-1.0d, dpz)"_s, $Math::max(-1.0, dpz), dpz);
	go("Math.max(+1.0d, dnz)"_s, $Math::max(+1.0, dnz), +1.0);
	go("Math.max(+1.0d, dpz)"_s, $Math::max(+1.0, dpz), +1.0);
	go("Math.max(-1.0d, +1.0d)"_s, $Math::max(-1.0, +1.0), +1.0);
	go("Math.max(dnz, -1.0d)"_s, $Math::max(dnz, -1.0), dnz);
	go("Math.max(dpz, -1.0d)"_s, $Math::max(dpz, -1.0), dpz);
	go("Math.max(dnz, +1.0d)"_s, $Math::max(dnz, +1.0), +1.0);
	go("Math.max(dpz, +1.0d)"_s, $Math::max(dpz, +1.0), +1.0);
	go("Math.max(+1.0d, -1.0d)"_s, $Math::max(+1.0, -1.0), +1.0);
}

MinMax::MinMax() {
}

$Class* MinMax::load$($String* name, bool initialize) {
	$loadClass(MinMax, name, initialize, &_MinMax_ClassInfo_, allocate$MinMax);
	return class$;
}

$Class* MinMax::class$ = nullptr;

		} // Math2
	} // lang
} // java