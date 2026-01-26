#include <Restart$2.h>

#include <Restart.h>
#include <java/lang/Runnable.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $ThreadGroup = ::java::lang::ThreadGroup;

$FieldInfo _Restart$2_FieldInfo_[] = {
	{"val$ueh", "Ljava/lang/Thread$UncaughtExceptionHandler;", nullptr, $FINAL | $SYNTHETIC, $field(Restart$2, val$ueh)},
	{"val$tg", "Ljava/lang/ThreadGroup;", nullptr, $FINAL | $SYNTHETIC, $field(Restart$2, val$tg)},
	{}
};

$MethodInfo _Restart$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Thread$UncaughtExceptionHandler;)V", "()V", 0, $method(Restart$2, init$, void, $ThreadGroup*, $Thread$UncaughtExceptionHandler*)},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(Restart$2, newThread, $Thread*, $Runnable*)},
	{}
};

$EnclosingMethodInfo _Restart$2_EnclosingMethodInfo_ = {
	"Restart",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Restart$2_InnerClassesInfo_[] = {
	{"Restart$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Restart$2_ClassInfo_ = {
	$ACC_SUPER,
	"Restart$2",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	_Restart$2_FieldInfo_,
	_Restart$2_MethodInfo_,
	nullptr,
	&_Restart$2_EnclosingMethodInfo_,
	_Restart$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Restart"
};

$Object* allocate$Restart$2($Class* clazz) {
	return $of($alloc(Restart$2));
}

void Restart$2::init$($ThreadGroup* val$tg, $Thread$UncaughtExceptionHandler* val$ueh) {
	$set(this, val$tg, val$tg);
	$set(this, val$ueh, val$ueh);
}

$Thread* Restart$2::newThread($Runnable* r) {
	$var($Thread, t, $new($Thread, this->val$tg, r));
	t->setUncaughtExceptionHandler(this->val$ueh);
	return t;
}

Restart$2::Restart$2() {
}

$Class* Restart$2::load$($String* name, bool initialize) {
	$loadClass(Restart$2, name, initialize, &_Restart$2_ClassInfo_, allocate$Restart$2);
	return class$;
}

$Class* Restart$2::class$ = nullptr;