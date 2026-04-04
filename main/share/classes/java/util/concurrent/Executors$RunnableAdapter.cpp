#include <java/util/concurrent/Executors$RunnableAdapter.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Callable = ::java::util::concurrent::Callable;

namespace java {
	namespace util {
		namespace concurrent {

void Executors$RunnableAdapter::init$($Runnable* task, Object$* result) {
	$set(this, task, task);
	$set(this, result, result);
}

$Object* Executors$RunnableAdapter::call() {
	$nc(this->task)->run();
	return this->result;
}

$String* Executors$RunnableAdapter::toString() {
	return $str({$($Callable::toString()), "[Wrapped task = "_s, this->task, "]"_s});
}

Executors$RunnableAdapter::Executors$RunnableAdapter() {
}

$Class* Executors$RunnableAdapter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"task", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(Executors$RunnableAdapter, task)},
		{"result", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(Executors$RunnableAdapter, result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runnable;Ljava/lang/Object;)V", "(Ljava/lang/Runnable;TT;)V", 0, $method(Executors$RunnableAdapter, init$, void, $Runnable*, Object$*)},
		{"call", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(Executors$RunnableAdapter, call, $Object*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Executors$RunnableAdapter, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Executors$RunnableAdapter", "java.util.concurrent.Executors", "RunnableAdapter", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.Executors$RunnableAdapter",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/Callable<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.Executors"
	};
	$loadClass(Executors$RunnableAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Executors$RunnableAdapter);
	});
	return class$;
}

$Class* Executors$RunnableAdapter::class$ = nullptr;

		} // concurrent
	} // util
} // java