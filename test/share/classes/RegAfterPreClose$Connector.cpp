#include <RegAfterPreClose$Connector.h>

#include <RegAfterPreClose.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $RegAfterPreClose = ::RegAfterPreClose;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$FieldInfo _RegAfterPreClose$Connector_FieldInfo_[] = {
	{"sa", "Ljava/net/SocketAddress;", nullptr, $PRIVATE | $FINAL, $field(RegAfterPreClose$Connector, sa)},
	{}
};

$MethodInfo _RegAfterPreClose$Connector_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(RegAfterPreClose$Connector::*)(int32_t)>(&RegAfterPreClose$Connector::init$)), "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RegAfterPreClose$Connector_InnerClassesInfo_[] = {
	{"RegAfterPreClose$Connector", "RegAfterPreClose", "Connector", $STATIC},
	{}
};

$ClassInfo _RegAfterPreClose$Connector_ClassInfo_ = {
	$ACC_SUPER,
	"RegAfterPreClose$Connector",
	"java.lang.Object",
	"java.lang.Runnable",
	_RegAfterPreClose$Connector_FieldInfo_,
	_RegAfterPreClose$Connector_MethodInfo_,
	nullptr,
	nullptr,
	_RegAfterPreClose$Connector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RegAfterPreClose"
};

$Object* allocate$RegAfterPreClose$Connector($Class* clazz) {
	return $of($alloc(RegAfterPreClose$Connector));
}

void RegAfterPreClose$Connector::init$(int32_t port) {
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	$set(this, sa, $new($InetSocketAddress, lh, port));
}

void RegAfterPreClose$Connector::run() {
	$useLocalCurrentObjectStackCache();
	$init($RegAfterPreClose);
	while (!$RegAfterPreClose::done) {
		try {
			$nc($($SocketChannel::open(this->sa)))->close();
		} catch ($IOException& x) {
			try {
				$Thread::sleep(10);
			} catch ($InterruptedException& ignore) {
			}
		}
	}
}

RegAfterPreClose$Connector::RegAfterPreClose$Connector() {
}

$Class* RegAfterPreClose$Connector::load$($String* name, bool initialize) {
	$loadClass(RegAfterPreClose$Connector, name, initialize, &_RegAfterPreClose$Connector_ClassInfo_, allocate$RegAfterPreClose$Connector);
	return class$;
}

$Class* RegAfterPreClose$Connector::class$ = nullptr;