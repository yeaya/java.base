#include <java/util/concurrent/SubmissionPublisher$ThreadPerTaskExecutor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/SubmissionPublisher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Executor = ::java::util::concurrent::Executor;
using $SubmissionPublisher = ::java::util::concurrent::SubmissionPublisher;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _SubmissionPublisher$ThreadPerTaskExecutor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SubmissionPublisher$ThreadPerTaskExecutor::*)()>(&SubmissionPublisher$ThreadPerTaskExecutor::init$))},
	{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SubmissionPublisher$ThreadPerTaskExecutor_InnerClassesInfo_[] = {
	{"java.util.concurrent.SubmissionPublisher$ThreadPerTaskExecutor", "java.util.concurrent.SubmissionPublisher", "ThreadPerTaskExecutor", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SubmissionPublisher$ThreadPerTaskExecutor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.SubmissionPublisher$ThreadPerTaskExecutor",
	"java.lang.Object",
	"java.util.concurrent.Executor",
	nullptr,
	_SubmissionPublisher$ThreadPerTaskExecutor_MethodInfo_,
	nullptr,
	nullptr,
	_SubmissionPublisher$ThreadPerTaskExecutor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.SubmissionPublisher"
};

$Object* allocate$SubmissionPublisher$ThreadPerTaskExecutor($Class* clazz) {
	return $of($alloc(SubmissionPublisher$ThreadPerTaskExecutor));
}

void SubmissionPublisher$ThreadPerTaskExecutor::init$() {
}

void SubmissionPublisher$ThreadPerTaskExecutor::execute($Runnable* r) {
	$$new($Thread, r)->start();
}

SubmissionPublisher$ThreadPerTaskExecutor::SubmissionPublisher$ThreadPerTaskExecutor() {
}

$Class* SubmissionPublisher$ThreadPerTaskExecutor::load$($String* name, bool initialize) {
	$loadClass(SubmissionPublisher$ThreadPerTaskExecutor, name, initialize, &_SubmissionPublisher$ThreadPerTaskExecutor_ClassInfo_, allocate$SubmissionPublisher$ThreadPerTaskExecutor);
	return class$;
}

$Class* SubmissionPublisher$ThreadPerTaskExecutor::class$ = nullptr;

		} // concurrent
	} // util
} // java