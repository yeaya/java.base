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
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $UnixAsynchronousServerSocketChannelImpl = ::sun::nio::ch::UnixAsynchronousServerSocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _UnixAsynchronousServerSocketChannelImpl$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/UnixAsynchronousServerSocketChannelImpl;", nullptr, $FINAL | $SYNTHETIC, $field(UnixAsynchronousServerSocketChannelImpl$1, this$0)},
	{"val$remote", "Ljava/net/InetSocketAddress;", nullptr, $FINAL | $SYNTHETIC, $field(UnixAsynchronousServerSocketChannelImpl$1, val$remote)},
	{}
};

$MethodInfo _UnixAsynchronousServerSocketChannelImpl$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/UnixAsynchronousServerSocketChannelImpl;Ljava/net/InetSocketAddress;)V", nullptr, 0, $method(static_cast<void(UnixAsynchronousServerSocketChannelImpl$1::*)($UnixAsynchronousServerSocketChannelImpl*,$InetSocketAddress*)>(&UnixAsynchronousServerSocketChannelImpl$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _UnixAsynchronousServerSocketChannelImpl$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.UnixAsynchronousServerSocketChannelImpl",
	"finishAccept",
	"(Ljava/io/FileDescriptor;Ljava/net/InetSocketAddress;Ljava/security/AccessControlContext;)Ljava/nio/channels/AsynchronousSocketChannel;"
};

$InnerClassInfo _UnixAsynchronousServerSocketChannelImpl$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.UnixAsynchronousServerSocketChannelImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UnixAsynchronousServerSocketChannelImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.UnixAsynchronousServerSocketChannelImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_UnixAsynchronousServerSocketChannelImpl$1_FieldInfo_,
	_UnixAsynchronousServerSocketChannelImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_UnixAsynchronousServerSocketChannelImpl$1_EnclosingMethodInfo_,
	_UnixAsynchronousServerSocketChannelImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.UnixAsynchronousServerSocketChannelImpl"
};

$Object* allocate$UnixAsynchronousServerSocketChannelImpl$1($Class* clazz) {
	return $of($alloc(UnixAsynchronousServerSocketChannelImpl$1));
}

void UnixAsynchronousServerSocketChannelImpl$1::init$($UnixAsynchronousServerSocketChannelImpl* this$0, $InetSocketAddress* val$remote) {
	$set(this, this$0, this$0);
	$set(this, val$remote, val$remote);
}

$Object* UnixAsynchronousServerSocketChannelImpl$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($String, var$0, $nc($($nc(this->val$remote)->getAddress()))->getHostAddress());
		sm->checkAccept(var$0, $nc(this->val$remote)->getPort());
	}
	return $of(nullptr);
}

UnixAsynchronousServerSocketChannelImpl$1::UnixAsynchronousServerSocketChannelImpl$1() {
}

$Class* UnixAsynchronousServerSocketChannelImpl$1::load$($String* name, bool initialize) {
	$loadClass(UnixAsynchronousServerSocketChannelImpl$1, name, initialize, &_UnixAsynchronousServerSocketChannelImpl$1_ClassInfo_, allocate$UnixAsynchronousServerSocketChannelImpl$1);
	return class$;
}

$Class* UnixAsynchronousServerSocketChannelImpl$1::class$ = nullptr;

		} // ch
	} // nio
} // sun