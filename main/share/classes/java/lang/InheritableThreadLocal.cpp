#include <java/lang/InheritableThreadLocal.h>
#include <java/lang/ThreadLocal$ThreadLocalMap.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $ThreadLocal$ThreadLocalMap = ::java::lang::ThreadLocal$ThreadLocalMap;

namespace java {
	namespace lang {

void InheritableThreadLocal::init$() {
	$ThreadLocal::init$();
}

$Object* InheritableThreadLocal::childValue(Object$* parentValue) {
	return $of(parentValue);
}

$ThreadLocal$ThreadLocalMap* InheritableThreadLocal::getMap($Thread* t) {
	return $nc(t)->inheritableThreadLocals;
}

void InheritableThreadLocal::createMap($Thread* t, Object$* firstValue) {
	$set($nc(t), inheritableThreadLocals, $new($ThreadLocal$ThreadLocalMap, this, firstValue));
}

InheritableThreadLocal::InheritableThreadLocal() {
}

$Class* InheritableThreadLocal::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InheritableThreadLocal, init$, void)},
		{"childValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", $PROTECTED, $virtualMethod(InheritableThreadLocal, childValue, $Object*, Object$*)},
		{"createMap", "(Ljava/lang/Thread;Ljava/lang/Object;)V", "(Ljava/lang/Thread;TT;)V", 0, $virtualMethod(InheritableThreadLocal, createMap, void, $Thread*, Object$*)},
		{"getMap", "(Ljava/lang/Thread;)Ljava/lang/ThreadLocal$ThreadLocalMap;", nullptr, 0, $virtualMethod(InheritableThreadLocal, getMap, $ThreadLocal$ThreadLocalMap*, $Thread*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.InheritableThreadLocal",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ThreadLocal<TT;>;"
	};
	$loadClass(InheritableThreadLocal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InheritableThreadLocal);
	});
	return class$;
}

$Class* InheritableThreadLocal::class$ = nullptr;

	} // lang
} // java