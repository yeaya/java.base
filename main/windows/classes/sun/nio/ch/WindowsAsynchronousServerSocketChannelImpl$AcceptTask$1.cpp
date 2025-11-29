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
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $WindowsAsynchronousServerSocketChannelImpl$AcceptTask = ::sun::nio::ch::WindowsAsynchronousServerSocketChannelImpl$AcceptTask;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_FieldInfo_[] = {
	{"this$1", "Lsun/nio/ch/WindowsAsynchronousServerSocketChannelImpl$AcceptTask;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1, this$1)},
	{"val$remote", "Ljava/net/InetSocketAddress;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1, val$remote)},
	{}
};

$MethodInfo _WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/WindowsAsynchronousServerSocketChannelImpl$AcceptTask;Ljava/net/InetSocketAddress;)V", "()V", 0, $method(static_cast<void(WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1::*)($WindowsAsynchronousServerSocketChannelImpl$AcceptTask*,$InetSocketAddress*)>(&WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl$AcceptTask",
	"finishAccept",
	"()V"
};

$InnerClassInfo _WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl$AcceptTask", "sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl", "AcceptTask", $PRIVATE},
	{"sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_FieldInfo_,
	_WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_EnclosingMethodInfo_,
	_WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl"
};

$Object* allocate$WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1($Class* clazz) {
	return $of($alloc(WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1));
}

void WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1::init$($WindowsAsynchronousServerSocketChannelImpl$AcceptTask* this$1, $InetSocketAddress* val$remote) {
	$set(this, this$1, this$1);
	$set(this, val$remote, val$remote);
}

$Object* WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	$var($String, var$0, $nc($($nc(this->val$remote)->getAddress()))->getHostAddress());
	$nc(sm)->checkAccept(var$0, $nc(this->val$remote)->getPort());
	return $of(nullptr);
}

WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1::WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1() {
}

$Class* WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1::load$($String* name, bool initialize) {
	$loadClass(WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1, name, initialize, &_WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_ClassInfo_, allocate$WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1);
	return class$;
}

$Class* WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1::class$ = nullptr;

		} // ch
	} // nio
} // sun