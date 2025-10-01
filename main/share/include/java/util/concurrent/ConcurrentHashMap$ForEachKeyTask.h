#ifndef _java_util_concurrent_ConcurrentHashMap$ForEachKeyTask_h_
#define _java_util_concurrent_ConcurrentHashMap$ForEachKeyTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$ForEachKeyTask
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
			class Consumer;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$ForEachKeyTask : public ::java::util::concurrent::ConcurrentHashMap$BulkTask {
	$class(ConcurrentHashMap$ForEachKeyTask, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BulkTask)
public:
	ConcurrentHashMap$ForEachKeyTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, ::java::util::function::Consumer* action);
	virtual void compute() override;
	::java::util::function::Consumer* action = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$ForEachKeyTask_h_