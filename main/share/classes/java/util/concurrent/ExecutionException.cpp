#include <java/util/concurrent/ExecutionException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void ExecutionException::init$() {
	$Exception::init$();
}

void ExecutionException::init$($String* message) {
	$Exception::init$(message);
}

void ExecutionException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

void ExecutionException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

ExecutionException::ExecutionException() {
}

ExecutionException::ExecutionException(const ExecutionException& e) : $Exception(e) {
}

void ExecutionException::throw$() {
	throw *this;
}

$Class* ExecutionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExecutionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ExecutionException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(ExecutionException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ExecutionException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ExecutionException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.ExecutionException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExecutionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExecutionException);
	});
	return class$;
}

$Class* ExecutionException::class$ = nullptr;

		} // concurrent
	} // util
} // java