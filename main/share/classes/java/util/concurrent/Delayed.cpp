#include <java/util/concurrent/Delayed.h>

#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _Delayed_MethodInfo_[] = {
	{"getDelay", "(Ljava/util/concurrent/TimeUnit;)J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Delayed_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.Delayed",
	nullptr,
	"java.lang.Comparable",
	nullptr,
	_Delayed_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/util/concurrent/Delayed;>;"
};

$Object* allocate$Delayed($Class* clazz) {
	return $of($alloc(Delayed));
}

$Class* Delayed::load$($String* name, bool initialize) {
	$loadClass(Delayed, name, initialize, &_Delayed_ClassInfo_, allocate$Delayed);
	return class$;
}

$Class* Delayed::class$ = nullptr;

		} // concurrent
	} // util
} // java