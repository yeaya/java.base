#include <DieBeforeComplete$4.h>

#include <DieBeforeComplete$Task.h>
#include <DieBeforeComplete.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <jcpp.h>

using $DieBeforeComplete = ::DieBeforeComplete;
using $DieBeforeComplete$Task = ::DieBeforeComplete$Task;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Future = ::java::util::concurrent::Future;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;

$FieldInfo _DieBeforeComplete$4_FieldInfo_[] = {
	{"val$task", "LDieBeforeComplete$Task;", nullptr, $FINAL | $SYNTHETIC, $field(DieBeforeComplete$4, val$task)},
	{"val$result", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $FINAL | $SYNTHETIC, $field(DieBeforeComplete$4, val$result)},
	{}
};

$MethodInfo _DieBeforeComplete$4_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicReference;LDieBeforeComplete$Task;)V", "()V", 0, $method(static_cast<void(DieBeforeComplete$4::*)($AtomicReference*,$DieBeforeComplete$Task*)>(&DieBeforeComplete$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DieBeforeComplete$4_EnclosingMethodInfo_ = {
	"DieBeforeComplete",
	"initiateAndDie",
	"(LDieBeforeComplete$Task;)Ljava/util/concurrent/Future;"
};

$InnerClassInfo _DieBeforeComplete$4_InnerClassesInfo_[] = {
	{"DieBeforeComplete$4", nullptr, nullptr, 0},
	{"DieBeforeComplete$Task", "DieBeforeComplete", "Task", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DieBeforeComplete$4_ClassInfo_ = {
	$ACC_SUPER,
	"DieBeforeComplete$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_DieBeforeComplete$4_FieldInfo_,
	_DieBeforeComplete$4_MethodInfo_,
	nullptr,
	&_DieBeforeComplete$4_EnclosingMethodInfo_,
	_DieBeforeComplete$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DieBeforeComplete"
};

$Object* allocate$DieBeforeComplete$4($Class* clazz) {
	return $of($alloc(DieBeforeComplete$4));
}

void DieBeforeComplete$4::init$($AtomicReference* val$result, $DieBeforeComplete$Task* val$task) {
	$set(this, val$result, val$result);
	$set(this, val$task, val$task);
}

void DieBeforeComplete$4::run() {
	$nc(this->val$result)->set($($nc(this->val$task)->run()));
}

DieBeforeComplete$4::DieBeforeComplete$4() {
}

$Class* DieBeforeComplete$4::load$($String* name, bool initialize) {
	$loadClass(DieBeforeComplete$4, name, initialize, &_DieBeforeComplete$4_ClassInfo_, allocate$DieBeforeComplete$4);
	return class$;
}

$Class* DieBeforeComplete$4::class$ = nullptr;