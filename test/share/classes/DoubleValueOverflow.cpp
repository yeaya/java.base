#include <DoubleValueOverflow.h>

#include <java/io/PrintStream.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef POSITIVE_INFINITY
#undef MAX_VALUE

using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _DoubleValueOverflow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DoubleValueOverflow::*)()>(&DoubleValueOverflow::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DoubleValueOverflow::main))},
	{}
};

$ClassInfo _DoubleValueOverflow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DoubleValueOverflow",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DoubleValueOverflow_MethodInfo_
};

$Object* allocate$DoubleValueOverflow($Class* clazz) {
	return $of($alloc(DoubleValueOverflow));
}

void DoubleValueOverflow::init$() {
}

void DoubleValueOverflow::main($StringArray* args) {
	try {
		$var($BigInteger, x, $nc($($BigInteger::valueOf((int64_t)2)))->shiftLeft($Integer::MAX_VALUE));
		$init($Double);
		if ($nc(x)->doubleValue() != $Double::POSITIVE_INFINITY) {
			$throwNew($RuntimeException, $$str({"Incorrect doubleValue() "_s, $$str(x->doubleValue())}));
		}
		$init($System);
		$nc($System::out)->println("Passed with correct result"_s);
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, e, $catch());
		$init($System);
		$nc($System::out)->println("Overflow is reported by ArithmeticException, as expected"_s);
	} catch ($OutOfMemoryError&) {
		$var($OutOfMemoryError, e, $catch());
		$init($System);
		$nc($System::err)->println("DoubleValueOverflow skipped: OutOfMemoryError"_s);
		$nc($System::err)->println("Run jtreg with -javaoption:-Xmx8g"_s);
	}
}

DoubleValueOverflow::DoubleValueOverflow() {
}

$Class* DoubleValueOverflow::load$($String* name, bool initialize) {
	$loadClass(DoubleValueOverflow, name, initialize, &_DoubleValueOverflow_ClassInfo_, allocate$DoubleValueOverflow);
	return class$;
}

$Class* DoubleValueOverflow::class$ = nullptr;