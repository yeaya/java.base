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

$Unsafe* UnsafeFieldAccessorImpl::unsafe = nullptr;

void UnsafeFieldAccessorImpl::init$($Field* field) {
	$FieldAccessorImpl::init$();
	$set(this, field, field);
	if ($Modifier::isStatic($nc(field)->getModifiers())) {
		this->fieldOffset = $nc(UnsafeFieldAccessorImpl::unsafe)->staticFieldOffset(field);
	} else {
		this->fieldOffset = $nc(UnsafeFieldAccessorImpl::unsafe)->objectFieldOffset(field);
	}
	this->isFinal = $Modifier::isFinal(field->getModifiers());
}

void UnsafeFieldAccessorImpl::ensureObj(Object$* o) {
	if (!$nc($nc(this->field)->getDeclaringClass())->isAssignableFrom($nc($of(o))->getClass())) {
		throwSetIllegalArgumentException(o);
	}
}

$String* UnsafeFieldAccessorImpl::getQualifiedFieldName() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc($nc(this->field)->getDeclaringClass())->getName()));
	var$0->append("."_s);
	var$0->append($(this->field->getName()));
	return $str(var$0);
}

$IllegalArgumentException* UnsafeFieldAccessorImpl::newGetIllegalArgumentException($String* type) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("Attempt to get "_s);
	var$0->append($($nc($nc(this->field)->getType())->getName()));
	var$0->append(" field \""_s);
	var$0->append($(getQualifiedFieldName()));
	var$0->append("\" with illegal data type conversion to "_s);
	var$0->append(type);
	return $new($IllegalArgumentException, $$str(var$0));
}

void UnsafeFieldAccessorImpl::throwFinalFieldIllegalAccessException($String* attemptedType, $String* attemptedValue) {
	$throwNew($IllegalAccessException, $(getSetMessage(attemptedType, attemptedValue)));
}

void UnsafeFieldAccessorImpl::throwFinalFieldIllegalAccessException(Object$* o) {
	throwFinalFieldIllegalAccessException(o != nullptr ? $($of(o)->getClass()->getName()) : ""_s, ""_s);
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
	$useLocalObjectStack();
	$var($String, err, "Can not set"_s);
	if ($Modifier::isStatic($nc(this->field)->getModifiers())) {
		$plusAssign(err, " static"_s);
	}
	if (this->isFinal) {
		$plusAssign(err, " final"_s);
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append(" "_s);
	var$0->append($($nc(this->field->getType())->getName()));
	var$0->append(" field "_s);
	var$0->append($(getQualifiedFieldName()));
	var$0->append(" to "_s);
	$plusAssign(err, $$str(var$0));
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
	throwSetIllegalArgumentException(o != nullptr ? $($of(o)->getClass()->getName()) : ""_s, ""_s);
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

void UnsafeFieldAccessorImpl::clinit$($Class* clazz) {
	$assignStatic(UnsafeFieldAccessorImpl::unsafe, $Unsafe::getUnsafe());
}

UnsafeFieldAccessorImpl::UnsafeFieldAccessorImpl() {
}

$Class* UnsafeFieldAccessorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $STATIC | $FINAL, $staticField(UnsafeFieldAccessorImpl, unsafe)},
		{"field", "Ljava/lang/reflect/Field;", nullptr, $PROTECTED | $FINAL, $field(UnsafeFieldAccessorImpl, field)},
		{"fieldOffset", "J", nullptr, $PROTECTED | $FINAL, $field(UnsafeFieldAccessorImpl, fieldOffset)},
		{"isFinal", "Z", nullptr, $PROTECTED | $FINAL, $field(UnsafeFieldAccessorImpl, isFinal)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Field;)V", nullptr, 0, $method(UnsafeFieldAccessorImpl, init$, void, $Field*)},
		{"ensureObj", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, ensureObj, void, Object$*)},
		{"getQualifiedFieldName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(UnsafeFieldAccessorImpl, getQualifiedFieldName, $String*)},
		{"getSetMessage", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, getSetMessage, $String*, $String*, $String*)},
		{"newGetBooleanIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, newGetBooleanIllegalArgumentException, $IllegalArgumentException*)},
		{"newGetByteIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, newGetByteIllegalArgumentException, $IllegalArgumentException*)},
		{"newGetCharIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, newGetCharIllegalArgumentException, $IllegalArgumentException*)},
		{"newGetDoubleIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, newGetDoubleIllegalArgumentException, $IllegalArgumentException*)},
		{"newGetFloatIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, newGetFloatIllegalArgumentException, $IllegalArgumentException*)},
		{"newGetIllegalArgumentException", "(Ljava/lang/String;)Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, newGetIllegalArgumentException, $IllegalArgumentException*, $String*)},
		{"newGetIntIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, newGetIntIllegalArgumentException, $IllegalArgumentException*)},
		{"newGetLongIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, newGetLongIllegalArgumentException, $IllegalArgumentException*)},
		{"newGetShortIllegalArgumentException", "()Ljava/lang/IllegalArgumentException;", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, newGetShortIllegalArgumentException, $IllegalArgumentException*)},
		{"throwFinalFieldIllegalAccessException", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwFinalFieldIllegalAccessException, void, $String*, $String*), "java.lang.IllegalAccessException"},
		{"throwFinalFieldIllegalAccessException", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwFinalFieldIllegalAccessException, void, Object$*), "java.lang.IllegalAccessException"},
		{"throwFinalFieldIllegalAccessException", "(Z)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwFinalFieldIllegalAccessException, void, bool), "java.lang.IllegalAccessException"},
		{"throwFinalFieldIllegalAccessException", "(C)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwFinalFieldIllegalAccessException, void, char16_t), "java.lang.IllegalAccessException"},
		{"throwFinalFieldIllegalAccessException", "(B)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwFinalFieldIllegalAccessException, void, int8_t), "java.lang.IllegalAccessException"},
		{"throwFinalFieldIllegalAccessException", "(S)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwFinalFieldIllegalAccessException, void, int16_t), "java.lang.IllegalAccessException"},
		{"throwFinalFieldIllegalAccessException", "(I)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwFinalFieldIllegalAccessException, void, int32_t), "java.lang.IllegalAccessException"},
		{"throwFinalFieldIllegalAccessException", "(J)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwFinalFieldIllegalAccessException, void, int64_t), "java.lang.IllegalAccessException"},
		{"throwFinalFieldIllegalAccessException", "(F)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwFinalFieldIllegalAccessException, void, float), "java.lang.IllegalAccessException"},
		{"throwFinalFieldIllegalAccessException", "(D)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwFinalFieldIllegalAccessException, void, double), "java.lang.IllegalAccessException"},
		{"throwSetIllegalArgumentException", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwSetIllegalArgumentException, void, $String*, $String*)},
		{"throwSetIllegalArgumentException", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwSetIllegalArgumentException, void, Object$*)},
		{"throwSetIllegalArgumentException", "(Z)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwSetIllegalArgumentException, void, bool)},
		{"throwSetIllegalArgumentException", "(B)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwSetIllegalArgumentException, void, int8_t)},
		{"throwSetIllegalArgumentException", "(C)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwSetIllegalArgumentException, void, char16_t)},
		{"throwSetIllegalArgumentException", "(S)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwSetIllegalArgumentException, void, int16_t)},
		{"throwSetIllegalArgumentException", "(I)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwSetIllegalArgumentException, void, int32_t)},
		{"throwSetIllegalArgumentException", "(J)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwSetIllegalArgumentException, void, int64_t)},
		{"throwSetIllegalArgumentException", "(F)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwSetIllegalArgumentException, void, float)},
		{"throwSetIllegalArgumentException", "(D)V", nullptr, $PROTECTED, $virtualMethod(UnsafeFieldAccessorImpl, throwSetIllegalArgumentException, void, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.reflect.UnsafeFieldAccessorImpl",
		"jdk.internal.reflect.FieldAccessorImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsafeFieldAccessorImpl, name, initialize, &classInfo$$, UnsafeFieldAccessorImpl::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(UnsafeFieldAccessorImpl));
	});
	return class$;
}

$Class* UnsafeFieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk