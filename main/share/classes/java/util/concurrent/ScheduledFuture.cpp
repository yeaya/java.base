#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/Delayed.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Delayed = ::java::util::concurrent::Delayed;

namespace java {
	namespace util {
		namespace concurrent {

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
	$MethodInfo methodInfos$$[] = {
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.ScheduledFuture",
		nullptr,
		"java.util.concurrent.Delayed,java.util.concurrent.Future",
		nullptr,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/Delayed;Ljava/util/concurrent/Future<TV;>;"
	};
	$loadClass(ScheduledFuture, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ScheduledFuture));
	});
	return class$;
}

$Class* ScheduledFuture::class$ = nullptr;

		} // concurrent
	} // util
} // java