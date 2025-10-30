#include <java/util/concurrent/ScheduledFuture.h>

#include <java/util/concurrent/Delayed.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Delayed = ::java::util::concurrent::Delayed;
using $Future = ::java::util::concurrent::Future;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ScheduledFuture_MethodInfo_[] = {
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _ScheduledFuture_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.ScheduledFuture",
	nullptr,
	"java.util.concurrent.Delayed,java.util.concurrent.Future",
	nullptr,
	_ScheduledFuture_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/Delayed;Ljava/util/concurrent/Future<TV;>;"
};

$Object* allocate$ScheduledFuture($Class* clazz) {
	return $of($alloc(ScheduledFuture));
}

int32_t ScheduledFuture::hashCode() {
	 return this->$Delayed::hashCode();
}

bool ScheduledFuture::equals(Object$* obj) {
	 return this->$Delayed::equals(obj);
}

$Object* ScheduledFuture::clone() {
	 return this->$Delayed::clone();
}

$String* ScheduledFuture::toString() {
	 return this->$Delayed::toString();
}

void ScheduledFuture::finalize() {
	this->$Delayed::finalize();
}

$Class* ScheduledFuture::load$($String* name, bool initialize) {
	$loadClass(ScheduledFuture, name, initialize, &_ScheduledFuture_ClassInfo_, allocate$ScheduledFuture);
	return class$;
}

$Class* ScheduledFuture::class$ = nullptr;

		} // concurrent
	} // util
} // java