#include <java/util/concurrent/Executor.h>

#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _Executor_MethodInfo_[] = {
	{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Executor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.Executor",
	nullptr,
	nullptr,
	nullptr,
	_Executor_MethodInfo_
};

$Object* allocate$Executor($Class* clazz) {
	return $of($alloc(Executor));
}

$Class* Executor::load$($String* name, bool initialize) {
	$loadClass(Executor, name, initialize, &_Executor_ClassInfo_, allocate$Executor);
	return class$;
}

$Class* Executor::class$ = nullptr;

		} // concurrent
	} // util
} // java