#include <sun/nio/ch/WindowsAsynchronousSocketChannelImpl$3.h>
#include <sun/nio/ch/WindowsAsynchronousSocketChannelImpl$WriteTask.h>
#include <sun/nio/ch/WindowsAsynchronousSocketChannelImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WindowsAsynchronousSocketChannelImpl = ::sun::nio::ch::WindowsAsynchronousSocketChannelImpl;
using $WindowsAsynchronousSocketChannelImpl$WriteTask = ::sun::nio::ch::WindowsAsynchronousSocketChannelImpl$WriteTask;

namespace sun {
	namespace nio {
		namespace ch {

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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousSocketChannelImpl$3, this$0)},
		{"val$writeTask", "Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl$WriteTask;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousSocketChannelImpl$3, val$writeTask)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl;Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl$WriteTask;)V", "()V", 0, $method(WindowsAsynchronousSocketChannelImpl$3, init$, void, $WindowsAsynchronousSocketChannelImpl*, $WindowsAsynchronousSocketChannelImpl$WriteTask*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsAsynchronousSocketChannelImpl$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.WindowsAsynchronousSocketChannelImpl",
		"implWrite",
		"(ZLjava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)Ljava/util/concurrent/Future;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.WindowsAsynchronousSocketChannelImpl$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.WindowsAsynchronousSocketChannelImpl$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.WindowsAsynchronousSocketChannelImpl"
	};
	$loadClass(WindowsAsynchronousSocketChannelImpl$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsAsynchronousSocketChannelImpl$3);
	});
	return class$;
}

$Class* WindowsAsynchronousSocketChannelImpl$3::class$ = nullptr;

		} // ch
	} // nio
} // sun