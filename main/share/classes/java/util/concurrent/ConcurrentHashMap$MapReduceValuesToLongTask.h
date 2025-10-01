#ifndef _java_util_concurrent_ConcurrentHashMap$MapReduceValuesToLongTask_h_
#define _java_util_concurrent_ConcurrentHashMap$MapReduceValuesToLongTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$MapReduceValuesToLongTask
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
			class LongBinaryOperator;
			class ToLongFunction;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentHashMap$MapReduceValuesToLongTask : public ::java::util::concurrent::ConcurrentHashMap$BulkTask {
	$class(ConcurrentHashMap$MapReduceValuesToLongTask, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BulkTask)
public:
	ConcurrentHashMap$MapReduceValuesToLongTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, ::java::util::concurrent::ConcurrentHashMap$MapReduceValuesToLongTask* nextRight, ::java::util::function::ToLongFunction* transformer, int64_t basis, ::java::util::function::LongBinaryOperator* reducer);
	virtual void compute() override;
	virtual $Object* getRawResult() override;
	::java::util::function::ToLongFunction* transformer = nullptr;
	::java::util::function::LongBinaryOperator* reducer = nullptr;
	int64_t basis = 0;
	int64_t result = 0;
	::java::util::concurrent::ConcurrentHashMap$MapReduceValuesToLongTask* rights = nullptr;
	::java::util::concurrent::ConcurrentHashMap$MapReduceValuesToLongTask* nextRight = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$MapReduceValuesToLongTask_h_