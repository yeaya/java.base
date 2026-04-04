#include <StringConstructor.h>
#include <java/lang/NumberFormatException.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

void StringConstructor::init$() {
}

void StringConstructor::main($StringArray* argv) {
	$useLocalObjectStack();
	constructWithoutError("0"_s, 0);
	constructWithoutError("000000000000000000"_s, 0);
	constructWithoutError("1"_s, 1);
	constructWithoutError("-1"_s, -1);
	constructWithoutError("+1"_s, +1);
	constructWithoutError("123456789123456789"_s, (int64_t)0x01b69b4bacd05f15);
	constructWithoutError("+123456789123456789"_s, (int64_t)0x01b69b4bacd05f15);
	constructWithoutError("-123456789123456789"_s, (int64_t)0xfe4964b4532fa0eb);
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
	$useLocalObjectStack();
	try {
		$var($BigInteger, bi, $new($BigInteger, badString));
		$throwNew($RuntimeException, $$str({badString, " accepted"_s}));
	} catch ($NumberFormatException& e) {
	}
}

void StringConstructor::constructWithoutError($String* goodString, int64_t value) {
	$useLocalObjectStack();
	$var($BigInteger, bi, $new($BigInteger, goodString));
	if (bi->longValue() != value) {
		$nc($System::err)->printf("From ``%s\'\' expected %d, got %s.\n"_s, $$new($ObjectArray, {
			goodString,
			$($Long::valueOf(value)),
			bi
		}));
		$throwNew($RuntimeException);
	}
}

StringConstructor::StringConstructor() {
}

$Class* StringConstructor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StringConstructor, init$, void)},
		{"constructWithError", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConstructor, constructWithError, void, $String*)},
		{"constructWithoutError", "(Ljava/lang/String;J)V", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConstructor, constructWithoutError, void, $String*, int64_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringConstructor, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StringConstructor",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StringConstructor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringConstructor);
	});
	return class$;
}

$Class* StringConstructor::class$ = nullptr;