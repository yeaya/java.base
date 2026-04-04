#include <java/lang/ReflectiveOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void ReflectiveOperationException::init$() {
	$Exception::init$();
}

void ReflectiveOperationException::init$($String* message) {
	$Exception::init$(message);
}

void ReflectiveOperationException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

void ReflectiveOperationException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

ReflectiveOperationException::ReflectiveOperationException() {
}

ReflectiveOperationException::ReflectiveOperationException(const ReflectiveOperationException& e) : $Exception(e) {
}

void ReflectiveOperationException::throw$() {
	throw *this;
}

$Class* ReflectiveOperationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ReflectiveOperationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReflectiveOperationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ReflectiveOperationException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ReflectiveOperationException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ReflectiveOperationException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ReflectiveOperationException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReflectiveOperationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReflectiveOperationException);
	});
	return class$;
}

$Class* ReflectiveOperationException::class$ = nullptr;

	} // lang
} // java