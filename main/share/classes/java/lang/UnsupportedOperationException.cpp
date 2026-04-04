#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

void UnsupportedOperationException::init$() {
	$RuntimeException::init$();
}

void UnsupportedOperationException::init$($String* message) {
	$RuntimeException::init$(message);
}

void UnsupportedOperationException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void UnsupportedOperationException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

UnsupportedOperationException::UnsupportedOperationException() {
}

UnsupportedOperationException::UnsupportedOperationException(const UnsupportedOperationException& e) : $RuntimeException(e) {
}

void UnsupportedOperationException::throw$() {
	throw *this;
}

$Class* UnsupportedOperationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(UnsupportedOperationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnsupportedOperationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnsupportedOperationException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(UnsupportedOperationException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(UnsupportedOperationException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.UnsupportedOperationException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsupportedOperationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsupportedOperationException);
	});
	return class$;
}

$Class* UnsupportedOperationException::class$ = nullptr;

	} // lang
} // java