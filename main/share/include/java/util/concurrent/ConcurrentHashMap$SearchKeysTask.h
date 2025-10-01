#ifndef _java_util_concurrent_ConcurrentHashMap$SearchKeysTask_h_
#define _java_util_concurrent_ConcurrentHashMap$SearchKeysTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$SearchKeysTask
//$ extends java.util.concurrent.ConcurrentHashMap$BulkTask

#include <java/lang/Array.h>
#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap$Node;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicReference;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$SearchKeysTask : public ::java::util::concurrent::ConcurrentHashMap$BulkTask {
	$class(ConcurrentHashMap$SearchKeysTask, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BulkTask)
public:
	ConcurrentHashMap$SearchKeysTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, ::java::util::function::Function* searchFunction, ::java::util::concurrent::atomic::AtomicReference* result);
	virtual void compute() override;
	virtual $Object* getRawResult() override;
	::java::util::function::Function* searchFunction = nullptr;
	::java::util::concurrent::atomic::AtomicReference* result = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$SearchKeysTask_h_