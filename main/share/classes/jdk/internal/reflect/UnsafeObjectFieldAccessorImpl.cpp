#include <jdk/internal/reflect/UnsafeObjectFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $UnsafeFieldAccessorImpl = ::jdk::internal::reflect::UnsafeFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _UnsafeObjectFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;)V", nullptr, 0, $method(UnsafeObjectFieldAccessorImpl, init$, void, $Field*)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, get, $Object*, Object$*), "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, getBoolean, bool, Object$*), "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, getByte, int8_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, getChar, char16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, getDouble, double, Object$*), "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, getFloat, float, Object$*), "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, getInt, int32_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, getLong, int64_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, getShort, int16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, set, void, Object$*, Object$*), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, setBoolean, void, Object$*, bool), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, setByte, void, Object$*, int8_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, setChar, void, Object$*, char16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, setDouble, void, Object$*, double), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, setFloat, void, Object$*, float), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, setInt, void, Object$*, int32_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, setLong, void, Object$*, int64_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, $virtualMethod(UnsafeObjectFieldAccessorImpl, setShort, void, Object$*, int16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UnsafeObjectFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.UnsafeObjectFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeFieldAccessorImpl",
	nullptr,
	nullptr,
	_UnsafeObjectFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeObjectFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeObjectFieldAccessorImpl));
}

void UnsafeObjectFieldAccessorImpl::init$($Field* field) {
	$UnsafeFieldAccessorImpl::init$(field);
}

$Object* UnsafeObjectFieldAccessorImpl::get(Object$* obj) {
	ensureObj(obj);
	$init($UnsafeFieldAccessorImpl);
	return $of($nc($UnsafeFieldAccessorImpl::unsafe)->getReference(obj, this->fieldOffset));
}

bool UnsafeObjectFieldAccessorImpl::getBoolean(Object$* obj) {
	$throw($(newGetBooleanIllegalArgumentException()));
	$shouldNotReachHere();
}

int8_t UnsafeObjectFieldAccessorImpl::getByte(Object$* obj) {
	$throw($(newGetByteIllegalArgumentException()));
	$shouldNotReachHere();
}

char16_t UnsafeObjectFieldAccessorImpl::getChar(Object$* obj) {
	$throw($(newGetCharIllegalArgumentException()));
	$shouldNotReachHere();
}

int16_t UnsafeObjectFieldAccessorImpl::getShort(Object$* obj) {
	$throw($(newGetShortIllegalArgumentException()));
	$shouldNotReachHere();
}

int32_t UnsafeObjectFieldAccessorImpl::getInt(Object$* obj) {
	$throw($(newGetIntIllegalArgumentException()));
	$shouldNotReachHere();
}

int64_t UnsafeObjectFieldAccessorImpl::getLong(Object$* obj) {
	$throw($(newGetLongIllegalArgumentException()));
	$shouldNotReachHere();
}

float UnsafeObjectFieldAccessorImpl::getFloat(Object$* obj) {
	$throw($(newGetFloatIllegalArgumentException()));
	$shouldNotReachHere();
}

double UnsafeObjectFieldAccessorImpl::getDouble(Object$* obj) {
	$throw($(newGetDoubleIllegalArgumentException()));
	$shouldNotReachHere();
}

void UnsafeObjectFieldAccessorImpl::set(Object$* obj, Object$* value) {
	ensureObj(obj);
	if (this->isFinal) {
		throwFinalFieldIllegalAccessException(value);
	}
	if (value != nullptr) {
		if (!$nc($nc(this->field)->getType())->isAssignableFrom($of(value)->getClass())) {
			throwSetIllegalArgumentException(value);
		}
	}
	$init($UnsafeFieldAccessorImpl);
	$nc($UnsafeFieldAccessorImpl::unsafe)->putReference(obj, this->fieldOffset, value);
}

void UnsafeObjectFieldAccessorImpl::setBoolean(Object$* obj, bool z) {
	throwSetIllegalArgumentException(z);
}

void UnsafeObjectFieldAccessorImpl::setByte(Object$* obj, int8_t b) {
	throwSetIllegalArgumentException(b);
}

void UnsafeObjectFieldAccessorImpl::setChar(Object$* obj, char16_t c) {
	throwSetIllegalArgumentException(c);
}

void UnsafeObjectFieldAccessorImpl::setShort(Object$* obj, int16_t s) {
	throwSetIllegalArgumentException(s);
}

void UnsafeObjectFieldAccessorImpl::setInt(Object$* obj, int32_t i) {
	throwSetIllegalArgumentException(i);
}

void UnsafeObjectFieldAccessorImpl::setLong(Object$* obj, int64_t l) {
	throwSetIllegalArgumentException(l);
}

void UnsafeObjectFieldAccessorImpl::setFloat(Object$* obj, float f) {
	throwSetIllegalArgumentException(f);
}

void UnsafeObjectFieldAccessorImpl::setDouble(Object$* obj, double d) {
	throwSetIllegalArgumentException(d);
}

UnsafeObjectFieldAccessorImpl::UnsafeObjectFieldAccessorImpl() {
}

$Class* UnsafeObjectFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeObjectFieldAccessorImpl, name, initialize, &_UnsafeObjectFieldAccessorImpl_ClassInfo_, allocate$UnsafeObjectFieldAccessorImpl);
	return class$;
}

$Class* UnsafeObjectFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk