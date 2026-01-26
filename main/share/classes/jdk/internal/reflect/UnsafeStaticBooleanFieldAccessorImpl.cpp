#include <jdk/internal/reflect/UnsafeStaticBooleanFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeStaticFieldAccessorImpl.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $UnsafeFieldAccessorImpl = ::jdk::internal::reflect::UnsafeFieldAccessorImpl;
using $UnsafeStaticFieldAccessorImpl = ::jdk::internal::reflect::UnsafeStaticFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _UnsafeStaticBooleanFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;)V", nullptr, 0, $method(UnsafeStaticBooleanFieldAccessorImpl, init$, void, $Field*)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, get, $Object*, Object$*), "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, getBoolean, bool, Object$*), "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, getByte, int8_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, getChar, char16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, getDouble, double, Object$*), "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, getFloat, float, Object$*), "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, getInt, int32_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, getLong, int64_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, getShort, int16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, set, void, Object$*, Object$*), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, setBoolean, void, Object$*, bool), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, setByte, void, Object$*, int8_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, setChar, void, Object$*, char16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, setDouble, void, Object$*, double), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, setFloat, void, Object$*, float), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, setInt, void, Object$*, int32_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, setLong, void, Object$*, int64_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticBooleanFieldAccessorImpl, setShort, void, Object$*, int16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UnsafeStaticBooleanFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.UnsafeStaticBooleanFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeStaticFieldAccessorImpl",
	nullptr,
	nullptr,
	_UnsafeStaticBooleanFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeStaticBooleanFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeStaticBooleanFieldAccessorImpl));
}

void UnsafeStaticBooleanFieldAccessorImpl::init$($Field* field) {
	$UnsafeStaticFieldAccessorImpl::init$(field);
}

$Object* UnsafeStaticBooleanFieldAccessorImpl::get(Object$* obj) {
	return $of($Boolean::valueOf(getBoolean(obj)));
}

bool UnsafeStaticBooleanFieldAccessorImpl::getBoolean(Object$* obj) {
	$init($UnsafeFieldAccessorImpl);
	return $nc($UnsafeFieldAccessorImpl::unsafe)->getBoolean(this->base, this->fieldOffset);
}

int8_t UnsafeStaticBooleanFieldAccessorImpl::getByte(Object$* obj) {
	$throw($(newGetByteIllegalArgumentException()));
	$shouldNotReachHere();
}

char16_t UnsafeStaticBooleanFieldAccessorImpl::getChar(Object$* obj) {
	$throw($(newGetCharIllegalArgumentException()));
	$shouldNotReachHere();
}

int16_t UnsafeStaticBooleanFieldAccessorImpl::getShort(Object$* obj) {
	$throw($(newGetShortIllegalArgumentException()));
	$shouldNotReachHere();
}

int32_t UnsafeStaticBooleanFieldAccessorImpl::getInt(Object$* obj) {
	$throw($(newGetIntIllegalArgumentException()));
	$shouldNotReachHere();
}

int64_t UnsafeStaticBooleanFieldAccessorImpl::getLong(Object$* obj) {
	$throw($(newGetLongIllegalArgumentException()));
	$shouldNotReachHere();
}

float UnsafeStaticBooleanFieldAccessorImpl::getFloat(Object$* obj) {
	$throw($(newGetFloatIllegalArgumentException()));
	$shouldNotReachHere();
}

double UnsafeStaticBooleanFieldAccessorImpl::getDouble(Object$* obj) {
	$throw($(newGetDoubleIllegalArgumentException()));
	$shouldNotReachHere();
}

void UnsafeStaticBooleanFieldAccessorImpl::set(Object$* obj, Object$* value) {
	if (this->isFinal) {
		throwFinalFieldIllegalAccessException(value);
	}
	if (value == nullptr) {
		throwSetIllegalArgumentException(value);
	}
	if ($instanceOf($Boolean, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putBoolean(this->base, this->fieldOffset, $nc(($cast($Boolean, value)))->booleanValue());
		return;
	}
	throwSetIllegalArgumentException(value);
}

void UnsafeStaticBooleanFieldAccessorImpl::setBoolean(Object$* obj, bool z) {
	if (this->isFinal) {
		throwFinalFieldIllegalAccessException(z);
	}
	$init($UnsafeFieldAccessorImpl);
	$nc($UnsafeFieldAccessorImpl::unsafe)->putBoolean(this->base, this->fieldOffset, z);
}

void UnsafeStaticBooleanFieldAccessorImpl::setByte(Object$* obj, int8_t b) {
	throwSetIllegalArgumentException(b);
}

void UnsafeStaticBooleanFieldAccessorImpl::setChar(Object$* obj, char16_t c) {
	throwSetIllegalArgumentException(c);
}

void UnsafeStaticBooleanFieldAccessorImpl::setShort(Object$* obj, int16_t s) {
	throwSetIllegalArgumentException(s);
}

void UnsafeStaticBooleanFieldAccessorImpl::setInt(Object$* obj, int32_t i) {
	throwSetIllegalArgumentException(i);
}

void UnsafeStaticBooleanFieldAccessorImpl::setLong(Object$* obj, int64_t l) {
	throwSetIllegalArgumentException(l);
}

void UnsafeStaticBooleanFieldAccessorImpl::setFloat(Object$* obj, float f) {
	throwSetIllegalArgumentException(f);
}

void UnsafeStaticBooleanFieldAccessorImpl::setDouble(Object$* obj, double d) {
	throwSetIllegalArgumentException(d);
}

UnsafeStaticBooleanFieldAccessorImpl::UnsafeStaticBooleanFieldAccessorImpl() {
}

$Class* UnsafeStaticBooleanFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeStaticBooleanFieldAccessorImpl, name, initialize, &_UnsafeStaticBooleanFieldAccessorImpl_ClassInfo_, allocate$UnsafeStaticBooleanFieldAccessorImpl);
	return class$;
}

$Class* UnsafeStaticBooleanFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk