#include <DieBeforeComplete$Task.h>

#include <DieBeforeComplete.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _DieBeforeComplete$Task_MethodInfo_[] = {
	{"run", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<TT;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DieBeforeComplete$Task_InnerClassesInfo_[] = {
	{"DieBeforeComplete$Task", "DieBeforeComplete", "Task", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DieBeforeComplete$Task_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"DieBeforeComplete$Task",
	nullptr,
	nullptr,
	nullptr,
	_DieBeforeComplete$Task_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_DieBeforeComplete$Task_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DieBeforeComplete"
};

$Object* allocate$DieBeforeComplete$Task($Class* clazz) {
	return $of($alloc(DieBeforeComplete$Task));
}

$Class* DieBeforeComplete$Task::load$($String* name, bool initialize) {
	$loadClass(DieBeforeComplete$Task, name, initialize, &_DieBeforeComplete$Task_ClassInfo_, allocate$DieBeforeComplete$Task);
	return class$;
}

$Class* DieBeforeComplete$Task::class$ = nullptr;