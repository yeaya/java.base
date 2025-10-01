#include <java/util/concurrent/RecursiveAction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _RecursiveAction_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RecursiveAction, serialVersionUID)},
	{}
};

$MethodInfo _RecursiveAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RecursiveAction::*)()>(&RecursiveAction::init$))},
	{"compute", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"exec", "()Z", nullptr, $PROTECTED | $FINAL},
	{"getRawResult", "()Ljava/lang/Void;", nullptr, $PUBLIC | $FINAL},
	{"setRawResult", "(Ljava/lang/Void;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(RecursiveAction::*)($Void*)>(&RecursiveAction::setRawResult))},
	{"setRawResult", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _RecursiveAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.RecursiveAction",
	"java.util.concurrent.ForkJoinTask",
	nullptr,
	_RecursiveAction_FieldInfo_,
	_RecursiveAction_MethodInfo_,
	"Ljava/util/concurrent/ForkJoinTask<Ljava/lang/Void;>;"
};

$Object* allocate$RecursiveAction($Class* clazz) {
	return $of($alloc(RecursiveAction));
}

void RecursiveAction::init$() {
	$ForkJoinTask::init$();
}

$Object* RecursiveAction::getRawResult() {
	return $of(nullptr);
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
	$loadClass(RecursiveAction, name, initialize, &_RecursiveAction_ClassInfo_, allocate$RecursiveAction);
	return class$;
}

$Class* RecursiveAction::class$ = nullptr;

		} // concurrent
	} // util
} // java