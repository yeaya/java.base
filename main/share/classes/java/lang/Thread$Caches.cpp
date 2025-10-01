#include <java/lang/Thread$Caches.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _Thread$Caches_FieldInfo_[] = {
	{"subclassAudits", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/Thread$WeakClassKey;Ljava/lang/Boolean;>;", $STATIC | $FINAL, $staticField(Thread$Caches, subclassAudits)},
	{"subclassAuditsQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;", $STATIC | $FINAL, $staticField(Thread$Caches, subclassAuditsQueue)},
	{}
};

$MethodInfo _Thread$Caches_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Thread$Caches::*)()>(&Thread$Caches::init$))},
	{}
};

$InnerClassInfo _Thread$Caches_InnerClassesInfo_[] = {
	{"java.lang.Thread$Caches", "java.lang.Thread", "Caches", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Thread$Caches_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Thread$Caches",
	"java.lang.Object",
	nullptr,
	_Thread$Caches_FieldInfo_,
	_Thread$Caches_MethodInfo_,
	nullptr,
	nullptr,
	_Thread$Caches_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Thread"
};

$Object* allocate$Thread$Caches($Class* clazz) {
	return $of($alloc(Thread$Caches));
}


$ConcurrentMap* Thread$Caches::subclassAudits = nullptr;

$ReferenceQueue* Thread$Caches::subclassAuditsQueue = nullptr;

void Thread$Caches::init$() {
}

void clinit$Thread$Caches($Class* class$) {
	$assignStatic(Thread$Caches::subclassAudits, $new($ConcurrentHashMap));
	$assignStatic(Thread$Caches::subclassAuditsQueue, $new($ReferenceQueue));
}

Thread$Caches::Thread$Caches() {
}

$Class* Thread$Caches::load$($String* name, bool initialize) {
	$loadClass(Thread$Caches, name, initialize, &_Thread$Caches_ClassInfo_, clinit$Thread$Caches, allocate$Thread$Caches);
	return class$;
}

$Class* Thread$Caches::class$ = nullptr;

	} // lang
} // java