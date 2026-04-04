#include <java/lang/ProcessHandleImpl$ExitCompletion.h>
#include <java/lang/ProcessHandleImpl.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;

namespace java {
	namespace lang {

void ProcessHandleImpl$ExitCompletion::init$(bool isReaping) {
	$CompletableFuture::init$();
	this->isReaping = isReaping;
}

ProcessHandleImpl$ExitCompletion::ProcessHandleImpl$ExitCompletion() {
}

$Class* ProcessHandleImpl$ExitCompletion::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isReaping", "Z", nullptr, $FINAL, $field(ProcessHandleImpl$ExitCompletion, isReaping)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(ProcessHandleImpl$ExitCompletion, init$, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessHandleImpl$ExitCompletion", "java.lang.ProcessHandleImpl", "ExitCompletion", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessHandleImpl$ExitCompletion",
		"java.util.concurrent.CompletableFuture",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/concurrent/CompletableFuture<Ljava/lang/Integer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessHandleImpl"
	};
	$loadClass(ProcessHandleImpl$ExitCompletion, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ProcessHandleImpl$ExitCompletion));
	});
	return class$;
}

$Class* ProcessHandleImpl$ExitCompletion::class$ = nullptr;

	} // lang
} // java