#include <jdk/internal/reflect/UnsafeQualifiedStaticLongFieldAccessorImpl.h>

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
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Field = ::java::lang::reflect::Field;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $UnsafeFieldAccessorImpl = ::jdk::internal::reflect::UnsafeFieldAccessorImpl;
using $UnsafeQualifiedStaticFieldAccessorImpl = ::jdk::internal::reflect::UnsafeQualifiedStaticFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _UnsafeQualifiedStaticLongFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;Z)V", nullptr, 0, $method(UnsafeQualifiedStaticLongFieldAccessorImpl, init$, void, $Field*, bool)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, get, $Object*, Object$*), "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, getBoolean, bool, Object$*), "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, getByte, int8_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, getChar, char16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, getDouble, double, Object$*), "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, getFloat, float, Object$*), "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, getInt, int32_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, getLong, int64_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, getShort, int16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, set, void, Object$*, Object$*), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, setBoolean, void, Object$*, bool), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, setByte, void, Object$*, int8_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, setChar, void, Object$*, char16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, setDouble, void, Object$*, double), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, setFloat, void, Object$*, float), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, setInt, void, Object$*, int32_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, setLong, void, Object$*, int64_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticLongFieldAccessorImpl, setShort, void, Object$*, int16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UnsafeQualifiedStaticLongFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.UnsafeQualifiedStaticLongFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeQualifiedStaticFieldAccessorImpl",
	nullptr,
	nullptr,
	_UnsafeQualifiedStaticLongFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeQualifiedStaticLongFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeQualifiedStaticLongFieldAccessorImpl));
}

void UnsafeQualifiedStaticLongFieldAccessorImpl::init$($Field* field, bool isReadOnly) {
	$UnsafeQualifiedStaticFieldAccessorImpl::init$(field, isReadOnly);
}

$Object* UnsafeQualifiedStaticLongFieldAccessorImpl::get(Object$* obj) {
	return $of($Long::valueOf(getLong(obj)));
}

bool UnsafeQualifiedStaticLongFieldAccessorImpl::getBoolean(Object$* obj) {
	$throw($(newGetBooleanIllegalArgumentException()));
	$shouldNotReachHere();
}

int8_t UnsafeQualifiedStaticLongFieldAccessorImpl::getByte(Object$* obj) {
	$throw($(newGetByteIllegalArgumentException()));
	$shouldNotReachHere();
}

char16_t UnsafeQualifiedStaticLongFieldAccessorImpl::getChar(Object$* obj) {
	$throw($(newGetCharIllegalArgumentException()));
	$shouldNotReachHere();
}

int16_t UnsafeQualifiedStaticLongFieldAccessorImpl::getShort(Object$* obj) {
	$throw($(newGetShortIllegalArgumentException()));
	$shouldNotReachHere();
}

int32_t UnsafeQualifiedStaticLongFieldAccessorImpl::getInt(Object$* obj) {
	$throw($(newGetIntIllegalArgumentException()));
	$shouldNotReachHere();
}

int64_t UnsafeQualifiedStaticLongFieldAccessorImpl::getLong(Object$* obj) {
	$init($UnsafeFieldAccessorImpl);
	return $nc($UnsafeFieldAccessorImpl::unsafe)->getLongVolatile(this->base, this->fieldOffset);
}

float UnsafeQualifiedStaticLongFieldAccessorImpl::getFloat(Object$* obj) {
	return (float)getLong(obj);
}

double UnsafeQualifiedStaticLongFieldAccessorImpl::getDouble(Object$* obj) {
	return (double)getLong(obj);
}

void UnsafeQualifiedStaticLongFieldAccessorImpl::set(Object$* obj, Object$* value) {
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(value);
	}
	if (value == nullptr) {
		throwSetIllegalArgumentException(value);
	}
	if ($instanceOf($Byte, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putLongVolatile(this->base, this->fieldOffset, $nc(($cast($Byte, value)))->byteValue());
		return;
	}
	if ($instanceOf($Short, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putLongVolatile(this->base, this->fieldOffset, $nc(($cast($Short, value)))->shortValue());
		return;
	}
	if ($instanceOf($Character, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putLongVolatile(this->base, this->fieldOffset, $nc(($cast($Character, value)))->charValue());
		return;
	}
	if ($instanceOf($Integer, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putLongVolatile(this->base, this->fieldOffset, $nc(($cast($Integer, value)))->intValue());
		return;
	}
	if ($instanceOf($Long, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putLongVolatile(this->base, this->fieldOffset, $nc(($cast($Long, value)))->longValue());
		return;
	}
	throwSetIllegalArgumentException(value);
}

void UnsafeQualifiedStaticLongFieldAccessorImpl::setBoolean(Object$* obj, bool z) {
	throwSetIllegalArgumentException(z);
}

void UnsafeQualifiedStaticLongFieldAccessorImpl::setByte(Object$* obj, int8_t b) {
	setLong(obj, b);
}

void UnsafeQualifiedStaticLongFieldAccessorImpl::setChar(Object$* obj, char16_t c) {
	setLong(obj, c);
}

void UnsafeQualifiedStaticLongFieldAccessorImpl::setShort(Object$* obj, int16_t s) {
	setLong(obj, s);
}

void UnsafeQualifiedStaticLongFieldAccessorImpl::setInt(Object$* obj, int32_t i) {
	setLong(obj, i);
}

void UnsafeQualifiedStaticLongFieldAccessorImpl::setLong(Object$* obj, int64_t l) {
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(l);
	}
	$init($UnsafeFieldAccessorImpl);
	$nc($UnsafeFieldAccessorImpl::unsafe)->putLongVolatile(this->base, this->fieldOffset, l);
}

void UnsafeQualifiedStaticLongFieldAccessorImpl::setFloat(Object$* obj, float f) {
	throwSetIllegalArgumentException(f);
}

void UnsafeQualifiedStaticLongFieldAccessorImpl::setDouble(Object$* obj, double d) {
	throwSetIllegalArgumentException(d);
}

UnsafeQualifiedStaticLongFieldAccessorImpl::UnsafeQualifiedStaticLongFieldAccessorImpl() {
}

$Class* UnsafeQualifiedStaticLongFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeQualifiedStaticLongFieldAccessorImpl, name, initialize, &_UnsafeQualifiedStaticLongFieldAccessorImpl_ClassInfo_, allocate$UnsafeQualifiedStaticLongFieldAccessorImpl);
	return class$;
}

$Class* UnsafeQualifiedStaticLongFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk