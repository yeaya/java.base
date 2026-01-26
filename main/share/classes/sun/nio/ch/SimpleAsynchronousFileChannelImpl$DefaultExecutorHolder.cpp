#include <sun/nio/ch/SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder.h>

#include <java/util/concurrent/ExecutorService.h>
#include <sun/nio/ch/SimpleAsynchronousFileChannelImpl.h>
#include <sun/nio/ch/ThreadPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $ThreadPool = ::sun::nio::ch::ThreadPool;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder_FieldInfo_[] = {
	{"defaultExecutor", "Ljava/util/concurrent/ExecutorService;", nullptr, $STATIC | $FINAL, $staticField(SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder, defaultExecutor)},
	{}
};

$MethodInfo _SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder, init$, void)},
	{}
};

$InnerClassInfo _SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder_InnerClassesInfo_[] = {
	{"sun.nio.ch.SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder", "sun.nio.ch.SimpleAsynchronousFileChannelImpl", "DefaultExecutorHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder",
	"java.lang.Object",
	nullptr,
	_SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder_FieldInfo_,
	_SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder_MethodInfo_,
	nullptr,
	nullptr,
	_SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.SimpleAsynchronousFileChannelImpl"
};

$Object* allocate$SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder($Class* clazz) {
	return $of($alloc(SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder));
}

$ExecutorService* SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::defaultExecutor = nullptr;

void SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::init$() {
}

void clinit$SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder($Class* class$) {
	$assignStatic(SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::defaultExecutor, $nc($($ThreadPool::createDefault()))->executor());
}

SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder() {
}

$Class* SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::load$($String* name, bool initialize) {
	$loadClass(SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder, name, initialize, &_SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder_ClassInfo_, clinit$SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder, allocate$SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder);
	return class$;
}

$Class* SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder::class$ = nullptr;

		} // ch
	} // nio
} // sun