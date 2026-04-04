#include <java/lang/FdLibm.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

#undef INFINITY
#undef POSITIVE_INFINITY
#undef __HI
#undef __LO

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace lang {

double FdLibm::INFINITY = 0.0;

void FdLibm::init$() {
	$throwNew($UnsupportedOperationException, "No FdLibm instances for you."_s);
}

int32_t FdLibm::__LO(double x) {
	$init(FdLibm);
	int64_t transducer = $Double::doubleToRawLongBits(x);
	return (int32_t)transducer;
}

double FdLibm::__LO(double x, int32_t low) {
	$init(FdLibm);
	int64_t transX = $Double::doubleToRawLongBits(x);
	return $Double::longBitsToDouble((transX & (int64_t)0xffffffff00000000) | (low & (int64_t)0xffffffff));
}

int32_t FdLibm::__HI(double x) {
	$init(FdLibm);
	int64_t transducer = $Double::doubleToRawLongBits(x);
	return (int32_t)(transducer >> 32);
}

double FdLibm::__HI(double x, int32_t high) {
	$init(FdLibm);
	int64_t transX = $Double::doubleToRawLongBits(x);
	return $Double::longBitsToDouble((transX & (int64_t)0xffffffff) | (((int64_t)high) << 32));
}

FdLibm::FdLibm() {
}

void FdLibm::clinit$($Class* clazz) {
	FdLibm::INFINITY = $Double::POSITIVE_INFINITY;
}

$Class* FdLibm::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INFINITY", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm, INFINITY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(FdLibm, init$, void)},
		{"__HI", "(D)I", nullptr, $PRIVATE | $STATIC, $staticMethod(FdLibm, __HI, int32_t, double)},
		{"__HI", "(DI)D", nullptr, $PRIVATE | $STATIC, $staticMethod(FdLibm, __HI, double, double, int32_t)},
		{"__LO", "(D)I", nullptr, $PRIVATE | $STATIC, $staticMethod(FdLibm, __LO, int32_t, double)},
		{"__LO", "(DI)D", nullptr, $PRIVATE | $STATIC, $staticMethod(FdLibm, __LO, double, double, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.FdLibm$Exp", "java.lang.FdLibm", "Exp", $STATIC},
		{"java.lang.FdLibm$Pow", "java.lang.FdLibm", "Pow", $PUBLIC | $STATIC},
		{"java.lang.FdLibm$Hypot", "java.lang.FdLibm", "Hypot", $PUBLIC | $STATIC},
		{"java.lang.FdLibm$Cbrt", "java.lang.FdLibm", "Cbrt", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.FdLibm",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.FdLibm$Exp,java.lang.FdLibm$Pow,java.lang.FdLibm$Hypot,java.lang.FdLibm$Cbrt"
	};
	$loadClass(FdLibm, name, initialize, &classInfo$$, FdLibm::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FdLibm);
	});
	return class$;
}

$Class* FdLibm::class$ = nullptr;

	} // lang
} // java