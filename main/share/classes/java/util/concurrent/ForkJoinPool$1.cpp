#include <java/util/concurrent/ForkJoinPool$1.h>

#include <java/util/concurrent/ForkJoinPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ForkJoinPool$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ForkJoinPool$1::*)()>(&ForkJoinPool$1::init$))},
	{"run", "()Ljava/util/concurrent/ForkJoinPool;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ForkJoinPool$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.ForkJoinPool",
	nullptr,
	nullptr
};

$InnerClassInfo _ForkJoinPool$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinPool$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ForkJoinPool$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ForkJoinPool$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ForkJoinPool$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/concurrent/ForkJoinPool;>;",
	&_ForkJoinPool$1_EnclosingMethodInfo_,
	_ForkJoinPool$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinPool"
};

$Object* allocate$ForkJoinPool$1($Class* clazz) {
	return $of($alloc(ForkJoinPool$1));
}

void ForkJoinPool$1::init$() {
}

$Object* ForkJoinPool$1::run() {
	return $of($new($ForkJoinPool, (int8_t)0));
}

ForkJoinPool$1::ForkJoinPool$1() {
}

$Class* ForkJoinPool$1::load$($String* name, bool initialize) {
	$loadClass(ForkJoinPool$1, name, initialize, &_ForkJoinPool$1_ClassInfo_, allocate$ForkJoinPool$1);
	return class$;
}

$Class* ForkJoinPool$1::class$ = nullptr;

		} // concurrent
	} // util
} // java