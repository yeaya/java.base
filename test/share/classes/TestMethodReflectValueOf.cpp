#include <TestMethodReflectValueOf.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
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
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $Short = ::java::lang::Short;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;

$MethodInfo _TestMethodReflectValueOf_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestMethodReflectValueOf::*)()>(&TestMethodReflectValueOf::init$))},
	{"booleanMethod", "(Z)Z", nullptr, $PUBLIC},
	{"byteMethod", "(B)B", nullptr, $PUBLIC},
	{"charMethod", "(C)C", nullptr, $PUBLIC},
	{"intMethod", "(I)I", nullptr, $PUBLIC},
	{"longMethod", "(J)J", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestMethodReflectValueOf::main))},
	{"shortMethod", "(S)S", nullptr, $PUBLIC},
	{"testMethod", "(Ljava/lang/Class;Ljava/lang/Object;Z)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Z)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*,Object$*,bool)>(&TestMethodReflectValueOf::testMethod))},
	{}
};

$ClassInfo _TestMethodReflectValueOf_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestMethodReflectValueOf",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestMethodReflectValueOf_MethodInfo_
};

$Object* allocate$TestMethodReflectValueOf($Class* clazz) {
	return $of($alloc(TestMethodReflectValueOf));
}

void TestMethodReflectValueOf::init$() {
}

void TestMethodReflectValueOf::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	bool checkIdentity = $Boolean::getBoolean("sun.reflect.noInflation"_s);
	testMethod($Boolean::TYPE, $Boolean::FALSE, checkIdentity);
	testMethod($Boolean::TYPE, $Boolean::TRUE, checkIdentity);
	for (int32_t b = $Byte::MIN_VALUE; b < ($Byte::MAX_VALUE + 1); ++b) {
		$init($Byte);
		testMethod($Byte::TYPE, $($Byte::valueOf((int8_t)b)), checkIdentity);
	}
	for (char16_t c = u'\0'; c <= (char16_t)0x7F; ++c) {
		$init($Character);
		testMethod($Character::TYPE, $($Character::valueOf(c)), checkIdentity);
	}
	for (int32_t i = -128; i <= 127; ++i) {
		$init($Integer);
		testMethod($Integer::TYPE, $($Integer::valueOf(i)), checkIdentity);
	}
	for (int64_t l = -128; l <= (int64_t)127; ++l) {
		$init($Long);
		testMethod($Long::TYPE, $($Long::valueOf(l)), checkIdentity);
	}
	for (int16_t s = (int16_t)-128; s <= 127; ++s) {
		$init($Short);
		testMethod($Short::TYPE, $($Short::valueOf(s)), checkIdentity);
	}
}

void TestMethodReflectValueOf::testMethod($Class* primType, Object$* wrappedValue, bool checkIdentity) {
	$load(TestMethodReflectValueOf);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, methodName, $str({$($nc(primType)->getName()), "Method"_s}));
	try {
		$var($Method, method, TestMethodReflectValueOf::class$->getMethod(methodName, $$new($ClassArray, {primType})));
		$var($Object, result, $nc(method)->invoke($$new(TestMethodReflectValueOf), $$new($ObjectArray, {wrappedValue})));
		if (checkIdentity) {
			if (!$equals(result, wrappedValue)) {
				$throwNew($RuntimeException, $$str({"The value "_s, wrappedValue, " is not cached for the type "_s, primType}));
			}
		} else if (!$nc($of(result))->equals(wrappedValue)) {
			$throwNew($RuntimeException, $$str({"The result value "_s, result, " is not equal to the expected value "_s, wrappedValue, " for the type "_s, primType}));
		}
	} catch ($NoSuchMethodException&) {
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
	} catch ($InvocationTargetException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

int32_t TestMethodReflectValueOf::intMethod(int32_t value) {
	return value;
}

int64_t TestMethodReflectValueOf::longMethod(int64_t value) {
	return value;
}

int16_t TestMethodReflectValueOf::shortMethod(int16_t value) {
	return value;
}

int8_t TestMethodReflectValueOf::byteMethod(int8_t value) {
	return value;
}

char16_t TestMethodReflectValueOf::charMethod(char16_t value) {
	return value;
}

bool TestMethodReflectValueOf::booleanMethod(bool value) {
	return value;
}

TestMethodReflectValueOf::TestMethodReflectValueOf() {
}

$Class* TestMethodReflectValueOf::load$($String* name, bool initialize) {
	$loadClass(TestMethodReflectValueOf, name, initialize, &_TestMethodReflectValueOf_ClassInfo_, allocate$TestMethodReflectValueOf);
	return class$;
}

$Class* TestMethodReflectValueOf::class$ = nullptr;