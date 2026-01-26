#include <jdk/internal/reflect/UnsafeQualifiedStaticDoubleFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeQualifiedStaticFieldAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeStaticFieldAccessorImpl.h>
#include <jcpp.h>

using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
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

$MethodInfo _UnsafeQualifiedStaticDoubleFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;Z)V", nullptr, 0, $method(UnsafeQualifiedStaticDoubleFieldAccessorImpl, init$, void, $Field*, bool)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, get, $Object*, Object$*), "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, getBoolean, bool, Object$*), "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, getByte, int8_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, getChar, char16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, getDouble, double, Object$*), "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, getFloat, float, Object$*), "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, getInt, int32_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, getLong, int64_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, getShort, int16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, set, void, Object$*, Object$*), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, setBoolean, void, Object$*, bool), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, setByte, void, Object$*, int8_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, setChar, void, Object$*, char16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, setDouble, void, Object$*, double), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, setFloat, void, Object$*, float), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, setInt, void, Object$*, int32_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, setLong, void, Object$*, int64_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedStaticDoubleFieldAccessorImpl, setShort, void, Object$*, int16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UnsafeQualifiedStaticDoubleFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.UnsafeQualifiedStaticDoubleFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeQualifiedStaticFieldAccessorImpl",
	nullptr,
	nullptr,
	_UnsafeQualifiedStaticDoubleFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeQualifiedStaticDoubleFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeQualifiedStaticDoubleFieldAccessorImpl));
}

void UnsafeQualifiedStaticDoubleFieldAccessorImpl::init$($Field* field, bool isReadOnly) {
	$UnsafeQualifiedStaticFieldAccessorImpl::init$(field, isReadOnly);
}

$Object* UnsafeQualifiedStaticDoubleFieldAccessorImpl::get(Object$* obj) {
	return $of($Double::valueOf(getDouble(obj)));
}

bool UnsafeQualifiedStaticDoubleFieldAccessorImpl::getBoolean(Object$* obj) {
	$throw($(newGetBooleanIllegalArgumentException()));
	$shouldNotReachHere();
}

int8_t UnsafeQualifiedStaticDoubleFieldAccessorImpl::getByte(Object$* obj) {
	$throw($(newGetByteIllegalArgumentException()));
	$shouldNotReachHere();
}

char16_t UnsafeQualifiedStaticDoubleFieldAccessorImpl::getChar(Object$* obj) {
	$throw($(newGetCharIllegalArgumentException()));
	$shouldNotReachHere();
}

int16_t UnsafeQualifiedStaticDoubleFieldAccessorImpl::getShort(Object$* obj) {
	$throw($(newGetShortIllegalArgumentException()));
	$shouldNotReachHere();
}

int32_t UnsafeQualifiedStaticDoubleFieldAccessorImpl::getInt(Object$* obj) {
	$throw($(newGetIntIllegalArgumentException()));
	$shouldNotReachHere();
}

int64_t UnsafeQualifiedStaticDoubleFieldAccessorImpl::getLong(Object$* obj) {
	$throw($(newGetLongIllegalArgumentException()));
	$shouldNotReachHere();
}

float UnsafeQualifiedStaticDoubleFieldAccessorImpl::getFloat(Object$* obj) {
	$throw($(newGetFloatIllegalArgumentException()));
	$shouldNotReachHere();
}

double UnsafeQualifiedStaticDoubleFieldAccessorImpl::getDouble(Object$* obj) {
	$init($UnsafeFieldAccessorImpl);
	return $nc($UnsafeFieldAccessorImpl::unsafe)->getDoubleVolatile(this->base, this->fieldOffset);
}

void UnsafeQualifiedStaticDoubleFieldAccessorImpl::set(Object$* obj, Object$* value) {
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(value);
	}
	if (value == nullptr) {
		throwSetIllegalArgumentException(value);
	}
	if ($instanceOf($Byte, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putDoubleVolatile(this->base, this->fieldOffset, (double)$nc(($cast($Byte, value)))->byteValue());
		return;
	}
	if ($instanceOf($Short, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putDoubleVolatile(this->base, this->fieldOffset, (double)$nc(($cast($Short, value)))->shortValue());
		return;
	}
	if ($instanceOf($Character, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putDoubleVolatile(this->base, this->fieldOffset, (double)$nc(($cast($Character, value)))->charValue());
		return;
	}
	if ($instanceOf($Integer, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putDoubleVolatile(this->base, this->fieldOffset, (double)$nc(($cast($Integer, value)))->intValue());
		return;
	}
	if ($instanceOf($Long, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putDoubleVolatile(this->base, this->fieldOffset, (double)$nc(($cast($Long, value)))->longValue());
		return;
	}
	if ($instanceOf($Float, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putDoubleVolatile(this->base, this->fieldOffset, $nc(($cast($Float, value)))->floatValue());
		return;
	}
	if ($instanceOf($Double, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putDoubleVolatile(this->base, this->fieldOffset, $nc(($cast($Double, value)))->doubleValue());
		return;
	}
	throwSetIllegalArgumentException(value);
}

void UnsafeQualifiedStaticDoubleFieldAccessorImpl::setBoolean(Object$* obj, bool z) {
	throwSetIllegalArgumentException(z);
}

void UnsafeQualifiedStaticDoubleFieldAccessorImpl::setByte(Object$* obj, int8_t b) {
	setDouble(obj, (double)b);
}

void UnsafeQualifiedStaticDoubleFieldAccessorImpl::setChar(Object$* obj, char16_t c) {
	setDouble(obj, (double)c);
}

void UnsafeQualifiedStaticDoubleFieldAccessorImpl::setShort(Object$* obj, int16_t s) {
	setDouble(obj, (double)s);
}

void UnsafeQualifiedStaticDoubleFieldAccessorImpl::setInt(Object$* obj, int32_t i) {
	setDouble(obj, (double)i);
}

void UnsafeQualifiedStaticDoubleFieldAccessorImpl::setLong(Object$* obj, int64_t l) {
	setDouble(obj, (double)l);
}

void UnsafeQualifiedStaticDoubleFieldAccessorImpl::setFloat(Object$* obj, float f) {
	setDouble(obj, f);
}

void UnsafeQualifiedStaticDoubleFieldAccessorImpl::setDouble(Object$* obj, double d) {
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(d);
	}
	$init($UnsafeFieldAccessorImpl);
	$nc($UnsafeFieldAccessorImpl::unsafe)->putDoubleVolatile(this->base, this->fieldOffset, d);
}

UnsafeQualifiedStaticDoubleFieldAccessorImpl::UnsafeQualifiedStaticDoubleFieldAccessorImpl() {
}

$Class* UnsafeQualifiedStaticDoubleFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeQualifiedStaticDoubleFieldAccessorImpl, name, initialize, &_UnsafeQualifiedStaticDoubleFieldAccessorImpl_ClassInfo_, allocate$UnsafeQualifiedStaticDoubleFieldAccessorImpl);
	return class$;
}

$Class* UnsafeQualifiedStaticDoubleFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk