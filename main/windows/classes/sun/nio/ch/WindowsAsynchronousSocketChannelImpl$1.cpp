#include <sun/nio/ch/WindowsAsynchronousSocketChannelImpl$1.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <sun/nio/ch/WindowsAsynchronousSocketChannelImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;
using $WindowsAsynchronousSocketChannelImpl = ::sun::nio::ch::WindowsAsynchronousSocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

void WindowsAsynchronousSocketChannelImpl$1::init$($WindowsAsynchronousSocketChannelImpl* this$0, $SocketAddress* val$sa) {
	$set(this, this$0, this$0);
	$set(this, val$sa, val$sa);
}

$Object* WindowsAsynchronousSocketChannelImpl$1::run() {
	this->this$0->bind(this->val$sa);
	return nullptr;
}

WindowsAsynchronousSocketChannelImpl$1::WindowsAsynchronousSocketChannelImpl$1() {
}

$Class* WindowsAsynchronousSocketChannelImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousSocketChannelImpl$1, this$0)},
		{"val$sa", "Ljava/net/SocketAddress;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousSocketChannelImpl$1, val$sa)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl;Ljava/net/SocketAddress;)V", "()V", 0, $method(WindowsAsynchronousSocketChannelImpl$1, init$, void, $WindowsAsynchronousSocketChannelImpl*, $SocketAddress*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(WindowsAsynchronousSocketChannelImpl$1, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.WindowsAsynchronousSocketChannelImpl",
		"doPrivilegedBind",
		"(Ljava/net/SocketAddress;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.WindowsAsynchronousSocketChannelImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.WindowsAsynchronousSocketChannelImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.WindowsAsynchronousSocketChannelImpl"
	};
	$loadClass(WindowsAsynchronousSocketChannelImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsAsynchronousSocketChannelImpl$1);
	});
	return class$;
}

$Class* WindowsAsynchronousSocketChannelImpl$1::class$ = nullptr;

		} // ch
	} // nio
} // sun