#include <BitLengthOverflow.h>

#include <java/lang/OutOfMemoryError.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef ONE

using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _BitLengthOverflow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BitLengthOverflow, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BitLengthOverflow, main, void, $StringArray*)},
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
	$useLocalCurrentObjectStackCache();
	try {
		$init($BigInteger);
		$var($BigInteger, x, $nc($BigInteger::ONE)->shiftLeft($Integer::MAX_VALUE));
		if ($nc(x)->bitLength() != ((int64_t)1 << 31)) {
			$throwNew($RuntimeException, $$str({"Incorrect bitLength() "_s, $$str(x->bitLength())}));
		}
		$nc($System::out)->println($$str({"Surprisingly passed with correct bitLength() "_s, $$str($nc(x)->bitLength())}));
	} catch ($ArithmeticException& e) {
		$nc($System::out)->println("Overflow is reported by ArithmeticException, as expected"_s);
	} catch ($OutOfMemoryError& e) {
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