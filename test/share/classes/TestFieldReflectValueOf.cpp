#include <TestFieldReflectValueOf.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FALSE
#undef MAX_VALUE
#undef MIN_VALUE
#undef TRUE
#undef TYPE

using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $Short = ::java::lang::Short;
using $Field = ::java::lang::reflect::Field;

$FieldInfo _TestFieldReflectValueOf_FieldInfo_[] = {
	{"booleanStaticField", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TestFieldReflectValueOf, booleanStaticField)},
	{"byteStaticField", "B", nullptr, $PRIVATE | $STATIC, $staticField(TestFieldReflectValueOf, byteStaticField)},
	{"charStaticField", "C", nullptr, $PRIVATE | $STATIC, $staticField(TestFieldReflectValueOf, charStaticField)},
	{"intStaticField", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestFieldReflectValueOf, intStaticField)},
	{"longStaticField", "J", nullptr, $PRIVATE | $STATIC, $staticField(TestFieldReflectValueOf, longStaticField)},
	{"shortStaticField", "S", nullptr, $PRIVATE | $STATIC, $staticField(TestFieldReflectValueOf, shortStaticField)},
	{"booleanStaticVolatileField", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestFieldReflectValueOf, booleanStaticVolatileField)},
	{"byteStaticVolatileField", "B", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestFieldReflectValueOf, byteStaticVolatileField)},
	{"charStaticVolatileField", "C", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestFieldReflectValueOf, charStaticVolatileField)},
	{"intStaticVolatileField", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestFieldReflectValueOf, intStaticVolatileField)},
	{"longStaticVolatileField", "J", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestFieldReflectValueOf, longStaticVolatileField)},
	{"shortStaticVolatileField", "S", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestFieldReflectValueOf, shortStaticVolatileField)},
	{"booleanField", "Z", nullptr, $PRIVATE, $field(TestFieldReflectValueOf, booleanField)},
	{"byteField", "B", nullptr, $PRIVATE, $field(TestFieldReflectValueOf, byteField)},
	{"charField", "C", nullptr, $PRIVATE, $field(TestFieldReflectValueOf, charField)},
	{"intField", "I", nullptr, $PRIVATE, $field(TestFieldReflectValueOf, intField)},
	{"longField", "J", nullptr, $PRIVATE, $field(TestFieldReflectValueOf, longField)},
	{"shortField", "S", nullptr, $PRIVATE, $field(TestFieldReflectValueOf, shortField)},
	{"booleanVolatileField", "Z", nullptr, $PRIVATE | $VOLATILE, $field(TestFieldReflectValueOf, booleanVolatileField)},
	{"byteVolatileField", "B", nullptr, $PRIVATE | $VOLATILE, $field(TestFieldReflectValueOf, byteVolatileField)},
	{"charVolatileField", "C", nullptr, $PRIVATE | $VOLATILE, $field(TestFieldReflectValueOf, charVolatileField)},
	{"intVolatileField", "I", nullptr, $PRIVATE | $VOLATILE, $field(TestFieldReflectValueOf, intVolatileField)},
	{"longVolatileField", "J", nullptr, $PRIVATE | $VOLATILE, $field(TestFieldReflectValueOf, longVolatileField)},
	{"shortVolatileField", "S", nullptr, $PRIVATE | $VOLATILE, $field(TestFieldReflectValueOf, shortVolatileField)},
	{}
};

$MethodInfo _TestFieldReflectValueOf_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestFieldReflectValueOf::*)()>(&TestFieldReflectValueOf::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestFieldReflectValueOf::main))},
	{"testField", "(Ljava/lang/Class;Ljava/lang/Object;ZZ)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;ZZ)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*,Object$*,bool,bool)>(&TestFieldReflectValueOf::testField))},
	{"testFieldAccessors", "(ZZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool,bool)>(&TestFieldReflectValueOf::testFieldAccessors))},
	{"testUnsafeFieldAccessors", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestFieldReflectValueOf::testUnsafeFieldAccessors))},
	{"testUnsafeQualifiedFieldAccessors", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestFieldReflectValueOf::testUnsafeQualifiedFieldAccessors))},
	{"testUnsafeQualifiedStaticFieldAccessors", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestFieldReflectValueOf::testUnsafeQualifiedStaticFieldAccessors))},
	{"testUnsafeStaticFieldAccessors", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestFieldReflectValueOf::testUnsafeStaticFieldAccessors))},
	{}
};

$ClassInfo _TestFieldReflectValueOf_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestFieldReflectValueOf",
	"java.lang.Object",
	nullptr,
	_TestFieldReflectValueOf_FieldInfo_,
	_TestFieldReflectValueOf_MethodInfo_
};

$Object* allocate$TestFieldReflectValueOf($Class* clazz) {
	return $of($alloc(TestFieldReflectValueOf));
}

bool TestFieldReflectValueOf::booleanStaticField = false;
int8_t TestFieldReflectValueOf::byteStaticField = 0;
char16_t TestFieldReflectValueOf::charStaticField = 0;
int32_t TestFieldReflectValueOf::intStaticField = 0;
int64_t TestFieldReflectValueOf::longStaticField = 0;
int16_t TestFieldReflectValueOf::shortStaticField = 0;
$volatile(bool) TestFieldReflectValueOf::booleanStaticVolatileField = false;
$volatile(int8_t) TestFieldReflectValueOf::byteStaticVolatileField = 0;
$volatile(char16_t) TestFieldReflectValueOf::charStaticVolatileField = 0;
$volatile(int32_t) TestFieldReflectValueOf::intStaticVolatileField = 0;
$volatile(int64_t) TestFieldReflectValueOf::longStaticVolatileField = 0;
$volatile(int16_t) TestFieldReflectValueOf::shortStaticVolatileField = 0;

void TestFieldReflectValueOf::init$() {
}

void TestFieldReflectValueOf::main($StringArray* args) {
	testUnsafeStaticFieldAccessors();
	testUnsafeQualifiedStaticFieldAccessors();
	testUnsafeFieldAccessors();
	testUnsafeQualifiedFieldAccessors();
}

void TestFieldReflectValueOf::testUnsafeStaticFieldAccessors() {
	testFieldAccessors(true, false);
}

void TestFieldReflectValueOf::testUnsafeQualifiedStaticFieldAccessors() {
	testFieldAccessors(true, true);
}

void TestFieldReflectValueOf::testUnsafeFieldAccessors() {
	testFieldAccessors(false, false);
}

void TestFieldReflectValueOf::testUnsafeQualifiedFieldAccessors() {
	testFieldAccessors(false, true);
}

void TestFieldReflectValueOf::testFieldAccessors(bool checkStatic, bool checkVolatile) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	testField($Boolean::TYPE, $Boolean::FALSE, checkStatic, checkVolatile);
	testField($Boolean::TYPE, $Boolean::TRUE, checkStatic, checkVolatile);
	for (int32_t b = $Byte::MIN_VALUE; b < ($Byte::MAX_VALUE + 1); ++b) {
		$init($Byte);
		testField($Byte::TYPE, $($Byte::valueOf((int8_t)b)), checkStatic, checkVolatile);
	}
	for (char16_t c = u'\0'; c <= (char16_t)0x7F; ++c) {
		$init($Character);
		testField($Character::TYPE, $($Character::valueOf(c)), checkStatic, checkVolatile);
	}
	for (int32_t i = -128; i <= 127; ++i) {
		$init($Integer);
		testField($Integer::TYPE, $($Integer::valueOf(i)), checkStatic, checkVolatile);
	}
	for (int64_t l = -128; l <= (int64_t)127; ++l) {
		$init($Long);
		testField($Long::TYPE, $($Long::valueOf(l)), checkStatic, checkVolatile);
	}
	for (int16_t s = (int16_t)-128; s <= 127; ++s) {
		$init($Short);
		testField($Short::TYPE, $($Short::valueOf(s)), checkStatic, checkVolatile);
	}
}

void TestFieldReflectValueOf::testField($Class* primType, Object$* wrappedValue, bool checkStatic, bool checkVolatile) {
	$load(TestFieldReflectValueOf);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, fieldName, $nc(primType)->getName());
	if (checkStatic) {
		$plusAssign(fieldName, "Static"_s);
	}
	if (checkVolatile) {
		$plusAssign(fieldName, "Volatile"_s);
	}
	$plusAssign(fieldName, "Field"_s);
	try {
		$var($Field, field, TestFieldReflectValueOf::class$->getDeclaredField(fieldName));
		$nc(field)->setAccessible(true);
		$var(TestFieldReflectValueOf, obj, $new(TestFieldReflectValueOf));
		field->set(obj, wrappedValue);
		$var($Object, result, field->get(obj));
		if (!$equals(result, wrappedValue)) {
			$throwNew($RuntimeException, $$str({"The value "_s, wrappedValue, " is not cached for the type "_s, primType}));
		}
	} catch ($NoSuchFieldException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($SecurityException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalArgumentException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

TestFieldReflectValueOf::TestFieldReflectValueOf() {
}

$Class* TestFieldReflectValueOf::load$($String* name, bool initialize) {
	$loadClass(TestFieldReflectValueOf, name, initialize, &_TestFieldReflectValueOf_ClassInfo_, allocate$TestFieldReflectValueOf);
	return class$;
}

$Class* TestFieldReflectValueOf::class$ = nullptr;