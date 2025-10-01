#include <MetafactoryDescriptorTest$C.h>

#include <MetafactoryDescriptorTest.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TYPE

using $MetafactoryDescriptorTest = ::MetafactoryDescriptorTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$MethodInfo _MetafactoryDescriptorTest$C_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetafactoryDescriptorTest$C::*)()>(&MetafactoryDescriptorTest$C::init$))},
	{"getM", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*)>(&MetafactoryDescriptorTest$C::getM))},
	{"getN", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*)>(&MetafactoryDescriptorTest$C::getN))},
	{"m_Integer", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Integer*(*)($String*)>(&MetafactoryDescriptorTest$C::m_Integer))},
	{"m_Object", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($String*)>(&MetafactoryDescriptorTest$C::m_Object))},
	{"m_String", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&MetafactoryDescriptorTest$C::m_String))},
	{"m_boolean", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&MetafactoryDescriptorTest$C::m_boolean))},
	{"m_byte", "(Ljava/lang/String;)B", nullptr, $PUBLIC | $STATIC, $method(static_cast<int8_t(*)($String*)>(&MetafactoryDescriptorTest$C::m_byte))},
	{"m_char", "(Ljava/lang/String;)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)($String*)>(&MetafactoryDescriptorTest$C::m_char))},
	{"m_double", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&MetafactoryDescriptorTest$C::m_double))},
	{"m_float", "(Ljava/lang/String;)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($String*)>(&MetafactoryDescriptorTest$C::m_float))},
	{"m_int", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&MetafactoryDescriptorTest$C::m_int))},
	{"m_long", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($String*)>(&MetafactoryDescriptorTest$C::m_long))},
	{"m_short", "(Ljava/lang/String;)S", nullptr, $PUBLIC | $STATIC, $method(static_cast<int16_t(*)($String*)>(&MetafactoryDescriptorTest$C::m_short))},
	{"m_void", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&MetafactoryDescriptorTest$C::m_void))},
	{"n_Integer", "(Ljava/lang/Integer;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Integer*)>(&MetafactoryDescriptorTest$C::n_Integer))},
	{"n_Object", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(Object$*)>(&MetafactoryDescriptorTest$C::n_Object))},
	{"n_String", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&MetafactoryDescriptorTest$C::n_String))},
	{"n_boolean", "(Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(bool)>(&MetafactoryDescriptorTest$C::n_boolean))},
	{"n_byte", "(B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int8_t)>(&MetafactoryDescriptorTest$C::n_byte))},
	{"n_char", "(C)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(char16_t)>(&MetafactoryDescriptorTest$C::n_char))},
	{"n_double", "(D)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(double)>(&MetafactoryDescriptorTest$C::n_double))},
	{"n_float", "(F)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(float)>(&MetafactoryDescriptorTest$C::n_float))},
	{"n_int", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&MetafactoryDescriptorTest$C::n_int))},
	{"n_long", "(J)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int64_t)>(&MetafactoryDescriptorTest$C::n_long))},
	{"n_short", "(S)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int16_t)>(&MetafactoryDescriptorTest$C::n_short))},
	{}
};

$InnerClassInfo _MetafactoryDescriptorTest$C_InnerClassesInfo_[] = {
	{"MetafactoryDescriptorTest$C", "MetafactoryDescriptorTest", "C", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetafactoryDescriptorTest$C_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetafactoryDescriptorTest$C",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MetafactoryDescriptorTest$C_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryDescriptorTest$C_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryDescriptorTest"
};

$Object* allocate$MetafactoryDescriptorTest$C($Class* clazz) {
	return $of($alloc(MetafactoryDescriptorTest$C));
}

void MetafactoryDescriptorTest$C::init$() {
}

void MetafactoryDescriptorTest$C::m_void($String* arg) {
}

bool MetafactoryDescriptorTest$C::m_boolean($String* arg) {
	return true;
}

char16_t MetafactoryDescriptorTest$C::m_char($String* arg) {
	return u'x';
}

int8_t MetafactoryDescriptorTest$C::m_byte($String* arg) {
	return (int8_t)12;
}

int16_t MetafactoryDescriptorTest$C::m_short($String* arg) {
	return (int16_t)12;
}

int32_t MetafactoryDescriptorTest$C::m_int($String* arg) {
	return 12;
}

int64_t MetafactoryDescriptorTest$C::m_long($String* arg) {
	return 12;
}

float MetafactoryDescriptorTest$C::m_float($String* arg) {
	return (float)12;
}

double MetafactoryDescriptorTest$C::m_double($String* arg) {
	return (double)12;
}

$String* MetafactoryDescriptorTest$C::m_String($String* arg) {
	return ""_s;
}

$Integer* MetafactoryDescriptorTest$C::m_Integer($String* arg) {
	return $Integer::valueOf(23);
}

$Object* MetafactoryDescriptorTest$C::m_Object($String* arg) {
	return $of($new($Object));
}

$String* MetafactoryDescriptorTest$C::n_boolean(bool arg) {
	return ""_s;
}

$String* MetafactoryDescriptorTest$C::n_char(char16_t arg) {
	return ""_s;
}

$String* MetafactoryDescriptorTest$C::n_byte(int8_t arg) {
	return ""_s;
}

$String* MetafactoryDescriptorTest$C::n_short(int16_t arg) {
	return ""_s;
}

$String* MetafactoryDescriptorTest$C::n_int(int32_t arg) {
	return ""_s;
}

$String* MetafactoryDescriptorTest$C::n_long(int64_t arg) {
	return ""_s;
}

$String* MetafactoryDescriptorTest$C::n_float(float arg) {
	return ""_s;
}

$String* MetafactoryDescriptorTest$C::n_double(double arg) {
	return ""_s;
}

$String* MetafactoryDescriptorTest$C::n_String($String* arg) {
	return ""_s;
}

$String* MetafactoryDescriptorTest$C::n_Integer($Integer* arg) {
	return ""_s;
}

$String* MetafactoryDescriptorTest$C::n_Object(Object$* arg) {
	return ""_s;
}

$MethodHandle* MetafactoryDescriptorTest$C::getM($Class* c) {
	try {
		$init($MetafactoryDescriptorTest);
		$load(MetafactoryDescriptorTest$C);
		$Class* var$0 = MetafactoryDescriptorTest$C::class$;
		$var($String, var$1, $str({"m_"_s, $($nc(c)->getSimpleName())}));
		$load($String);
		return $nc($MetafactoryDescriptorTest::lookup)->findStatic(var$0, var$1, $($MetafactoryDescriptorTest::mt(c, $$new($ClassArray, {$String::class$}))));
	} catch ($NoSuchMethodException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$MethodHandle* MetafactoryDescriptorTest$C::getN($Class* c) {
	$init($Void);
	if (c == $Void::TYPE) {
		return nullptr;
	}
	try {
		$init($MetafactoryDescriptorTest);
		$load(MetafactoryDescriptorTest$C);
		$Class* var$0 = MetafactoryDescriptorTest$C::class$;
		$var($String, var$1, $str({"n_"_s, $($nc(c)->getSimpleName())}));
		$load($String);
		return $nc($MetafactoryDescriptorTest::lookup)->findStatic(var$0, var$1, $($MetafactoryDescriptorTest::mt($String::class$, $$new($ClassArray, {c}))));
	} catch ($NoSuchMethodException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

MetafactoryDescriptorTest$C::MetafactoryDescriptorTest$C() {
}

$Class* MetafactoryDescriptorTest$C::load$($String* name, bool initialize) {
	$loadClass(MetafactoryDescriptorTest$C, name, initialize, &_MetafactoryDescriptorTest$C_ClassInfo_, allocate$MetafactoryDescriptorTest$C);
	return class$;
}

$Class* MetafactoryDescriptorTest$C::class$ = nullptr;