#include <Restart$1.h>

#include <Restart.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $Restart = ::Restart;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$FieldInfo _Restart$1_FieldInfo_[] = {
	{"val$exceptionCount", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(Restart$1, val$exceptionCount)},
	{}
};

$MethodInfo _Restart$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicInteger;)V", "()V", 0, $method(static_cast<void(Restart$1::*)($AtomicInteger*)>(&Restart$1::init$))},
	{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Restart$1_EnclosingMethodInfo_ = {
	"Restart",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Restart$1_InnerClassesInfo_[] = {
	{"Restart$1", nullptr, nullptr, 0},
	{"java.lang.Thread$UncaughtExceptionHandler", "java.lang.Thread", "UncaughtExceptionHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Restart$1_ClassInfo_ = {
	$ACC_SUPER,
	"Restart$1",
	"java.lang.Object",
	"java.lang.Thread$UncaughtExceptionHandler",
	_Restart$1_FieldInfo_,
	_Restart$1_MethodInfo_,
	nullptr,
	&_Restart$1_EnclosingMethodInfo_,
	_Restart$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Restart"
};

$Object* allocate$Restart$1($Class* clazz) {
	return $of($alloc(Restart$1));
}

void Restart$1::init$($AtomicInteger* val$exceptionCount) {
	$set(this, val$exceptionCount, val$exceptionCount);
}

void Restart$1::uncaughtException($Thread* t, $Throwable* e) {
	$nc(this->val$exceptionCount)->incrementAndGet();
}

Restart$1::Restart$1() {
}

$Class* Restart$1::load$($String* name, bool initialize) {
	$loadClass(Restart$1, name, initialize, &_Restart$1_ClassInfo_, allocate$Restart$1);
	return class$;
}

$Class* Restart$1::class$ = nullptr;