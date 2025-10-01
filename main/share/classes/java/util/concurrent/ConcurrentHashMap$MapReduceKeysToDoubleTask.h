#ifndef _java_util_concurrent_ConcurrentHashMap$MapReduceKeysToDoubleTask_h_
#define _java_util_concurrent_ConcurrentHashMap$MapReduceKeysToDoubleTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$MapReduceKeysToDoubleTask
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
			class ToDoubleFunction;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentHashMap$MapReduceKeysToDoubleTask : public ::java::util::concurrent::ConcurrentHashMap$BulkTask {
	$class(ConcurrentHashMap$MapReduceKeysToDoubleTask, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BulkTask)
public:
	ConcurrentHashMap$MapReduceKeysToDoubleTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, ::java::util::concurrent::ConcurrentHashMap$MapReduceKeysToDoubleTask* nextRight, ::java::util::function::ToDoubleFunction* transformer, double basis, ::java::util::function::DoubleBinaryOperator* reducer);
	virtual void compute() override;
	virtual $Object* getRawResult() override;
	::java::util::function::ToDoubleFunction* transformer = nullptr;
	::java::util::function::DoubleBinaryOperator* reducer = nullptr;
	double basis = 0.0;
	double result = 0.0;
	::java::util::concurrent::ConcurrentHashMap$MapReduceKeysToDoubleTask* rights = nullptr;
	::java::util::concurrent::ConcurrentHashMap$MapReduceKeysToDoubleTask* nextRight = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$MapReduceKeysToDoubleTask_h_