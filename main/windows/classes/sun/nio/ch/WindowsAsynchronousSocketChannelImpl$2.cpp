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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousSocketChannelImpl$2, this$0)},
		{"val$readTask", "Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl$ReadTask;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousSocketChannelImpl$2, val$readTask)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl;Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl$ReadTask;)V", "()V", 0, $method(WindowsAsynchronousSocketChannelImpl$2, init$, void, $WindowsAsynchronousSocketChannelImpl*, $WindowsAsynchronousSocketChannelImpl$ReadTask*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsAsynchronousSocketChannelImpl$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.WindowsAsynchronousSocketChannelImpl",
		"implRead",
		"(ZLjava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)Ljava/util/concurrent/Future;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.WindowsAsynchronousSocketChannelImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.WindowsAsynchronousSocketChannelImpl$2",
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
	$loadClass(WindowsAsynchronousSocketChannelImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsAsynchronousSocketChannelImpl$2);
	});
	return class$;
}

$Class* WindowsAsynchronousSocketChannelImpl$2::class$ = nullptr;

		} // ch
	} // nio
} // sun