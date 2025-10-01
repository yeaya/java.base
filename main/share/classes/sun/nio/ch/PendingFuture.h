#ifndef _sun_nio_ch_PendingFuture_h_
#define _sun_nio_ch_PendingFuture_h_
//$ class sun.nio.ch.PendingFuture
//$ extends java.util.concurrent.Future

#include <java/util/concurrent/Future.h>

namespace java {
	namespace lang {
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
			class CountDownLatch;
			class TimeUnit;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class PendingFuture : public ::java::util::concurrent::Future {
	$class(PendingFuture, $NO_CLASS_INIT, ::java::util::concurrent::Future)
public:
	PendingFuture();
	void init$(::java::nio::channels::AsynchronousChannel* channel, ::java::nio::channels::CompletionHandler* handler, Object$* attachment, Object$* context);
	void init$(::java::nio::channels::AsynchronousChannel* channel, ::java::nio::channels::CompletionHandler* handler, Object$* attachment);
	void init$(::java::nio::channels::AsynchronousChannel* channel);
	void init$(::java::nio::channels::AsynchronousChannel* channel, Object$* context);
	$Object* attachment();
	virtual bool cancel(bool mayInterruptIfRunning) override;
	::java::nio::channels::AsynchronousChannel* channel();
	$Throwable* exception();
	virtual $Object* get() override;
	virtual $Object* get(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	$Object* getContext();
	::java::nio::channels::CompletionHandler* handler();
	virtual bool isCancelled() override;
	virtual bool isDone() override;
	bool prepareForWait();
	void setContext(Object$* context);
	void setFailure($Throwable* x);
	void setResult(Object$* res);
	void setResult(Object$* res, $Throwable* x);
	void setTimeoutTask(::java::util::concurrent::Future* task);
	$Object* value();
	::java::nio::channels::AsynchronousChannel* channel$ = nullptr;
	::java::nio::channels::CompletionHandler* handler$ = nullptr;
	$Object* attachment$ = nullptr;
	$volatile(bool) haveResult = false;
	$volatile($Object*) result = nullptr;
	$volatile($Throwable*) exc = nullptr;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
	::java::util::concurrent::Future* timeoutTask = nullptr;
	$volatile($Object*) context = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_PendingFuture_h_