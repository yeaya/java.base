#include <jdk/internal/reflect/UnsafeIntegerFieldAccessorImpl.h>

#include <java/lang/reflect/Field.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
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

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _UnsafeIntegerFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;)V", nullptr, 0, $method(UnsafeIntegerFieldAccessorImpl, init$, void, $Field*)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, get, $Object*, Object$*), "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, getBoolean, bool, Object$*), "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, getByte, int8_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, getChar, char16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, getDouble, double, Object$*), "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, getFloat, float, Object$*), "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, getInt, int32_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, getLong, int64_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, getShort, int16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, set, void, Object$*, Object$*), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, setBoolean, void, Object$*, bool), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, setByte, void, Object$*, int8_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, setChar, void, Object$*, char16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, setDouble, void, Object$*, double), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, setFloat, void, Object$*, float), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, setInt, void, Object$*, int32_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, setLong, void, Object$*, int64_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC, $virtualMethod(UnsafeIntegerFieldAccessorImpl, setShort, void, Object$*, int16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UnsafeIntegerFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.UnsafeIntegerFieldAccessorImpl",
	"jdk.internal.reflect.UnsafeFieldAccessorImpl",
	nullptr,
	nullptr,
	_UnsafeIntegerFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeIntegerFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeIntegerFieldAccessorImpl));
}

void UnsafeIntegerFieldAccessorImpl::init$($Field* field) {
	$UnsafeFieldAccessorImpl::init$(field);
}

$Object* UnsafeIntegerFieldAccessorImpl::get(Object$* obj) {
	return $of($Integer::valueOf(getInt(obj)));
}

bool UnsafeIntegerFieldAccessorImpl::getBoolean(Object$* obj) {
	$throw($(newGetBooleanIllegalArgumentException()));
	$shouldNotReachHere();
}

int8_t UnsafeIntegerFieldAccessorImpl::getByte(Object$* obj) {
	$throw($(newGetByteIllegalArgumentException()));
	$shouldNotReachHere();
}

char16_t UnsafeIntegerFieldAccessorImpl::getChar(Object$* obj) {
	$throw($(newGetCharIllegalArgumentException()));
	$shouldNotReachHere();
}

int16_t UnsafeIntegerFieldAccessorImpl::getShort(Object$* obj) {
	$throw($(newGetShortIllegalArgumentException()));
	$shouldNotReachHere();
}

int32_t UnsafeIntegerFieldAccessorImpl::getInt(Object$* obj) {
	ensureObj(obj);
	$init($UnsafeFieldAccessorImpl);
	return $nc($UnsafeFieldAccessorImpl::unsafe)->getInt(obj, this->fieldOffset);
}

int64_t UnsafeIntegerFieldAccessorImpl::getLong(Object$* obj) {
	return getInt(obj);
}

float UnsafeIntegerFieldAccessorImpl::getFloat(Object$* obj) {
	return (float)getInt(obj);
}

double UnsafeIntegerFieldAccessorImpl::getDouble(Object$* obj) {
	return (double)getInt(obj);
}

void UnsafeIntegerFieldAccessorImpl::set(Object$* obj, Object$* value) {
	ensureObj(obj);
	if (this->isFinal) {
		throwFinalFieldIllegalAccessException(value);
	}
	if (value == nullptr) {
		throwSetIllegalArgumentException(value);
	}
	if ($instanceOf($Byte, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putInt(obj, this->fieldOffset, $nc(($cast($Byte, value)))->byteValue());
		return;
	}
	if ($instanceOf($Short, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putInt(obj, this->fieldOffset, $nc(($cast($Short, value)))->shortValue());
		return;
	}
	if ($instanceOf($Character, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putInt(obj, this->fieldOffset, $nc(($cast($Character, value)))->charValue());
		return;
	}
	if ($instanceOf($Integer, value)) {
		$init($UnsafeFieldAccessorImpl);
		$nc($UnsafeFieldAccessorImpl::unsafe)->putInt(obj, this->fieldOffset, $nc(($cast($Integer, value)))->intValue());
		return;
	}
	throwSetIllegalArgumentException(value);
}

void UnsafeIntegerFieldAccessorImpl::setBoolean(Object$* obj, bool z) {
	throwSetIllegalArgumentException(z);
}

void UnsafeIntegerFieldAccessorImpl::setByte(Object$* obj, int8_t b) {
	setInt(obj, b);
}

void UnsafeIntegerFieldAccessorImpl::setChar(Object$* obj, char16_t c) {
	setInt(obj, c);
}

void UnsafeIntegerFieldAccessorImpl::setShort(Object$* obj, int16_t s) {
	setInt(obj, s);
}

void UnsafeIntegerFieldAccessorImpl::setInt(Object$* obj, int32_t i) {
	ensureObj(obj);
	if (this->isFinal) {
		throwFinalFieldIllegalAccessException(i);
	}
	$init($UnsafeFieldAccessorImpl);
	$nc($UnsafeFieldAccessorImpl::unsafe)->putInt(obj, this->fieldOffset, i);
}

void UnsafeIntegerFieldAccessorImpl::setLong(Object$* obj, int64_t l) {
	throwSetIllegalArgumentException(l);
}

void UnsafeIntegerFieldAccessorImpl::setFloat(Object$* obj, float f) {
	throwSetIllegalArgumentException(f);
}

void UnsafeIntegerFieldAccessorImpl::setDouble(Object$* obj, double d) {
	throwSetIllegalArgumentException(d);
}

UnsafeIntegerFieldAccessorImpl::UnsafeIntegerFieldAccessorImpl() {
}

$Class* UnsafeIntegerFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeIntegerFieldAccessorImpl, name, initialize, &_UnsafeIntegerFieldAccessorImpl_ClassInfo_, allocate$UnsafeIntegerFieldAccessorImpl);
	return class$;
}

$Class* UnsafeIntegerFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk