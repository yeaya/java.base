#ifndef _AdaptorCloseAndInterrupt$1_h_
#define _AdaptorCloseAndInterrupt$1_h_
//$ class AdaptorCloseAndInterrupt$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

class AdaptorCloseAndInterrupt;
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class AbstractSelectableChannel;
			}
		}
	}
}

class AdaptorCloseAndInterrupt$1 : public ::java::util::concurrent::Callable {
	$class(AdaptorCloseAndInterrupt$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	AdaptorCloseAndInterrupt$1();
	void init$(::AdaptorCloseAndInterrupt* this$0, ::java::nio::channels::spi::AbstractSelectableChannel* val$sc);
	virtual $Object* call() override;
	::AdaptorCloseAndInterrupt* this$0 = nullptr;
	::java::nio::channels::spi::AbstractSelectableChannel* val$sc = nullptr;
};

#endif // _AdaptorCloseAndInterrupt$1_h_