#include <java/util/concurrent/CompletableFuture$Timeout.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/TimeoutException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $TimeoutException = ::java::util::concurrent::TimeoutException;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$Timeout::init$($CompletableFuture* f) {
	$set(this, f, f);
}

void CompletableFuture$Timeout::run() {
	if (this->f != nullptr && !this->f->isDone()) {
		this->f->completeExceptionally($$new($TimeoutException));
	}
}

CompletableFuture$Timeout::CompletableFuture$Timeout() {
}

$Class* CompletableFuture$Timeout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<*>;", $FINAL, $field(CompletableFuture$Timeout, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CompletableFuture;)V", "(Ljava/util/concurrent/CompletableFuture<*>;)V", 0, $method(CompletableFuture$Timeout, init$, void, $CompletableFuture*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CompletableFuture$Timeout, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$Timeout", "java.util.concurrent.CompletableFuture", "Timeout", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$Timeout",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$Timeout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompletableFuture$Timeout);
	});
	return class$;
}

$Class* CompletableFuture$Timeout::class$ = nullptr;

		} // concurrent
	} // util
} // java