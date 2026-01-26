#include <java/util/concurrent/Future.h>

#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _Future_MethodInfo_[] = {
	{"cancel", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Future, cancel, bool, bool)},
	{"get", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Future, get, $Object*), "java.lang.InterruptedException,java.util.concurrent.ExecutionException"},
	{"get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "(JLjava/util/concurrent/TimeUnit;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Future, get, $Object*, int64_t, $TimeUnit*), "java.lang.InterruptedException,java.util.concurrent.ExecutionException,java.util.concurrent.TimeoutException"},
	{"isCancelled", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Future, isCancelled, bool)},
	{"isDone", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Future, isDone, bool)},
	{}
};

$ClassInfo _Future_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.Future",
	nullptr,
	nullptr,
	nullptr,
	_Future_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$Future($Class* clazz) {
	return $of($alloc(Future));
}

$Class* Future::load$($String* name, bool initialize) {
	$loadClass(Future, name, initialize, &_Future_ClassInfo_, allocate$Future);
	return class$;
}

$Class* Future::class$ = nullptr;

		} // concurrent
	} // util
} // java