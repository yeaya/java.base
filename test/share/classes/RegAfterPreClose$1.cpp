#include <RegAfterPreClose$1.h>

#include <RegAfterPreClose.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _RegAfterPreClose$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RegAfterPreClose$1::*)()>(&RegAfterPreClose$1::init$))},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RegAfterPreClose$1_EnclosingMethodInfo_ = {
	"RegAfterPreClose",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _RegAfterPreClose$1_InnerClassesInfo_[] = {
	{"RegAfterPreClose$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RegAfterPreClose$1_ClassInfo_ = {
	$ACC_SUPER,
	"RegAfterPreClose$1",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	nullptr,
	_RegAfterPreClose$1_MethodInfo_,
	nullptr,
	&_RegAfterPreClose$1_EnclosingMethodInfo_,
	_RegAfterPreClose$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RegAfterPreClose"
};

$Object* allocate$RegAfterPreClose$1($Class* clazz) {
	return $of($alloc(RegAfterPreClose$1));
}

void RegAfterPreClose$1::init$() {
}

$Thread* RegAfterPreClose$1::newThread($Runnable* r) {
	$var($Thread, t, $new($Thread, r));
	t->setDaemon(true);
	return t;
}

RegAfterPreClose$1::RegAfterPreClose$1() {
}

$Class* RegAfterPreClose$1::load$($String* name, bool initialize) {
	$loadClass(RegAfterPreClose$1, name, initialize, &_RegAfterPreClose$1_ClassInfo_, allocate$RegAfterPreClose$1);
	return class$;
}

$Class* RegAfterPreClose$1::class$ = nullptr;