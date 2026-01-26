#include <java/math/BigDecimal$LongOverflow.h>

#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef LONGMAX
#undef LONGMIN
#undef MAX_VALUE
#undef MIN_VALUE

using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;

namespace java {
	namespace math {

$FieldInfo _BigDecimal$LongOverflow_FieldInfo_[] = {
	{"LONGMIN", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigDecimal$LongOverflow, LONGMIN)},
	{"LONGMAX", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigDecimal$LongOverflow, LONGMAX)},
	{}
};

$MethodInfo _BigDecimal$LongOverflow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(BigDecimal$LongOverflow, init$, void)},
	{"check", "(Ljava/math/BigDecimal;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BigDecimal$LongOverflow, check, void, $BigDecimal*)},
	{}
};

$InnerClassInfo _BigDecimal$LongOverflow_InnerClassesInfo_[] = {
	{"java.math.BigDecimal$LongOverflow", "java.math.BigDecimal", "LongOverflow", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BigDecimal$LongOverflow_ClassInfo_ = {
	$ACC_SUPER,
	"java.math.BigDecimal$LongOverflow",
	"java.lang.Object",
	nullptr,
	_BigDecimal$LongOverflow_FieldInfo_,
	_BigDecimal$LongOverflow_MethodInfo_,
	nullptr,
	nullptr,
	_BigDecimal$LongOverflow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.math.BigDecimal"
};

$Object* allocate$BigDecimal$LongOverflow($Class* clazz) {
	return $of($alloc(BigDecimal$LongOverflow));
}

$BigInteger* BigDecimal$LongOverflow::LONGMIN = nullptr;
$BigInteger* BigDecimal$LongOverflow::LONGMAX = nullptr;

void BigDecimal$LongOverflow::init$() {
}

void BigDecimal$LongOverflow::check($BigDecimal* num) {
	$init(BigDecimal$LongOverflow);
	$var($BigInteger, intVal, $nc(num)->inflated());
	bool var$0 = $nc(intVal)->compareTo(BigDecimal$LongOverflow::LONGMIN) < 0;
	if (var$0 || $nc(intVal)->compareTo(BigDecimal$LongOverflow::LONGMAX) > 0) {
		$throwNew($ArithmeticException, "Overflow"_s);
	}
}

void clinit$BigDecimal$LongOverflow($Class* class$) {
	$assignStatic(BigDecimal$LongOverflow::LONGMIN, $BigInteger::valueOf($Long::MIN_VALUE));
	$assignStatic(BigDecimal$LongOverflow::LONGMAX, $BigInteger::valueOf($Long::MAX_VALUE));
}

BigDecimal$LongOverflow::BigDecimal$LongOverflow() {
}

$Class* BigDecimal$LongOverflow::load$($String* name, bool initialize) {
	$loadClass(BigDecimal$LongOverflow, name, initialize, &_BigDecimal$LongOverflow_ClassInfo_, clinit$BigDecimal$LongOverflow, allocate$BigDecimal$LongOverflow);
	return class$;
}

$Class* BigDecimal$LongOverflow::class$ = nullptr;

	} // math
} // java