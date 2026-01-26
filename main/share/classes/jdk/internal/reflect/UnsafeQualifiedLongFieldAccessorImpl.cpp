#include <jdk/internal/reflect/UnsafeQualifiedLongFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeQualifiedFieldAccessorImpl.h>
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
using $UnsafeQualifiedFieldAccessorImpl = ::jdk::internal::reflect::UnsafeQualifiedFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _UnsafeQualifiedLongFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;Z)V", nullptr, 0, $method(UnsafeQualifiedLongFieldAccessorImpl, init$, void, $Field*, bool)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, get, $Object*, Object$*), "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, getBoolean, bool, Object$*), "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, getByte, int8_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, getChar, char16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, getDouble, double, Object$*), "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, getFloat, float, Object$*), "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, getInt, int32_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, getLong, int64_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, getShort, int16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, set, void, Object$*, Object$*), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, setBoolean, void, Object$*, bool), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, setByte, void, Object$*, int8_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, setChar, void, Object$*, char16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, setDouble, void, Object$*, double), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, setFloat, void, Object$*, float), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, setInt, void, Object$*, int32_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, setLong, void, Object$*, int64_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, $virtualMethod(UnsafeQualifiedLongFieldAccessorImpl, setShort, void, Object$*, int16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UnsafeQualifiedLongFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.UnsafeQualifiedLongFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeQualifiedFieldAccessorImpl",
	nullptr,
	nullptr,
	_UnsafeQualifiedLongFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeQualifiedLongFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeQualifiedLongFieldAccessorImpl));
}

void UnsafeQualifiedLongFieldAccessorImpl::init$($Field* field, bool isReadOnly) {
	$UnsafeQualifiedFieldAccessorImpl::init$(field, isReadOnly);
}

$Object* UnsafeQualifiedLongFieldAccessorImpl::get(Object$* obj) {
	return $of($Long::valueOf(getLong(obj)));
}

bool UnsafeQualifiedLongFieldAccessorImpl::getBoolean(Object$* obj) {
	$throw($(newGetBooleanIllegalArgumentException()));
	$shouldNotReachHere();
}

int8_t UnsafeQualifiedLongFieldAccessorImpl::getByte(Object$* obj) {
	$throw($(newGetByteIllegalArgumentException()));
	$shouldNotReachHere();
}

char16_t UnsafeQualifiedLongFieldAccessorImpl::getChar(Object$* obj) {
	$throw($(newGetCharIllegalArgumentException()));
	$shouldNotReachHere();
}

int16_t UnsafeQualifiedLongFieldAccessorImpl::getShort(Object$* obj) {
	$throw($(newGetShortIllegalArgumentException()));
	$shouldNotReachHere();
}

int32_t UnsafeQualifiedLongFieldAccessorImpl::getInt(Object$* obj) {
	$throw($(newGetIntIllegalArgumentException()));
	$shouldNotReachHere();
}

int64_t UnsafeQualifiedLongFieldAccessorImpl::getLong(Object$* obj) {
	ensureObj(obj);
	$init($UnsafeFieldAccessorImpl);
	return $nc($UnsafeFieldAccessorImpl::unsafe)->getLongVolatile(obj, this->fieldOffset);
}

float UnsafeQualifiedLongFieldAccessorImpl::getFloat(Object$* obj) {
	return (float)getLong(obj);
}

double UnsafeQualifiedLongFieldAccessorImpl::getDouble(Object$* obj) {
	return (double)getLong(obj);
}

void UnsafeQualifiedLongFieldAccessorImpl::set(Object$* obj, Object$* value) {
	ensureObj(obj);
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(value);
	}
	if (value == nullptr) {
		throwSetIllegalArgumentException(value);
	}
	if ($instanceOf($Byte, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putLongVolatile(obj, this->fieldOffset, $nc(($cast($Byte, value)))->byteValue());
		return;
	}
	if ($instanceOf($Short, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putLongVolatile(obj, this->fieldOffset, $nc(($cast($Short, value)))->shortValue());
		return;
	}
	if ($instanceOf($Character, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putLongVolatile(obj, this->fieldOffset, $nc(($cast($Character, value)))->charValue());
		return;
	}
	if ($instanceOf($Integer, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putLongVolatile(obj, this->fieldOffset, $nc(($cast($Integer, value)))->intValue());
		return;
	}
	if ($instanceOf($Long, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putLongVolatile(obj, this->fieldOffset, $nc(($cast($Long, value)))->longValue());
		return;
	}
	throwSetIllegalArgumentException(value);
}

void UnsafeQualifiedLongFieldAccessorImpl::setBoolean(Object$* obj, bool z) {
	throwSetIllegalArgumentException(z);
}

void UnsafeQualifiedLongFieldAccessorImpl::setByte(Object$* obj, int8_t b) {
	setLong(obj, b);
}

void UnsafeQualifiedLongFieldAccessorImpl::setChar(Object$* obj, char16_t c) {
	setLong(obj, c);
}

void UnsafeQualifiedLongFieldAccessorImpl::setShort(Object$* obj, int16_t s) {
	setLong(obj, s);
}

void UnsafeQualifiedLongFieldAccessorImpl::setInt(Object$* obj, int32_t i) {
	setLong(obj, i);
}

void UnsafeQualifiedLongFieldAccessorImpl::setLong(Object$* obj, int64_t l) {
	ensureObj(obj);
	if (this->isReadOnly) {
		throwFinalFieldIllegalAccessException(l);
	}
	$init($UnsafeFieldAccessorImpl);
	$nc($UnsafeFieldAccessorImpl::unsafe)->putLongVolatile(obj, this->fieldOffset, l);
}

void UnsafeQualifiedLongFieldAccessorImpl::setFloat(Object$* obj, float f) {
	throwSetIllegalArgumentException(f);
}

void UnsafeQualifiedLongFieldAccessorImpl::setDouble(Object$* obj, double d) {
	throwSetIllegalArgumentException(d);
}

UnsafeQualifiedLongFieldAccessorImpl::UnsafeQualifiedLongFieldAccessorImpl() {
}

$Class* UnsafeQualifiedLongFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeQualifiedLongFieldAccessorImpl, name, initialize, &_UnsafeQualifiedLongFieldAccessorImpl_ClassInfo_, allocate$UnsafeQualifiedLongFieldAccessorImpl);
	return class$;
}

$Class* UnsafeQualifiedLongFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk