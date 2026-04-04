#include <OperatorNpeTests.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef ONE
#undef TEN
#undef ZERO

using $BigIntegerArray = $Array<::java::math::BigInteger>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

void OperatorNpeTests::init$() {
}

void OperatorNpeTests::main($StringArray* argv) {
	$useLocalObjectStack();
	$init($BigInteger);
	$var($BigIntegerArray, specialValues, $new($BigIntegerArray, {
		$BigInteger::ZERO,
		$BigInteger::ONE,
		$BigInteger::TEN
	}));
	{
		$var($BigIntegerArray, arr$, specialValues);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigInteger, bd, arr$->get(i$));
			{
				$var($BigInteger, result, nullptr);
				try {
					$assign(result, $nc(bd)->multiply(nullptr));
					$throwNew($RuntimeException, $$str({"Instead of NPE got "_s, result}));
				} catch ($NullPointerException& npe) {
					;
				}
				try {
					$assign(result, $nc(bd)->divide(nullptr));
					$throwNew($RuntimeException, $$str({"Instead of NPE got "_s, result}));
				} catch ($NullPointerException& npe) {
					;
				}
				try {
					$assign(result, $nc(bd)->add(nullptr));
					$throwNew($RuntimeException, $$str({"Instead of NPE got "_s, result}));
				} catch ($NullPointerException& npe) {
					;
				}
				try {
					$assign(result, $nc(bd)->subtract(nullptr));
					$throwNew($RuntimeException, $$str({"Instead of NPE got "_s, result}));
				} catch ($NullPointerException& npe) {
					;
				}
			}
		}
	}
}

OperatorNpeTests::OperatorNpeTests() {
}

$Class* OperatorNpeTests::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OperatorNpeTests, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(OperatorNpeTests, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"OperatorNpeTests",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OperatorNpeTests, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OperatorNpeTests);
	});
	return class$;
}

$Class* OperatorNpeTests::class$ = nullptr;