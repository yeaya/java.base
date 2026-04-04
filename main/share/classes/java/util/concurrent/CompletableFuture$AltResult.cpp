#include <java/util/concurrent/CompletableFuture$AltResult.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$AltResult::init$($Throwable* x) {
	$set(this, ex, x);
}

CompletableFuture$AltResult::CompletableFuture$AltResult() {
}

$Class* CompletableFuture$AltResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ex", "Ljava/lang/Throwable;", nullptr, $FINAL, $field(CompletableFuture$AltResult, ex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(CompletableFuture$AltResult, init$, void, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$AltResult", "java.util.concurrent.CompletableFuture", "AltResult", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$AltResult",
		"java.lang.Object",
		nullptr,
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
	$loadClass(CompletableFuture$AltResult, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompletableFuture$AltResult);
	});
	return class$;
}

$Class* CompletableFuture$AltResult::class$ = nullptr;

		} // concurrent
	} // util
} // java