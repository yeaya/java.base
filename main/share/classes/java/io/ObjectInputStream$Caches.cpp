#include <java/io/ObjectInputStream$Caches.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Math.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <sun/security/action/GetBooleanAction.h>
#include <sun/security/action/GetIntegerAction.h>
#include <jcpp.h>

#undef PROXY_INTERFACE_LIMIT
#undef SET_FILTER_AFTER_READ

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;
using $GetIntegerAction = ::sun::security::action::GetIntegerAction;

namespace java {
	namespace io {

$ConcurrentMap* ObjectInputStream$Caches::subclassAudits = nullptr;
$ReferenceQueue* ObjectInputStream$Caches::subclassAuditsQueue = nullptr;
bool ObjectInputStream$Caches::SET_FILTER_AFTER_READ = false;
int32_t ObjectInputStream$Caches::PROXY_INTERFACE_LIMIT = 0;

void ObjectInputStream$Caches::init$() {
}

void ObjectInputStream$Caches::clinit$($Class* clazz) {
	$assignStatic(ObjectInputStream$Caches::subclassAudits, $new($ConcurrentHashMap));
	$assignStatic(ObjectInputStream$Caches::subclassAuditsQueue, $new($ReferenceQueue));
	ObjectInputStream$Caches::SET_FILTER_AFTER_READ = $GetBooleanAction::privilegedGetProperty("jdk.serialSetFilterAfterRead"_s);
	ObjectInputStream$Caches::PROXY_INTERFACE_LIMIT = $Math::max(0, $Math::min(0x0000ffff, $$nc($GetIntegerAction::privilegedGetProperty("jdk.serialProxyInterfaceLimit"_s, 0x0000ffff))->intValue()));
}

ObjectInputStream$Caches::ObjectInputStream$Caches() {
}

$Class* ObjectInputStream$Caches::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"subclassAudits", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/io/ObjectStreamClass$WeakClassKey;Ljava/lang/Boolean;>;", $STATIC | $FINAL, $staticField(ObjectInputStream$Caches, subclassAudits)},
		{"subclassAuditsQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;", $STATIC | $FINAL, $staticField(ObjectInputStream$Caches, subclassAuditsQueue)},
		{"SET_FILTER_AFTER_READ", "Z", nullptr, $STATIC | $FINAL, $staticField(ObjectInputStream$Caches, SET_FILTER_AFTER_READ)},
		{"PROXY_INTERFACE_LIMIT", "I", nullptr, $STATIC | $FINAL, $staticField(ObjectInputStream$Caches, PROXY_INTERFACE_LIMIT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ObjectInputStream$Caches, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectInputStream$Caches", "java.io.ObjectInputStream", "Caches", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectInputStream$Caches",
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
		"java.io.ObjectInputStream"
	};
	$loadClass(ObjectInputStream$Caches, name, initialize, &classInfo$$, ObjectInputStream$Caches::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputStream$Caches);
	});
	return class$;
}

$Class* ObjectInputStream$Caches::class$ = nullptr;

	} // io
} // java