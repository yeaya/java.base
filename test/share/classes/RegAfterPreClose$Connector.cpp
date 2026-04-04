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
using $SocketChannel = ::java::nio::channels::SocketChannel;

void RegAfterPreClose$Connector::init$(int32_t port) {
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	$set(this, sa, $new($InetSocketAddress, lh, port));
}

void RegAfterPreClose$Connector::run() {
	$useLocalObjectStack();
	$init($RegAfterPreClose);
	while (!$RegAfterPreClose::done) {
		try {
			$$nc($SocketChannel::open(this->sa))->close();
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
	$FieldInfo fieldInfos$$[] = {
		{"sa", "Ljava/net/SocketAddress;", nullptr, $PRIVATE | $FINAL, $field(RegAfterPreClose$Connector, sa)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(RegAfterPreClose$Connector, init$, void, int32_t), "java.io.IOException"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RegAfterPreClose$Connector, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RegAfterPreClose$Connector", "RegAfterPreClose", "Connector", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RegAfterPreClose$Connector",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"RegAfterPreClose"
	};
	$loadClass(RegAfterPreClose$Connector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegAfterPreClose$Connector);
	});
	return class$;
}

$Class* RegAfterPreClose$Connector::class$ = nullptr;