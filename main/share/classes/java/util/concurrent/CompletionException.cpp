#include <java/util/concurrent/CompletionException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace util {
		namespace concurrent {

void CompletionException::init$() {
	$RuntimeException::init$();
}

void CompletionException::init$($String* message) {
	$RuntimeException::init$(message);
}

void CompletionException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void CompletionException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

CompletionException::CompletionException() {
}

CompletionException::CompletionException(const CompletionException& e) : $RuntimeException(e) {
}

void CompletionException::throw$() {
	throw *this;
}

$Class* CompletionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompletionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(CompletionException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(CompletionException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CompletionException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CompletionException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.CompletionException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CompletionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompletionException);
	});
	return class$;
}

$Class* CompletionException::class$ = nullptr;

		} // concurrent
	} // util
} // java