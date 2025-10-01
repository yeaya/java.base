#ifndef _java_util_concurrent_SubmissionPublisher$ConsumerSubscriber_h_
#define _java_util_concurrent_SubmissionPublisher$ConsumerSubscriber_h_
//$ class java.util.concurrent.SubmissionPublisher$ConsumerSubscriber
//$ extends java.util.concurrent.Flow$Subscriber

#include <java/util/concurrent/Flow$Subscriber.h>

namespace java {
	namespace lang {
		class Throwable;
		class Void;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
			class Flow$Subscription;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export SubmissionPublisher$ConsumerSubscriber : public ::java::util::concurrent::Flow$Subscriber {
	$class(SubmissionPublisher$ConsumerSubscriber, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber)
public:
	SubmissionPublisher$ConsumerSubscriber();
	void init$(::java::util::concurrent::CompletableFuture* status, ::java::util::function::Consumer* consumer);
	static void lambda$onSubscribe$0(::java::util::concurrent::Flow$Subscription* subscription, ::java::lang::Void* v, $Throwable* e);
	virtual void onComplete() override;
	virtual void onError($Throwable* ex) override;
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
	::java::util::concurrent::CompletableFuture* status = nullptr;
	::java::util::function::Consumer* consumer = nullptr;
	::java::util::concurrent::Flow$Subscription* subscription = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_SubmissionPublisher$ConsumerSubscriber_h_