#include <java/util/concurrent/RunnableFuture.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace util {
		namespace concurrent {

int32_t RunnableFuture::hashCode() {
	 return this->$Runnable::hashCode();
}

bool RunnableFuture::equals(Object$* obj) {
	 return this->$Runnable::equals(obj);
}

$Object* RunnableFuture::clone() {
	 return this->$Runnable::clone();
}

$String* RunnableFuture::toString() {
	 return this->$Runnable::toString();
}

void RunnableFuture::finalize() {
	this->$Runnable::finalize();
}

$Class* RunnableFuture::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.RunnableFuture",
		nullptr,
		"java.lang.Runnable,java.util.concurrent.Future",
		nullptr,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/Runnable;Ljava/util/concurrent/Future<TV;>;"
	};
	$loadClass(RunnableFuture, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RunnableFuture));
	});
	return class$;
}

$Class* RunnableFuture::class$ = nullptr;

		} // concurrent
	} // util
} // java