#include <Compare.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Random = ::java::util::Random;

$FieldInfo _Compare_FieldInfo_[] = {
	{"rnd", "Ljava/util/Random;", nullptr, $FINAL, $field(Compare, rnd)},
	{"passed", "I", nullptr, $VOLATILE, $field(Compare, passed)},
	{"failed", "I", nullptr, $VOLATILE, $field(Compare, failed)},
	{}
};

$MethodInfo _Compare_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Compare::*)()>(&Compare::init$))},
	{"check", "(Z)V", nullptr, 0},
	{"compareAll", "(JJ)V", nullptr, 0},
	{"equal", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0},
	{"fail", "()V", nullptr, 0},
	{"fail", "(Ljava/lang/String;)V", nullptr, 0},
	{"instanceMain", "([Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Compare::main)), "java.lang.Throwable"},
	{"pass", "()V", nullptr, 0},
	{"test", "([Ljava/lang/String;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"toBoolean", "(J)Z", nullptr, 0},
	{"unexpected", "(Ljava/lang/Throwable;)V", nullptr, 0},
	{}
};

$ClassInfo _Compare_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Compare",
	"java.lang.Object",
	nullptr,
	_Compare_FieldInfo_,
	_Compare_MethodInfo_
};

$Object* allocate$Compare($Class* clazz) {
	return $of($alloc(Compare));
}

void Compare::init$() {
	$set(this, rnd, $new($Random));
	this->passed = 0;
	this->failed = 0;
}

bool Compare::toBoolean(int64_t x) {
	return x > 0;
}

void Compare::compareAll(int64_t x, int64_t y) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $Double::compare((double)x, (double)y);
	check(var$0 == $nc($($Double::valueOf((double)x)))->compareTo($($Double::valueOf((double)y))));
	int32_t var$1 = $Float::compare((float)x, (float)y);
	check(var$1 == $nc($($Float::valueOf((float)x)))->compareTo($($Float::valueOf((float)y))));
	int32_t var$2 = $Long::compare(x, y);
	check(var$2 == $nc($($Long::valueOf(x)))->compareTo($($Long::valueOf(y))));
	int32_t var$3 = $Integer::compare((int32_t)x, (int32_t)y);
	check(var$3 == $nc($($Integer::valueOf((int32_t)x)))->compareTo($($Integer::valueOf((int32_t)y))));
	int32_t var$4 = $Short::compare((int16_t)x, (int16_t)y);
	check(var$4 == $nc($($Short::valueOf((int16_t)x)))->compareTo($($Short::valueOf((int16_t)y))));
	int32_t var$5 = $Character::compare((char16_t)x, (char16_t)y);
	check(var$5 == $nc($($Character::valueOf((char16_t)x)))->compareTo($($Character::valueOf((char16_t)y))));
	int32_t var$6 = $Byte::compare((int8_t)x, (int8_t)y);
	check(var$6 == $nc($($Byte::valueOf((int8_t)x)))->compareTo($($Byte::valueOf((int8_t)y))));
	bool var$8 = toBoolean(x);
	int32_t var$7 = $Boolean::compare(var$8, toBoolean(y));
	check(var$7 == $nc($($Boolean::valueOf(toBoolean(x))))->compareTo($($Boolean::valueOf(toBoolean(y)))));
	int32_t var$9 = $Double::compare((double)x, (double)y);
	check(var$9 == -$Double::compare((double)y, (double)x));
	int32_t var$10 = $Float::compare((float)x, (float)y);
	check(var$10 == -$Float::compare((float)y, (float)x));
	int32_t var$11 = $Long::compare(x, y);
	check(var$11 == -$Long::compare(y, x));
	int32_t var$12 = $Integer::compare((int32_t)x, (int32_t)y);
	check(var$12 == -$Integer::compare((int32_t)y, (int32_t)x));
	int32_t var$13 = $Short::compare((int16_t)x, (int16_t)y);
	check(var$13 == -$Short::compare((int16_t)y, (int16_t)x));
	int32_t var$14 = $Character::compare((char16_t)x, (char16_t)y);
	check(var$14 == -$Character::compare((char16_t)y, (char16_t)x));
	int32_t var$15 = $Byte::compare((int8_t)x, (int8_t)y);
	check(var$15 == -$Byte::compare((int8_t)y, (int8_t)x));
	$var($Object, var$16, $of($Integer::valueOf($Long::compare(x, y))));
	equal(var$16, $($Integer::valueOf(x < y ? -1 : x > y ? 1 : 0)));
	{
		int32_t a = (int32_t)x;
		int32_t b = (int32_t)y;
		$var($Object, var$17, $of($Integer::valueOf($Integer::compare(a, b))));
		equal(var$17, $($Integer::valueOf(a < b ? -1 : a > b ? 1 : 0)));
	}
	{
		int16_t a = (int16_t)x;
		int16_t b = (int16_t)y;
		$var($Object, var$18, $of($Integer::valueOf($Short::compare(a, b))));
		equal(var$18, $($Integer::valueOf(a - b)));
	}
	{
		char16_t a = (char16_t)x;
		char16_t b = (char16_t)y;
		$var($Object, var$19, $of($Integer::valueOf($Character::compare(a, b))));
		equal(var$19, $($Integer::valueOf(a - b)));
	}
	{
		int8_t a = (int8_t)x;
		int8_t b = (int8_t)y;
		$var($Object, var$20, $of($Integer::valueOf($Byte::compare(a, b))));
		equal(var$20, $($Integer::valueOf(a - b)));
	}
	{
		bool a = toBoolean(x);
		bool b = toBoolean(y);
		$var($Object, var$21, $of($Integer::valueOf($Boolean::compare(a, b))));
		equal(var$21, $($Integer::valueOf(a == b ? 0 : a ? 1 : -1)));
	}
}

void Compare::test($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($longs, longs, $new($longs, {
		$Long::MIN_VALUE,
		(int64_t)$Integer::MIN_VALUE,
		(int64_t)$Short::MIN_VALUE,
		(int64_t)$Character::MIN_VALUE,
		(int64_t)$Byte::MIN_VALUE,
		(int64_t)-1,
		(int64_t)0,
		(int64_t)1,
		(int64_t)$Byte::MAX_VALUE,
		(int64_t)$Character::MAX_VALUE,
		(int64_t)$Short::MAX_VALUE,
		(int64_t)$Integer::MAX_VALUE,
		$Long::MAX_VALUE,
		$nc(this->rnd)->nextLong(),
		(int64_t)$nc(this->rnd)->nextInt()
	}));
	{
		$var($longs, arr$, longs);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int64_t x = arr$->get(i$);
			{
				{
					$var($longs, arr$, longs);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						int64_t y = arr$->get(i$);
						{
							compareAll(x, y);
						}
					}
				}
			}
		}
	}
}

void Compare::pass() {
	++this->passed;
}

void Compare::fail() {
	++this->failed;
	$Thread::dumpStack();
}

void Compare::fail($String* msg) {
	$init($System);
	$nc($System::err)->println(msg);
	fail();
}

void Compare::unexpected($Throwable* t) {
	++this->failed;
	$nc(t)->printStackTrace();
}

void Compare::check(bool cond) {
	if (cond) {
		pass();
	} else {
		fail();
	}
}

void Compare::equal(Object$* x, Object$* y) {
	if (x == nullptr ? y == nullptr : $nc($of(x))->equals(y)) {
		pass();
	} else {
		fail($$str({x, " not equal to "_s, y}));
	}
}

void Compare::main($StringArray* args) {
	$$new(Compare)->instanceMain(args);
}

void Compare::instanceMain($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		test(args);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		unexpected(t);
	}
	$init($System);
	$nc($System::out)->printf("%nPassed = %d, failed = %d%n%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(this->passed))),
		$($of($Integer::valueOf(this->failed)))
	}));
	if (this->failed > 0) {
		$throwNew($AssertionError, $of("Some tests failed"_s));
	}
}

Compare::Compare() {
}

$Class* Compare::load$($String* name, bool initialize) {
	$loadClass(Compare, name, initialize, &_Compare_ClassInfo_, allocate$Compare);
	return class$;
}

$Class* Compare::class$ = nullptr;