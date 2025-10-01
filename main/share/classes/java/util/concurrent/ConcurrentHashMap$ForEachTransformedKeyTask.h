#ifndef _java_util_concurrent_ConcurrentHashMap$ForEachTransformedKeyTask_h_
#define _java_util_concurrent_ConcurrentHashMap$ForEachTransformedKeyTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$ForEachTransformedKeyTask
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
			class Function;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentHashMap$ForEachTransformedKeyTask : public ::java::util::concurrent::ConcurrentHashMap$BulkTask {
	$class(ConcurrentHashMap$ForEachTransformedKeyTask, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BulkTask)
public:
	ConcurrentHashMap$ForEachTransformedKeyTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, ::java::util::function::Function* transformer, ::java::util::function::Consumer* action);
	virtual void compute() override;
	::java::util::function::Function* transformer = nullptr;
	::java::util::function::Consumer* action = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$ForEachTransformedKeyTask_h_