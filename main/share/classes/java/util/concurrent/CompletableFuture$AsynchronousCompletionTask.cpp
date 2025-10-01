#include <java/util/concurrent/CompletableFuture$AsynchronousCompletionTask.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;

namespace java {
	namespace util {
		namespace concurrent {

$InnerClassInfo _CompletableFuture$AsynchronousCompletionTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$AsynchronousCompletionTask", "java.util.concurrent.CompletableFuture", "AsynchronousCompletionTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$AsynchronousCompletionTask_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.CompletableFuture$AsynchronousCompletionTask",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_CompletableFuture$AsynchronousCompletionTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$AsynchronousCompletionTask($Class* clazz) {
	return $of($alloc(CompletableFuture$AsynchronousCompletionTask));
}

$Class* CompletableFuture$AsynchronousCompletionTask::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$AsynchronousCompletionTask, name, initialize, &_CompletableFuture$AsynchronousCompletionTask_ClassInfo_, allocate$CompletableFuture$AsynchronousCompletionTask);
	return class$;
}

$Class* CompletableFuture$AsynchronousCompletionTask::class$ = nullptr;

		} // concurrent
	} // util
} // java