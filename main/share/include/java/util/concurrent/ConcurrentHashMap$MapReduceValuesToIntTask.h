#ifndef _java_util_concurrent_ConcurrentHashMap$MapReduceValuesToIntTask_h_
#define _java_util_concurrent_ConcurrentHashMap$MapReduceValuesToIntTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$MapReduceValuesToIntTask
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
			class IntBinaryOperator;
			class ToIntFunction;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$MapReduceValuesToIntTask : public ::java::util::concurrent::ConcurrentHashMap$BulkTask {
	$class(ConcurrentHashMap$MapReduceValuesToIntTask, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BulkTask)
public:
	ConcurrentHashMap$MapReduceValuesToIntTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, ::java::util::concurrent::ConcurrentHashMap$MapReduceValuesToIntTask* nextRight, ::java::util::function::ToIntFunction* transformer, int32_t basis, ::java::util::function::IntBinaryOperator* reducer);
	virtual void compute() override;
	virtual $Object* getRawResult() override;
	::java::util::function::ToIntFunction* transformer = nullptr;
	::java::util::function::IntBinaryOperator* reducer = nullptr;
	int32_t basis = 0;
	int32_t result = 0;
	::java::util::concurrent::ConcurrentHashMap$MapReduceValuesToIntTask* rights = nullptr;
	::java::util::concurrent::ConcurrentHashMap$MapReduceValuesToIntTask* nextRight = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$MapReduceValuesToIntTask_h_