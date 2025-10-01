#ifndef _AdaptorCloseAndInterrupt$2_h_
#define _AdaptorCloseAndInterrupt$2_h_
//$ class AdaptorCloseAndInterrupt$2
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

class AdaptorCloseAndInterrupt;
namespace java {
	namespace lang {
		class Thread;
	}
}

class AdaptorCloseAndInterrupt$2 : public ::java::util::concurrent::Callable {
	$class(AdaptorCloseAndInterrupt$2, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	AdaptorCloseAndInterrupt$2();
	void init$(::AdaptorCloseAndInterrupt* this$0, $Thread* val$current);
	virtual $Object* call() override;
	::AdaptorCloseAndInterrupt* this$0 = nullptr;
	$Thread* val$current = nullptr;
};

#endif // _AdaptorCloseAndInterrupt$2_h_