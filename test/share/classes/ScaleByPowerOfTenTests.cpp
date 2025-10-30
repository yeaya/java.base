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

$MethodInfo _ScaleByPowerOfTenTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScaleByPowerOfTenTests::*)()>(&ScaleByPowerOfTenTests::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ScaleByPowerOfTenTests::main))},
	{}
};

$ClassInfo _ScaleByPowerOfTenTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ScaleByPowerOfTenTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ScaleByPowerOfTenTests_MethodInfo_
};

$Object* allocate$ScaleByPowerOfTenTests($Class* clazz) {
	return $of($alloc(ScaleByPowerOfTenTests));
}

void ScaleByPowerOfTenTests::init$() {
}

void ScaleByPowerOfTenTests::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = -10; i < 10; ++i) {
		$init($BigDecimal);
		$var($BigDecimal, bd, $nc($BigDecimal::ONE)->scaleByPowerOfTen(i));
		$var($BigDecimal, expected, nullptr);
		$init($BigInteger);
		if (!$nc(bd)->equals($assign(expected, $new($BigDecimal, $BigInteger::ONE, -i)))) {
			$var($String, var$0, $$str({"Unexpected result "_s, $(bd->toString()), "; expected "_s}));
			$throwNew($RuntimeException, $$concat(var$0, $($nc(expected)->toString())));
		}
		$assign(bd, $nc($($nc($BigDecimal::ONE)->negate()))->scaleByPowerOfTen(i));
		if (!$nc(bd)->equals($assign(expected, $new($BigDecimal, $($nc($BigInteger::ONE)->negate()), -i)))) {
			$var($String, var$1, $$str({"Unexpected result "_s, $(bd->toString()), "; expected "_s}));
			$throwNew($RuntimeException, $$concat(var$1, $($nc(expected)->toString())));
		}
	}
}

ScaleByPowerOfTenTests::ScaleByPowerOfTenTests() {
}

$Class* ScaleByPowerOfTenTests::load$($String* name, bool initialize) {
	$loadClass(ScaleByPowerOfTenTests, name, initialize, &_ScaleByPowerOfTenTests_ClassInfo_, allocate$ScaleByPowerOfTenTests);
	return class$;
}

$Class* ScaleByPowerOfTenTests::class$ = nullptr;