#include <java/io/ObjectOutputStream$Caches.h>
#include <java/io/ObjectOutputStream.h>
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
	namespace io {

$ConcurrentMap* ObjectOutputStream$Caches::subclassAudits = nullptr;
$ReferenceQueue* ObjectOutputStream$Caches::subclassAuditsQueue = nullptr;

void ObjectOutputStream$Caches::init$() {
}

void ObjectOutputStream$Caches::clinit$($Class* clazz) {
	$assignStatic(ObjectOutputStream$Caches::subclassAudits, $new($ConcurrentHashMap));
	$assignStatic(ObjectOutputStream$Caches::subclassAuditsQueue, $new($ReferenceQueue));
}

ObjectOutputStream$Caches::ObjectOutputStream$Caches() {
}

$Class* ObjectOutputStream$Caches::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"subclassAudits", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/io/ObjectStreamClass$WeakClassKey;Ljava/lang/Boolean;>;", $STATIC | $FINAL, $staticField(ObjectOutputStream$Caches, subclassAudits)},
		{"subclassAuditsQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;", $STATIC | $FINAL, $staticField(ObjectOutputStream$Caches, subclassAuditsQueue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ObjectOutputStream$Caches, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectOutputStream$Caches", "java.io.ObjectOutputStream", "Caches", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectOutputStream$Caches",
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
		"java.io.ObjectOutputStream"
	};
	$loadClass(ObjectOutputStream$Caches, name, initialize, &classInfo$$, ObjectOutputStream$Caches::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectOutputStream$Caches);
	});
	return class$;
}

$Class* ObjectOutputStream$Caches::class$ = nullptr;

	} // io
} // java