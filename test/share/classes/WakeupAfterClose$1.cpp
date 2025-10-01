#include <WakeupAfterClose$1.h>

#include <WakeupAfterClose.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/ClosedSelectorException.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $WakeupAfterClose = ::WakeupAfterClose;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ClosedSelectorException = ::java::nio::channels::ClosedSelectorException;
using $Selector = ::java::nio::channels::Selector;

$FieldInfo _WakeupAfterClose$1_FieldInfo_[] = {
	{"val$sel", "Ljava/nio/channels/Selector;", nullptr, $FINAL | $SYNTHETIC, $field(WakeupAfterClose$1, val$sel)},
	{}
};

$MethodInfo _WakeupAfterClose$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/Selector;)V", "()V", 0, $method(static_cast<void(WakeupAfterClose$1::*)($Selector*)>(&WakeupAfterClose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WakeupAfterClose$1_EnclosingMethodInfo_ = {
	"WakeupAfterClose",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _WakeupAfterClose$1_InnerClassesInfo_[] = {
	{"WakeupAfterClose$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WakeupAfterClose$1_ClassInfo_ = {
	$ACC_SUPER,
	"WakeupAfterClose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_WakeupAfterClose$1_FieldInfo_,
	_WakeupAfterClose$1_MethodInfo_,
	nullptr,
	&_WakeupAfterClose$1_EnclosingMethodInfo_,
	_WakeupAfterClose$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WakeupAfterClose"
};

$Object* allocate$WakeupAfterClose$1($Class* clazz) {
	return $of($alloc(WakeupAfterClose$1));
}

void WakeupAfterClose$1::init$($Selector* val$sel) {
	$set(this, val$sel, val$sel);
}

void WakeupAfterClose$1::run() {
	try {
		$nc(this->val$sel)->select();
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		x->printStackTrace();
	} catch ($ClosedSelectorException&) {
		$var($ClosedSelectorException, y, $catch());
		$init($System);
		$nc($System::err)->println("Caught expected ClosedSelectorException"_s);
	}
}

WakeupAfterClose$1::WakeupAfterClose$1() {
}

$Class* WakeupAfterClose$1::load$($String* name, bool initialize) {
	$loadClass(WakeupAfterClose$1, name, initialize, &_WakeupAfterClose$1_ClassInfo_, allocate$WakeupAfterClose$1);
	return class$;
}

$Class* WakeupAfterClose$1::class$ = nullptr;