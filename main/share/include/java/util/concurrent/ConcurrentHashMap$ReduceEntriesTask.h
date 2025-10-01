#ifndef _java_util_concurrent_ConcurrentHashMap$ReduceEntriesTask_h_
#define _java_util_concurrent_ConcurrentHashMap$ReduceEntriesTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$ReduceEntriesTask
//$ extends java.util.concurrent.ConcurrentHashMap$BulkTask

#include <java/lang/Array.h>
#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>

namespace java {
	namespace util {
		class Map$Entry;
	}
}
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

class $import ConcurrentHashMap$ReduceEntriesTask : public ::java::util::concurrent::ConcurrentHashMap$BulkTask {
	$class(ConcurrentHashMap$ReduceEntriesTask, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BulkTask)
public:
	ConcurrentHashMap$ReduceEntriesTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, ::java::util::concurrent::ConcurrentHashMap$ReduceEntriesTask* nextRight, ::java::util::function::BiFunction* reducer);
	virtual void compute() override;
	virtual $Object* getRawResult() override;
	::java::util::function::BiFunction* reducer = nullptr;
	::java::util::Map$Entry* result = nullptr;
	::java::util::concurrent::ConcurrentHashMap$ReduceEntriesTask* rights = nullptr;
	::java::util::concurrent::ConcurrentHashMap$ReduceEntriesTask* nextRight = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$ReduceEntriesTask_h_