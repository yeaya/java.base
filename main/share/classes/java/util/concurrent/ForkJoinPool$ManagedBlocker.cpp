#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>

#include <java/util/concurrent/ForkJoinPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ForkJoinPool$ManagedBlocker_MethodInfo_[] = {
	{"block", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"isReleasable", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ForkJoinPool$ManagedBlocker_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinPool$ManagedBlocker", "java.util.concurrent.ForkJoinPool", "ManagedBlocker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ForkJoinPool$ManagedBlocker_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.ForkJoinPool$ManagedBlocker",
	nullptr,
	nullptr,
	nullptr,
	_ForkJoinPool$ManagedBlocker_MethodInfo_,
	nullptr,
	nullptr,
	_ForkJoinPool$ManagedBlocker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinPool"
};

$Object* allocate$ForkJoinPool$ManagedBlocker($Class* clazz) {
	return $of($alloc(ForkJoinPool$ManagedBlocker));
}

$Class* ForkJoinPool$ManagedBlocker::load$($String* name, bool initialize) {
	$loadClass(ForkJoinPool$ManagedBlocker, name, initialize, &_ForkJoinPool$ManagedBlocker_ClassInfo_, allocate$ForkJoinPool$ManagedBlocker);
	return class$;
}

$Class* ForkJoinPool$ManagedBlocker::class$ = nullptr;

		} // concurrent
	} // util
} // java