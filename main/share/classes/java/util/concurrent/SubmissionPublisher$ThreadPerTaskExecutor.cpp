#include <java/util/concurrent/SubmissionPublisher$ThreadPerTaskExecutor.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/SubmissionPublisher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace util {
		namespace concurrent {

void SubmissionPublisher$ThreadPerTaskExecutor::init$() {
}

void SubmissionPublisher$ThreadPerTaskExecutor::execute($Runnable* r) {
	$$new($Thread, r)->start();
}

SubmissionPublisher$ThreadPerTaskExecutor::SubmissionPublisher$ThreadPerTaskExecutor() {
}

$Class* SubmissionPublisher$ThreadPerTaskExecutor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SubmissionPublisher$ThreadPerTaskExecutor, init$, void)},
		{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $virtualMethod(SubmissionPublisher$ThreadPerTaskExecutor, execute, void, $Runnable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.SubmissionPublisher$ThreadPerTaskExecutor", "java.util.concurrent.SubmissionPublisher", "ThreadPerTaskExecutor", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.SubmissionPublisher$ThreadPerTaskExecutor",
		"java.lang.Object",
		"java.util.concurrent.Executor",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.SubmissionPublisher"
	};
	$loadClass(SubmissionPublisher$ThreadPerTaskExecutor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubmissionPublisher$ThreadPerTaskExecutor);
	});
	return class$;
}

$Class* SubmissionPublisher$ThreadPerTaskExecutor::class$ = nullptr;

		} // concurrent
	} // util
} // java