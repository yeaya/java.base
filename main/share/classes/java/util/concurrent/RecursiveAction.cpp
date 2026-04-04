#include <java/util/concurrent/RecursiveAction.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {
		namespace concurrent {

void RecursiveAction::init$() {
	$ForkJoinTask::init$();
}

$Object* RecursiveAction::getRawResult() {
	return nullptr;
}

void RecursiveAction::setRawResult($Void* mustBeNull) {
}

bool RecursiveAction::exec() {
	compute();
	return true;
}

void RecursiveAction::setRawResult(Object$* mustBeNull) {
	this->setRawResult($cast($Void, mustBeNull));
}

RecursiveAction::RecursiveAction() {
}

$Class* RecursiveAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RecursiveAction, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RecursiveAction, init$, void)},
		{"compute", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(RecursiveAction, compute, void)},
		{"exec", "()Z", nullptr, $PROTECTED | $FINAL, $virtualMethod(RecursiveAction, exec, bool)},
		{"getRawResult", "()Ljava/lang/Void;", nullptr, $PUBLIC | $FINAL, $virtualMethod(RecursiveAction, getRawResult, $Object*)},
		{"setRawResult", "(Ljava/lang/Void;)V", nullptr, $PROTECTED | $FINAL, $method(RecursiveAction, setRawResult, void, $Void*)},
		{"setRawResult", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(RecursiveAction, setRawResult, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.concurrent.RecursiveAction",
		"java.util.concurrent.ForkJoinTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/concurrent/ForkJoinTask<Ljava/lang/Void;>;"
	};
	$loadClass(RecursiveAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RecursiveAction));
	});
	return class$;
}

$Class* RecursiveAction::class$ = nullptr;

		} // concurrent
	} // util
} // java