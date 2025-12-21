#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>

#include <java/lang/IllegalAccessException.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Modifier.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/FieldAccessorImpl.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Field = ::java::lang::reflect::Field;
using $Modifier = ::java::lang::reflect::Modifier;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $FieldAccessorImpl = ::jdk::internal::reflect::FieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _UnsafeFieldAccessorImpl_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $STATIC | $FINAL, $staticField(UnsafeFieldAccessorImpl, unsafe)},
	{"field", "Ljava/lang/reflect/Field;", nullptr, $PROTECTED | $FINAL, $field(UnsafeFieldAccessorImpl, field)},
	{"fieldOffset", "J", nullptr, $PROTECTED | $FINAL, $field(UnsafeFieldAccessorImpl, fieldOffset)},
	{"isFinal", "Z", nullptr, $PROTECTED | $FINAL, $field(UnsafeFieldAccessorImpl, isFinal)},
	{}
};

$MethodInfo _UnsafeFieldAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Field;)V", nullptr, 0, $method(static_cast<void(UnsafeFieldAccessorImpl::*)($Field*)>(&UnsafeFieldAccessorImpl::init$))},
	{"ensureObj", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getQualifiedFieldName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(UnsafeFieldAccessorImpl::*)()>(&UnsafeFieldAccessorImpl::getQualifiedFieldName))},
	{"getSetMessage", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"newGetBooleanIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED},
	{"newGetByteIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED},
	{"newGetCharIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED},
	{"newGetDoubleIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED},
	{"newGetFloatIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED},
	{"newGetIllegalArgumentException", "(Ljava/lang/String;)Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED},
	{"newGetIntIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED},
	{"newGetLongIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED},
	{"newGetShortIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED},
	{"throwFinalFieldIllegalAccessException", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.lang.IllegalAccessException"},
	{"throwFinalFieldIllegalAccessException", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, nullptr, "java.lang.IllegalAccessException"},
	{"throwFinalFieldIllegalAccessException", "(Z)V", nullptr, $PROTECTED, nullptr, "java.lang.IllegalAccessException"},
	{"throwFinalFieldIllegalAccessException", "(C)V", nullptr, $PROTECTED, nullptr, "java.lang.IllegalAccessException"},
	{"throwFinalFieldIllegalAccessException", "(B)V", nullptr, $PROTECTED, nullptr, "java.lang.IllegalAccessException"},
	{"throwFinalFieldIllegalAccessException", "(S)V", nullptr, $PROTECTED, nullptr, "java.lang.IllegalAccessException"},
	{"throwFinalFieldIllegalAccessException", "(I)V", nullptr, $PROTECTED, nullptr, "java.lang.IllegalAccessException"},
	{"throwFinalFieldIllegalAccessException", "(J)V", nullptr, $PROTECTED, nullptr, "java.lang.IllegalAccessException"},
	{"throwFinalFieldIllegalAccessException", "(F)V", nullptr, $PROTECTED, nullptr, "java.lang.IllegalAccessException"},
	{"throwFinalFieldIllegalAccessException", "(D)V", nullptr, $PROTECTED, nullptr, "java.lang.IllegalAccessException"},
	{"throwSetIllegalArgumentException", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"throwSetIllegalArgumentException", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"throwSetIllegalArgumentException", "(Z)V", nullptr, $PROTECTED},
	{"throwSetIllegalArgumentException", "(B)V", nullptr, $PROTECTED},
	{"throwSetIllegalArgumentException", "(C)V", nullptr, $PROTECTED},
	{"throwSetIllegalArgumentException", "(S)V", nullptr, $PROTECTED},
	{"throwSetIllegalArgumentException", "(I)V", nullptr, $PROTECTED},
	{"throwSetIllegalArgumentException", "(J)V", nullptr, $PROTECTED},
	{"throwSetIllegalArgumentException", "(F)V", nullptr, $PROTECTED},
	{"throwSetIllegalArgumentException", "(D)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _UnsafeFieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.reflect.UnsafeFieldAccessorImpl",
	"jdk.internal.reflect.FieldAccessorImpl",
	nullptr,
	_UnsafeFieldAccessorImpl_FieldInfo_,
	_UnsafeFieldAccessorImpl_MethodInfo_
};

$Object* allocate$UnsafeFieldAccessorImpl($Class* clazz) {
	return $of($alloc(UnsafeFieldAccessorImpl));
}

$Unsafe* UnsafeFieldAccessorImpl::unsafe = nullptr;

void UnsafeFieldAccessorImpl::init$($Field* field) {
	$FieldAccessorImpl::init$();
	$set(this, field, field);
	if ($Modifier::isStatic($nc(field)->getModifiers())) {
		this->fieldOffset = $nc(UnsafeFieldAccessorImpl::unsafe)->staticFieldOffset(field);
	} else {
		this->fieldOffset = $nc(UnsafeFieldAccessorImpl::unsafe)->objectFieldOffset(field);
	}
	this->isFinal = $Modifier::isFinal($nc(field)->getModifiers());
}

void UnsafeFieldAccessorImpl::ensureObj(Object$* o) {
	if (!$nc($nc(this->field)->getDeclaringClass())->isAssignableFrom($nc($of(o))->getClass())) {
		throwSetIllegalArgumentException(o);
	}
}

$String* UnsafeFieldAccessorImpl::getQualifiedFieldName() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($nc($nc(this->field)->getDeclaringClass())->getName()), "."_s}));
	return $concat(var$0, $($nc(this->field)->getName()));
}

$IllegalArgumentException* UnsafeFieldAccessorImpl::newGetIllegalArgumentException($String* type) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({"Attempt to get "_s, $($nc($nc(this->field)->getType())->getName()), " field \""_s}));
	$var($String, var$1, $$concat(var$2, $(getQualifiedFieldName())));
	$var($String, var$0, $$concat(var$1, "\" with illegal data type conversion to "_s));
	return $new($IllegalArgumentException, $$concat(var$0, type));
}

void UnsafeFieldAccessorImpl::throwFinalFieldIllegalAccessException($String* attemptedType, $String* attemptedValue) {
	$throwNew($IllegalAccessException, $(getSetMessage(attemptedType, attemptedValue)));
}

void UnsafeFieldAccessorImpl::throwFinalFieldIllegalAccessException(Object$* o) {
	throwFinalFieldIllegalAccessException(o != nullptr ? $($nc($of(o))->getClass()->getName()) : ""_s, ""_s);
}

void UnsafeFieldAccessorImpl::throwFinalFieldIllegalAccessException(bool z) {
	throwFinalFieldIllegalAccessException("boolean"_s, $($Boolean::toString(z)));
}

void UnsafeFieldAccessorImpl::throwFinalFieldIllegalAccessException(char16_t b) {
	throwFinalFieldIllegalAccessException("char"_s, $($Character::toString(b)));
}

void UnsafeFieldAccessorImpl::throwFinalFieldIllegalAccessException(int8_t b) {
	throwFinalFieldIllegalAccessException("byte"_s, $($Byte::toString(b)));
}

void UnsafeFieldAccessorImpl::throwFinalFieldIllegalAccessException(int16_t b) {
	throwFinalFieldIllegalAccessException("short"_s, $($Short::toString(b)));
}

void UnsafeFieldAccessorImpl::throwFinalFieldIllegalAccessException(int32_t i) {
	throwFinalFieldIllegalAccessException("int"_s, $($Integer::toString(i)));
}

void UnsafeFieldAccessorImpl::throwFinalFieldIllegalAccessException(int64_t i) {
	throwFinalFieldIllegalAccessException("long"_s, $($Long::toString(i)));
}

void UnsafeFieldAccessorImpl::throwFinalFieldIllegalAccessException(float f) {
	throwFinalFieldIllegalAccessException("float"_s, $($Float::toString(f)));
}

void UnsafeFieldAccessorImpl::throwFinalFieldIllegalAccessException(double f) {
	throwFinalFieldIllegalAccessException("double"_s, $($Double::toString(f)));
}

$IllegalArgumentException* UnsafeFieldAccessorImpl::newGetBooleanIllegalArgumentException() {
	return newGetIllegalArgumentException("boolean"_s);
}

$IllegalArgumentException* UnsafeFieldAccessorImpl::newGetByteIllegalArgumentException() {
	return newGetIllegalArgumentException("byte"_s);
}

$IllegalArgumentException* UnsafeFieldAccessorImpl::newGetCharIllegalArgumentException() {
	return newGetIllegalArgumentException("char"_s);
}

$IllegalArgumentException* UnsafeFieldAccessorImpl::newGetShortIllegalArgumentException() {
	return newGetIllegalArgumentException("short"_s);
}

$IllegalArgumentException* UnsafeFieldAccessorImpl::newGetIntIllegalArgumentException() {
	return newGetIllegalArgumentException("int"_s);
}

$IllegalArgumentException* UnsafeFieldAccessorImpl::newGetLongIllegalArgumentException() {
	return newGetIllegalArgumentException("long"_s);
}

$IllegalArgumentException* UnsafeFieldAccessorImpl::newGetFloatIllegalArgumentException() {
	return newGetIllegalArgumentException("float"_s);
}

$IllegalArgumentException* UnsafeFieldAccessorImpl::newGetDoubleIllegalArgumentException() {
	return newGetIllegalArgumentException("double"_s);
}

$String* UnsafeFieldAccessorImpl::getSetMessage($String* attemptedType, $String* attemptedValue) {
	$useLocalCurrentObjectStackCache();
	$var($String, err, "Can not set"_s);
	if ($Modifier::isStatic($nc(this->field)->getModifiers())) {
		$plusAssign(err, " static"_s);
	}
	if (this->isFinal) {
		$plusAssign(err, " final"_s);
	}
	$var($String, var$1, $$str({" "_s, $($nc($nc(this->field)->getType())->getName()), " field "_s}));
	$var($String, var$0, $$concat(var$1, $(getQualifiedFieldName())));
	$plusAssign(err, $$concat(var$0, " to "_s));
	if (!$nc(attemptedValue)->isEmpty()) {
		$plusAssign(err, $$str({"("_s, attemptedType, ")"_s, attemptedValue}));
	} else if (!$nc(attemptedType)->isEmpty()) {
		$plusAssign(err, attemptedType);
	} else {
		$plusAssign(err, "null value"_s);
	}
	return err;
}

void UnsafeFieldAccessorImpl::throwSetIllegalArgumentException($String* attemptedType, $String* attemptedValue) {
	$throwNew($IllegalArgumentException, $(getSetMessage(attemptedType, attemptedValue)));
}

void UnsafeFieldAccessorImpl::throwSetIllegalArgumentException(Object$* o) {
	throwSetIllegalArgumentException(o != nullptr ? $($nc($of(o))->getClass()->getName()) : ""_s, ""_s);
}

void UnsafeFieldAccessorImpl::throwSetIllegalArgumentException(bool b) {
	throwSetIllegalArgumentException("boolean"_s, $($Boolean::toString(b)));
}

void UnsafeFieldAccessorImpl::throwSetIllegalArgumentException(int8_t b) {
	throwSetIllegalArgumentException("byte"_s, $($Byte::toString(b)));
}

void UnsafeFieldAccessorImpl::throwSetIllegalArgumentException(char16_t c) {
	throwSetIllegalArgumentException("char"_s, $($Character::toString(c)));
}

void UnsafeFieldAccessorImpl::throwSetIllegalArgumentException(int16_t s) {
	throwSetIllegalArgumentException("short"_s, $($Short::toString(s)));
}

void UnsafeFieldAccessorImpl::throwSetIllegalArgumentException(int32_t i) {
	throwSetIllegalArgumentException("int"_s, $($Integer::toString(i)));
}

void UnsafeFieldAccessorImpl::throwSetIllegalArgumentException(int64_t l) {
	throwSetIllegalArgumentException("long"_s, $($Long::toString(l)));
}

void UnsafeFieldAccessorImpl::throwSetIllegalArgumentException(float f) {
	throwSetIllegalArgumentException("float"_s, $($Float::toString(f)));
}

void UnsafeFieldAccessorImpl::throwSetIllegalArgumentException(double d) {
	throwSetIllegalArgumentException("double"_s, $($Double::toString(d)));
}

void clinit$UnsafeFieldAccessorImpl($Class* class$) {
	$assignStatic(UnsafeFieldAccessorImpl::unsafe, $Unsafe::getUnsafe());
}

UnsafeFieldAccessorImpl::UnsafeFieldAccessorImpl() {
}

$Class* UnsafeFieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(UnsafeFieldAccessorImpl, name, initialize, &_UnsafeFieldAccessorImpl_ClassInfo_, clinit$UnsafeFieldAccessorImpl, allocate$UnsafeFieldAccessorImpl);
	return class$;
}

$Class* UnsafeFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk