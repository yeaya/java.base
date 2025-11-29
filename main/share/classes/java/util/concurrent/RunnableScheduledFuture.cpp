#include <java/util/concurrent/RunnableScheduledFuture.h>

#include <java/util/concurrent/RunnableFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RunnableFuture = ::java::util::concurrent::RunnableFuture;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _RunnableScheduledFuture_MethodInfo_[] = {
	{"*cancel", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*isCancelled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*isDone", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isPeriodic", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RunnableScheduledFuture_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.RunnableScheduledFuture",
	nullptr,
	"java.util.concurrent.RunnableFuture,java.util.concurrent.ScheduledFuture",
	nullptr,
	_RunnableScheduledFuture_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/RunnableFuture<TV;>;Ljava/util/concurrent/ScheduledFuture<TV;>;"
};

$Object* allocate$RunnableScheduledFuture($Class* clazz) {
	return $of($alloc(RunnableScheduledFuture));
}

int32_t RunnableScheduledFuture::hashCode() {
	 return this->$RunnableFuture::hashCode();
}

bool RunnableScheduledFuture::equals(Object$* obj) {
	 return this->$RunnableFuture::equals(obj);
}

$Object* RunnableScheduledFuture::clone() {
	 return this->$RunnableFuture::clone();
}

$String* RunnableScheduledFuture::toString() {
	 return this->$RunnableFuture::toString();
}

void RunnableScheduledFuture::finalize() {
	this->$RunnableFuture::finalize();
}

$Class* RunnableScheduledFuture::load$($String* name, bool initialize) {
	$loadClass(RunnableScheduledFuture, name, initialize, &_RunnableScheduledFuture_ClassInfo_, allocate$RunnableScheduledFuture);
	return class$;
}

$Class* RunnableScheduledFuture::class$ = nullptr;

		} // concurrent
	} // util
} // java