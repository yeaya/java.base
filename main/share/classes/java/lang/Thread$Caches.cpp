#include <java/lang/Thread$Caches.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;

namespace java {
	namespace lang {

$ConcurrentMap* Thread$Caches::subclassAudits = nullptr;
$ReferenceQueue* Thread$Caches::subclassAuditsQueue = nullptr;

void Thread$Caches::init$() {
}

void Thread$Caches::clinit$($Class* clazz) {
	$assignStatic(Thread$Caches::subclassAudits, $new($ConcurrentHashMap));
	$assignStatic(Thread$Caches::subclassAuditsQueue, $new($ReferenceQueue));
}

Thread$Caches::Thread$Caches() {
}

$Class* Thread$Caches::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"subclassAudits", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/Thread$WeakClassKey;Ljava/lang/Boolean;>;", $STATIC | $FINAL, $staticField(Thread$Caches, subclassAudits)},
		{"subclassAuditsQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;", $STATIC | $FINAL, $staticField(Thread$Caches, subclassAuditsQueue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Thread$Caches, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Thread$Caches", "java.lang.Thread", "Caches", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Thread$Caches",
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
		"java.lang.Thread"
	};
	$loadClass(Thread$Caches, name, initialize, &classInfo$$, Thread$Caches::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Thread$Caches);
	});
	return class$;
}

$Class* Thread$Caches::class$ = nullptr;

	} // lang
} // java