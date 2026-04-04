#include <java/util/concurrent/RejectedExecutionException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace util {
		namespace concurrent {

void RejectedExecutionException::init$() {
	$RuntimeException::init$();
}

void RejectedExecutionException::init$($String* message) {
	$RuntimeException::init$(message);
}

void RejectedExecutionException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void RejectedExecutionException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

RejectedExecutionException::RejectedExecutionException() {
}

RejectedExecutionException::RejectedExecutionException(const RejectedExecutionException& e) : $RuntimeException(e) {
}

void RejectedExecutionException::throw$() {
	throw *this;
}

$Class* RejectedExecutionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RejectedExecutionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RejectedExecutionException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RejectedExecutionException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(RejectedExecutionException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(RejectedExecutionException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.RejectedExecutionException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RejectedExecutionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RejectedExecutionException);
	});
	return class$;
}

$Class* RejectedExecutionException::class$ = nullptr;

		} // concurrent
	} // util
} // java