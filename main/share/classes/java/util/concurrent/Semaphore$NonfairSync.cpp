#include <java/util/concurrent/Semaphore$NonfairSync.h>

#include <java/util/concurrent/Semaphore$Sync.h>
#include <java/util/concurrent/Semaphore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Semaphore = ::java::util::concurrent::Semaphore;
using $Semaphore$Sync = ::java::util::concurrent::Semaphore$Sync;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Semaphore$NonfairSync_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Semaphore$NonfairSync, serialVersionUID)},
	{}
};

$MethodInfo _Semaphore$NonfairSync_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(Semaphore$NonfairSync::*)(int32_t)>(&Semaphore$NonfairSync::init$))},
	{"tryAcquireShared", "(I)I", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Semaphore$NonfairSync_InnerClassesInfo_[] = {
	{"java.util.concurrent.Semaphore$NonfairSync", "java.util.concurrent.Semaphore", "NonfairSync", $STATIC | $FINAL},
	{"java.util.concurrent.Semaphore$Sync", "java.util.concurrent.Semaphore", "Sync", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Semaphore$NonfairSync_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.Semaphore$NonfairSync",
	"java.util.concurrent.Semaphore$Sync",
	nullptr,
	_Semaphore$NonfairSync_FieldInfo_,
	_Semaphore$NonfairSync_MethodInfo_,
	nullptr,
	nullptr,
	_Semaphore$NonfairSync_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Semaphore"
};

$Object* allocate$Semaphore$NonfairSync($Class* clazz) {
	return $of($alloc(Semaphore$NonfairSync));
}

void Semaphore$NonfairSync::init$(int32_t permits) {
	$Semaphore$Sync::init$(permits);
}

int32_t Semaphore$NonfairSync::tryAcquireShared(int32_t acquires) {
	return nonfairTryAcquireShared(acquires);
}

Semaphore$NonfairSync::Semaphore$NonfairSync() {
}

$Class* Semaphore$NonfairSync::load$($String* name, bool initialize) {
	$loadClass(Semaphore$NonfairSync, name, initialize, &_Semaphore$NonfairSync_ClassInfo_, allocate$Semaphore$NonfairSync);
	return class$;
}

$Class* Semaphore$NonfairSync::class$ = nullptr;

		} // concurrent
	} // util
} // java