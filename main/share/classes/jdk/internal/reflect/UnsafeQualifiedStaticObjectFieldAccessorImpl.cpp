#include <jdk/internal/reflect/UnsafeQualifiedStaticObjectFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeQualifiedStaticFieldAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeStaticFieldAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $UnsafeFieldAccessorImpl = ::jdk::internal::reflect::UnsafeFieldAccessorImpl;
using $UnsafeQualifiedStaticFieldAccessorImpl = ::jdk::internal::reflect::UnsafeQualifiedStaticFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _UnsafeQualifiedStaticObjectFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;Z)V", nullptr, 0, $method(UnsafeQualifiedStaticObjectFieldAccessorImpl, init$, void, $Field*, bool)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, get, $Object*, Object$*), "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, getBoolean, bool, Object$*), "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, getByte, int8_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, getChar, char16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, getDouble, double, Object$*), "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, getFloat, float, Object$*), "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, getInt, int32_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, getLong, int64_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, getShort, int16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, set, void, Object$*, Object$*), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, setBoolean, void, Object$*, bool), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, setByte, void, Object$*, int8_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, setChar, void, Object$*, char16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, setDouble, void, Object$*, double), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, setFloat, void, Object$*, float), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, setInt, void, Object$*, int32_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, setLong, void, Object$*, int64_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticObjectFieldAccessorImpl, setShort, void, Object$*, int16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UnsafeQualifiedStaticObjectFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.UnsafeQualifiedStaticObjectFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeQualifiedStaticFieldAccessorImpl",
	nullptr,
	nullptr,
	_UnsafeQualifiedStaticObjectFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeQualifiedStaticObjectFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeQualifiedStaticObjectFieldAccessorImpl));
}

void UnsafeQualifiedStaticObjectFieldAccessorImpl::init$($Field* field, bool isReadOnly) {
	$UnsafeQualifiedStaticFieldAccessorImpl::init$(field, isReadOnly);
}

$Object* UnsafeQualifiedStaticObjectFieldAccessorImpl::get(Object$* obj) {
	$init($UnsafeFieldAccessorImpl);
	return $of($nc($UnsafeFieldAccessorImpl::unsafe)->getReferenceVolatile(this->base, this->fieldOffset));
}

bool UnsafeQualifiedStaticObjectFieldAccessorImpl::getBoolean(Object$* obj) {
	$throw($(newGetBooleanIllegalArgumentException()));
	$shouldNotReachHere();
}

int8_t UnsafeQualifiedStaticObjectFieldAccessorImpl::getByte(Object$* obj) {
	$throw($(newGetByteIllegalArgumentException()));
	$shouldNotReachHere();
}

char16_t UnsafeQualifiedStaticObjectFieldAccessorImpl::getChar(Object$* obj) {
	$throw($(newGetCharIllegalArgumentException()));
	$shouldNotReachHere();
}

int16_t UnsafeQualifiedStaticObjectFieldAccessorImpl::getShort(Object$* obj) {
	$throw($(newGetShortIllegalArgumentException()));
	$shouldNotReachHere();
}

int32_t UnsafeQualifiedStaticObjectFieldAccessorImpl::getInt(Object$* obj) {
	$throw($(newGetIntIllegalArgumentException()));
	$shouldNotReachHere();
}

int64_t UnsafeQualifiedStaticObjectFieldAccessorImpl::getLong(Object$* obj) {
	$throw($(newGetLongIllegalArgumentException()));
	$shouldNotReachHere();
}

float UnsafeQualifiedStaticObjectFieldAccessorImpl::getFloat(Object$* obj) {
	$throw($(newGetFloatIllegalArgumentException()));
	$shouldNotReachHere();
}

double UnsafeQualifiedStaticObjectFieldAccessorImpl::getDouble(Object$* obj) {
	$throw($(newGetDoubleIllegalArgumentException()));
	$shouldNotReachHere();
}

void UnsafeQualifiedStaticObjectFieldAccessorImpl::set(Object$* obj, Object$* value) {
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(value);
	}
	if (value != nullptr) {
		if (!$nc($nc(this->field)->getType())->isAssignableFrom($of(value)->getClass())) {
			throwSetIllegalArgumentException(value);
		}
	}
	$init($UnsafeFieldAccessorImpl);
	$nc($UnsafeFieldAccessorImpl::unsafe)->putReferenceVolatile(this->base, this->fieldOffset, value);
}

void UnsafeQualifiedStaticObjectFieldAccessorImpl::setBoolean(Object$* obj, bool z) {
	throwSetIllegalArgumentException(z);
}

void UnsafeQualifiedStaticObjectFieldAccessorImpl::setByte(Object$* obj, int8_t b) {
	throwSetIllegalArgumentException(b);
}

void UnsafeQualifiedStaticObjectFieldAccessorImpl::setChar(Object$* obj, char16_t c) {
	throwSetIllegalArgumentException(c);
}

void UnsafeQualifiedStaticObjectFieldAccessorImpl::setShort(Object$* obj, int16_t s) {
	throwSetIllegalArgumentException(s);
}

void UnsafeQualifiedStaticObjectFieldAccessorImpl::setInt(Object$* obj, int32_t i) {
	throwSetIllegalArgumentException(i);
}

void UnsafeQualifiedStaticObjectFieldAccessorImpl::setLong(Object$* obj, int64_t l) {
	throwSetIllegalArgumentException(l);
}

void UnsafeQualifiedStaticObjectFieldAccessorImpl::setFloat(Object$* obj, float f) {
	throwSetIllegalArgumentException(f);
}

void UnsafeQualifiedStaticObjectFieldAccessorImpl::setDouble(Object$* obj, double d) {
	throwSetIllegalArgumentException(d);
}

UnsafeQualifiedStaticObjectFieldAccessorImpl::UnsafeQualifiedStaticObjectFieldAccessorImpl() {
}

$Class* UnsafeQualifiedStaticObjectFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeQualifiedStaticObjectFieldAccessorImpl, name, initialize, &_UnsafeQualifiedStaticObjectFieldAccessorImpl_ClassInfo_, allocate$UnsafeQualifiedStaticObjectFieldAccessorImpl);
	return class$;
}

$Class* UnsafeQualifiedStaticObjectFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk