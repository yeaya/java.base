#ifndef _java_util_concurrent_ConcurrentHashMap$BulkTask_h_
#define _java_util_concurrent_ConcurrentHashMap$BulkTask_h_
//$ class java.util.concurrent.ConcurrentHashMap$BulkTask
//$ extends java.util.concurrent.CountedCompleter

#include <java/lang/Array.h>
#include <java/util/concurrent/CountedCompleter.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap$Node;
			class ConcurrentHashMap$TableStack;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentHashMap$BulkTask : public ::java::util::concurrent::CountedCompleter {
	$class(ConcurrentHashMap$BulkTask, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	ConcurrentHashMap$BulkTask();
	void init$(::java::util::concurrent::ConcurrentHashMap$BulkTask* par, int32_t b, int32_t i, int32_t f, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* t);
	::java::util::concurrent::ConcurrentHashMap$Node* advance();
	void pushState($Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, int32_t i, int32_t n);
	void recoverState(int32_t n);
	$Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab = nullptr;
	::java::util::concurrent::ConcurrentHashMap$Node* next = nullptr;
	::java::util::concurrent::ConcurrentHashMap$TableStack* stack = nullptr;
	::java::util::concurrent::ConcurrentHashMap$TableStack* spare = nullptr;
	int32_t index = 0;
	int32_t baseIndex = 0;
	int32_t baseLimit = 0;
	int32_t baseSize = 0;
	int32_t batch = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$BulkTask_h_