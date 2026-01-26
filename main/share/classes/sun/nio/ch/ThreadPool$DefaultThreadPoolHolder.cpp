#include <sun/nio/ch/ThreadPool$DefaultThreadPoolHolder.h>

#include <sun/nio/ch/ThreadPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadPool = ::sun::nio::ch::ThreadPool;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _ThreadPool$DefaultThreadPoolHolder_FieldInfo_[] = {
	{"defaultThreadPool", "Lsun/nio/ch/ThreadPool;", nullptr, $STATIC | $FINAL, $staticField(ThreadPool$DefaultThreadPoolHolder, defaultThreadPool)},
	{}
};

$MethodInfo _ThreadPool$DefaultThreadPoolHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ThreadPool$DefaultThreadPoolHolder, init$, void)},
	{}
};

$InnerClassInfo _ThreadPool$DefaultThreadPoolHolder_InnerClassesInfo_[] = {
	{"sun.nio.ch.ThreadPool$DefaultThreadPoolHolder", "sun.nio.ch.ThreadPool", "DefaultThreadPoolHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ThreadPool$DefaultThreadPoolHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.ThreadPool$DefaultThreadPoolHolder",
	"java.lang.Object",
	nullptr,
	_ThreadPool$DefaultThreadPoolHolder_FieldInfo_,
	_ThreadPool$DefaultThreadPoolHolder_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadPool$DefaultThreadPoolHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.ThreadPool"
};

$Object* allocate$ThreadPool$DefaultThreadPoolHolder($Class* clazz) {
	return $of($alloc(ThreadPool$DefaultThreadPoolHolder));
}

$ThreadPool* ThreadPool$DefaultThreadPoolHolder::defaultThreadPool = nullptr;

void ThreadPool$DefaultThreadPoolHolder::init$() {
}

void clinit$ThreadPool$DefaultThreadPoolHolder($Class* class$) {
	$assignStatic(ThreadPool$DefaultThreadPoolHolder::defaultThreadPool, $ThreadPool::createDefault());
}

ThreadPool$DefaultThreadPoolHolder::ThreadPool$DefaultThreadPoolHolder() {
}

$Class* ThreadPool$DefaultThreadPoolHolder::load$($String* name, bool initialize) {
	$loadClass(ThreadPool$DefaultThreadPoolHolder, name, initialize, &_ThreadPool$DefaultThreadPoolHolder_ClassInfo_, clinit$ThreadPool$DefaultThreadPoolHolder, allocate$ThreadPool$DefaultThreadPoolHolder);
	return class$;
}

$Class* ThreadPool$DefaultThreadPoolHolder::class$ = nullptr;

		} // ch
	} // nio
} // sun