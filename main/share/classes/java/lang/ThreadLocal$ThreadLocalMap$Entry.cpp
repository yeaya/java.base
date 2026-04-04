#include <java/lang/ThreadLocal$ThreadLocalMap$Entry.h>
#include <java/lang/ThreadLocal$ThreadLocalMap.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace lang {

void ThreadLocal$ThreadLocalMap$Entry::init$($ThreadLocal* k, Object$* v) {
	$WeakReference::init$(k);
	$set(this, value, v);
}

ThreadLocal$ThreadLocalMap$Entry::ThreadLocal$ThreadLocalMap$Entry() {
}

$Class* ThreadLocal$ThreadLocalMap$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "Ljava/lang/Object;", nullptr, 0, $field(ThreadLocal$ThreadLocalMap$Entry, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ThreadLocal;Ljava/lang/Object;)V", "(Ljava/lang/ThreadLocal<*>;Ljava/lang/Object;)V", 0, $method(ThreadLocal$ThreadLocalMap$Entry, init$, void, $ThreadLocal*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ThreadLocal$ThreadLocalMap", "java.lang.ThreadLocal", "ThreadLocalMap", $STATIC},
		{"java.lang.ThreadLocal$ThreadLocalMap$Entry", "java.lang.ThreadLocal$ThreadLocalMap", "Entry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ThreadLocal$ThreadLocalMap$Entry",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Ljava/lang/ThreadLocal<*>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ThreadLocal"
	};
	$loadClass(ThreadLocal$ThreadLocalMap$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadLocal$ThreadLocalMap$Entry);
	});
	return class$;
}

$Class* ThreadLocal$ThreadLocalMap$Entry::class$ = nullptr;

	} // lang
} // java