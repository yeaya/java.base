#ifndef _java_util_concurrent_SubmissionPublisher$BufferedSubscription_h_
#define _java_util_concurrent_SubmissionPublisher$BufferedSubscription_h_
//$ class java.util.concurrent.SubmissionPublisher$BufferedSubscription
//$ extends java.util.concurrent.Flow$Subscription
//$ implements java.util.concurrent.ForkJoinPool$ManagedBlocker

#include <java/lang/Array.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>

#pragma push_macro("ACTIVE")
#undef ACTIVE
#pragma push_macro("CLOSED")
#undef CLOSED
#pragma push_macro("COMPLETE")
#undef COMPLETE
#pragma push_macro("CTL")
#undef CTL
#pragma push_macro("DEMAND")
#undef DEMAND
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("INTERRUPTED")
#undef INTERRUPTED
#pragma push_macro("OPEN")
#undef OPEN
#pragma push_macro("QA")
#undef QA
#pragma push_macro("REQS")
#undef REQS
#pragma push_macro("RUN")
#undef RUN

namespace java {
	namespace lang {
		class Thread;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Executor;
			class Flow$Subscriber;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export SubmissionPublisher$BufferedSubscription : public ::java::util::concurrent::Flow$Subscription, public ::java::util::concurrent::ForkJoinPool$ManagedBlocker {
	$class(SubmissionPublisher$BufferedSubscription, 0, ::java::util::concurrent::Flow$Subscription, ::java::util::concurrent::ForkJoinPool$ManagedBlocker)
public:
	SubmissionPublisher$BufferedSubscription();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::Flow$Subscriber* subscriber, ::java::util::concurrent::Executor* executor, ::java::util::function::BiConsumer* onNextHandler, $ObjectArray* array, int32_t maxBufferCapacity);
	void awaitSpace(int64_t nanos);
	virtual bool block() override;
	virtual void cancel() override;
	bool casDemand(int64_t cmp, int64_t val);
	void closeOnComplete(::java::util::concurrent::Flow$Subscriber* s);
	void closeOnError(::java::util::concurrent::Flow$Subscriber* s, $Throwable* ex);
	void consume();
	void consumeComplete(::java::util::concurrent::Flow$Subscriber* s);
	void consumeError(::java::util::concurrent::Flow$Subscriber* s, $Throwable* ex);
	bool consumeNext(::java::util::concurrent::Flow$Subscriber* s, Object$* x);
	void consumeSubscribe(::java::util::concurrent::Flow$Subscriber* s);
	int32_t estimateLag();
	int32_t getAndBitwiseOrCtl(int32_t bits);
	bool growAndOffer(Object$* item, $ObjectArray* a, int32_t t);
	void handleOnNext(::java::util::concurrent::Flow$Subscriber* s, $Throwable* ex);
	bool isClosed();
	virtual bool isReleasable() override;
	int32_t offer(Object$* item, bool unowned);
	void onComplete();
	void onError($Throwable* ex);
	void onSubscribe();
	virtual void request(int64_t n) override;
	int32_t retryOffer(Object$* item);
	void signalWaiter();
	int32_t startOnOffer(int32_t stat);
	void startOnSignal(int32_t bits);
	void subscribeOnOpen(::java::util::concurrent::Flow$Subscriber* s);
	int64_t subtractDemand(int32_t k);
	int32_t takeItems(::java::util::concurrent::Flow$Subscriber* s, int64_t d, int32_t h);
	virtual $String* toString() override;
	void tryStart();
	bool weakCasCtl(int32_t cmp, int32_t val);
	int64_t timeout = 0;
	int32_t head = 0;
	int32_t tail = 0;
	int32_t maxCapacity = 0;
	$volatile(int32_t) ctl = 0;
	$ObjectArray* array = nullptr;
	::java::util::concurrent::Flow$Subscriber* subscriber = nullptr;
	::java::util::function::BiConsumer* onNextHandler = nullptr;
	::java::util::concurrent::Executor* executor = nullptr;
	$Thread* waiter = nullptr;
	$Throwable* pendingError = nullptr;
	::java::util::concurrent::SubmissionPublisher$BufferedSubscription* next = nullptr;
	::java::util::concurrent::SubmissionPublisher$BufferedSubscription* nextRetry = nullptr;
	$volatile(int64_t) demand = 0;
	$volatile(int32_t) waiting = 0;
	static const int32_t CLOSED = 1;
	static const int32_t ACTIVE = 2;
	static const int32_t REQS = 4;
	static const int32_t ERROR = 8;
	static const int32_t COMPLETE = 16;
	static const int32_t RUN = 32;
	static const int32_t OPEN = 64;
	static const int64_t INTERRUPTED = (int64_t)-1;
	static ::java::lang::invoke::VarHandle* CTL;
	static ::java::lang::invoke::VarHandle* DEMAND;
	static ::java::lang::invoke::VarHandle* QA;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("ACTIVE")
#pragma pop_macro("CLOSED")
#pragma pop_macro("COMPLETE")
#pragma pop_macro("CTL")
#pragma pop_macro("DEMAND")
#pragma pop_macro("ERROR")
#pragma pop_macro("INTERRUPTED")
#pragma pop_macro("OPEN")
#pragma pop_macro("QA")
#pragma pop_macro("REQS")
#pragma pop_macro("RUN")

#endif // _java_util_concurrent_SubmissionPublisher$BufferedSubscription_h_