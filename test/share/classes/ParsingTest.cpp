#include <ParsingTest.h>

#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/NumberFormatException.h>
#include <jcpp.h>

#undef MAX_RADIX
#undef MIN_RADIX

using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ParsingTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ParsingTest, init$, void)},
	{"check", "(JLjava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ParsingTest, check, void, int64_t, $String*)},
	{"check", "(JLjava/lang/String;III)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ParsingTest, check, void, int64_t, $String*, int32_t, int32_t, int32_t)},
	{"checkFailure", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ParsingTest, checkFailure, void, $String*)},
	{"checkIndexOutOfBoundsException", "(Ljava/lang/String;III)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ParsingTest, checkIndexOutOfBoundsException, void, $String*, int32_t, int32_t, int32_t)},
	{"checkNull", "(III)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ParsingTest, checkNull, void, int32_t, int32_t, int32_t)},
	{"checkNumberFormatException", "(Ljava/lang/String;III)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ParsingTest, checkNumberFormatException, void, $String*, int32_t, int32_t, int32_t)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(ParsingTest, main, void, $StringArray*)},
	{}
};

$ClassInfo _ParsingTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ParsingTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParsingTest_MethodInfo_
};

$Object* allocate$ParsingTest($Class* clazz) {
	return $of($alloc(ParsingTest));
}

void ParsingTest::init$() {
}

void ParsingTest::main($StringArray* argv) {
	check(+100, "+100"_s);
	check(-100, "-100"_s);
	check(0, "+0"_s);
	check(0, "-0"_s);
	check(0, "+00000"_s);
	check(0, "-00000"_s);
	check(0, "0"_s);
	check(1, "1"_s);
	check(9, "9"_s);
	checkFailure(""_s);
	checkFailure($cstr({'\0'}));
	checkFailure("/"_s);
	checkFailure("+"_s);
	checkFailure("-"_s);
	checkFailure("++"_s);
	checkFailure("+-"_s);
	checkFailure("-+"_s);
	checkFailure("--"_s);
	checkFailure("++100"_s);
	checkFailure("--100"_s);
	checkFailure("+-6"_s);
	checkFailure("-+6"_s);
	checkFailure("*100"_s);
	check(0, "test-00000"_s, 4, 10, 10);
	check(-12345, "test-12345"_s, 4, 10, 10);
	check(12345, "xx12345yy"_s, 2, 7, 10);
	check(0x00007048860DDF79, "xx123456789012345yy"_s, 2, 17, 10);
	check(15, "xxFyy"_s, 2, 3, 16);
	checkNumberFormatException(""_s, 0, 0, 10);
	checkNumberFormatException("+-6"_s, 0, 3, 10);
	checkNumberFormatException("1000000"_s, 7, 7, 10);
	checkNumberFormatException("1000000"_s, 0, 2, $Character::MAX_RADIX + 1);
	checkNumberFormatException("1000000"_s, 0, 2, $Character::MIN_RADIX - 1);
	checkIndexOutOfBoundsException(""_s, 1, 1, 10);
	checkIndexOutOfBoundsException("1000000"_s, 10, 4, 10);
	checkIndexOutOfBoundsException("1000000"_s, 10, 2, $Character::MAX_RADIX + 1);
	checkIndexOutOfBoundsException("1000000"_s, 10, 2, $Character::MIN_RADIX - 1);
	checkIndexOutOfBoundsException("1000000"_s, -1, 2, $Character::MAX_RADIX + 1);
	checkIndexOutOfBoundsException("1000000"_s, -1, 2, $Character::MIN_RADIX - 1);
	checkIndexOutOfBoundsException("-1"_s, 0, 3, 10);
	checkIndexOutOfBoundsException("-1"_s, 2, 3, 10);
	checkIndexOutOfBoundsException("-1"_s, -1, 2, 10);
	checkNull(0, 1, 10);
	checkNull(-1, 0, 10);
	checkNull(0, 0, 10);
	checkNull(0, -1, 10);
	checkNull(-1, -1, -1);
}

void ParsingTest::check(int64_t expected, $String* val) {
	$useLocalCurrentObjectStackCache();
	int64_t n = $Long::parseLong(val);
	if (n != expected) {
		$throwNew($RuntimeException, $$str({"Long.parseLong failed. String:"_s, val, " Result:"_s, $$str(n)}));
	}
}

void ParsingTest::checkFailure($String* val) {
	$useLocalCurrentObjectStackCache();
	int64_t n = 0;
	try {
		n = $Long::parseLong(val);
		$nc($System::err)->println($$str({"parseLong("_s, val, ") incorrectly returned "_s, $$str(n)}));
		$throwNew($RuntimeException);
	} catch ($NumberFormatException& nfe) {
	}
}

void ParsingTest::checkNumberFormatException($String* val, int32_t start, int32_t end, int32_t radix) {
	$useLocalCurrentObjectStackCache();
	int64_t n = 0;
	try {
		n = $Long::parseLong(val, start, end, radix);
		$nc($System::err)->println($$str({"parseLong("_s, val, ", "_s, $$str(start), ", "_s, $$str(end), ", "_s, $$str(radix), ") incorrectly returned "_s, $$str(n)}));
		$throwNew($RuntimeException);
	} catch ($NumberFormatException& nfe) {
	}
}

void ParsingTest::checkIndexOutOfBoundsException($String* val, int32_t start, int32_t end, int32_t radix) {
	$useLocalCurrentObjectStackCache();
	int64_t n = 0;
	try {
		n = $Long::parseLong(val, start, end, radix);
		$nc($System::err)->println($$str({"parseLong("_s, val, ", "_s, $$str(start), ", "_s, $$str(end), ", "_s, $$str(radix), ") incorrectly returned "_s, $$str(n)}));
		$throwNew($RuntimeException);
	} catch ($IndexOutOfBoundsException& ioob) {
	}
}

void ParsingTest::checkNull(int32_t start, int32_t end, int32_t radix) {
	$useLocalCurrentObjectStackCache();
	int64_t n = 0;
	try {
		n = $Long::parseLong(nullptr, start, end, radix);
		$nc($System::err)->println($$str({"parseLong(null, "_s, $$str(start), ", "_s, $$str(end), ", "_s, $$str(radix), ") incorrectly returned "_s, $$str(n)}));
		$throwNew($RuntimeException);
	} catch ($NullPointerException& npe) {
	}
}

void ParsingTest::check(int64_t expected, $String* val, int32_t start, int32_t end, int32_t radix) {
	$useLocalCurrentObjectStackCache();
	int64_t n = $Long::parseLong(val, start, end, radix);
	if (n != expected) {
		$throwNew($RuntimeException, $$str({"Long.parseLong failed. Expexted: "_s, $$str(expected), " String: \""_s, val, "\", start: "_s, $$str(start), ", end: "_s, $$str(end), " radix: "_s, $$str(radix), " Result: "_s, $$str(n)}));
	}
}

ParsingTest::ParsingTest() {
}

$Class* ParsingTest::load$($String* name, bool initialize) {
	$loadClass(ParsingTest, name, initialize, &_ParsingTest_ClassInfo_, allocate$ParsingTest);
	return class$;
}

$Class* ParsingTest::class$ = nullptr;