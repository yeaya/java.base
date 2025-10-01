#ifndef _java_util_concurrent_ConcurrentHashMap$MapReduceEntriesTask_h_
#define _java_util_concurrent_ConcurrentHashMap$MapReduceEntriesTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$MapReduceEntriesTask
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
			class Function;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$MapReduceEntriesTask : public ::java::util::concurrent::ConcurrentHashMap$BulkTask {
	$class(ConcurrentHashMap$MapReduceEntriesTask, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BulkTask)
public:
	ConcurrentHashMap$MapReduceEntriesTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, ::java::util::concurrent::ConcurrentHashMap$MapReduceEntriesTask* nextRight, ::java::util::function::Function* transformer, ::java::util::function::BiFunction* reducer);
	virtual void compute() override;
	virtual $Object* getRawResult() override;
	::java::util::function::Function* transformer = nullptr;
	::java::util::function::BiFunction* reducer = nullptr;
	$Object* result = nullptr;
	::java::util::concurrent::ConcurrentHashMap$MapReduceEntriesTask* rights = nullptr;
	::java::util::concurrent::ConcurrentHashMap$MapReduceEntriesTask* nextRight = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$MapReduceEntriesTask_h_