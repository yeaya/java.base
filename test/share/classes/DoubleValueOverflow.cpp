#include <DoubleValueOverflow.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef POSITIVE_INFINITY

using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

void DoubleValueOverflow::init$() {
}

void DoubleValueOverflow::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($BigInteger, x, $($BigInteger::valueOf(2))->shiftLeft($Integer::MAX_VALUE));
		if (x->doubleValue() != $Double::POSITIVE_INFINITY) {
			$throwNew($RuntimeException, $$str({"Incorrect doubleValue() "_s, $$str(x->doubleValue())}));
		}
		$nc($System::out)->println("Passed with correct result"_s);
	} catch ($ArithmeticException& e) {
		$nc($System::out)->println("Overflow is reported by ArithmeticException, as expected"_s);
	} catch ($OutOfMemoryError& e) {
		$nc($System::err)->println("DoubleValueOverflow skipped: OutOfMemoryError"_s);
		$System::err->println("Run jtreg with -javaoption:-Xmx8g"_s);
	}
}

DoubleValueOverflow::DoubleValueOverflow() {
}

$Class* DoubleValueOverflow::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DoubleValueOverflow, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DoubleValueOverflow, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DoubleValueOverflow",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DoubleValueOverflow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleValueOverflow);
	});
	return class$;
}

$Class* DoubleValueOverflow::class$ = nullptr;