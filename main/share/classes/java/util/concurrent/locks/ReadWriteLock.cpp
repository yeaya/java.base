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

$Class* ReadWriteLock::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"readLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReadWriteLock, readLock, $Lock*)},
		{"writeLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReadWriteLock, writeLock, $Lock*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.locks.ReadWriteLock",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReadWriteLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadWriteLock);
	});
	return class$;
}

$Class* ReadWriteLock::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java