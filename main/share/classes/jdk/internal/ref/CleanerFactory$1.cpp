#include <jdk/internal/ref/CleanerFactory$1.h>

#include <java/lang/Runnable.h>
#include <java/lang/ref/Cleaner.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <jcpp.h>

#undef MAX_PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;

namespace jdk {
	namespace internal {
		namespace ref {

$MethodInfo _CleanerFactory$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(CleanerFactory$1, init$, void)},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(CleanerFactory$1, newThread, $Thread*, $Runnable*)},
	{}
};

$EnclosingMethodInfo _CleanerFactory$1_EnclosingMethodInfo_ = {
	"jdk.internal.ref.CleanerFactory",
	nullptr,
	nullptr
};

$InnerClassInfo _CleanerFactory$1_InnerClassesInfo_[] = {
	{"jdk.internal.ref.CleanerFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CleanerFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.ref.CleanerFactory$1",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	nullptr,
	_CleanerFactory$1_MethodInfo_,
	nullptr,
	&_CleanerFactory$1_EnclosingMethodInfo_,
	_CleanerFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.ref.CleanerFactory"
};

$Object* allocate$CleanerFactory$1($Class* clazz) {
	return $of($alloc(CleanerFactory$1));
}

void CleanerFactory$1::init$() {
}

$Thread* CleanerFactory$1::newThread($Runnable* r) {
	return $InnocuousThread::newSystemThread("Common-Cleaner"_s, r, $Thread::MAX_PRIORITY - 2);
}

CleanerFactory$1::CleanerFactory$1() {
}

$Class* CleanerFactory$1::load$($String* name, bool initialize) {
	$loadClass(CleanerFactory$1, name, initialize, &_CleanerFactory$1_ClassInfo_, allocate$CleanerFactory$1);
	return class$;
}

$Class* CleanerFactory$1::class$ = nullptr;

		} // ref
	} // internal
} // jdk