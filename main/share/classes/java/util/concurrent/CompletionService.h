#ifndef _java_util_concurrent_CompletionService_h_
#define _java_util_concurrent_CompletionService_h_
//$ interface java.util.concurrent.CompletionService
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class Future;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletionService : public ::java::lang::Object {
	$interface(CompletionService, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::concurrent::Future* poll() {return nullptr;}
	virtual ::java::util::concurrent::Future* poll(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return nullptr;}
	virtual ::java::util::concurrent::Future* submit(::java::util::concurrent::Callable* task) {return nullptr;}
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task, Object$* result) {return nullptr;}
	virtual ::java::util::concurrent::Future* take() {return nullptr;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletionService_h_