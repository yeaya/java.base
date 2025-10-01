#include <sun/nio/ch/WindowsAsynchronousSocketChannelImpl$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AsynchronousSocketChannelImpl = ::sun::nio::ch::AsynchronousSocketChannelImpl;
using $WindowsAsynchronousSocketChannelImpl = ::sun::nio::ch::WindowsAsynchronousSocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _WindowsAsynchronousSocketChannelImpl$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousSocketChannelImpl$1, this$0)},
	{"val$sa", "Ljava/net/SocketAddress;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousSocketChannelImpl$1, val$sa)},
	{}
};

$MethodInfo _WindowsAsynchronousSocketChannelImpl$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/WindowsAsynchronousSocketChannelImpl;Ljava/net/SocketAddress;)V", "()V", 0, $method(static_cast<void(WindowsAsynchronousSocketChannelImpl$1::*)($WindowsAsynchronousSocketChannelImpl*,$SocketAddress*)>(&WindowsAsynchronousSocketChannelImpl$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _WindowsAsynchronousSocketChannelImpl$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.WindowsAsynchronousSocketChannelImpl",
	"doPrivilegedBind",
	"(Ljava/net/SocketAddress;)V"
};

$InnerClassInfo _WindowsAsynchronousSocketChannelImpl$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.WindowsAsynchronousSocketChannelImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsAsynchronousSocketChannelImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.WindowsAsynchronousSocketChannelImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_WindowsAsynchronousSocketChannelImpl$1_FieldInfo_,
	_WindowsAsynchronousSocketChannelImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	&_WindowsAsynchronousSocketChannelImpl$1_EnclosingMethodInfo_,
	_WindowsAsynchronousSocketChannelImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.WindowsAsynchronousSocketChannelImpl"
};

$Object* allocate$WindowsAsynchronousSocketChannelImpl$1($Class* clazz) {
	return $of($alloc(WindowsAsynchronousSocketChannelImpl$1));
}

void WindowsAsynchronousSocketChannelImpl$1::init$($WindowsAsynchronousSocketChannelImpl* this$0, $SocketAddress* val$sa) {
	$set(this, this$0, this$0);
	$set(this, val$sa, val$sa);
}

$Object* WindowsAsynchronousSocketChannelImpl$1::run() {
	this->this$0->bind(this->val$sa);
	return $of(nullptr);
}

WindowsAsynchronousSocketChannelImpl$1::WindowsAsynchronousSocketChannelImpl$1() {
}

$Class* WindowsAsynchronousSocketChannelImpl$1::load$($String* name, bool initialize) {
	$loadClass(WindowsAsynchronousSocketChannelImpl$1, name, initialize, &_WindowsAsynchronousSocketChannelImpl$1_ClassInfo_, allocate$WindowsAsynchronousSocketChannelImpl$1);
	return class$;
}

$Class* WindowsAsynchronousSocketChannelImpl$1::class$ = nullptr;

		} // ch
	} // nio
} // sun