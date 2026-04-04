#include <DivisionOverflow.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef ONE
#undef ZERO

using $BigIntegerArray = $Array<::java::math::BigInteger>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

void DivisionOverflow::init$() {
}

void DivisionOverflow::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$init($BigInteger);
		$var($BigInteger, a, $nc($BigInteger::ONE)->shiftLeft(0x7ffffffe));
		$var($BigInteger, b, $BigInteger::ONE->shiftLeft(1568));
		$var($BigIntegerArray, qr, a->divideAndRemainder(b));
		$var($BigInteger, q, qr->get(0));
		$var($BigInteger, r, qr->get(1));
		if (!$nc(r)->equals($BigInteger::ZERO)) {
			$throwNew($RuntimeException, $$str({"Incorrect signum() of remainder "_s, $$str(r->signum())}));
		}
		if ($nc(q)->bitLength() != 0x7ffff9df) {
			$throwNew($RuntimeException, $$str({"Incorrect bitLength() of quotient "_s, $$str(q->bitLength())}));
		}
		$nc($System::out)->println("Division of large values passed without overflow."_s);
	} catch ($OutOfMemoryError& e) {
		$nc($System::err)->println("DivisionOverflow skipped: OutOfMemoryError"_s);
		$System::err->println("Run jtreg with -javaoption:-Xmx8g"_s);
	}
}

DivisionOverflow::DivisionOverflow() {
}

$Class* DivisionOverflow::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DivisionOverflow, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DivisionOverflow, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DivisionOverflow",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DivisionOverflow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DivisionOverflow);
	});
	return class$;
}

$Class* DivisionOverflow::class$ = nullptr;