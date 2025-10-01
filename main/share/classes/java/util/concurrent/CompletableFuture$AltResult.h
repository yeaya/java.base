#ifndef _java_util_concurrent_CompletableFuture$AltResult_h_
#define _java_util_concurrent_CompletableFuture$AltResult_h_
//$ class java.util.concurrent.CompletableFuture$AltResult
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$AltResult : public ::java::lang::Object {
	$class(CompletableFuture$AltResult, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CompletableFuture$AltResult();
	void init$($Throwable* x);
	$Throwable* ex = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$AltResult_h_