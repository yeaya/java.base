#include <ScaleByPowerOfTenTests.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef ONE

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;

void ScaleByPowerOfTenTests::init$() {
}

void ScaleByPowerOfTenTests::main($StringArray* argv) {
	$useLocalObjectStack();
	for (int32_t i = -10; i < 10; ++i) {
		$init($BigDecimal);
		$var($BigDecimal, bd, $nc($BigDecimal::ONE)->scaleByPowerOfTen(i));
		$var($BigDecimal, expected, nullptr);
		$init($BigInteger);
		if (!bd->equals($assign(expected, $new($BigDecimal, $BigInteger::ONE, -i)))) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Unexpected result "_s);
			var$0->append($(bd->toString()));
			var$0->append("; expected "_s);
			var$0->append($(expected->toString()));
			$throwNew($RuntimeException, $$str(var$0));
		}
		$assign(bd, $($BigDecimal::ONE->negate())->scaleByPowerOfTen(i));
		if (!bd->equals($assign(expected, $new($BigDecimal, $($nc($BigInteger::ONE)->negate()), -i)))) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("Unexpected result "_s);
			var$1->append($(bd->toString()));
			var$1->append("; expected "_s);
			var$1->append($(expected->toString()));
			$throwNew($RuntimeException, $$str(var$1));
		}
	}
}

ScaleByPowerOfTenTests::ScaleByPowerOfTenTests() {
}

$Class* ScaleByPowerOfTenTests::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ScaleByPowerOfTenTests, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ScaleByPowerOfTenTests, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ScaleByPowerOfTenTests",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ScaleByPowerOfTenTests, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScaleByPowerOfTenTests);
	});
	return class$;
}

$Class* ScaleByPowerOfTenTests::class$ = nullptr;