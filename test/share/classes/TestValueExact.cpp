#include <TestValueExact.h>

#include <java/io/PrintStream.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE
#undef ONE
#undef TEN
#undef ZERO

using $BigIntegerArray = $Array<::java::math::BigInteger>;
using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _TestValueExact_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestValueExact::*)()>(&TestValueExact::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&TestValueExact::main))},
	{"testByteValueExact", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&TestValueExact::testByteValueExact))},
	{"testIntValueExact", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&TestValueExact::testIntValueExact))},
	{"testLongValueExact", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&TestValueExact::testLongValueExact))},
	{"testShortValueExact", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&TestValueExact::testShortValueExact))},
	{}
};

$ClassInfo _TestValueExact_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestValueExact",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestValueExact_MethodInfo_
};

$Object* allocate$TestValueExact($Class* clazz) {
	return $of($alloc(TestValueExact));
}

void TestValueExact::init$() {
}

void TestValueExact::main($StringArray* args) {
	int32_t errors = 0;
	errors += testLongValueExact();
	errors += testIntValueExact();
	errors += testShortValueExact();
	errors += testByteValueExact();
	if (errors > 0) {
		$throwNew($RuntimeException);
	}
}

int32_t TestValueExact::testLongValueExact() {
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
		$init($BigInteger);
	$var($BigIntegerArray, inRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf($Long::MIN_VALUE)),
		$BigInteger::ZERO,
		$($BigInteger::valueOf($Long::MAX_VALUE))
	}));
	$var($BigIntegerArray, outOfRange, $new($BigIntegerArray, {
		$($nc($($BigInteger::valueOf($Long::MIN_VALUE)))->subtract($BigInteger::ONE)),
		$($nc($($BigInteger::valueOf($Long::MAX_VALUE)))->add($BigInteger::ONE))
	}));
	{
		$var($BigIntegerArray, arr$, inRange);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			{
				int64_t var$0 = $nc(bi)->longValueExact();
				if (var$0 != bi->longValue()) {
					$init($System);
					$nc($System::err)->println($$str({"Mismatching int conversion for "_s, bi}));
					++errors;
				}
			}
		}
	}
	{
		$var($BigIntegerArray, arr$, outOfRange);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			{
				try {
					int64_t value = $nc(bi)->longValueExact();
					$init($System);
					$nc($System::err)->println($$str({"Failed to get expected exception on "_s, bi, " got "_s, $$str(value)}));
					++errors;
				} catch ($ArithmeticException&) {
					$var($ArithmeticException, ae, $catch());
				}
			}
		}
	}
	return errors;
}

int32_t TestValueExact::testIntValueExact() {
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
		$init($BigInteger);
	$var($BigIntegerArray, inRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf((int64_t)$Integer::MIN_VALUE)),
		$BigInteger::ZERO,
		$BigInteger::ONE,
		$BigInteger::TEN,
		$($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE))
	}));
	$var($BigIntegerArray, outOfRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf((int64_t)$Integer::MIN_VALUE - 1)),
		$($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE + 1))
	}));
	{
		$var($BigIntegerArray, arr$, inRange);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			{
				int32_t var$0 = $nc(bi)->intValueExact();
				if (var$0 != bi->intValue()) {
					$init($System);
					$nc($System::err)->println($$str({"Mismatching int conversion for "_s, bi}));
					++errors;
				}
			}
		}
	}
	{
		$var($BigIntegerArray, arr$, outOfRange);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			{
				try {
					int32_t value = $nc(bi)->intValueExact();
					$init($System);
					$nc($System::err)->println($$str({"Failed to get expected exception on "_s, bi, " got "_s, $$str(value)}));
					++errors;
				} catch ($ArithmeticException&) {
					$var($ArithmeticException, ae, $catch());
				}
			}
		}
	}
	return errors;
}

int32_t TestValueExact::testShortValueExact() {
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
		$init($BigInteger);
	$var($BigIntegerArray, inRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf((int64_t)$Short::MIN_VALUE)),
		$BigInteger::ZERO,
		$BigInteger::ONE,
		$BigInteger::TEN,
		$($BigInteger::valueOf((int64_t)$Short::MAX_VALUE))
	}));
	$var($BigIntegerArray, outOfRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf((int64_t)$Integer::MIN_VALUE - 1)),
		$($BigInteger::valueOf((int64_t)$Integer::MIN_VALUE)),
		$($BigInteger::valueOf((int64_t)((int32_t)$Short::MIN_VALUE - 1))),
		$($BigInteger::valueOf((int64_t)((int32_t)$Short::MAX_VALUE + 1))),
		$($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE)),
		$($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE + 1))
	}));
	{
		$var($BigIntegerArray, arr$, inRange);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			{
				int16_t var$0 = $nc(bi)->shortValueExact();
				if (var$0 != bi->shortValue()) {
					$init($System);
					$nc($System::err)->println($$str({"Mismatching short  conversion for "_s, bi}));
					++errors;
				}
			}
		}
	}
	{
		$var($BigIntegerArray, arr$, outOfRange);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			{
				try {
					int32_t value = $nc(bi)->shortValueExact();
					$init($System);
					$nc($System::err)->println($$str({"Failed to get expected exception on "_s, bi, " got "_s, $$str(value)}));
					++errors;
				} catch ($ArithmeticException&) {
					$var($ArithmeticException, ae, $catch());
				}
			}
		}
	}
	return errors;
}

int32_t TestValueExact::testByteValueExact() {
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
		$init($BigInteger);
	$var($BigIntegerArray, inRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf((int64_t)$Byte::MIN_VALUE)),
		$($BigInteger::valueOf((int64_t)0)),
		$BigInteger::ONE,
		$BigInteger::TEN,
		$($BigInteger::valueOf((int64_t)$Byte::MAX_VALUE))
	}));
	$var($BigIntegerArray, outOfRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf((int64_t)$Integer::MIN_VALUE - 1)),
		$($BigInteger::valueOf((int64_t)$Integer::MIN_VALUE)),
		$($BigInteger::valueOf((int64_t)((int32_t)$Short::MIN_VALUE - 1))),
		$($BigInteger::valueOf((int64_t)(int32_t)$Short::MIN_VALUE)),
		$($BigInteger::valueOf((int64_t)((int32_t)$Byte::MIN_VALUE - 1))),
		$($BigInteger::valueOf((int64_t)((int32_t)$Byte::MAX_VALUE + 1))),
		$($BigInteger::valueOf((int64_t)((int32_t)$Short::MAX_VALUE + 1))),
		$($BigInteger::valueOf((int64_t)(int32_t)$Short::MAX_VALUE)),
		$($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE)),
		$($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE + 1))
	}));
	{
		$var($BigIntegerArray, arr$, inRange);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			{
				int8_t var$0 = $nc(bi)->byteValueExact();
				if (var$0 != bi->byteValue()) {
					$init($System);
					$nc($System::err)->println($$str({"Mismatching byte conversion for "_s, bi}));
					++errors;
				}
			}
		}
	}
	{
		$var($BigIntegerArray, arr$, outOfRange);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			{
				try {
					int32_t value = $nc(bi)->byteValueExact();
					$init($System);
					$nc($System::err)->println($$str({"Failed to get expected exception on "_s, bi, " got "_s, $$str(value)}));
					++errors;
				} catch ($ArithmeticException&) {
					$var($ArithmeticException, ae, $catch());
				}
			}
		}
	}
	return errors;
}

TestValueExact::TestValueExact() {
}

$Class* TestValueExact::load$($String* name, bool initialize) {
	$loadClass(TestValueExact, name, initialize, &_TestValueExact_ClassInfo_, allocate$TestValueExact);
	return class$;
}

$Class* TestValueExact::class$ = nullptr;