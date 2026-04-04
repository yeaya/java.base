#include <jdk/internal/misc/TerminatingThreadLocal$1.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/Collections.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Collections = ::java::util::Collections;
using $IdentityHashMap = ::java::util::IdentityHashMap;

namespace jdk {
	namespace internal {
		namespace misc {

void TerminatingThreadLocal$1::init$() {
	$ThreadLocal::init$();
}

$Object* TerminatingThreadLocal$1::initialValue() {
	return $Collections::newSetFromMap($$new($IdentityHashMap, 4));
}

TerminatingThreadLocal$1::TerminatingThreadLocal$1() {
}

$Class* TerminatingThreadLocal$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TerminatingThreadLocal$1, init$, void)},
		{"initialValue", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljdk/internal/misc/TerminatingThreadLocal<*>;>;", $PROTECTED, $virtualMethod(TerminatingThreadLocal$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.misc.TerminatingThreadLocal",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.TerminatingThreadLocal$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.misc.TerminatingThreadLocal$1",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Ljava/util/Collection<Ljdk/internal/misc/TerminatingThreadLocal<*>;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.misc.TerminatingThreadLocal"
	};
	$loadClass(TerminatingThreadLocal$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TerminatingThreadLocal$1);
	});
	return class$;
}

$Class* TerminatingThreadLocal$1::class$ = nullptr;

		} // misc
	} // internal
} // jdk