#include <java/io/ObjectStreamClass$Caches.h>

#include <java/io/ObjectStreamClass.h>
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

$FieldInfo _ObjectStreamClass$Caches_FieldInfo_[] = {
	{"localDescs", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/io/ObjectStreamClass$WeakClassKey;Ljava/lang/ref/Reference<*>;>;", $STATIC | $FINAL, $staticField(ObjectStreamClass$Caches, localDescs)},
	{"reflectors", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/io/ObjectStreamClass$FieldReflectorKey;Ljava/lang/ref/Reference<*>;>;", $STATIC | $FINAL, $staticField(ObjectStreamClass$Caches, reflectors)},
	{"localDescsQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ObjectStreamClass$Caches, localDescsQueue)},
	{"reflectorsQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ObjectStreamClass$Caches, reflectorsQueue)},
	{}
};

$MethodInfo _ObjectStreamClass$Caches_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ObjectStreamClass$Caches, init$, void)},
	{}
};

$InnerClassInfo _ObjectStreamClass$Caches_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$Caches", "java.io.ObjectStreamClass", "Caches", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectStreamClass$Caches_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectStreamClass$Caches",
	"java.lang.Object",
	nullptr,
	_ObjectStreamClass$Caches_FieldInfo_,
	_ObjectStreamClass$Caches_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectStreamClass$Caches_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$Caches($Class* clazz) {
	return $of($alloc(ObjectStreamClass$Caches));
}

$ConcurrentMap* ObjectStreamClass$Caches::localDescs = nullptr;
$ConcurrentMap* ObjectStreamClass$Caches::reflectors = nullptr;
$ReferenceQueue* ObjectStreamClass$Caches::localDescsQueue = nullptr;
$ReferenceQueue* ObjectStreamClass$Caches::reflectorsQueue = nullptr;

void ObjectStreamClass$Caches::init$() {
}

void clinit$ObjectStreamClass$Caches($Class* class$) {
	$assignStatic(ObjectStreamClass$Caches::localDescs, $new($ConcurrentHashMap));
	$assignStatic(ObjectStreamClass$Caches::reflectors, $new($ConcurrentHashMap));
	$assignStatic(ObjectStreamClass$Caches::localDescsQueue, $new($ReferenceQueue));
	$assignStatic(ObjectStreamClass$Caches::reflectorsQueue, $new($ReferenceQueue));
}

ObjectStreamClass$Caches::ObjectStreamClass$Caches() {
}

$Class* ObjectStreamClass$Caches::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$Caches, name, initialize, &_ObjectStreamClass$Caches_ClassInfo_, clinit$ObjectStreamClass$Caches, allocate$ObjectStreamClass$Caches);
	return class$;
}

$Class* ObjectStreamClass$Caches::class$ = nullptr;

	} // io
} // java