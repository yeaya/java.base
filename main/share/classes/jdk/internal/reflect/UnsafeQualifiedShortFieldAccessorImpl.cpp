#include <jdk/internal/reflect/UnsafeQualifiedShortFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeQualifiedFieldAccessorImpl.h>
#include <jcpp.h>

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Field = ::java::lang::reflect::Field;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $UnsafeFieldAccessorImpl = ::jdk::internal::reflect::UnsafeFieldAccessorImpl;
using $UnsafeQualifiedFieldAccessorImpl = ::jdk::internal::reflect::UnsafeQualifiedFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _UnsafeQualifiedShortFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;Z)V", nullptr, 0, $method(UnsafeQualifiedShortFieldAccessorImpl, init$, void, $Field*, bool)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, get, $Object*, Object$*), "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, getBoolean, bool, Object$*), "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, getByte, int8_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, getChar, char16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, getDouble, double, Object$*), "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, getFloat, float, Object$*), "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, getInt, int32_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, getLong, int64_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, getShort, int16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, set, void, Object$*, Object$*), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, setBoolean, void, Object$*, bool), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, setByte, void, Object$*, int8_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, setChar, void, Object$*, char16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, setDouble, void, Object$*, double), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, setFloat, void, Object$*, float), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, setInt, void, Object$*, int32_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, setLong, void, Object$*, int64_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedShortFieldAccessorImpl, setShort, void, Object$*, int16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UnsafeQualifiedShortFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.UnsafeQualifiedShortFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeQualifiedFieldAccessorImpl",
	nullptr,
	nullptr,
	_UnsafeQualifiedShortFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeQualifiedShortFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeQualifiedShortFieldAccessorImpl));
}

void UnsafeQualifiedShortFieldAccessorImpl::init$($Field* field, bool isReadOnly) {
	$UnsafeQualifiedFieldAccessorImpl::init$(field, isReadOnly);
}

$Object* UnsafeQualifiedShortFieldAccessorImpl::get(Object$* obj) {
	return $of($Short::valueOf(getShort(obj)));
}

bool UnsafeQualifiedShortFieldAccessorImpl::getBoolean(Object$* obj) {
	$throw($(newGetBooleanIllegalArgumentException()));
	$shouldNotReachHere();
}

int8_t UnsafeQualifiedShortFieldAccessorImpl::getByte(Object$* obj) {
	$throw($(newGetByteIllegalArgumentException()));
	$shouldNotReachHere();
}

char16_t UnsafeQualifiedShortFieldAccessorImpl::getChar(Object$* obj) {
	$throw($(newGetCharIllegalArgumentException()));
	$shouldNotReachHere();
}

int16_t UnsafeQualifiedShortFieldAccessorImpl::getShort(Object$* obj) {
	ensureObj(obj);
	$init($UnsafeFieldAccessorImpl);
	return $nc($UnsafeFieldAccessorImpl::unsafe)->getShortVolatile(obj, this->fieldOffset);
}

int32_t UnsafeQualifiedShortFieldAccessorImpl::getInt(Object$* obj) {
	return getShort(obj);
}

int64_t UnsafeQualifiedShortFieldAccessorImpl::getLong(Object$* obj) {
	return getShort(obj);
}

float UnsafeQualifiedShortFieldAccessorImpl::getFloat(Object$* obj) {
	return (float)getShort(obj);
}

double UnsafeQualifiedShortFieldAccessorImpl::getDouble(Object$* obj) {
	return (double)getShort(obj);
}

void UnsafeQualifiedShortFieldAccessorImpl::set(Object$* obj, Object$* value) {
	ensureObj(obj);
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(value);
	}
	if (value == nullptr) {
		throwSetIllegalArgumentException(value);
	}
	if ($instanceOf($Byte, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putShortVolatile(obj, this->fieldOffset, $nc(($cast($Byte, value)))->byteValue());
		return;
	}
	if ($instanceOf($Short, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putShortVolatile(obj, this->fieldOffset, $nc(($cast($Short, value)))->shortValue());
		return;
	}
	throwSetIllegalArgumentException(value);
}

void UnsafeQualifiedShortFieldAccessorImpl::setBoolean(Object$* obj, bool z) {
	throwSetIllegalArgumentException(z);
}

void UnsafeQualifiedShortFieldAccessorImpl::setByte(Object$* obj, int8_t b) {
	setShort(obj, b);
}

void UnsafeQualifiedShortFieldAccessorImpl::setChar(Object$* obj, char16_t c) {
	throwSetIllegalArgumentException(c);
}

void UnsafeQualifiedShortFieldAccessorImpl::setShort(Object$* obj, int16_t s) {
	ensureObj(obj);
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(s);
	}
	$init($UnsafeFieldAccessorImpl);
	$nc($UnsafeFieldAccessorImpl::unsafe)->putShortVolatile(obj, this->fieldOffset, s);
}

void UnsafeQualifiedShortFieldAccessorImpl::setInt(Object$* obj, int32_t i) {
	throwSetIllegalArgumentException(i);
}

void UnsafeQualifiedShortFieldAccessorImpl::setLong(Object$* obj, int64_t l) {
	throwSetIllegalArgumentException(l);
}

void UnsafeQualifiedShortFieldAccessorImpl::setFloat(Object$* obj, float f) {
	throwSetIllegalArgumentException(f);
}

void UnsafeQualifiedShortFieldAccessorImpl::setDouble(Object$* obj, double d) {
	throwSetIllegalArgumentException(d);
}

UnsafeQualifiedShortFieldAccessorImpl::UnsafeQualifiedShortFieldAccessorImpl() {
}

$Class* UnsafeQualifiedShortFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeQualifiedShortFieldAccessorImpl, name, initialize, &_UnsafeQualifiedShortFieldAccessorImpl_ClassInfo_, allocate$UnsafeQualifiedShortFieldAccessorImpl);
	return class$;
}

$Class* UnsafeQualifiedShortFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk