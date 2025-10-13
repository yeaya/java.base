#ifndef _java_util_concurrent_SubmissionPublisher_h_
#define _java_util_concurrent_SubmissionPublisher_h_
//$ class java.util.concurrent.SubmissionPublisher
//$ extends java.util.concurrent.Flow$Publisher
//$ implements java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>
#include <java/util/concurrent/Flow$Publisher.h>

#pragma push_macro("ASYNC_POOL")
#undef ASYNC_POOL
#pragma push_macro("BUFFER_CAPACITY_LIMIT")
#undef BUFFER_CAPACITY_LIMIT
#pragma push_macro("INITIAL_CAPACITY")
#undef INITIAL_CAPACITY

namespace java {
	namespace lang {
		class Thread;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
			class Executor;
			class Flow$Subscriber;
			class SubmissionPublisher$BufferedSubscription;
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiPredicate;
			class Consumer;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export SubmissionPublisher : public ::java::util::concurrent::Flow$Publisher, public ::java::lang::AutoCloseable {
	$class(SubmissionPublisher, 0, ::java::util::concurrent::Flow$Publisher, ::java::lang::AutoCloseable)
public:
	SubmissionPublisher();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::Executor* executor, int32_t maxBufferCapacity, ::java::util::function::BiConsumer* handler);
	void init$(::java::util::concurrent::Executor* executor, int32_t maxBufferCapacity);
	void init$();
	int32_t cleanAndCount();
	virtual void close() override;
	virtual void closeExceptionally($Throwable* error);
	virtual ::java::util::concurrent::CompletableFuture* consume(::java::util::function::Consumer* consumer);
	int32_t doOffer(Object$* item, int64_t nanos, ::java::util::function::BiPredicate* onDrop);
	virtual int32_t estimateMaximumLag();
	virtual int64_t estimateMinimumDemand();
	virtual $Throwable* getClosedException();
	virtual ::java::util::concurrent::Executor* getExecutor();
	virtual int32_t getMaxBufferCapacity();
	virtual int32_t getNumberOfSubscribers();
	virtual ::java::util::List* getSubscribers();
	virtual bool hasSubscribers();
	virtual bool isClosed();
	virtual bool isSubscribed(::java::util::concurrent::Flow$Subscriber* subscriber);
	virtual int32_t offer(Object$* item, ::java::util::function::BiPredicate* onDrop);
	virtual int32_t offer(Object$* item, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, ::java::util::function::BiPredicate* onDrop);
	int32_t retryOffer(Object$* item, int64_t nanos, ::java::util::function::BiPredicate* onDrop, ::java::util::concurrent::SubmissionPublisher$BufferedSubscription* retries, int32_t lag, bool cleanMe);
	static int32_t roundCapacity(int32_t cap);
	virtual int32_t submit(Object$* item);
	virtual void subscribe(::java::util::concurrent::Flow$Subscriber* subscriber) override;
	virtual $String* toString() override;
	static const int32_t BUFFER_CAPACITY_LIMIT = 0x40000000; // 1 << 30
	static const int32_t INITIAL_CAPACITY = 32;
	static ::java::util::concurrent::Executor* ASYNC_POOL;
	::java::util::concurrent::SubmissionPublisher$BufferedSubscription* clients = nullptr;
	::java::util::concurrent::locks::ReentrantLock* lock = nullptr;
	$volatile(bool) closed = false;
	bool subscribed = false;
	$Thread* owner = nullptr;
	$volatile($Throwable*) closedException = nullptr;
	::java::util::concurrent::Executor* executor = nullptr;
	::java::util::function::BiConsumer* onNextHandler = nullptr;
	int32_t maxBufferCapacity = 0;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("ASYNC_POOL")
#pragma pop_macro("BUFFER_CAPACITY_LIMIT")
#pragma pop_macro("INITIAL_CAPACITY")

#endif // _java_util_concurrent_SubmissionPublisher_h_