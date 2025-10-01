#ifndef _sun_nio_ch_Invoker_h_
#define _sun_nio_ch_Invoker_h_
//$ class sun.nio.ch.Invoker
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Runnable;
		class ThreadLocal;
		class Throwable;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousChannel;
			class CompletionHandler;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Executor;
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class AsynchronousChannelGroupImpl;
			class Groupable;
			class Invoker$GroupAndInvokeCount;
			class PendingFuture;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Invoker : public ::java::lang::Object {
	$class(Invoker, 0, ::java::lang::Object)
public:
	Invoker();
	void init$();
	static void bindToGroup(::sun::nio::ch::AsynchronousChannelGroupImpl* group);
	static ::sun::nio::ch::Invoker$GroupAndInvokeCount* getGroupAndInvokeCount();
	static void invoke(::java::nio::channels::AsynchronousChannel* channel, ::java::nio::channels::CompletionHandler* handler, Object$* attachment, Object$* result, $Throwable* exc);
	static void invoke(::sun::nio::ch::PendingFuture* future);
	static void invokeDirect(::sun::nio::ch::Invoker$GroupAndInvokeCount* myGroupAndInvokeCount, ::java::nio::channels::CompletionHandler* handler, Object$* attachment, Object$* result, $Throwable* exc);
	static void invokeIndirectly(::java::nio::channels::AsynchronousChannel* channel, ::java::nio::channels::CompletionHandler* handler, Object$* attachment, Object$* result, $Throwable* exc);
	static void invokeIndirectly(::java::nio::channels::CompletionHandler* handler, Object$* attachment, Object$* value, $Throwable* exc, ::java::util::concurrent::Executor* executor);
	static void invokeIndirectly(::sun::nio::ch::PendingFuture* future);
	static void invokeOnThreadInThreadPool(::sun::nio::ch::Groupable* channel, ::java::lang::Runnable* task);
	static void invokeUnchecked(::java::nio::channels::CompletionHandler* handler, Object$* attachment, Object$* value, $Throwable* exc);
	static void invokeUnchecked(::sun::nio::ch::PendingFuture* future);
	static bool isBoundToAnyGroup();
	static bool mayInvokeDirect(::sun::nio::ch::Invoker$GroupAndInvokeCount* myGroupAndInvokeCount, ::sun::nio::ch::AsynchronousChannelGroupImpl* group);
	static bool $assertionsDisabled;
	static int32_t maxHandlerInvokeCount;
	static ::java::lang::ThreadLocal* myGroupAndInvokeCount;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Invoker_h_