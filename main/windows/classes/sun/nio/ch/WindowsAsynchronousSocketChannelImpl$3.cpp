#include <sun/nio/ch/WindowsAsynchronousSocketChannelImpl$3.h>

#include <sun/nio/ch/WindowsAsynchronousSocketChannelImpl$WriteTask.h>
#include <sun/nio/ch/WindowsAsynchronousSocketChannelImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WindowsAsynchronousSocketChannelImpl = ::sun::nio::ch::WindowsAsynchronousSocketChannelImpl;
using $WindowsAsynchronousSocketChannelImpl$WriteTask = ::sun::nio::ch::WindowsAsynchronousSocketChannelImpl$WriteTask;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _WindowsAsynchronousSocketChannelImpl$3_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousSocketChannelImpl$3, this$0)},
	{"val$writeTask", "Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl$WriteTask;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousSocketChannelImpl$3, val$writeTask)},
	{}
};

$MethodInfo _WindowsAsynchronousSocketChannelImpl$3_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl;Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl$WriteTask;)V", "()V", 0, $method(static_cast<void(WindowsAsynchronousSocketChannelImpl$3::*)($WindowsAsynchronousSocketChannelImpl*,$WindowsAsynchronousSocketChannelImpl$WriteTask*)>(&WindowsAsynchronousSocketChannelImpl$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsAsynchronousSocketChannelImpl$3_EnclosingMethodInfo_ = {
	"sun.nio.ch.WindowsAsynchronousSocketChannelImpl",
	"implWrite",
	"(ZLjava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)Ljava/util/concurrent/Future;"
};

$InnerClassInfo _WindowsAsynchronousSocketChannelImpl$3_InnerClassesInfo_[] = {
	{"sun.nio.ch.WindowsAsynchronousSocketChannelImpl$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsAsynchronousSocketChannelImpl$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.WindowsAsynchronousSocketChannelImpl$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_WindowsAsynchronousSocketChannelImpl$3_FieldInfo_,
	_WindowsAsynchronousSocketChannelImpl$3_MethodInfo_,
	nullptr,
	&_WindowsAsynchronousSocketChannelImpl$3_EnclosingMethodInfo_,
	_WindowsAsynchronousSocketChannelImpl$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.WindowsAsynchronousSocketChannelImpl"
};

$Object* allocate$WindowsAsynchronousSocketChannelImpl$3($Class* clazz) {
	return $of($alloc(WindowsAsynchronousSocketChannelImpl$3));
}

void WindowsAsynchronousSocketChannelImpl$3::init$($WindowsAsynchronousSocketChannelImpl* this$0, $WindowsAsynchronousSocketChannelImpl$WriteTask* val$writeTask) {
	$set(this, this$0, this$0);
	$set(this, val$writeTask, val$writeTask);
}

void WindowsAsynchronousSocketChannelImpl$3::run() {
	$nc(this->val$writeTask)->timeout();
}

WindowsAsynchronousSocketChannelImpl$3::WindowsAsynchronousSocketChannelImpl$3() {
}

$Class* WindowsAsynchronousSocketChannelImpl$3::load$($String* name, bool initialize) {
	$loadClass(WindowsAsynchronousSocketChannelImpl$3, name, initialize, &_WindowsAsynchronousSocketChannelImpl$3_ClassInfo_, allocate$WindowsAsynchronousSocketChannelImpl$3);
	return class$;
}

$Class* WindowsAsynchronousSocketChannelImpl$3::class$ = nullptr;

		} // ch
	} // nio
} // sun