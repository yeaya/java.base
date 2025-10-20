#include <RoundingModeTests.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/RoundingMode.h>
#include <jcpp.h>

#undef CEILING
#undef DOWN
#undef FLOOR
#undef HALF_DOWN
#undef HALF_EVEN
#undef HALF_UP
#undef ROUND_CEILING
#undef ROUND_DOWN
#undef ROUND_FLOOR
#undef ROUND_HALF_DOWN
#undef ROUND_HALF_EVEN
#undef ROUND_HALF_UP
#undef ROUND_UNNECESSARY
#undef UNNECESSARY

using $RoundingModeArray = $Array<::java::math::RoundingMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $RoundingMode = ::java::math::RoundingMode;

$MethodInfo _RoundingModeTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RoundingModeTests::*)()>(&RoundingModeTests::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RoundingModeTests::main))},
	{}
};

$ClassInfo _RoundingModeTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RoundingModeTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RoundingModeTests_MethodInfo_
};

$Object* allocate$RoundingModeTests($Class* clazz) {
	return $of($alloc(RoundingModeTests));
}

void RoundingModeTests::init$() {
}

void RoundingModeTests::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	{
		$var($RoundingModeArray, arr$, $RoundingMode::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$RoundingMode* rm = arr$->get(i$);
			{
				if (rm != $RoundingMode::valueOf($($nc(rm)->toString()))) {
					$throwNew($RuntimeException, $$str({"Bad roundtrip conversion of "_s, $($nc(rm)->toString())}));
				}
			}
		}
	}
	$init($RoundingMode);
	if ($RoundingMode::valueOf($BigDecimal::ROUND_CEILING) != $RoundingMode::CEILING) {
		$throwNew($RuntimeException, "Bad mapping for ROUND_CEILING"_s);
	}
	if ($RoundingMode::valueOf($BigDecimal::ROUND_DOWN) != $RoundingMode::DOWN) {
		$throwNew($RuntimeException, "Bad mapping for ROUND_DOWN"_s);
	}
	if ($RoundingMode::valueOf($BigDecimal::ROUND_FLOOR) != $RoundingMode::FLOOR) {
		$throwNew($RuntimeException, "Bad mapping for ROUND_FLOOR"_s);
	}
	if ($RoundingMode::valueOf($BigDecimal::ROUND_HALF_DOWN) != $RoundingMode::HALF_DOWN) {
		$throwNew($RuntimeException, "Bad mapping for ROUND_HALF_DOWN"_s);
	}
	if ($RoundingMode::valueOf($BigDecimal::ROUND_HALF_EVEN) != $RoundingMode::HALF_EVEN) {
		$throwNew($RuntimeException, "Bad mapping for ROUND_HALF_EVEN"_s);
	}
	if ($RoundingMode::valueOf($BigDecimal::ROUND_HALF_UP) != $RoundingMode::HALF_UP) {
		$throwNew($RuntimeException, "Bad mapping for ROUND_HALF_UP"_s);
	}
	if ($RoundingMode::valueOf($BigDecimal::ROUND_UNNECESSARY) != $RoundingMode::UNNECESSARY) {
		$throwNew($RuntimeException, "Bad mapping for ROUND_UNNECESARY"_s);
	}
}

RoundingModeTests::RoundingModeTests() {
}

$Class* RoundingModeTests::load$($String* name, bool initialize) {
	$loadClass(RoundingModeTests, name, initialize, &_RoundingModeTests_ClassInfo_, allocate$RoundingModeTests);
	return class$;
}

$Class* RoundingModeTests::class$ = nullptr;