#ifndef _java_util_concurrent_RunnableScheduledFuture_h_
#define _java_util_concurrent_RunnableScheduledFuture_h_
//$ interface java.util.concurrent.RunnableScheduledFuture
//$ extends java.util.concurrent.RunnableFuture,java.util.concurrent.ScheduledFuture

#include <java/util/concurrent/RunnableFuture.h>
#include <java/util/concurrent/ScheduledFuture.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import RunnableScheduledFuture : public ::java::util::concurrent::RunnableFuture, public ::java::util::concurrent::ScheduledFuture {
	$interface(RunnableScheduledFuture, $NO_CLASS_INIT, ::java::util::concurrent::RunnableFuture, ::java::util::concurrent::ScheduledFuture)
public:
	virtual bool cancel(bool mayInterruptIfRunning) override {return false;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $Object* get() override {return nullptr;}
	virtual $Object* get(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isCancelled() override {return false;}
	virtual bool isDone() override {return false;}
	virtual bool isPeriodic() {return false;}
	virtual $String* toString() override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_RunnableScheduledFuture_h_