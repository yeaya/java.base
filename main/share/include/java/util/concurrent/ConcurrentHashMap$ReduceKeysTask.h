#ifndef _java_util_concurrent_ConcurrentHashMap$ReduceKeysTask_h_
#define _java_util_concurrent_ConcurrentHashMap$ReduceKeysTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$ReduceKeysTask
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
		namespace function {
			class BiFunction;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$ReduceKeysTask : public ::java::util::concurrent::ConcurrentHashMap$BulkTask {
	$class(ConcurrentHashMap$ReduceKeysTask, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BulkTask)
public:
	ConcurrentHashMap$ReduceKeysTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, ::java::util::concurrent::ConcurrentHashMap$ReduceKeysTask* nextRight, ::java::util::function::BiFunction* reducer);
	virtual void compute() override;
	virtual $Object* getRawResult() override;
	::java::util::function::BiFunction* reducer = nullptr;
	$Object* result = nullptr;
	::java::util::concurrent::ConcurrentHashMap$ReduceKeysTask* rights = nullptr;
	::java::util::concurrent::ConcurrentHashMap$ReduceKeysTask* nextRight = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$ReduceKeysTask_h_