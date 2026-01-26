#include <TestMethodReflectValueOf.h>

#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/SecurityException.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(TestMethodReflectValueOf, init$, void)},
	{"booleanMethod", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(TestMethodReflectValueOf, booleanMethod, bool, bool)},
	{"byteMethod", "(B)B", nullptr, $PUBLIC, $virtualMethod(TestMethodReflectValueOf, byteMethod, int8_t, int8_t)},
	{"charMethod", "(C)C", nullptr, $PUBLIC, $virtualMethod(TestMethodReflectValueOf, charMethod, char16_t, char16_t)},
	{"intMethod", "(I)I", nullptr, $PUBLIC, $virtualMethod(TestMethodReflectValueOf, intMethod, int32_t, int32_t)},
	{"longMethod", "(J)J", nullptr, $PUBLIC, $virtualMethod(TestMethodReflectValueOf, longMethod, int64_t, int64_t)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestMethodReflectValueOf, main, void, $StringArray*)},
	{"shortMethod", "(S)S", nullptr, $PUBLIC, $virtualMethod(TestMethodReflectValueOf, shortMethod, int16_t, int16_t)},
	{"testMethod", "(Ljava/lang/Class;Ljava/lang/Object;Z)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Z)V", $PUBLIC | $STATIC, $staticMethod(TestMethodReflectValueOf, testMethod, void, $Class*, Object$*, bool)},
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
	} catch ($NoSuchMethodException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($SecurityException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalArgumentException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InvocationTargetException& e) {
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