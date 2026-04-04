#include <sun/nio/ch/WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1.h>
#include <java/lang/SecurityManager.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <sun/nio/ch/WindowsAsynchronousServerSocketChannelImpl$AcceptTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $WindowsAsynchronousServerSocketChannelImpl$AcceptTask = ::sun::nio::ch::WindowsAsynchronousServerSocketChannelImpl$AcceptTask;

namespace sun {
	namespace nio {
		namespace ch {

void WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1::init$($WindowsAsynchronousServerSocketChannelImpl$AcceptTask* this$1, $InetSocketAddress* val$remote) {
	$set(this, this$1, this$1);
	$set(this, val$remote, val$remote);
}

$Object* WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1::run() {
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	$var($String, var$0, $$nc($nc(this->val$remote)->getAddress())->getHostAddress());
	$nc(sm)->checkAccept(var$0, this->val$remote->getPort());
	return nullptr;
}

WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1::WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1() {
}

$Class* WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/nio/ch/WindowsAsynchronousServerSocketChannelImpl$AcceptTask;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1, this$1)},
		{"val$remote", "Ljava/net/InetSocketAddress;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1, val$remote)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/WindowsAsynchronousServerSocketChannelImpl$AcceptTask;Ljava/net/InetSocketAddress;)V", "()V", 0, $method(WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1, init$, void, $WindowsAsynchronousServerSocketChannelImpl$AcceptTask*, $InetSocketAddress*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl$AcceptTask",
		"finishAccept",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl$AcceptTask", "sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl", "AcceptTask", $PRIVATE},
		{"sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl"
	};
	$loadClass(WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1);
	});
	return class$;
}

$Class* WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1::class$ = nullptr;

		} // ch
	} // nio
} // sun