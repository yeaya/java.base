#include <java/util/concurrent/CompletableFuture$ThreadPerTaskExecutor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Objects = ::java::util::Objects;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Executor = ::java::util::concurrent::Executor;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _CompletableFuture$ThreadPerTaskExecutor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CompletableFuture$ThreadPerTaskExecutor::*)()>(&CompletableFuture$ThreadPerTaskExecutor::init$))},
	{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CompletableFuture$ThreadPerTaskExecutor_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$ThreadPerTaskExecutor", "java.util.concurrent.CompletableFuture", "ThreadPerTaskExecutor", $STATIC | $FINAL},
	{}
};

$ClassInfo _CompletableFuture$ThreadPerTaskExecutor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$ThreadPerTaskExecutor",
	"java.lang.Object",
	"java.util.concurrent.Executor",
	nullptr,
	_CompletableFuture$ThreadPerTaskExecutor_MethodInfo_,
	nullptr,
	nullptr,
	_CompletableFuture$ThreadPerTaskExecutor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$ThreadPerTaskExecutor($Class* clazz) {
	return $of($alloc(CompletableFuture$ThreadPerTaskExecutor));
}

void CompletableFuture$ThreadPerTaskExecutor::init$() {
}

void CompletableFuture$ThreadPerTaskExecutor::execute($Runnable* r) {
	$Objects::requireNonNull(r);
	$$new($Thread, r)->start();
}

CompletableFuture$ThreadPerTaskExecutor::CompletableFuture$ThreadPerTaskExecutor() {
}

$Class* CompletableFuture$ThreadPerTaskExecutor::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$ThreadPerTaskExecutor, name, initialize, &_CompletableFuture$ThreadPerTaskExecutor_ClassInfo_, allocate$CompletableFuture$ThreadPerTaskExecutor);
	return class$;
}

$Class* CompletableFuture$ThreadPerTaskExecutor::class$ = nullptr;

		} // concurrent
	} // util
} // java