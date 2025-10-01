#include <DivisionOverflow.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef ZERO
#undef ONE

using $BigIntegerArray = $Array<::java::math::BigInteger>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _DivisionOverflow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DivisionOverflow::*)()>(&DivisionOverflow::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DivisionOverflow::main))},
	{}
};

$ClassInfo _DivisionOverflow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DivisionOverflow",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DivisionOverflow_MethodInfo_
};

$Object* allocate$DivisionOverflow($Class* clazz) {
	return $of($alloc(DivisionOverflow));
}

void DivisionOverflow::init$() {
}

void DivisionOverflow::main($StringArray* args) {
	try {
		$init($BigInteger);
		$var($BigInteger, a, $nc($BigInteger::ONE)->shiftLeft(0x7FFFFFFE));
		$var($BigInteger, b, $nc($BigInteger::ONE)->shiftLeft(1568));
		$var($BigIntegerArray, qr, $nc(a)->divideAndRemainder(b));
		$var($BigInteger, q, $nc(qr)->get(0));
		$var($BigInteger, r, qr->get(1));
		if (!$nc(r)->equals($BigInteger::ZERO)) {
			$throwNew($RuntimeException, $$str({"Incorrect signum() of remainder "_s, $$str(r->signum())}));
		}
		if ($nc(q)->bitLength() != 0x7FFFF9DF) {
			$throwNew($RuntimeException, $$str({"Incorrect bitLength() of quotient "_s, $$str(q->bitLength())}));
		}
		$init($System);
		$nc($System::out)->println("Division of large values passed without overflow."_s);
	} catch ($OutOfMemoryError&) {
		$var($OutOfMemoryError, e, $catch());
		$init($System);
		$nc($System::err)->println("DivisionOverflow skipped: OutOfMemoryError"_s);
		$nc($System::err)->println("Run jtreg with -javaoption:-Xmx8g"_s);
	}
}

DivisionOverflow::DivisionOverflow() {
}

$Class* DivisionOverflow::load$($String* name, bool initialize) {
	$loadClass(DivisionOverflow, name, initialize, &_DivisionOverflow_ClassInfo_, allocate$DivisionOverflow);
	return class$;
}

$Class* DivisionOverflow::class$ = nullptr;