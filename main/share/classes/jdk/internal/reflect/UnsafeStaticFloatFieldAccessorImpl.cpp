#include <jdk/internal/reflect/UnsafeStaticFloatFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeStaticFieldAccessorImpl.h>
#include <jcpp.h>

using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Field = ::java::lang::reflect::Field;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $UnsafeFieldAccessorImpl = ::jdk::internal::reflect::UnsafeFieldAccessorImpl;
using $UnsafeStaticFieldAccessorImpl = ::jdk::internal::reflect::UnsafeStaticFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _UnsafeStaticFloatFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;)V", nullptr, 0, $method(UnsafeStaticFloatFieldAccessorImpl, init$, void, $Field*)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, get, $Object*, Object$*), "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, getBoolean, bool, Object$*), "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, getByte, int8_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, getChar, char16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, getDouble, double, Object$*), "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, getFloat, float, Object$*), "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, getInt, int32_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, getLong, int64_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, getShort, int16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, set, void, Object$*, Object$*), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, setBoolean, void, Object$*, bool), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, setByte, void, Object$*, int8_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, setChar, void, Object$*, char16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, setDouble, void, Object$*, double), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, setFloat, void, Object$*, float), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, setInt, void, Object$*, int32_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, setLong, void, Object$*, int64_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticFloatFieldAccessorImpl, setShort, void, Object$*, int16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UnsafeStaticFloatFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.UnsafeStaticFloatFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeStaticFieldAccessorImpl",
	nullptr,
	nullptr,
	_UnsafeStaticFloatFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeStaticFloatFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeStaticFloatFieldAccessorImpl));
}

void UnsafeStaticFloatFieldAccessorImpl::init$($Field* field) {
	$UnsafeStaticFieldAccessorImpl::init$(field);
}

$Object* UnsafeStaticFloatFieldAccessorImpl::get(Object$* obj) {
	return $of($Float::valueOf(getFloat(obj)));
}

bool UnsafeStaticFloatFieldAccessorImpl::getBoolean(Object$* obj) {
	$throw($(newGetBooleanIllegalArgumentException()));
	$shouldNotReachHere();
}

int8_t UnsafeStaticFloatFieldAccessorImpl::getByte(Object$* obj) {
	$throw($(newGetByteIllegalArgumentException()));
	$shouldNotReachHere();
}

char16_t UnsafeStaticFloatFieldAccessorImpl::getChar(Object$* obj) {
	$throw($(newGetCharIllegalArgumentException()));
	$shouldNotReachHere();
}

int16_t UnsafeStaticFloatFieldAccessorImpl::getShort(Object$* obj) {
	$throw($(newGetShortIllegalArgumentException()));
	$shouldNotReachHere();
}

int32_t UnsafeStaticFloatFieldAccessorImpl::getInt(Object$* obj) {
	$throw($(newGetIntIllegalArgumentException()));
	$shouldNotReachHere();
}

int64_t UnsafeStaticFloatFieldAccessorImpl::getLong(Object$* obj) {
	$throw($(newGetLongIllegalArgumentException()));
	$shouldNotReachHere();
}

float UnsafeStaticFloatFieldAccessorImpl::getFloat(Object$* obj) {
	$init($UnsafeFieldAccessorImpl);
	return $nc($UnsafeFieldAccessorImpl::unsafe)->getFloat(this->base, this->fieldOffset);
}

double UnsafeStaticFloatFieldAccessorImpl::getDouble(Object$* obj) {
	return getFloat(obj);
}

void UnsafeStaticFloatFieldAccessorImpl::set(Object$* obj, Object$* value) {
	if (this->isFinal) {
		throwFinalFieldIllegalAccessException(value);
	}
	if (value == nullptr) {
		throwSetIllegalArgumentException(value);
	}
	if ($instanceOf($Byte, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putFloat(this->base, this->fieldOffset, (float)$nc(($cast($Byte, value)))->byteValue());
		return;
	}
	if ($instanceOf($Short, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putFloat(this->base, this->fieldOffset, (float)$nc(($cast($Short, value)))->shortValue());
		return;
	}
	if ($instanceOf($Character, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putFloat(this->base, this->fieldOffset, (float)$nc(($cast($Character, value)))->charValue());
		return;
	}
	if ($instanceOf($Integer, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putFloat(this->base, this->fieldOffset, (float)$nc(($cast($Integer, value)))->intValue());
		return;
	}
	if ($instanceOf($Long, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putFloat(this->base, this->fieldOffset, (float)$nc(($cast($Long, value)))->longValue());
		return;
	}
	if ($instanceOf($Float, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putFloat(this->base, this->fieldOffset, $nc(($cast($Float, value)))->floatValue());
		return;
	}
	throwSetIllegalArgumentException(value);
}

void UnsafeStaticFloatFieldAccessorImpl::setBoolean(Object$* obj, bool z) {
	throwSetIllegalArgumentException(z);
}

void UnsafeStaticFloatFieldAccessorImpl::setByte(Object$* obj, int8_t b) {
	setFloat(obj, (float)b);
}

void UnsafeStaticFloatFieldAccessorImpl::setChar(Object$* obj, char16_t c) {
	setFloat(obj, (float)c);
}

void UnsafeStaticFloatFieldAccessorImpl::setShort(Object$* obj, int16_t s) {
	setFloat(obj, (float)s);
}

void UnsafeStaticFloatFieldAccessorImpl::setInt(Object$* obj, int32_t i) {
	setFloat(obj, (float)i);
}

void UnsafeStaticFloatFieldAccessorImpl::setLong(Object$* obj, int64_t l) {
	setFloat(obj, (float)l);
}

void UnsafeStaticFloatFieldAccessorImpl::setFloat(Object$* obj, float f) {
	if (this->isFinal) {
		throwFinalFieldIllegalAccessException(f);
	}
	$init($UnsafeFieldAccessorImpl);
	$nc($UnsafeFieldAccessorImpl::unsafe)->putFloat(this->base, this->fieldOffset, f);
}

void UnsafeStaticFloatFieldAccessorImpl::setDouble(Object$* obj, double d) {
	throwSetIllegalArgumentException(d);
}

UnsafeStaticFloatFieldAccessorImpl::UnsafeStaticFloatFieldAccessorImpl() {
}

$Class* UnsafeStaticFloatFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeStaticFloatFieldAccessorImpl, name, initialize, &_UnsafeStaticFloatFieldAccessorImpl_ClassInfo_, allocate$UnsafeStaticFloatFieldAccessorImpl);
	return class$;
}

$Class* UnsafeStaticFloatFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk