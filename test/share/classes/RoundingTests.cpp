#include <RoundingTests.h>
#include <java/math/BigDecimal.h>
#include <java/math/MathContext.h>
#include <jcpp.h>

#undef MIN_VALUE

using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $MathContext = ::java::math::MathContext;

void RoundingTests::init$() {
}

int32_t RoundingTests::roundingTests() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($BigDecimal, bd1, $BigDecimal::valueOf(11, $Integer::MIN_VALUE));
	$var($BigDecimal, bd2, nullptr);
	$var($MathContext, mc, $new($MathContext, 1));
	try {
		$assign(bd2, bd1->round(mc));
		++failures;
		$nc($System::err)->printf("Did not get expected overflow rounding %s to %d digits, got %s%n"_s, $$new($ObjectArray, {
			bd1,
			$($Integer::valueOf(mc->getPrecision())),
			bd2
		}));
	} catch ($ArithmeticException& e) {
		;
	}
	return failures;
}

void RoundingTests::main($StringArray* argv) {
	$useLocalObjectStack();
	int32_t failures = 0;
	failures += roundingTests();
	if (failures > 0) {
		$nc($System::err)->println($$str({"Encountered "_s, $$str(failures), " failures while testing rounding."_s}));
		$throwNew($RuntimeException);
	}
}

RoundingTests::RoundingTests() {
}

$Class* RoundingTests::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RoundingTests, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RoundingTests, main, void, $StringArray*)},
		{"roundingTests", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(RoundingTests, roundingTests, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"RoundingTests",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RoundingTests, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RoundingTests);
	});
	return class$;
}

$Class* RoundingTests::class$ = nullptr;