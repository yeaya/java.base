#ifndef _sun_nio_ch_CompletedFuture_h_
#define _sun_nio_ch_CompletedFuture_h_
//$ class sun.nio.ch.CompletedFuture
//$ extends java.util.concurrent.Future

#include <java/util/concurrent/Future.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class TimeUnit;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class CompletedFuture : public ::java::util::concurrent::Future {
	$class(CompletedFuture, $NO_CLASS_INIT, ::java::util::concurrent::Future)
public:
	CompletedFuture();
	void init$(Object$* result, $Throwable* exc);
	virtual bool cancel(bool mayInterruptIfRunning) override;
	virtual $Object* get() override;
	virtual $Object* get(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual bool isCancelled() override;
	virtual bool isDone() override;
	static ::sun::nio::ch::CompletedFuture* withFailure($Throwable* exc);
	static ::sun::nio::ch::CompletedFuture* withResult(Object$* result);
	static ::sun::nio::ch::CompletedFuture* withResult(Object$* result, $Throwable* exc);
	$Object* result = nullptr;
	$Throwable* exc = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_CompletedFuture_h_