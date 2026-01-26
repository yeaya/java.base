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

$FieldInfo _ObjectOutputStream$Caches_FieldInfo_[] = {
	{"subclassAudits", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/io/ObjectStreamClass$WeakClassKey;Ljava/lang/Boolean;>;", $STATIC | $FINAL, $staticField(ObjectOutputStream$Caches, subclassAudits)},
	{"subclassAuditsQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;", $STATIC | $FINAL, $staticField(ObjectOutputStream$Caches, subclassAuditsQueue)},
	{}
};

$MethodInfo _ObjectOutputStream$Caches_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ObjectOutputStream$Caches, init$, void)},
	{}
};

$InnerClassInfo _ObjectOutputStream$Caches_InnerClassesInfo_[] = {
	{"java.io.ObjectOutputStream$Caches", "java.io.ObjectOutputStream", "Caches", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectOutputStream$Caches_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectOutputStream$Caches",
	"java.lang.Object",
	nullptr,
	_ObjectOutputStream$Caches_FieldInfo_,
	_ObjectOutputStream$Caches_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectOutputStream$Caches_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectOutputStream"
};

$Object* allocate$ObjectOutputStream$Caches($Class* clazz) {
	return $of($alloc(ObjectOutputStream$Caches));
}

$ConcurrentMap* ObjectOutputStream$Caches::subclassAudits = nullptr;
$ReferenceQueue* ObjectOutputStream$Caches::subclassAuditsQueue = nullptr;

void ObjectOutputStream$Caches::init$() {
}

void clinit$ObjectOutputStream$Caches($Class* class$) {
	$assignStatic(ObjectOutputStream$Caches::subclassAudits, $new($ConcurrentHashMap));
	$assignStatic(ObjectOutputStream$Caches::subclassAuditsQueue, $new($ReferenceQueue));
}

ObjectOutputStream$Caches::ObjectOutputStream$Caches() {
}

$Class* ObjectOutputStream$Caches::load$($String* name, bool initialize) {
	$loadClass(ObjectOutputStream$Caches, name, initialize, &_ObjectOutputStream$Caches_ClassInfo_, clinit$ObjectOutputStream$Caches, allocate$ObjectOutputStream$Caches);
	return class$;
}

$Class* ObjectOutputStream$Caches::class$ = nullptr;

	} // io
} // java