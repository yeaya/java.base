#include <sun/reflect/annotation/TypeNotPresentExceptionProxy.h>
#include <java/lang/TypeNotPresentException.h>
#include <sun/reflect/annotation/ExceptionProxy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $TypeNotPresentException = ::java::lang::TypeNotPresentException;
using $ExceptionProxy = ::sun::reflect::annotation::ExceptionProxy;

namespace sun {
	namespace reflect {
		namespace annotation {

void TypeNotPresentExceptionProxy::init$($String* typeName, $Throwable* cause) {
	$ExceptionProxy::init$();
	$set(this, typeName$, typeName);
	$set(this, cause, cause);
}

$RuntimeException* TypeNotPresentExceptionProxy::generateException() {
	return $new($TypeNotPresentException, this->typeName$, this->cause);
}

$String* TypeNotPresentExceptionProxy::typeName() {
	return this->typeName$;
}

$Throwable* TypeNotPresentExceptionProxy::getCause() {
	return this->cause;
}

$String* TypeNotPresentExceptionProxy::toString() {
	return $str({this->typeName$, ".class /* Warning: type not present! */"_s});
}

TypeNotPresentExceptionProxy::TypeNotPresentExceptionProxy() {
}

$Class* TypeNotPresentExceptionProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TypeNotPresentExceptionProxy, serialVersionUID)},
		{"typeName", "Ljava/lang/String;", nullptr, $FINAL, $field(TypeNotPresentExceptionProxy, typeName$)},
		{"cause", "Ljava/lang/Throwable;", nullptr, $FINAL, $field(TypeNotPresentExceptionProxy, cause)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(TypeNotPresentExceptionProxy, init$, void, $String*, $Throwable*)},
		{"generateException", "()Ljava/lang/RuntimeException;", nullptr, $PROTECTED, $virtualMethod(TypeNotPresentExceptionProxy, generateException, $RuntimeException*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(TypeNotPresentExceptionProxy, getCause, $Throwable*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TypeNotPresentExceptionProxy, toString, $String*)},
		{"typeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TypeNotPresentExceptionProxy, typeName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.annotation.TypeNotPresentExceptionProxy",
		"sun.reflect.annotation.ExceptionProxy",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TypeNotPresentExceptionProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeNotPresentExceptionProxy);
	});
	return class$;
}

$Class* TypeNotPresentExceptionProxy::class$ = nullptr;

		} // annotation
	} // reflect
} // sun