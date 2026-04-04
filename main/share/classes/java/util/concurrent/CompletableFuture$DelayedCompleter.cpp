#include <java/util/concurrent/CompletableFuture$DelayedCompleter.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$DelayedCompleter::init$($CompletableFuture* f, Object$* u) {
	$set(this, f, f);
	$set(this, u, u);
}

void CompletableFuture$DelayedCompleter::run() {
	if (this->f != nullptr) {
		this->f->complete(this->u);
	}
}

CompletableFuture$DelayedCompleter::CompletableFuture$DelayedCompleter() {
}

$Class* CompletableFuture$DelayedCompleter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<TU;>;", $FINAL, $field(CompletableFuture$DelayedCompleter, f)},
		{"u", "Ljava/lang/Object;", "TU;", $FINAL, $field(CompletableFuture$DelayedCompleter, u)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CompletableFuture;Ljava/lang/Object;)V", "(Ljava/util/concurrent/CompletableFuture<TU;>;TU;)V", 0, $method(CompletableFuture$DelayedCompleter, init$, void, $CompletableFuture*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CompletableFuture$DelayedCompleter, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$DelayedCompleter", "java.util.concurrent.CompletableFuture", "DelayedCompleter", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$DelayedCompleter",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		"<U:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/Runnable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$DelayedCompleter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompletableFuture$DelayedCompleter);
	});
	return class$;
}

$Class* CompletableFuture$DelayedCompleter::class$ = nullptr;

		} // concurrent
	} // util
} // java