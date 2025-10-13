#include <Test6987555.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CLASS
#undef DEBUG
#undef MAX_VALUE
#undef MIN_VALUE
#undef NAME
#undef TYPE

using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$FieldInfo _Test6987555_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Test6987555, $assertionsDisabled)},
	{"CLASS", "Ljava/lang/Class;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6987555, CLASS)},
	{"NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6987555, NAME)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6987555, DEBUG)},
	{}
};

$MethodInfo _Test6987555_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6987555::*)()>(&Test6987555::init$))},
	{"doboolean", "(Z)V", nullptr, $STATIC, $method(static_cast<void(*)(bool)>(&Test6987555::doboolean)), "java.lang.Throwable"},
	{"dobyte", "(B)V", nullptr, $STATIC, $method(static_cast<void(*)(int8_t)>(&Test6987555::dobyte)), "java.lang.Throwable"},
	{"dochar", "(C)V", nullptr, $STATIC, $method(static_cast<void(*)(char16_t)>(&Test6987555::dochar)), "java.lang.Throwable"},
	{"doint", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&Test6987555::doint)), "java.lang.Throwable"},
	{"doshort", "(S)V", nullptr, $STATIC, $method(static_cast<void(*)(int16_t)>(&Test6987555::doshort)), "java.lang.Throwable"},
	{"foo", "(Z)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(bool)>(&Test6987555::foo))},
	{"foo", "(B)B", nullptr, $PUBLIC | $STATIC, $method(static_cast<int8_t(*)(int8_t)>(&Test6987555::foo))},
	{"foo", "(C)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(char16_t)>(&Test6987555::foo))},
	{"foo", "(S)S", nullptr, $PUBLIC | $STATIC, $method(static_cast<int16_t(*)(int16_t)>(&Test6987555::foo))},
	{"foo", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Test6987555::foo))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6987555::main)), "java.lang.Throwable"},
	{"testboolean", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Test6987555::testboolean)), "java.lang.Throwable"},
	{"testbyte", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Test6987555::testbyte)), "java.lang.Throwable"},
	{"testchar", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Test6987555::testchar)), "java.lang.Throwable"},
	{"testint", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Test6987555::testint)), "java.lang.Throwable"},
	{"testshort", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Test6987555::testshort)), "java.lang.Throwable"},
	{}
};

$ClassInfo _Test6987555_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6987555",
	"java.lang.Object",
	nullptr,
	_Test6987555_FieldInfo_,
	_Test6987555_MethodInfo_
};

$Object* allocate$Test6987555($Class* clazz) {
	return $of($alloc(Test6987555));
}

bool Test6987555::$assertionsDisabled = false;
$Class* Test6987555::CLASS = nullptr;
$String* Test6987555::NAME = nullptr;

void Test6987555::init$() {
}

void Test6987555::main($StringArray* args) {
	$init(Test6987555);
	testboolean();
	testbyte();
	testchar();
	testshort();
	testint();
}

void Test6987555::testboolean() {
	$init(Test6987555);
	doboolean(false);
	doboolean(true);
}

void Test6987555::doboolean(bool x) {
	$init(Test6987555);
	$beforeCallerSensitive();
	$init($Boolean);
	$var($MethodHandle, mh1, $nc($($MethodHandles::lookup()))->findStatic(Test6987555::CLASS, Test6987555::NAME, $($MethodType::methodType($Boolean::TYPE, $Boolean::TYPE))));
	$var($MethodHandle, mh2, $nc(mh1)->asType($($MethodType::methodType($Boolean::TYPE, $Boolean::class$))));
	bool a = $booleanValue(mh1->invokeExact($$new($ObjectArray, {$$of(x)})));
	bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$($of($Boolean::valueOf(x)))})));
	if (!Test6987555::$assertionsDisabled && !(a == b)) {
		$throwNew($AssertionError, $of($$str({$$str(a), " != "_s, $$str(b)})));
	}
}

void Test6987555::testbyte() {
	$init(Test6987555);
	$var($bytes, a, $new($bytes, {
		$Byte::MIN_VALUE,
		(int8_t)($Byte::MIN_VALUE + 1),
		(int8_t)(-(int8_t)15),
		(int8_t)-1,
		(int8_t)0,
		(int8_t)1,
		(int8_t)15,
		(int8_t)($Byte::MAX_VALUE - 1),
		$Byte::MAX_VALUE
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		dobyte(a->get(i));
	}
}

void Test6987555::dobyte(int8_t x) {
	$init(Test6987555);
	$beforeCallerSensitive();
	$init($Byte);
	$var($MethodHandle, mh1, $nc($($MethodHandles::lookup()))->findStatic(Test6987555::CLASS, Test6987555::NAME, $($MethodType::methodType($Byte::TYPE, $Byte::TYPE))));
	$var($MethodHandle, mh2, $nc(mh1)->asType($($MethodType::methodType($Byte::TYPE, $Byte::class$))));
	int8_t a = $byteValue(mh1->invokeExact($$new($ObjectArray, {$$of(x)})));
	int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$($of($Byte::valueOf(x)))})));
	if (!Test6987555::$assertionsDisabled && !(a == b)) {
		$throwNew($AssertionError, $of($$str({$$str(a), " != "_s, $$str(b)})));
	}
}

void Test6987555::testchar() {
	$init(Test6987555);
	$var($chars, a, $new($chars, {
		$Character::MIN_VALUE,
		(char16_t)($Character::MIN_VALUE + 1),
		(char16_t)15,
		(char16_t)255,
		(char16_t)4095,
		(char16_t)($Character::MAX_VALUE - 1),
		$Character::MAX_VALUE
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		dochar(a->get(i));
	}
}

void Test6987555::dochar(char16_t x) {
	$init(Test6987555);
	$beforeCallerSensitive();
	$init($Character);
	$var($MethodHandle, mh1, $nc($($MethodHandles::lookup()))->findStatic(Test6987555::CLASS, Test6987555::NAME, $($MethodType::methodType($Character::TYPE, $Character::TYPE))));
	$var($MethodHandle, mh2, $nc(mh1)->asType($($MethodType::methodType($Character::TYPE, $Character::class$))));
	char16_t a = $charValue(mh1->invokeExact($$new($ObjectArray, {$$of(x)})));
	char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$($of($Character::valueOf(x)))})));
	if (!Test6987555::$assertionsDisabled && !(a == b)) {
		$throwNew($AssertionError, $of($$str({$$str(a), " != "_s, $$str(b)})));
	}
}

void Test6987555::testshort() {
	$init(Test6987555);
	$var($shorts, a, $new($shorts, {
		$Short::MIN_VALUE,
		(int16_t)($Short::MIN_VALUE + 1),
		(int16_t)(-(int16_t)4095),
		(int16_t)(-(int16_t)255),
		(int16_t)(-(int16_t)15),
		(int16_t)-1,
		(int16_t)0,
		(int16_t)1,
		(int16_t)15,
		(int16_t)255,
		(int16_t)4095,
		(int16_t)($Short::MAX_VALUE - 1),
		$Short::MAX_VALUE
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		doshort(a->get(i));
	}
}

void Test6987555::doshort(int16_t x) {
	$init(Test6987555);
	$beforeCallerSensitive();
	$init($Short);
	$var($MethodHandle, mh1, $nc($($MethodHandles::lookup()))->findStatic(Test6987555::CLASS, Test6987555::NAME, $($MethodType::methodType($Short::TYPE, $Short::TYPE))));
	$var($MethodHandle, mh2, $nc(mh1)->asType($($MethodType::methodType($Short::TYPE, $Short::class$))));
	int16_t a = $shortValue(mh1->invokeExact($$new($ObjectArray, {$$of(x)})));
	int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$($of($Short::valueOf(x)))})));
	if (!Test6987555::$assertionsDisabled && !(a == b)) {
		$throwNew($AssertionError, $of($$str({$$str(a), " != "_s, $$str(b)})));
	}
}

void Test6987555::testint() {
	$init(Test6987555);
	$var($ints, a, $new($ints, {
		$Integer::MIN_VALUE,
		$Integer::MIN_VALUE + 1,
		- 4095,
		- 255,
		- 15,
		-1,
		0,
		1,
		15,
		255,
		4095,
		$Integer::MAX_VALUE - 1,
		$Integer::MAX_VALUE
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		doint(a->get(i));
	}
}

void Test6987555::doint(int32_t x) {
	$init(Test6987555);
	$beforeCallerSensitive();
	$init($Integer);
	$var($MethodHandle, mh1, $nc($($MethodHandles::lookup()))->findStatic(Test6987555::CLASS, Test6987555::NAME, $($MethodType::methodType($Integer::TYPE, $Integer::TYPE))));
	$var($MethodHandle, mh2, $nc(mh1)->asType($($MethodType::methodType($Integer::TYPE, $Integer::class$))));
	int32_t a = $intValue(mh1->invokeExact($$new($ObjectArray, {$$of(x)})));
	int32_t b = $intValue($nc(mh2)->invokeExact($$new($ObjectArray, {$($of($Integer::valueOf(x)))})));
	if (!Test6987555::$assertionsDisabled && !(a == b)) {
		$throwNew($AssertionError, $of($$str({$$str(a), " != "_s, $$str(b)})));
	}
}

bool Test6987555::foo(bool i) {
	$init(Test6987555);
	return i;
}

int8_t Test6987555::foo(int8_t i) {
	$init(Test6987555);
	return i;
}

char16_t Test6987555::foo(char16_t i) {
	$init(Test6987555);
	return i;
}

int16_t Test6987555::foo(int16_t i) {
	$init(Test6987555);
	return i;
}

int32_t Test6987555::foo(int32_t i) {
	$init(Test6987555);
	return i;
}

void clinit$Test6987555($Class* class$) {
	$assignStatic(Test6987555::NAME, "foo"_s);
	Test6987555::$assertionsDisabled = !Test6987555::class$->desiredAssertionStatus();
	$assignStatic(Test6987555::CLASS, Test6987555::class$);
}

Test6987555::Test6987555() {
}

$Class* Test6987555::load$($String* name, bool initialize) {
	$loadClass(Test6987555, name, initialize, &_Test6987555_ClassInfo_, clinit$Test6987555, allocate$Test6987555);
	return class$;
}

$Class* Test6987555::class$ = nullptr;