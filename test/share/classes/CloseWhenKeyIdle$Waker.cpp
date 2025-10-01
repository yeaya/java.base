#include <CloseWhenKeyIdle$Waker.h>

#include <CloseWhenKeyIdle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $CloseWhenKeyIdle = ::CloseWhenKeyIdle;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Selector = ::java::nio::channels::Selector;

$FieldInfo _CloseWhenKeyIdle$Waker_FieldInfo_[] = {
	{"sel", "Ljava/nio/channels/Selector;", nullptr, $PRIVATE, $field(CloseWhenKeyIdle$Waker, sel)},
	{"delay", "J", nullptr, $PRIVATE, $field(CloseWhenKeyIdle$Waker, delay)},
	{}
};

$MethodInfo _CloseWhenKeyIdle$Waker_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/Selector;J)V", nullptr, 0, $method(static_cast<void(CloseWhenKeyIdle$Waker::*)($Selector*,int64_t)>(&CloseWhenKeyIdle$Waker::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CloseWhenKeyIdle$Waker_InnerClassesInfo_[] = {
	{"CloseWhenKeyIdle$Waker", "CloseWhenKeyIdle", "Waker", $STATIC},
	{}
};

$ClassInfo _CloseWhenKeyIdle$Waker_ClassInfo_ = {
	$ACC_SUPER,
	"CloseWhenKeyIdle$Waker",
	"java.lang.Object",
	"java.lang.Runnable",
	_CloseWhenKeyIdle$Waker_FieldInfo_,
	_CloseWhenKeyIdle$Waker_MethodInfo_,
	nullptr,
	nullptr,
	_CloseWhenKeyIdle$Waker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CloseWhenKeyIdle"
};

$Object* allocate$CloseWhenKeyIdle$Waker($Class* clazz) {
	return $of($alloc(CloseWhenKeyIdle$Waker));
}

void CloseWhenKeyIdle$Waker::init$($Selector* sel, int64_t delay) {
	$set(this, sel, sel);
	this->delay = delay;
}

void CloseWhenKeyIdle$Waker::run() {
	try {
		$Thread::sleep(this->delay);
		$init($CloseWhenKeyIdle);
		$CloseWhenKeyIdle::wakeupDone = true;
		$nc(this->sel)->wakeup();
	} catch ($Exception&) {
		$var($Exception, x, $catch());
		x->printStackTrace();
	}
}

CloseWhenKeyIdle$Waker::CloseWhenKeyIdle$Waker() {
}

$Class* CloseWhenKeyIdle$Waker::load$($String* name, bool initialize) {
	$loadClass(CloseWhenKeyIdle$Waker, name, initialize, &_CloseWhenKeyIdle$Waker_ClassInfo_, allocate$CloseWhenKeyIdle$Waker);
	return class$;
}

$Class* CloseWhenKeyIdle$Waker::class$ = nullptr;