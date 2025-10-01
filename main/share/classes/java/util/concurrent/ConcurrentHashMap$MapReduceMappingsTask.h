#ifndef _java_util_concurrent_ConcurrentHashMap$MapReduceMappingsTask_h_
#define _java_util_concurrent_ConcurrentHashMap$MapReduceMappingsTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$MapReduceMappingsTask
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

class $export ConcurrentHashMap$MapReduceMappingsTask : public ::java::util::concurrent::ConcurrentHashMap$BulkTask {
	$class(ConcurrentHashMap$MapReduceMappingsTask, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BulkTask)
public:
	ConcurrentHashMap$MapReduceMappingsTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, ::java::util::concurrent::ConcurrentHashMap$MapReduceMappingsTask* nextRight, ::java::util::function::BiFunction* transformer, ::java::util::function::BiFunction* reducer);
	virtual void compute() override;
	virtual $Object* getRawResult() override;
	::java::util::function::BiFunction* transformer = nullptr;
	::java::util::function::BiFunction* reducer = nullptr;
	$Object* result = nullptr;
	::java::util::concurrent::ConcurrentHashMap$MapReduceMappingsTask* rights = nullptr;
	::java::util::concurrent::ConcurrentHashMap$MapReduceMappingsTask* nextRight = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$MapReduceMappingsTask_h_