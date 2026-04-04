#include <java/util/concurrent/CompletableFuture$AnyOf.h>
#include <java/util/concurrent/CompletableFuture$Completion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $CompletableFutureArray = $Array<::java::util::concurrent::CompletableFuture>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$Completion = ::java::util::concurrent::CompletableFuture$Completion;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$AnyOf::init$($CompletableFuture* dep, $CompletableFuture* src, $CompletableFutureArray* srcs) {
	$CompletableFuture$Completion::init$();
	$set(this, dep, dep);
	$set(this, src, src);
	$set(this, srcs, srcs);
}

$CompletableFuture* CompletableFuture$AnyOf::tryFire(int32_t mode) {
	$useLocalObjectStack();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($CompletableFutureArray, as, nullptr);
	$var($Object, r, nullptr);
	bool var$0 = ($assign(a, this->src)) == nullptr;
	if (var$0 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(d, this->dep)) == nullptr || ($assign(as, this->srcs)) == nullptr) {
		return nullptr;
	}
	$set(this, src, nullptr);
	$set(this, dep, nullptr);
	$set(this, srcs, nullptr);
	if ($nc(d)->completeRelay(r)) {
		{
			$var($CompletableFutureArray, arr$, as);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($CompletableFuture, b, arr$->get(i$));
				if (b != a) {
					$nc(b)->cleanStack();
				}
			}
		}
		if (mode < 0) {
			return d;
		} else {
			d->postComplete();
		}
	}
	return nullptr;
}

bool CompletableFuture$AnyOf::isLive() {
	$var($CompletableFuture, d, nullptr);
	bool var$0 = ($assign(d, this->dep)) != nullptr;
	return var$0 && $nc(d)->result == nullptr;
}

CompletableFuture$AnyOf::CompletableFuture$AnyOf() {
}

$Class* CompletableFuture$AnyOf::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dep", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<Ljava/lang/Object;>;", 0, $field(CompletableFuture$AnyOf, dep)},
		{"src", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<*>;", 0, $field(CompletableFuture$AnyOf, src)},
		{"srcs", "[Ljava/util/concurrent/CompletableFuture;", "[Ljava/util/concurrent/CompletableFuture<*>;", 0, $field(CompletableFuture$AnyOf, srcs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;[Ljava/util/concurrent/CompletableFuture;)V", "(Ljava/util/concurrent/CompletableFuture<Ljava/lang/Object;>;Ljava/util/concurrent/CompletableFuture<*>;[Ljava/util/concurrent/CompletableFuture<*>;)V", 0, $method(CompletableFuture$AnyOf, init$, void, $CompletableFuture*, $CompletableFuture*, $CompletableFutureArray*)},
		{"isLive", "()Z", nullptr, $FINAL, $virtualMethod(CompletableFuture$AnyOf, isLive, bool)},
		{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<Ljava/lang/Object;>;", $FINAL, $virtualMethod(CompletableFuture$AnyOf, tryFire, $CompletableFuture*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$AnyOf", "java.util.concurrent.CompletableFuture", "AnyOf", $STATIC},
		{"java.util.concurrent.CompletableFuture$Completion", "java.util.concurrent.CompletableFuture", "Completion", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.CompletableFuture$AnyOf",
		"java.util.concurrent.CompletableFuture$Completion",
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
	$loadClass(CompletableFuture$AnyOf, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CompletableFuture$AnyOf));
	});
	return class$;
}

$Class* CompletableFuture$AnyOf::class$ = nullptr;

		} // concurrent
	} // util
} // java