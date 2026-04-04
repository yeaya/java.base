#include <ExtremeShiftingTests.h>
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

void ExtremeShiftingTests::init$() {
}

void ExtremeShiftingTests::main($StringArray* args) {
	$useLocalObjectStack();
	$init($BigInteger);
	$var($BigInteger, bi, $nc($BigInteger::ONE)->shiftLeft($Integer::MIN_VALUE));
	if (!bi->equals($BigInteger::ZERO)) {
		$throwNew($RuntimeException, $$str({"1 << "_s, $$str($Integer::MIN_VALUE)}));
	}
	$assign(bi, $nc($BigInteger::ZERO)->shiftLeft($Integer::MIN_VALUE));
	if (!bi->equals($BigInteger::ZERO)) {
		$throwNew($RuntimeException, $$str({"0 << "_s, $$str($Integer::MIN_VALUE)}));
	}
	$assign(bi, $BigInteger::valueOf(-1));
	$assign(bi, bi->shiftLeft($Integer::MIN_VALUE));
	if (!bi->equals($($BigInteger::valueOf(-1)))) {
		$throwNew($RuntimeException, $$str({"-1 << "_s, $$str($Integer::MIN_VALUE)}));
	}
	try {
		$BigInteger::ONE->shiftRight($Integer::MIN_VALUE);
		$throwNew($RuntimeException, $$str({"1 >> "_s, $$str($Integer::MIN_VALUE)}));
	} catch ($ArithmeticException& ae) {
		;
	}
	$assign(bi, $BigInteger::ZERO->shiftRight($Integer::MIN_VALUE));
	if (!bi->equals($BigInteger::ZERO)) {
		$throwNew($RuntimeException, $$str({"0 >> "_s, $$str($Integer::MIN_VALUE)}));
	}
	try {
		$($BigInteger::valueOf(-1))->shiftRight($Integer::MIN_VALUE);
		$throwNew($RuntimeException, $$str({"-1 >> "_s, $$str($Integer::MIN_VALUE)}));
	} catch ($ArithmeticException& ae) {
		;
	}
}

ExtremeShiftingTests::ExtremeShiftingTests() {
}

$Class* ExtremeShiftingTests::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExtremeShiftingTests, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(ExtremeShiftingTests, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ExtremeShiftingTests",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ExtremeShiftingTests, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtremeShiftingTests);
	});
	return class$;
}

$Class* ExtremeShiftingTests::class$ = nullptr;