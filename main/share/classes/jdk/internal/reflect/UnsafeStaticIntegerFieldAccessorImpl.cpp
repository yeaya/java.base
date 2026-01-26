#include <jdk/internal/reflect/UnsafeStaticIntegerFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
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
using $UnsafeStaticFieldAccessorImpl = ::jdk::internal::reflect::UnsafeStaticFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _UnsafeStaticIntegerFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;)V", nullptr, 0, $method(UnsafeStaticIntegerFieldAccessorImpl, init$, void, $Field*)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, get, $Object*, Object$*), "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, getBoolean, bool, Object$*), "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, getByte, int8_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, getChar, char16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, getDouble, double, Object$*), "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, getFloat, float, Object$*), "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, getInt, int32_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, getLong, int64_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, getShort, int16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, set, void, Object$*, Object$*), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, setBoolean, void, Object$*, bool), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, setByte, void, Object$*, int8_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, setChar, void, Object$*, char16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, setDouble, void, Object$*, double), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, setFloat, void, Object$*, float), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, setInt, void, Object$*, int32_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, setLong, void, Object$*, int64_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, $virtualMethod(UnsafeStaticIntegerFieldAccessorImpl, setShort, void, Object$*, int16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UnsafeStaticIntegerFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.UnsafeStaticIntegerFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeStaticFieldAccessorImpl",
	nullptr,
	nullptr,
	_UnsafeStaticIntegerFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeStaticIntegerFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeStaticIntegerFieldAccessorImpl));
}

void UnsafeStaticIntegerFieldAccessorImpl::init$($Field* field) {
	$UnsafeStaticFieldAccessorImpl::init$(field);
}

$Object* UnsafeStaticIntegerFieldAccessorImpl::get(Object$* obj) {
	return $of($Integer::valueOf(getInt(obj)));
}

bool UnsafeStaticIntegerFieldAccessorImpl::getBoolean(Object$* obj) {
	$throw($(newGetBooleanIllegalArgumentException()));
	$shouldNotReachHere();
}

int8_t UnsafeStaticIntegerFieldAccessorImpl::getByte(Object$* obj) {
	$throw($(newGetByteIllegalArgumentException()));
	$shouldNotReachHere();
}

char16_t UnsafeStaticIntegerFieldAccessorImpl::getChar(Object$* obj) {
	$throw($(newGetCharIllegalArgumentException()));
	$shouldNotReachHere();
}

int16_t UnsafeStaticIntegerFieldAccessorImpl::getShort(Object$* obj) {
	$throw($(newGetShortIllegalArgumentException()));
	$shouldNotReachHere();
}

int32_t UnsafeStaticIntegerFieldAccessorImpl::getInt(Object$* obj) {
	$init($UnsafeFieldAccessorImpl);
	return $nc($UnsafeFieldAccessorImpl::unsafe)->getInt(this->base, this->fieldOffset);
}

int64_t UnsafeStaticIntegerFieldAccessorImpl::getLong(Object$* obj) {
	return getInt(obj);
}

float UnsafeStaticIntegerFieldAccessorImpl::getFloat(Object$* obj) {
	return (float)getInt(obj);
}

double UnsafeStaticIntegerFieldAccessorImpl::getDouble(Object$* obj) {
	return (double)getInt(obj);
}

void UnsafeStaticIntegerFieldAccessorImpl::set(Object$* obj, Object$* value) {
	if (this->isFinal) {
		throwFinalFieldIllegalAccessException(value);
	}
	if (value == nullptr) {
		throwSetIllegalArgumentException(value);
	}
	if ($instanceOf($Byte, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putInt(this->base, this->fieldOffset, $nc(($cast($Byte, value)))->byteValue());
		return;
	}
	if ($instanceOf($Short, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putInt(this->base, this->fieldOffset, $nc(($cast($Short, value)))->shortValue());
		return;
	}
	if ($instanceOf($Character, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putInt(this->base, this->fieldOffset, $nc(($cast($Character, value)))->charValue());
		return;
	}
	if ($instanceOf($Integer, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putInt(this->base, this->fieldOffset, $nc(($cast($Integer, value)))->intValue());
		return;
	}
	throwSetIllegalArgumentException(value);
}

void UnsafeStaticIntegerFieldAccessorImpl::setBoolean(Object$* obj, bool z) {
	throwSetIllegalArgumentException(z);
}

void UnsafeStaticIntegerFieldAccessorImpl::setByte(Object$* obj, int8_t b) {
	setInt(obj, b);
}

void UnsafeStaticIntegerFieldAccessorImpl::setChar(Object$* obj, char16_t c) {
	setInt(obj, c);
}

void UnsafeStaticIntegerFieldAccessorImpl::setShort(Object$* obj, int16_t s) {
	setInt(obj, s);
}

void UnsafeStaticIntegerFieldAccessorImpl::setInt(Object$* obj, int32_t i) {
	if (this->isFinal) {
		throwFinalFieldIllegalAccessException(i);
	}
	$init($UnsafeFieldAccessorImpl);
	$nc($UnsafeFieldAccessorImpl::unsafe)->putInt(this->base, this->fieldOffset, i);
}

void UnsafeStaticIntegerFieldAccessorImpl::setLong(Object$* obj, int64_t l) {
	throwSetIllegalArgumentException(l);
}

void UnsafeStaticIntegerFieldAccessorImpl::setFloat(Object$* obj, float f) {
	throwSetIllegalArgumentException(f);
}

void UnsafeStaticIntegerFieldAccessorImpl::setDouble(Object$* obj, double d) {
	throwSetIllegalArgumentException(d);
}

UnsafeStaticIntegerFieldAccessorImpl::UnsafeStaticIntegerFieldAccessorImpl() {
}

$Class* UnsafeStaticIntegerFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeStaticIntegerFieldAccessorImpl, name, initialize, &_UnsafeStaticIntegerFieldAccessorImpl_ClassInfo_, allocate$UnsafeStaticIntegerFieldAccessorImpl);
	return class$;
}

$Class* UnsafeStaticIntegerFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk