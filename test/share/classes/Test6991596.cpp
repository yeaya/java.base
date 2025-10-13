#include <Test6991596.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
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

using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$FieldInfo _Test6991596_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Test6991596, $assertionsDisabled)},
	{"CLASS", "Ljava/lang/Class;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6991596, CLASS)},
	{"NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6991596, NAME)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6991596, DEBUG)},
	{}
};

$MethodInfo _Test6991596_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6991596::*)()>(&Test6991596::init$))},
	{"check", "(ZZZ)V", nullptr, $STATIC, $method(static_cast<void(*)(bool,bool,bool)>(&Test6991596::check))},
	{"check", "(ZBB)V", nullptr, $STATIC, $method(static_cast<void(*)(bool,int8_t,int8_t)>(&Test6991596::check))},
	{"check", "(ZII)V", nullptr, $STATIC, $method(static_cast<void(*)(bool,int32_t,int32_t)>(&Test6991596::check))},
	{"check", "(IZZ)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,bool,bool)>(&Test6991596::check))},
	{"check", "(IBB)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,int8_t,int8_t)>(&Test6991596::check))},
	{"check", "(III)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&Test6991596::check))},
	{"check", "(JZZ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,bool,bool)>(&Test6991596::check))},
	{"check", "(JBB)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int8_t,int8_t)>(&Test6991596::check))},
	{"check", "(JII)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,int32_t)>(&Test6991596::check))},
	{"doboolean", "(Z)V", nullptr, $STATIC, $method(static_cast<void(*)(bool)>(&Test6991596::doboolean)), "java.lang.Throwable"},
	{"dobyte", "(B)V", nullptr, $STATIC, $method(static_cast<void(*)(int8_t)>(&Test6991596::dobyte)), "java.lang.Throwable"},
	{"dochar", "(C)V", nullptr, $STATIC, $method(static_cast<void(*)(char16_t)>(&Test6991596::dochar)), "java.lang.Throwable"},
	{"doint", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&Test6991596::doint)), "java.lang.Throwable"},
	{"dolong", "(J)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t)>(&Test6991596::dolong)), "java.lang.Throwable"},
	{"doshort", "(S)V", nullptr, $STATIC, $method(static_cast<void(*)(int16_t)>(&Test6991596::doshort)), "java.lang.Throwable"},
	{"foo", "(Z)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(bool)>(&Test6991596::foo))},
	{"foo", "(B)B", nullptr, $PUBLIC | $STATIC, $method(static_cast<int8_t(*)(int8_t)>(&Test6991596::foo))},
	{"foo", "(C)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(char16_t)>(&Test6991596::foo))},
	{"foo", "(S)S", nullptr, $PUBLIC | $STATIC, $method(static_cast<int16_t(*)(int16_t)>(&Test6991596::foo))},
	{"foo", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Test6991596::foo))},
	{"getmh1", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $method(static_cast<$MethodHandle*(*)($Class*,$Class*)>(&Test6991596::getmh1)), "java.lang.ReflectiveOperationException"},
	{"getmh2", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$Class*,$Class*)>(&Test6991596::getmh2))},
	{"getmh3", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$Class*,$Class*)>(&Test6991596::getmh3))},
	{"i2h", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&Test6991596::i2h))},
	{"l2h", "(J)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int64_t)>(&Test6991596::l2h))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6991596::main)), "java.lang.Throwable"},
	{"p", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*,$String*)>(&Test6991596::p))},
	{"testboolean", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Test6991596::testboolean)), "java.lang.Throwable"},
	{"testbyte", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Test6991596::testbyte)), "java.lang.Throwable"},
	{"testchar", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Test6991596::testchar)), "java.lang.Throwable"},
	{"testint", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Test6991596::testint)), "java.lang.Throwable"},
	{"testlong", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Test6991596::testlong)), "java.lang.Throwable"},
	{"testshort", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Test6991596::testshort)), "java.lang.Throwable"},
	{"z2h", "(Z)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(bool)>(&Test6991596::z2h))},
	{}
};

$ClassInfo _Test6991596_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6991596",
	"java.lang.Object",
	nullptr,
	_Test6991596_FieldInfo_,
	_Test6991596_MethodInfo_
};

$Object* allocate$Test6991596($Class* clazz) {
	return $of($alloc(Test6991596));
}

bool Test6991596::$assertionsDisabled = false;
$Class* Test6991596::CLASS = nullptr;
$String* Test6991596::NAME = nullptr;
bool Test6991596::DEBUG = false;

void Test6991596::init$() {
}

void Test6991596::main($StringArray* args) {
	$init(Test6991596);
	testboolean();
	testbyte();
	testchar();
	testshort();
	testint();
	testlong();
}

$MethodHandle* Test6991596::getmh1($Class* ret, $Class* arg) {
	$init(Test6991596);
	$beforeCallerSensitive();
	return $nc($($MethodHandles::lookup()))->findStatic(Test6991596::CLASS, Test6991596::NAME, $($MethodType::methodType(ret, arg)));
}

$MethodHandle* Test6991596::getmh2($MethodHandle* mh1, $Class* ret, $Class* arg) {
	$init(Test6991596);
	return $MethodHandles::explicitCastArguments(mh1, $($MethodType::methodType(ret, arg)));
}

$MethodHandle* Test6991596::getmh3($MethodHandle* mh1, $Class* ret, $Class* arg) {
	$init(Test6991596);
	return $MethodHandles::explicitCastArguments(mh1, $($MethodType::methodType(ret, arg)));
}

void Test6991596::testboolean() {
	$init(Test6991596);
	$var($booleans, a, $new($booleans, {
		true,
		false
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		doboolean(a->get(i));
	}
}

void Test6991596::doboolean(bool x) {
	$init(Test6991596);
	if (Test6991596::DEBUG) {
		$init($System);
		$nc($System::out)->println($$str({"boolean="_s, $$str(x)}));
	}
	{
		$init($Boolean);
		$var($MethodHandle, mh1, getmh1($Boolean::TYPE, $Boolean::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Boolean::TYPE, $Boolean::TYPE));
		bool a = $booleanValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of(x)})));
		bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
	{
		$init($Byte);
		$var($MethodHandle, mh1, getmh1($Byte::TYPE, $Byte::TYPE));
		$init($Boolean);
		$var($MethodHandle, mh2, getmh2(mh1, $Byte::TYPE, $Boolean::TYPE));
		int8_t a = $byteValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int8_t)(x ? 1 : 0))})));
		int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
	{
		$init($Character);
		$var($MethodHandle, mh1, getmh1($Character::TYPE, $Character::TYPE));
		$init($Boolean);
		$var($MethodHandle, mh2, getmh2(mh1, $Character::TYPE, $Boolean::TYPE));
		char16_t a = $charValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((char16_t)(x ? 1 : 0))})));
		char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, (int32_t)a, (int32_t)b);
	}
	{
		$init($Short);
		$var($MethodHandle, mh1, getmh1($Short::TYPE, $Short::TYPE));
		$init($Boolean);
		$var($MethodHandle, mh2, getmh2(mh1, $Short::TYPE, $Boolean::TYPE));
		int16_t a = $shortValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int16_t)(x ? 1 : 0))})));
		int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, (int32_t)a, (int32_t)b);
	}
}

void Test6991596::testbyte() {
	$init(Test6991596);
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

void Test6991596::dobyte(int8_t x) {
	$init(Test6991596);
	if (Test6991596::DEBUG) {
		$init($System);
		$nc($System::out)->println($$str({"byte="_s, $$str(x)}));
	}
	{
		$init($Boolean);
		$var($MethodHandle, mh1, getmh1($Boolean::TYPE, $Boolean::TYPE));
		$init($Byte);
		$var($MethodHandle, mh2, getmh2(mh1, $Boolean::TYPE, $Byte::TYPE));
		bool a = $booleanValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((((int32_t)(x & (uint32_t)1)) == 1))})));
		bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, a, b);
	}
	{
		$init($Byte);
		$var($MethodHandle, mh1, getmh1($Byte::TYPE, $Byte::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Byte::TYPE, $Byte::TYPE));
		int8_t a = $byteValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of(x)})));
		int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, a, b);
	}
	{
		$init($Character);
		$var($MethodHandle, mh1, getmh1($Character::TYPE, $Character::TYPE));
		$init($Byte);
		$var($MethodHandle, mh2, getmh2(mh1, $Character::TYPE, $Byte::TYPE));
		char16_t a = $charValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((char16_t)x)})));
		char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, (int32_t)a, (int32_t)b);
	}
	{
		$init($Short);
		$var($MethodHandle, mh1, getmh1($Short::TYPE, $Short::TYPE));
		$init($Byte);
		$var($MethodHandle, mh2, getmh2(mh1, $Short::TYPE, $Byte::TYPE));
		int16_t a = $shortValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int16_t)x)})));
		int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, (int32_t)a, (int32_t)b);
	}
}

void Test6991596::testchar() {
	$init(Test6991596);
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

void Test6991596::dochar(char16_t x) {
	$init(Test6991596);
	if (Test6991596::DEBUG) {
		$init($System);
		$nc($System::out)->println($$str({"char="_s, $$str(x)}));
	}
	{
		$init($Boolean);
		$var($MethodHandle, mh1, getmh1($Boolean::TYPE, $Boolean::TYPE));
		$init($Character);
		$var($MethodHandle, mh2, getmh2(mh1, $Boolean::TYPE, $Character::TYPE));
		bool a = $booleanValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((((int32_t)(x & (uint32_t)1)) == 1))})));
		bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, a, b);
	}
	{
		$init($Byte);
		$var($MethodHandle, mh1, getmh1($Byte::TYPE, $Byte::TYPE));
		$init($Character);
		$var($MethodHandle, mh2, getmh2(mh1, $Byte::TYPE, $Character::TYPE));
		int8_t a = $byteValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int8_t)x)})));
		int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, a, b);
	}
	{
		$init($Character);
		$var($MethodHandle, mh1, getmh1($Character::TYPE, $Character::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Character::TYPE, $Character::TYPE));
		char16_t a = $charValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of(x)})));
		char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, (int32_t)a, (int32_t)b);
	}
	{
		$init($Short);
		$var($MethodHandle, mh1, getmh1($Short::TYPE, $Short::TYPE));
		$init($Character);
		$var($MethodHandle, mh2, getmh2(mh1, $Short::TYPE, $Character::TYPE));
		int16_t a = $shortValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int16_t)x)})));
		int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, (int32_t)a, (int32_t)b);
	}
}

void Test6991596::testshort() {
	$init(Test6991596);
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

void Test6991596::doshort(int16_t x) {
	$init(Test6991596);
	if (Test6991596::DEBUG) {
		$init($System);
		$nc($System::out)->println($$str({"short="_s, $$str(x)}));
	}
	{
		$init($Boolean);
		$var($MethodHandle, mh1, getmh1($Boolean::TYPE, $Boolean::TYPE));
		$init($Short);
		$var($MethodHandle, mh2, getmh2(mh1, $Boolean::TYPE, $Short::TYPE));
		bool a = $booleanValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((((int32_t)(x & (uint32_t)1)) == 1))})));
		bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, a, b);
	}
	{
		$init($Byte);
		$var($MethodHandle, mh1, getmh1($Byte::TYPE, $Byte::TYPE));
		$init($Short);
		$var($MethodHandle, mh2, getmh2(mh1, $Byte::TYPE, $Short::TYPE));
		int8_t a = $byteValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int8_t)x)})));
		int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, a, b);
	}
	{
		$init($Character);
		$var($MethodHandle, mh1, getmh1($Character::TYPE, $Character::TYPE));
		$init($Short);
		$var($MethodHandle, mh2, getmh2(mh1, $Character::TYPE, $Short::TYPE));
		char16_t a = $charValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((char16_t)x)})));
		char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, (int32_t)a, (int32_t)b);
	}
	{
		$init($Short);
		$var($MethodHandle, mh1, getmh1($Short::TYPE, $Short::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Short::TYPE, $Short::TYPE));
		int16_t a = $shortValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of(x)})));
		int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, (int32_t)a, (int32_t)b);
	}
}

void Test6991596::testint() {
	$init(Test6991596);
	$var($ints, a, $new($ints, {
		$Integer::MIN_VALUE,
		$Integer::MIN_VALUE + 1,
		-0x0FFFFFFF,
		-0x00FFFFFF,
		-0x000FFFFF,
		-0x0000FFFF,
		- 4095,
		- 255,
		- 15,
		-1,
		0,
		1,
		15,
		255,
		4095,
		0x0000FFFF,
		0x000FFFFF,
		0x00FFFFFF,
		0x0FFFFFFF,
		$Integer::MAX_VALUE - 1,
		$Integer::MAX_VALUE
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		doint(a->get(i));
	}
}

void Test6991596::doint(int32_t x) {
	$init(Test6991596);
	if (Test6991596::DEBUG) {
		$init($System);
		$nc($System::out)->println($$str({"int="_s, $$str(x)}));
	}
	{
		$init($Boolean);
		$var($MethodHandle, mh1, getmh1($Boolean::TYPE, $Boolean::TYPE));
		$init($Integer);
		$var($MethodHandle, mh2, getmh2(mh1, $Boolean::TYPE, $Integer::TYPE));
		bool a = $booleanValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((((int32_t)(x & (uint32_t)1)) == 1))})));
		bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
	{
		$init($Byte);
		$var($MethodHandle, mh1, getmh1($Byte::TYPE, $Byte::TYPE));
		$init($Integer);
		$var($MethodHandle, mh2, getmh2(mh1, $Byte::TYPE, $Integer::TYPE));
		int8_t a = $byteValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int8_t)x)})));
		int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
	{
		$init($Character);
		$var($MethodHandle, mh1, getmh1($Character::TYPE, $Character::TYPE));
		$init($Integer);
		$var($MethodHandle, mh2, getmh2(mh1, $Character::TYPE, $Integer::TYPE));
		char16_t a = $charValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((char16_t)x)})));
		char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, (int32_t)a, (int32_t)b);
	}
	{
		$init($Short);
		$var($MethodHandle, mh1, getmh1($Short::TYPE, $Short::TYPE));
		$init($Integer);
		$var($MethodHandle, mh2, getmh2(mh1, $Short::TYPE, $Integer::TYPE));
		int16_t a = $shortValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int16_t)x)})));
		int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		if (!Test6991596::$assertionsDisabled && !(a == b)) {
			$throwNew($AssertionError, $of($$str({$$str(a), " != "_s, $$str(b)})));
		}
		check(x, (int32_t)a, (int32_t)b);
	}
	{
		$init($Integer);
		$var($MethodHandle, mh1, getmh1($Integer::TYPE, $Integer::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Integer::TYPE, $Integer::TYPE));
		int32_t a = $intValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of(x)})));
		int32_t b = $intValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
}

void Test6991596::testlong() {
	$init(Test6991596);
	$var($longs, a, $new($longs, {
		$Long::MIN_VALUE,
		$Long::MIN_VALUE + 1,
		-(int64_t)268435455,
		-(int64_t)16777215,
		-(int64_t)1048575,
		-(int64_t)65535,
		-(int64_t)4095,
		-(int64_t)255,
		-(int64_t)15,
		(int64_t)-1,
		(int64_t)0,
		(int64_t)1,
		(int64_t)15,
		(int64_t)255,
		(int64_t)4095,
		(int64_t)4095,
		(int64_t)65535,
		(int64_t)1048575,
		(int64_t)16777215,
		(int64_t)268435455,
		$Long::MAX_VALUE - 1,
		$Long::MAX_VALUE
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		dolong(a->get(i));
	}
}

void Test6991596::dolong(int64_t x) {
	$init(Test6991596);
	if (Test6991596::DEBUG) {
		$init($System);
		$nc($System::out)->println($$str({"long="_s, $$str(x)}));
	}
	{
		$init($Boolean);
		$var($MethodHandle, mh1, getmh1($Boolean::TYPE, $Boolean::TYPE));
		$init($Long);
		$var($MethodHandle, mh2, getmh2(mh1, $Boolean::TYPE, $Long::TYPE));
		bool a = $booleanValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((((int64_t)(x & (uint64_t)(int64_t)1)) == (int64_t)1))})));
		bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
	{
		$init($Byte);
		$var($MethodHandle, mh1, getmh1($Byte::TYPE, $Byte::TYPE));
		$init($Long);
		$var($MethodHandle, mh2, getmh2(mh1, $Byte::TYPE, $Long::TYPE));
		int8_t a = $byteValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int8_t)x)})));
		int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
	{
		$init($Character);
		$var($MethodHandle, mh1, getmh1($Character::TYPE, $Character::TYPE));
		$init($Long);
		$var($MethodHandle, mh2, getmh2(mh1, $Character::TYPE, $Long::TYPE));
		char16_t a = $charValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((char16_t)x)})));
		char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, (int32_t)a, (int32_t)b);
	}
	{
		$init($Short);
		$var($MethodHandle, mh1, getmh1($Short::TYPE, $Short::TYPE));
		$init($Long);
		$var($MethodHandle, mh2, getmh2(mh1, $Short::TYPE, $Long::TYPE));
		int16_t a = $shortValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int16_t)x)})));
		int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, (int32_t)a, (int32_t)b);
	}
	{
		$init($Integer);
		$var($MethodHandle, mh1, getmh1($Integer::TYPE, $Integer::TYPE));
		$init($Long);
		$var($MethodHandle, mh2, getmh2(mh1, $Integer::TYPE, $Long::TYPE));
		int32_t a = $intValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int32_t)x)})));
		int32_t b = $intValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
}

void Test6991596::check(bool x, bool e, bool a) {
	$init(Test6991596);
	$var($String, var$0, z2h(x));
	$var($String, var$1, z2h(e));
	p(var$0, var$1, $(z2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($String, var$4, $$str({$(z2h(x)), ": "_s}));
		$var($String, var$3, $$concat(var$4, $(z2h(e))));
		$var($String, var$2, $$concat(var$3, " != "));
		$throwNew($AssertionError, $of(($$concat(var$2, $(z2h(a))))));
	}
}

void Test6991596::check(bool x, int8_t e, int8_t a) {
	$init(Test6991596);
	$var($String, var$0, z2h(x));
	$var($String, var$1, i2h(e));
	p(var$0, var$1, $(i2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($String, var$4, $$str({$(z2h(x)), ": "_s}));
		$var($String, var$3, $$concat(var$4, $(i2h(e))));
		$var($String, var$2, $$concat(var$3, " != "));
		$throwNew($AssertionError, $of(($$concat(var$2, $(i2h(a))))));
	}
}

void Test6991596::check(bool x, int32_t e, int32_t a) {
	$init(Test6991596);
	$var($String, var$0, z2h(x));
	$var($String, var$1, i2h(e));
	p(var$0, var$1, $(i2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($String, var$4, $$str({$(z2h(x)), ": "_s}));
		$var($String, var$3, $$concat(var$4, $(i2h(e))));
		$var($String, var$2, $$concat(var$3, " != "));
		$throwNew($AssertionError, $of(($$concat(var$2, $(i2h(a))))));
	}
}

void Test6991596::check(int32_t x, bool e, bool a) {
	$init(Test6991596);
	$var($String, var$0, i2h(x));
	$var($String, var$1, z2h(e));
	p(var$0, var$1, $(z2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($String, var$4, $$str({$(i2h(x)), ": "_s}));
		$var($String, var$3, $$concat(var$4, $(z2h(e))));
		$var($String, var$2, $$concat(var$3, " != "));
		$throwNew($AssertionError, $of(($$concat(var$2, $(z2h(a))))));
	}
}

void Test6991596::check(int32_t x, int8_t e, int8_t a) {
	$init(Test6991596);
	$var($String, var$0, i2h(x));
	$var($String, var$1, i2h(e));
	p(var$0, var$1, $(i2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($String, var$4, $$str({$(i2h(x)), ": "_s}));
		$var($String, var$3, $$concat(var$4, $(i2h(e))));
		$var($String, var$2, $$concat(var$3, " != "));
		$throwNew($AssertionError, $of(($$concat(var$2, $(i2h(a))))));
	}
}

void Test6991596::check(int32_t x, int32_t e, int32_t a) {
	$init(Test6991596);
	$var($String, var$0, i2h(x));
	$var($String, var$1, i2h(e));
	p(var$0, var$1, $(i2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($String, var$4, $$str({$(i2h(x)), ": "_s}));
		$var($String, var$3, $$concat(var$4, $(i2h(e))));
		$var($String, var$2, $$concat(var$3, " != "));
		$throwNew($AssertionError, $of(($$concat(var$2, $(i2h(a))))));
	}
}

void Test6991596::check(int64_t x, bool e, bool a) {
	$init(Test6991596);
	$var($String, var$0, l2h(x));
	$var($String, var$1, z2h(e));
	p(var$0, var$1, $(z2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($String, var$4, $$str({$(l2h(x)), ": "_s}));
		$var($String, var$3, $$concat(var$4, $(z2h(e))));
		$var($String, var$2, $$concat(var$3, " != "));
		$throwNew($AssertionError, $of(($$concat(var$2, $(z2h(a))))));
	}
}

void Test6991596::check(int64_t x, int8_t e, int8_t a) {
	$init(Test6991596);
	$var($String, var$0, l2h(x));
	$var($String, var$1, i2h(e));
	p(var$0, var$1, $(i2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($String, var$4, $$str({$(l2h(x)), ": "_s}));
		$var($String, var$3, $$concat(var$4, $(i2h(e))));
		$var($String, var$2, $$concat(var$3, " != "));
		$throwNew($AssertionError, $of(($$concat(var$2, $(i2h(a))))));
	}
}

void Test6991596::check(int64_t x, int32_t e, int32_t a) {
	$init(Test6991596);
	$var($String, var$0, l2h(x));
	$var($String, var$1, i2h(e));
	p(var$0, var$1, $(i2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($String, var$4, $$str({$(l2h(x)), ": "_s}));
		$var($String, var$3, $$concat(var$4, $(i2h(e))));
		$var($String, var$2, $$concat(var$3, " != "));
		$throwNew($AssertionError, $of(($$concat(var$2, $(i2h(a))))));
	}
}

void Test6991596::p($String* x, $String* e, $String* a) {
	$init(Test6991596);
	if (Test6991596::DEBUG) {
		$init($System);
		$nc($System::out)->println($$str({x, ": expected: "_s, e, ", actual: "_s, a}));
	}
}

$String* Test6991596::z2h(bool x) {
	$init(Test6991596);
	return x ? "1"_s : "0"_s;
}

$String* Test6991596::i2h(int32_t x) {
	$init(Test6991596);
	return $Integer::toHexString(x);
}

$String* Test6991596::l2h(int64_t x) {
	$init(Test6991596);
	return $Long::toHexString(x);
}

bool Test6991596::foo(bool i) {
	$init(Test6991596);
	return i;
}

int8_t Test6991596::foo(int8_t i) {
	$init(Test6991596);
	return i;
}

char16_t Test6991596::foo(char16_t i) {
	$init(Test6991596);
	return i;
}

int16_t Test6991596::foo(int16_t i) {
	$init(Test6991596);
	return i;
}

int32_t Test6991596::foo(int32_t i) {
	$init(Test6991596);
	return i;
}

void clinit$Test6991596($Class* class$) {
	$assignStatic(Test6991596::NAME, "foo"_s);
	Test6991596::$assertionsDisabled = !Test6991596::class$->desiredAssertionStatus();
	$assignStatic(Test6991596::CLASS, Test6991596::class$);
	Test6991596::DEBUG = $nc($($System::getProperty("DEBUG"_s, "false"_s)))->equals("true"_s);
}

Test6991596::Test6991596() {
}

$Class* Test6991596::load$($String* name, bool initialize) {
	$loadClass(Test6991596, name, initialize, &_Test6991596_ClassInfo_, clinit$Test6991596, allocate$Test6991596);
	return class$;
}

$Class* Test6991596::class$ = nullptr;