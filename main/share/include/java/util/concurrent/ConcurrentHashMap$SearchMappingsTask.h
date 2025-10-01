#ifndef _java_util_concurrent_ConcurrentHashMap$SearchMappingsTask_h_
#define _java_util_concurrent_ConcurrentHashMap$SearchMappingsTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$SearchMappingsTask
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
		namespace concurrent {
			namespace atomic {
				class AtomicReference;
			}
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

class $import ConcurrentHashMap$SearchMappingsTask : public ::java::util::concurrent::ConcurrentHashMap$BulkTask {
	$class(ConcurrentHashMap$SearchMappingsTask, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BulkTask)
public:
	ConcurrentHashMap$SearchMappingsTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, ::java::util::function::BiFunction* searchFunction, ::java::util::concurrent::atomic::AtomicReference* result);
	virtual void compute() override;
	virtual $Object* getRawResult() override;
	::java::util::function::BiFunction* searchFunction = nullptr;
	::java::util::concurrent::atomic::AtomicReference* result = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$SearchMappingsTask_h_