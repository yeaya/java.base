#ifndef _java_util_concurrent_CompletableFuture$Canceller_h_
#define _java_util_concurrent_CompletableFuture$Canceller_h_
//$ class java.util.concurrent.CompletableFuture$Canceller
//$ extends java.util.function.BiConsumer

#include <java/util/function/BiConsumer.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Future;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import CompletableFuture$Canceller : public ::java::util::function::BiConsumer {
	$class(CompletableFuture$Canceller, $NO_CLASS_INIT, ::java::util::function::BiConsumer)
public:
	CompletableFuture$Canceller();
	void init$(::java::util::concurrent::Future* f);
	void accept(Object$* ignore, $Throwable* ex);
	virtual void accept(Object$* ignore, Object$* ex) override;
	::java::util::concurrent::Future* f = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$Canceller_h_