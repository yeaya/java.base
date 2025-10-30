#include <StringConstructor.h>

#include <java/lang/NumberFormatException.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _StringConstructor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringConstructor::*)()>(&StringConstructor::init$))},
	{"constructWithError", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&StringConstructor::constructWithError))},
	{"constructWithoutError", "(Ljava/lang/String;J)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,int64_t)>(&StringConstructor::constructWithoutError))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StringConstructor::main))},
	{}
};

$ClassInfo _StringConstructor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StringConstructor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StringConstructor_MethodInfo_
};

$Object* allocate$StringConstructor($Class* clazz) {
	return $of($alloc(StringConstructor));
}

void StringConstructor::init$() {
}

void StringConstructor::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	constructWithoutError("0"_s, 0);
	constructWithoutError("000000000000000000"_s, 0);
	constructWithoutError("1"_s, 1);
	constructWithoutError("-1"_s, -1);
	constructWithoutError("+1"_s, +1);
	constructWithoutError("123456789123456789"_s, 0x01B69B4BACD05F15);
	constructWithoutError("+123456789123456789"_s, 0x01B69B4BACD05F15);
	constructWithoutError("-123456789123456789"_s, 0xFE4964B4532FA0EB);
	constructWithoutError($($Integer::toString($Integer::MIN_VALUE)), (int64_t)$Integer::MIN_VALUE);
	constructWithoutError($($Integer::toString($Integer::MAX_VALUE)), (int64_t)$Integer::MAX_VALUE);
	constructWithoutError($($Long::toString($Long::MIN_VALUE)), $Long::MIN_VALUE);
	constructWithoutError($($Long::toString($Long::MAX_VALUE)), $Long::MAX_VALUE);
	constructWithError(""_s);
	constructWithError("-"_s);
	constructWithError("+"_s);
	constructWithError("--"_s);
	constructWithError("++"_s);
	constructWithError("-000-0"_s);
	constructWithError("+000+0"_s);
	constructWithError("+000-0"_s);
	constructWithError("--1234567890"_s);
	constructWithError("++1234567890"_s);
	constructWithError("-0-12345678"_s);
	constructWithError("+0+12345678"_s);
	constructWithError("--12345678-12345678-12345678"_s);
	constructWithError("++12345678+12345678+12345678"_s);
	constructWithError("12345-"_s);
	constructWithError("12345+"_s);
}

void StringConstructor::constructWithError($String* badString) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($BigInteger, bi, $new($BigInteger, badString));
		$throwNew($RuntimeException, $$str({badString, " accepted"_s}));
	} catch ($NumberFormatException& e) {
	}
}

void StringConstructor::constructWithoutError($String* goodString, int64_t value) {
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, bi, $new($BigInteger, goodString));
	if (bi->longValue() != value) {
		$nc($System::err)->printf("From ``%s\'\' expected %d, got %s.\n"_s, $$new($ObjectArray, {
			$of(goodString),
			$($of($Long::valueOf(value))),
			$of(bi)
		}));
		$throwNew($RuntimeException);
	}
}

StringConstructor::StringConstructor() {
}

$Class* StringConstructor::load$($String* name, bool initialize) {
	$loadClass(StringConstructor, name, initialize, &_StringConstructor_ClassInfo_, allocate$StringConstructor);
	return class$;
}

$Class* StringConstructor::class$ = nullptr;