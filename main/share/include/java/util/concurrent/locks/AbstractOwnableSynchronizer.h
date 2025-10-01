#ifndef _java_util_concurrent_locks_AbstractOwnableSynchronizer_h_
#define _java_util_concurrent_locks_AbstractOwnableSynchronizer_h_
//$ class java.util.concurrent.locks.AbstractOwnableSynchronizer
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace lang {
		class Thread;
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $import AbstractOwnableSynchronizer : public ::java::io::Serializable {
	$class(AbstractOwnableSynchronizer, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	AbstractOwnableSynchronizer();
	void init$();
	$Thread* getExclusiveOwnerThread();
	void setExclusiveOwnerThread($Thread* thread);
	static const int64_t serialVersionUID = (int64_t)0x33DFAFB9AD6D6FA9;
	$Thread* exclusiveOwnerThread = nullptr;
};

			} // locks
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_locks_AbstractOwnableSynchronizer_h_