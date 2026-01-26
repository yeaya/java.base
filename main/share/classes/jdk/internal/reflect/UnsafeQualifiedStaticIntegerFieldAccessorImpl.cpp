#include <jdk/internal/reflect/UnsafeQualifiedStaticIntegerFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeQualifiedStaticFieldAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeStaticFieldAccessorImpl.h>
#include <jcpp.h>

using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Field = ::java::lang::reflect::Field;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $UnsafeFieldAccessorImpl = ::jdk::internal::reflect::UnsafeFieldAccessorImpl;
using $UnsafeQualifiedStaticFieldAccessorImpl = ::jdk::internal::reflect::UnsafeQualifiedStaticFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _UnsafeQualifiedStaticIntegerFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;Z)V", nullptr, 0, $method(UnsafeQualifiedStaticIntegerFieldAccessorImpl, init$, void, $Field*, bool)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, get, $Object*, Object$*), "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, getBoolean, bool, Object$*), "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, getByte, int8_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, getChar, char16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, getDouble, double, Object$*), "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, getFloat, float, Object$*), "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, getInt, int32_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, getLong, int64_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, getShort, int16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, set, void, Object$*, Object$*), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, setBoolean, void, Object$*, bool), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, setByte, void, Object$*, int8_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, setChar, void, Object$*, char16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, setDouble, void, Object$*, double), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, setFloat, void, Object$*, float), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, setInt, void, Object$*, int32_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, setLong, void, Object$*, int64_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticIntegerFieldAccessorImpl, setShort, void, Object$*, int16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UnsafeQualifiedStaticIntegerFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.UnsafeQualifiedStaticIntegerFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeQualifiedStaticFieldAccessorImpl",
	nullptr,
	nullptr,
	_UnsafeQualifiedStaticIntegerFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeQualifiedStaticIntegerFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeQualifiedStaticIntegerFieldAccessorImpl));
}

void UnsafeQualifiedStaticIntegerFieldAccessorImpl::init$($Field* field, bool isReadOnly) {
	$UnsafeQualifiedStaticFieldAccessorImpl::init$(field, isReadOnly);
}

$Object* UnsafeQualifiedStaticIntegerFieldAccessorImpl::get(Object$* obj) {
	return $of($Integer::valueOf(getInt(obj)));
}

bool UnsafeQualifiedStaticIntegerFieldAccessorImpl::getBoolean(Object$* obj) {
	$throw($(newGetBooleanIllegalArgumentException()));
	$shouldNotReachHere();
}

int8_t UnsafeQualifiedStaticIntegerFieldAccessorImpl::getByte(Object$* obj) {
	$throw($(newGetByteIllegalArgumentException()));
	$shouldNotReachHere();
}

char16_t UnsafeQualifiedStaticIntegerFieldAccessorImpl::getChar(Object$* obj) {
	$throw($(newGetCharIllegalArgumentException()));
	$shouldNotReachHere();
}

int16_t UnsafeQualifiedStaticIntegerFieldAccessorImpl::getShort(Object$* obj) {
	$throw($(newGetShortIllegalArgumentException()));
	$shouldNotReachHere();
}

int32_t UnsafeQualifiedStaticIntegerFieldAccessorImpl::getInt(Object$* obj) {
	$init($UnsafeFieldAccessorImpl);
	return $nc($UnsafeFieldAccessorImpl::unsafe)->getIntVolatile(this->base, this->fieldOffset);
}

int64_t UnsafeQualifiedStaticIntegerFieldAccessorImpl::getLong(Object$* obj) {
	return getInt(obj);
}

float UnsafeQualifiedStaticIntegerFieldAccessorImpl::getFloat(Object$* obj) {
	return (float)getInt(obj);
}

double UnsafeQualifiedStaticIntegerFieldAccessorImpl::getDouble(Object$* obj) {
	return (double)getInt(obj);
}

void UnsafeQualifiedStaticIntegerFieldAccessorImpl::set(Object$* obj, Object$* value) {
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(value);
	}
	if (value == nullptr) {
		throwSetIllegalArgumentException(value);
	}
	if ($instanceOf($Byte, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putIntVolatile(this->base, this->fieldOffset, $nc(($cast($Byte, value)))->byteValue());
		return;
	}
	if ($instanceOf($Short, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putIntVolatile(this->base, this->fieldOffset, $nc(($cast($Short, value)))->shortValue());
		return;
	}
	if ($instanceOf($Character, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putIntVolatile(this->base, this->fieldOffset, $nc(($cast($Character, value)))->charValue());
		return;
	}
	if ($instanceOf($Integer, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putIntVolatile(this->base, this->fieldOffset, $nc(($cast($Integer, value)))->intValue());
		return;
	}
	throwSetIllegalArgumentException(value);
}

void UnsafeQualifiedStaticIntegerFieldAccessorImpl::setBoolean(Object$* obj, bool z) {
	throwSetIllegalArgumentException(z);
}

void UnsafeQualifiedStaticIntegerFieldAccessorImpl::setByte(Object$* obj, int8_t b) {
	setInt(obj, b);
}

void UnsafeQualifiedStaticIntegerFieldAccessorImpl::setChar(Object$* obj, char16_t c) {
	setInt(obj, c);
}

void UnsafeQualifiedStaticIntegerFieldAccessorImpl::setShort(Object$* obj, int16_t s) {
	setInt(obj, s);
}

void UnsafeQualifiedStaticIntegerFieldAccessorImpl::setInt(Object$* obj, int32_t i) {
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(i);
	}
	$init($UnsafeFieldAccessorImpl);
	$nc($UnsafeFieldAccessorImpl::unsafe)->putIntVolatile(this->base, this->fieldOffset, i);
}

void UnsafeQualifiedStaticIntegerFieldAccessorImpl::setLong(Object$* obj, int64_t l) {
	throwSetIllegalArgumentException(l);
}

void UnsafeQualifiedStaticIntegerFieldAccessorImpl::setFloat(Object$* obj, float f) {
	throwSetIllegalArgumentException(f);
}

void UnsafeQualifiedStaticIntegerFieldAccessorImpl::setDouble(Object$* obj, double d) {
	throwSetIllegalArgumentException(d);
}

UnsafeQualifiedStaticIntegerFieldAccessorImpl::UnsafeQualifiedStaticIntegerFieldAccessorImpl() {
}

$Class* UnsafeQualifiedStaticIntegerFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeQualifiedStaticIntegerFieldAccessorImpl, name, initialize, &_UnsafeQualifiedStaticIntegerFieldAccessorImpl_ClassInfo_, allocate$UnsafeQualifiedStaticIntegerFieldAccessorImpl);
	return class$;
}

$Class* UnsafeQualifiedStaticIntegerFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk