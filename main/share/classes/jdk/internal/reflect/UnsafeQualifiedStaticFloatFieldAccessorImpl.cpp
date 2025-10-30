#include <jdk/internal/reflect/UnsafeQualifiedStaticFloatFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeQualifiedStaticFieldAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeStaticFieldAccessorImpl.h>
#include <jcpp.h>

using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Short = ::java::lang::Short;
using $Field = ::java::lang::reflect::Field;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $UnsafeFieldAccessorImpl = ::jdk::internal::reflect::UnsafeFieldAccessorImpl;
using $UnsafeQualifiedStaticFieldAccessorImpl = ::jdk::internal::reflect::UnsafeQualifiedStaticFieldAccessorImpl;
using $UnsafeStaticFieldAccessorImpl = ::jdk::internal::reflect::UnsafeStaticFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _UnsafeQualifiedStaticFloatFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;Z)V", nullptr, 0, $method(static_cast<void(UnsafeQualifiedStaticFloatFieldAccessorImpl::*)($Field*,bool)>(&UnsafeQualifiedStaticFloatFieldAccessorImpl::init$))},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UnsafeQualifiedStaticFloatFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.UnsafeQualifiedStaticFloatFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeQualifiedStaticFieldAccessorImpl",
	nullptr,
	nullptr,
	_UnsafeQualifiedStaticFloatFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeQualifiedStaticFloatFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeQualifiedStaticFloatFieldAccessorImpl));
}

void UnsafeQualifiedStaticFloatFieldAccessorImpl::init$($Field* field, bool isReadOnly) {
	$UnsafeQualifiedStaticFieldAccessorImpl::init$(field, isReadOnly);
}

$Object* UnsafeQualifiedStaticFloatFieldAccessorImpl::get(Object$* obj) {
	return $of($Float::valueOf(getFloat(obj)));
}

bool UnsafeQualifiedStaticFloatFieldAccessorImpl::getBoolean(Object$* obj) {
	$throw($(newGetBooleanIllegalArgumentException()));
	$shouldNotReachHere();
}

int8_t UnsafeQualifiedStaticFloatFieldAccessorImpl::getByte(Object$* obj) {
	$throw($(newGetByteIllegalArgumentException()));
	$shouldNotReachHere();
}

char16_t UnsafeQualifiedStaticFloatFieldAccessorImpl::getChar(Object$* obj) {
	$throw($(newGetCharIllegalArgumentException()));
	$shouldNotReachHere();
}

int16_t UnsafeQualifiedStaticFloatFieldAccessorImpl::getShort(Object$* obj) {
	$throw($(newGetShortIllegalArgumentException()));
	$shouldNotReachHere();
}

int32_t UnsafeQualifiedStaticFloatFieldAccessorImpl::getInt(Object$* obj) {
	$throw($(newGetIntIllegalArgumentException()));
	$shouldNotReachHere();
}

int64_t UnsafeQualifiedStaticFloatFieldAccessorImpl::getLong(Object$* obj) {
	$throw($(newGetLongIllegalArgumentException()));
	$shouldNotReachHere();
}

float UnsafeQualifiedStaticFloatFieldAccessorImpl::getFloat(Object$* obj) {
	$init($UnsafeFieldAccessorImpl);
	return $nc($UnsafeFieldAccessorImpl::unsafe)->getFloatVolatile(this->base, this->fieldOffset);
}

double UnsafeQualifiedStaticFloatFieldAccessorImpl::getDouble(Object$* obj) {
	return getFloat(obj);
}

void UnsafeQualifiedStaticFloatFieldAccessorImpl::set(Object$* obj, Object$* value) {
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(value);
	}
	if (value == nullptr) {
		throwSetIllegalArgumentException(value);
	}
	if ($instanceOf($Byte, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putFloatVolatile(this->base, this->fieldOffset, (float)$nc(($cast($Byte, value)))->byteValue());
		return;
	}
	if ($instanceOf($Short, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putFloatVolatile(this->base, this->fieldOffset, (float)$nc(($cast($Short, value)))->shortValue());
		return;
	}
	if ($instanceOf($Character, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putFloatVolatile(this->base, this->fieldOffset, (float)$nc(($cast($Character, value)))->charValue());
		return;
	}
	if ($instanceOf($Integer, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putFloatVolatile(this->base, this->fieldOffset, (float)$nc(($cast($Integer, value)))->intValue());
		return;
	}
	if ($instanceOf($Long, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putFloatVolatile(this->base, this->fieldOffset, (float)$nc(($cast($Long, value)))->longValue());
		return;
	}
	if ($instanceOf($Float, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putFloatVolatile(this->base, this->fieldOffset, $nc(($cast($Float, value)))->floatValue());
		return;
	}
	throwSetIllegalArgumentException(value);
}

void UnsafeQualifiedStaticFloatFieldAccessorImpl::setBoolean(Object$* obj, bool z) {
	throwSetIllegalArgumentException(z);
}

void UnsafeQualifiedStaticFloatFieldAccessorImpl::setByte(Object$* obj, int8_t b) {
	setFloat(obj, (float)b);
}

void UnsafeQualifiedStaticFloatFieldAccessorImpl::setChar(Object$* obj, char16_t c) {
	setFloat(obj, (float)c);
}

void UnsafeQualifiedStaticFloatFieldAccessorImpl::setShort(Object$* obj, int16_t s) {
	setFloat(obj, (float)s);
}

void UnsafeQualifiedStaticFloatFieldAccessorImpl::setInt(Object$* obj, int32_t i) {
	setFloat(obj, (float)i);
}

void UnsafeQualifiedStaticFloatFieldAccessorImpl::setLong(Object$* obj, int64_t l) {
	setFloat(obj, (float)l);
}

void UnsafeQualifiedStaticFloatFieldAccessorImpl::setFloat(Object$* obj, float f) {
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(f);
	}
	$init($UnsafeFieldAccessorImpl);
	$nc($UnsafeFieldAccessorImpl::unsafe)->putFloatVolatile(this->base, this->fieldOffset, f);
}

void UnsafeQualifiedStaticFloatFieldAccessorImpl::setDouble(Object$* obj, double d) {
	throwSetIllegalArgumentException(d);
}

UnsafeQualifiedStaticFloatFieldAccessorImpl::UnsafeQualifiedStaticFloatFieldAccessorImpl() {
}

$Class* UnsafeQualifiedStaticFloatFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeQualifiedStaticFloatFieldAccessorImpl, name, initialize, &_UnsafeQualifiedStaticFloatFieldAccessorImpl_ClassInfo_, allocate$UnsafeQualifiedStaticFloatFieldAccessorImpl);
	return class$;
}

$Class* UnsafeQualifiedStaticFloatFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk