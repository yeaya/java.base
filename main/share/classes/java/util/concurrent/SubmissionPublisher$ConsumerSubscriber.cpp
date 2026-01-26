#include <java/util/concurrent/SubmissionPublisher$ConsumerSubscriber.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/SubmissionPublisher.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

class SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0 : public $BiConsumer {
	$class(SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($Flow$Subscription* subscription) {
		$set(this, subscription, subscription);
	}
	virtual void accept(Object$* v, Object$* e) override {
		SubmissionPublisher$ConsumerSubscriber::lambda$onSubscribe$0(subscription, $cast($Void, v), $cast($Throwable, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0>());
	}
	$Flow$Subscription* subscription = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0::fieldInfos[2] = {
	{"subscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $PUBLIC, $field(SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0, subscription)},
	{}
};
$MethodInfo SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $method(SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0, init$, void, $Flow$Subscription*)},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0, accept, void, Object$*, Object$*)},
	{}
};
$ClassInfo SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	fieldInfos,
	methodInfos
};
$Class* SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0::load$($String* name, bool initialize) {
	$loadClass(SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0::class$ = nullptr;

$FieldInfo _SubmissionPublisher$ConsumerSubscriber_FieldInfo_[] = {
	{"status", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;", $FINAL, $field(SubmissionPublisher$ConsumerSubscriber, status)},
	{"consumer", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<-TT;>;", $FINAL, $field(SubmissionPublisher$ConsumerSubscriber, consumer)},
	{"subscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, 0, $field(SubmissionPublisher$ConsumerSubscriber, subscription)},
	{}
};

$MethodInfo _SubmissionPublisher$ConsumerSubscriber_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Consumer;)V", "(Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;Ljava/util/function/Consumer<-TT;>;)V", 0, $method(SubmissionPublisher$ConsumerSubscriber, init$, void, $CompletableFuture*, $Consumer*)},
	{"lambda$onSubscribe$0", "(Ljava/util/concurrent/Flow$Subscription;Ljava/lang/Void;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SubmissionPublisher$ConsumerSubscriber, lambda$onSubscribe$0, void, $Flow$Subscription*, $Void*, $Throwable*)},
	{"onComplete", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SubmissionPublisher$ConsumerSubscriber, onComplete, void)},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SubmissionPublisher$ConsumerSubscriber, onError, void, $Throwable*)},
	{"onNext", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC | $FINAL, $virtualMethod(SubmissionPublisher$ConsumerSubscriber, onNext, void, Object$*)},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SubmissionPublisher$ConsumerSubscriber, onSubscribe, void, $Flow$Subscription*)},
	{}
};

$InnerClassInfo _SubmissionPublisher$ConsumerSubscriber_InnerClassesInfo_[] = {
	{"java.util.concurrent.SubmissionPublisher$ConsumerSubscriber", "java.util.concurrent.SubmissionPublisher", "ConsumerSubscriber", $STATIC | $FINAL},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SubmissionPublisher$ConsumerSubscriber_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.SubmissionPublisher$ConsumerSubscriber",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscriber",
	_SubmissionPublisher$ConsumerSubscriber_FieldInfo_,
	_SubmissionPublisher$ConsumerSubscriber_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<TT;>;",
	nullptr,
	_SubmissionPublisher$ConsumerSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.SubmissionPublisher"
};

$Object* allocate$SubmissionPublisher$ConsumerSubscriber($Class* clazz) {
	return $of($alloc(SubmissionPublisher$ConsumerSubscriber));
}

void SubmissionPublisher$ConsumerSubscriber::init$($CompletableFuture* status, $Consumer* consumer) {
	$set(this, status, status);
	$set(this, consumer, consumer);
}

void SubmissionPublisher$ConsumerSubscriber::onSubscribe($Flow$Subscription* subscription) {
	$set(this, subscription, subscription);
	$nc(this->status)->whenComplete(static_cast<$BiConsumer*>($$new(SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0, subscription)));
	if (!$nc(this->status)->isDone()) {
		$nc(subscription)->request($Long::MAX_VALUE);
	}
}

void SubmissionPublisher$ConsumerSubscriber::onError($Throwable* ex) {
	$nc(this->status)->completeExceptionally(ex);
}

void SubmissionPublisher$ConsumerSubscriber::onComplete() {
	$nc(this->status)->complete(nullptr);
}

void SubmissionPublisher$ConsumerSubscriber::onNext(Object$* item) {
	try {
		$nc(this->consumer)->accept(item);
	} catch ($Throwable& ex) {
		$nc(this->subscription)->cancel();
		$nc(this->status)->completeExceptionally(ex);
	}
}

void SubmissionPublisher$ConsumerSubscriber::lambda$onSubscribe$0($Flow$Subscription* subscription, $Void* v, $Throwable* e) {
	$init(SubmissionPublisher$ConsumerSubscriber);
	$nc(subscription)->cancel();
}

SubmissionPublisher$ConsumerSubscriber::SubmissionPublisher$ConsumerSubscriber() {
}

$Class* SubmissionPublisher$ConsumerSubscriber::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0::classInfo$.name)) {
			return SubmissionPublisher$ConsumerSubscriber$$Lambda$lambda$onSubscribe$0::load$(name, initialize);
		}
	}
	$loadClass(SubmissionPublisher$ConsumerSubscriber, name, initialize, &_SubmissionPublisher$ConsumerSubscriber_ClassInfo_, allocate$SubmissionPublisher$ConsumerSubscriber);
	return class$;
}

$Class* SubmissionPublisher$ConsumerSubscriber::class$ = nullptr;

		} // concurrent
	} // util
} // java