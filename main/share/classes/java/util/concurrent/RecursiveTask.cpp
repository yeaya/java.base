#include <java/util/concurrent/RecursiveTask.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _RecursiveTask_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RecursiveTask, serialVersionUID)},
	{"result", "Ljava/lang/Object;", "TV;", 0, $field(RecursiveTask, result)},
	{}
};

$MethodInfo _RecursiveTask_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RecursiveTask::*)()>(&RecursiveTask::init$))},
	{"compute", "()Ljava/lang/Object;", "()TV;", $PROTECTED | $ABSTRACT},
	{"exec", "()Z", nullptr, $PROTECTED | $FINAL},
	{"getRawResult", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL},
	{"setRawResult", "(Ljava/lang/Object;)V", "(TV;)V", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _RecursiveTask_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.RecursiveTask",
	"java.util.concurrent.ForkJoinTask",
	nullptr,
	_RecursiveTask_FieldInfo_,
	_RecursiveTask_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/util/concurrent/ForkJoinTask<TV;>;"
};

$Object* allocate$RecursiveTask($Class* clazz) {
	return $of($alloc(RecursiveTask));
}

void RecursiveTask::init$() {
	$ForkJoinTask::init$();
}

$Object* RecursiveTask::getRawResult() {
	return $of(this->result);
}

void RecursiveTask::setRawResult(Object$* value) {
	$set(this, result, value);
}

bool RecursiveTask::exec() {
	$set(this, result, compute());
	return true;
}

RecursiveTask::RecursiveTask() {
}

$Class* RecursiveTask::load$($String* name, bool initialize) {
	$loadClass(RecursiveTask, name, initialize, &_RecursiveTask_ClassInfo_, allocate$RecursiveTask);
	return class$;
}

$Class* RecursiveTask::class$ = nullptr;

		} // concurrent
	} // util
} // java