#include <sun/nio/ch/UnixAsynchronousServerSocketChannelImpl$1.h>
#include <java/lang/SecurityManager.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <sun/nio/ch/UnixAsynchronousServerSocketChannelImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $UnixAsynchronousServerSocketChannelImpl = ::sun::nio::ch::UnixAsynchronousServerSocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

void UnixAsynchronousServerSocketChannelImpl$1::init$($UnixAsynchronousServerSocketChannelImpl* this$0, $InetSocketAddress* val$remote) {
	$set(this, this$0, this$0);
	$set(this, val$remote, val$remote);
}

$Object* UnixAsynchronousServerSocketChannelImpl$1::run() {
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($String, var$0, $$nc($nc(this->val$remote)->getAddress())->getHostAddress());
		sm->checkAccept(var$0, this->val$remote->getPort());
	}
	return nullptr;
}

UnixAsynchronousServerSocketChannelImpl$1::UnixAsynchronousServerSocketChannelImpl$1() {
}

$Class* UnixAsynchronousServerSocketChannelImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/UnixAsynchronousServerSocketChannelImpl;", nullptr, $FINAL | $SYNTHETIC, $field(UnixAsynchronousServerSocketChannelImpl$1, this$0)},
		{"val$remote", "Ljava/net/InetSocketAddress;", nullptr, $FINAL | $SYNTHETIC, $field(UnixAsynchronousServerSocketChannelImpl$1, val$remote)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/UnixAsynchronousServerSocketChannelImpl;Ljava/net/InetSocketAddress;)V", nullptr, 0, $method(UnixAsynchronousServerSocketChannelImpl$1, init$, void, $UnixAsynchronousServerSocketChannelImpl*, $InetSocketAddress*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(UnixAsynchronousServerSocketChannelImpl$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.UnixAsynchronousServerSocketChannelImpl",
		"finishAccept",
		"(Ljava/io/FileDescriptor;Ljava/net/InetSocketAddress;Ljava/security/AccessControlContext;)Ljava/nio/channels/AsynchronousSocketChannel;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.UnixAsynchronousServerSocketChannelImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.UnixAsynchronousServerSocketChannelImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.UnixAsynchronousServerSocketChannelImpl"
	};
	$loadClass(UnixAsynchronousServerSocketChannelImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixAsynchronousServerSocketChannelImpl$1);
	});
	return class$;
}

$Class* UnixAsynchronousServerSocketChannelImpl$1::class$ = nullptr;

		} // ch
	} // nio
} // sun