#include <java/util/concurrent/locks/ReadWriteLock.h>

#include <java/util/concurrent/locks/Lock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Lock = ::java::util::concurrent::locks::Lock;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$MethodInfo _ReadWriteLock_MethodInfo_[] = {
	{"readLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReadWriteLock, readLock, $Lock*)},
	{"writeLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReadWriteLock, writeLock, $Lock*)},
	{}
};

$ClassInfo _ReadWriteLock_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.locks.ReadWriteLock",
	nullptr,
	nullptr,
	nullptr,
	_ReadWriteLock_MethodInfo_
};

$Object* allocate$ReadWriteLock($Class* clazz) {
	return $of($alloc(ReadWriteLock));
}

$Class* ReadWriteLock::load$($String* name, bool initialize) {
	$loadClass(ReadWriteLock, name, initialize, &_ReadWriteLock_ClassInfo_, allocate$ReadWriteLock);
	return class$;
}

$Class* ReadWriteLock::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java