#ifndef _AdaptorCloseAndInterrupt_h_
#define _AdaptorCloseAndInterrupt_h_
//$ class AdaptorCloseAndInterrupt
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
			class ServerSocketChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class AbstractSelectableChannel;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ScheduledExecutorService;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}

class $export AdaptorCloseAndInterrupt : public ::java::lang::Object {
	$class(AdaptorCloseAndInterrupt, 0, ::java::lang::Object)
public:
	AdaptorCloseAndInterrupt();
	void init$();
	void init$(::java::nio::channels::ServerSocketChannel* listener);
	void init$(::java::nio::channels::DatagramChannel* listener);
	virtual void dcReceiveAsyncClose(int32_t timeout);
	virtual void dcReceiveAsyncInterrupt(int32_t timeout);
	virtual void doAsyncClose(::java::nio::channels::spi::AbstractSelectableChannel* sc);
	virtual void doAsyncInterrupt();
	static void main($StringArray* args);
	virtual void scReadAsyncClose();
	virtual void scReadAsyncInterrupt();
	virtual void ssAcceptAsyncClose();
	virtual void ssAcceptAsyncInterrupt();
	static ::java::util::concurrent::ScheduledExecutorService* pool;
	::java::nio::channels::ServerSocketChannel* listener = nullptr;
	::java::nio::channels::DatagramChannel* peer = nullptr;
	int32_t port = 0;
	::java::util::concurrent::atomic::AtomicBoolean* isClosed = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* isInterrupted = nullptr;
};

#endif // _AdaptorCloseAndInterrupt_h_