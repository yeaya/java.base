#include <sun/nio/ch/WindowsAsynchronousSocketChannelImpl$2.h>

#include <sun/nio/ch/WindowsAsynchronousSocketChannelImpl$ReadTask.h>
#include <sun/nio/ch/WindowsAsynchronousSocketChannelImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WindowsAsynchronousSocketChannelImpl = ::sun::nio::ch::WindowsAsynchronousSocketChannelImpl;
using $WindowsAsynchronousSocketChannelImpl$ReadTask = ::sun::nio::ch::WindowsAsynchronousSocketChannelImpl$ReadTask;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _WindowsAsynchronousSocketChannelImpl$2_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousSocketChannelImpl$2, this$0)},
	{"val$readTask", "Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl$ReadTask;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousSocketChannelImpl$2, val$readTask)},
	{}
};

$MethodInfo _WindowsAsynchronousSocketChannelImpl$2_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl;Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl$ReadTask;)V", "()V", 0, $method(static_cast<void(WindowsAsynchronousSocketChannelImpl$2::*)($WindowsAsynchronousSocketChannelImpl*,$WindowsAsynchronousSocketChannelImpl$ReadTask*)>(&WindowsAsynchronousSocketChannelImpl$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsAsynchronousSocketChannelImpl$2_EnclosingMethodInfo_ = {
	"sun.nio.ch.WindowsAsynchronousSocketChannelImpl",
	"implRead",
	"(ZLjava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)Ljava/util/concurrent/Future;"
};

$InnerClassInfo _WindowsAsynchronousSocketChannelImpl$2_InnerClassesInfo_[] = {
	{"sun.nio.ch.WindowsAsynchronousSocketChannelImpl$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsAsynchronousSocketChannelImpl$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.WindowsAsynchronousSocketChannelImpl$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_WindowsAsynchronousSocketChannelImpl$2_FieldInfo_,
	_WindowsAsynchronousSocketChannelImpl$2_MethodInfo_,
	nullptr,
	&_WindowsAsynchronousSocketChannelImpl$2_EnclosingMethodInfo_,
	_WindowsAsynchronousSocketChannelImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.WindowsAsynchronousSocketChannelImpl"
};

$Object* allocate$WindowsAsynchronousSocketChannelImpl$2($Class* clazz) {
	return $of($alloc(WindowsAsynchronousSocketChannelImpl$2));
}

void WindowsAsynchronousSocketChannelImpl$2::init$($WindowsAsynchronousSocketChannelImpl* this$0, $WindowsAsynchronousSocketChannelImpl$ReadTask* val$readTask) {
	$set(this, this$0, this$0);
	$set(this, val$readTask, val$readTask);
}

void WindowsAsynchronousSocketChannelImpl$2::run() {
	$nc(this->val$readTask)->timeout();
}

WindowsAsynchronousSocketChannelImpl$2::WindowsAsynchronousSocketChannelImpl$2() {
}

$Class* WindowsAsynchronousSocketChannelImpl$2::load$($String* name, bool initialize) {
	$loadClass(WindowsAsynchronousSocketChannelImpl$2, name, initialize, &_WindowsAsynchronousSocketChannelImpl$2_ClassInfo_, allocate$WindowsAsynchronousSocketChannelImpl$2);
	return class$;
}

$Class* WindowsAsynchronousSocketChannelImpl$2::class$ = nullptr;

		} // ch
	} // nio
} // sun