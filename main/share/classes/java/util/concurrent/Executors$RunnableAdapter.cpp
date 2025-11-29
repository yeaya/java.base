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

$FieldInfo _Executors$RunnableAdapter_FieldInfo_[] = {
	{"task", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(Executors$RunnableAdapter, task)},
	{"result", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(Executors$RunnableAdapter, result)},
	{}
};

$MethodInfo _Executors$RunnableAdapter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Runnable;Ljava/lang/Object;)V", "(Ljava/lang/Runnable;TT;)V", 0, $method(static_cast<void(Executors$RunnableAdapter::*)($Runnable*,Object$*)>(&Executors$RunnableAdapter::init$))},
	{"call", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Executors$RunnableAdapter_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$RunnableAdapter", "java.util.concurrent.Executors", "RunnableAdapter", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Executors$RunnableAdapter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.Executors$RunnableAdapter",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Executors$RunnableAdapter_FieldInfo_,
	_Executors$RunnableAdapter_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/Callable<TT;>;",
	nullptr,
	_Executors$RunnableAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$RunnableAdapter($Class* clazz) {
	return $of($alloc(Executors$RunnableAdapter));
}

void Executors$RunnableAdapter::init$($Runnable* task, Object$* result) {
	$set(this, task, task);
	$set(this, result, result);
}

$Object* Executors$RunnableAdapter::call() {
	$nc(this->task)->run();
	return $of(this->result);
}

$String* Executors$RunnableAdapter::toString() {
	return $str({$($Callable::toString()), "[Wrapped task = "_s, this->task, "]"_s});
}

Executors$RunnableAdapter::Executors$RunnableAdapter() {
}

$Class* Executors$RunnableAdapter::load$($String* name, bool initialize) {
	$loadClass(Executors$RunnableAdapter, name, initialize, &_Executors$RunnableAdapter_ClassInfo_, allocate$Executors$RunnableAdapter);
	return class$;
}

$Class* Executors$RunnableAdapter::class$ = nullptr;

		} // concurrent
	} // util
} // java