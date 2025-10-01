#ifndef _java_util_concurrent_ConcurrentHashMap$MapReduceMappingsToDoubleTask_h_
#define _java_util_concurrent_ConcurrentHashMap$MapReduceMappingsToDoubleTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToDoubleTask
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
			class DoubleBinaryOperator;
			class ToDoubleBiFunction;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$MapReduceMappingsToDoubleTask : public ::java::util::concurrent::ConcurrentHashMap$BulkTask {
	$class(ConcurrentHashMap$MapReduceMappingsToDoubleTask, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BulkTask)
public:
	ConcurrentHashMap$MapReduceMappingsToDoubleTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, ::java::util::concurrent::ConcurrentHashMap$MapReduceMappingsToDoubleTask* nextRight, ::java::util::function::ToDoubleBiFunction* transformer, double basis, ::java::util::function::DoubleBinaryOperator* reducer);
	virtual void compute() override;
	virtual $Object* getRawResult() override;
	::java::util::function::ToDoubleBiFunction* transformer = nullptr;
	::java::util::function::DoubleBinaryOperator* reducer = nullptr;
	double basis = 0.0;
	double result = 0.0;
	::java::util::concurrent::ConcurrentHashMap$MapReduceMappingsToDoubleTask* rights = nullptr;
	::java::util::concurrent::ConcurrentHashMap$MapReduceMappingsToDoubleTask* nextRight = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$MapReduceMappingsToDoubleTask_h_