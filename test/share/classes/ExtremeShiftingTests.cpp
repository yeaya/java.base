#include <ExtremeShiftingTests.h>

#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MIN_VALUE
#undef ONE
#undef ZERO

using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _ExtremeShiftingTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExtremeShiftingTests::*)()>(&ExtremeShiftingTests::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&ExtremeShiftingTests::main))},
	{}
};

$ClassInfo _ExtremeShiftingTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ExtremeShiftingTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExtremeShiftingTests_MethodInfo_
};

$Object* allocate$ExtremeShiftingTests($Class* clazz) {
	return $of($alloc(ExtremeShiftingTests));
}

void ExtremeShiftingTests::init$() {
}

void ExtremeShiftingTests::main($StringArray* args) {
	$init($BigInteger);
	$var($BigInteger, bi, $nc($BigInteger::ONE)->shiftLeft($Integer::MIN_VALUE));
	if (!$nc(bi)->equals($BigInteger::ZERO)) {
		$throwNew($RuntimeException, $$str({"1 << "_s, $$str($Integer::MIN_VALUE)}));
	}
	$assign(bi, $nc($BigInteger::ZERO)->shiftLeft($Integer::MIN_VALUE));
	if (!$nc(bi)->equals($BigInteger::ZERO)) {
		$throwNew($RuntimeException, $$str({"0 << "_s, $$str($Integer::MIN_VALUE)}));
	}
	$assign(bi, $BigInteger::valueOf((int64_t)-1));
	$assign(bi, $nc(bi)->shiftLeft($Integer::MIN_VALUE));
	if (!bi->equals($($BigInteger::valueOf((int64_t)-1)))) {
		$throwNew($RuntimeException, $$str({"-1 << "_s, $$str($Integer::MIN_VALUE)}));
	}
	try {
		$nc($BigInteger::ONE)->shiftRight($Integer::MIN_VALUE);
		$throwNew($RuntimeException, $$str({"1 >> "_s, $$str($Integer::MIN_VALUE)}));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
	}
	$assign(bi, $nc($BigInteger::ZERO)->shiftRight($Integer::MIN_VALUE));
	if (!bi->equals($BigInteger::ZERO)) {
		$throwNew($RuntimeException, $$str({"0 >> "_s, $$str($Integer::MIN_VALUE)}));
	}
	try {
		$nc($($BigInteger::valueOf((int64_t)-1)))->shiftRight($Integer::MIN_VALUE);
		$throwNew($RuntimeException, $$str({"-1 >> "_s, $$str($Integer::MIN_VALUE)}));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
	}
}

ExtremeShiftingTests::ExtremeShiftingTests() {
}

$Class* ExtremeShiftingTests::load$($String* name, bool initialize) {
	$loadClass(ExtremeShiftingTests, name, initialize, &_ExtremeShiftingTests_ClassInfo_, allocate$ExtremeShiftingTests);
	return class$;
}

$Class* ExtremeShiftingTests::class$ = nullptr;