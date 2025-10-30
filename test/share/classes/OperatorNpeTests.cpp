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

$MethodInfo _OperatorNpeTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OperatorNpeTests::*)()>(&OperatorNpeTests::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&OperatorNpeTests::main))},
	{}
};

$ClassInfo _OperatorNpeTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OperatorNpeTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OperatorNpeTests_MethodInfo_
};

$Object* allocate$OperatorNpeTests($Class* clazz) {
	return $of($alloc(OperatorNpeTests));
}

void OperatorNpeTests::init$() {
}

void OperatorNpeTests::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$init($BigInteger);
	$var($BigIntegerArray, specialValues, $new($BigIntegerArray, {
		$BigInteger::ZERO,
		$BigInteger::ONE,
		$BigInteger::TEN
	}));
	{
		$var($BigIntegerArray, arr$, specialValues);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigInteger, bd, arr$->get(i$));
			{
				$var($BigInteger, result, nullptr);
				try {
					$assign(result, $nc(bd)->multiply(($BigInteger*)nullptr));
					$throwNew($RuntimeException, $$str({"Instead of NPE got "_s, result}));
				} catch ($NullPointerException& npe) {
				}
				try {
					$assign(result, $nc(bd)->divide(nullptr));
					$throwNew($RuntimeException, $$str({"Instead of NPE got "_s, result}));
				} catch ($NullPointerException& npe) {
				}
				try {
					$assign(result, $nc(bd)->add(($BigInteger*)nullptr));
					$throwNew($RuntimeException, $$str({"Instead of NPE got "_s, result}));
				} catch ($NullPointerException& npe) {
				}
				try {
					$assign(result, $nc(bd)->subtract(nullptr));
					$throwNew($RuntimeException, $$str({"Instead of NPE got "_s, result}));
				} catch ($NullPointerException& npe) {
				}
			}
		}
	}
}

OperatorNpeTests::OperatorNpeTests() {
}

$Class* OperatorNpeTests::load$($String* name, bool initialize) {
	$loadClass(OperatorNpeTests, name, initialize, &_OperatorNpeTests_ClassInfo_, allocate$OperatorNpeTests);
	return class$;
}

$Class* OperatorNpeTests::class$ = nullptr;