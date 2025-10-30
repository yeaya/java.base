#include <RoundingTests.h>

#include <java/math/BigDecimal.h>
#include <java/math/MathContext.h>
#include <jcpp.h>

#undef MIN_VALUE

using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $MathContext = ::java::math::MathContext;

$MethodInfo _RoundingTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RoundingTests::*)()>(&RoundingTests::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RoundingTests::main))},
	{"roundingTests", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&RoundingTests::roundingTests))},
	{}
};

$ClassInfo _RoundingTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RoundingTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RoundingTests_MethodInfo_
};

$Object* allocate$RoundingTests($Class* clazz) {
	return $of($alloc(RoundingTests));
}

void RoundingTests::init$() {
}

int32_t RoundingTests::roundingTests() {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($BigDecimal, bd1, $BigDecimal::valueOf(11, $Integer::MIN_VALUE));
	$var($BigDecimal, bd2, nullptr);
	$var($MathContext, mc, $new($MathContext, 1));
	try {
		$assign(bd2, $nc(bd1)->round(mc));
		++failures;
		$nc($System::err)->printf("Did not get expected overflow rounding %s to %d digits, got %s%n"_s, $$new($ObjectArray, {
			$of(bd1),
			$($of($Integer::valueOf(mc->getPrecision()))),
			$of(bd2)
		}));
	} catch ($ArithmeticException& e) {
	}
	return failures;
}

void RoundingTests::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(RoundingTests, name, initialize, &_RoundingTests_ClassInfo_, allocate$RoundingTests);
	return class$;
}

$Class* RoundingTests::class$ = nullptr;