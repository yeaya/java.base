#include <BitLengthOverflow.h>

#include <java/io/PrintStream.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
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

#undef ONE
#undef MAX_VALUE

using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _BitLengthOverflow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BitLengthOverflow::*)()>(&BitLengthOverflow::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BitLengthOverflow::main))},
	{}
};

$ClassInfo _BitLengthOverflow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BitLengthOverflow",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BitLengthOverflow_MethodInfo_
};

$Object* allocate$BitLengthOverflow($Class* clazz) {
	return $of($alloc(BitLengthOverflow));
}

void BitLengthOverflow::init$() {
}

void BitLengthOverflow::main($StringArray* args) {
	try {
		$init($BigInteger);
		$var($BigInteger, x, $nc($BigInteger::ONE)->shiftLeft($Integer::MAX_VALUE));
		if ($nc(x)->bitLength() != ((int64_t)1 << 31)) {
			$throwNew($RuntimeException, $$str({"Incorrect bitLength() "_s, $$str(x->bitLength())}));
		}
		$init($System);
		$nc($System::out)->println($$str({"Surprisingly passed with correct bitLength() "_s, $$str($nc(x)->bitLength())}));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, e, $catch());
		$init($System);
		$nc($System::out)->println("Overflow is reported by ArithmeticException, as expected"_s);
	} catch ($OutOfMemoryError&) {
		$var($OutOfMemoryError, e, $catch());
		$init($System);
		$nc($System::err)->println("BitLengthOverflow skipped: OutOfMemoryError"_s);
		$nc($System::err)->println("Run jtreg with -javaoption:-Xmx8g"_s);
	}
}

BitLengthOverflow::BitLengthOverflow() {
}

$Class* BitLengthOverflow::load$($String* name, bool initialize) {
	$loadClass(BitLengthOverflow, name, initialize, &_BitLengthOverflow_ClassInfo_, allocate$BitLengthOverflow);
	return class$;
}

$Class* BitLengthOverflow::class$ = nullptr;