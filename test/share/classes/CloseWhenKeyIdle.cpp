#include <CloseWhenKeyIdle.h>

#include <CloseWhenKeyIdle$Waker.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $CloseWhenKeyIdle$Waker = ::CloseWhenKeyIdle$Waker;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;

$FieldInfo _CloseWhenKeyIdle_FieldInfo_[] = {
	{"wakeupDone", "Z", nullptr, $STATIC | $VOLATILE, $staticField(CloseWhenKeyIdle, wakeupDone)},
	{}
};

$MethodInfo _CloseWhenKeyIdle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CloseWhenKeyIdle::*)()>(&CloseWhenKeyIdle::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CloseWhenKeyIdle::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _CloseWhenKeyIdle_InnerClassesInfo_[] = {
	{"CloseWhenKeyIdle$Waker", "CloseWhenKeyIdle", "Waker", $STATIC},
	{}
};

$ClassInfo _CloseWhenKeyIdle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CloseWhenKeyIdle",
	"java.lang.Object",
	nullptr,
	_CloseWhenKeyIdle_FieldInfo_,
	_CloseWhenKeyIdle_MethodInfo_,
	nullptr,
	nullptr,
	_CloseWhenKeyIdle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"CloseWhenKeyIdle$Waker"
};

$Object* allocate$CloseWhenKeyIdle($Class* clazz) {
	return $of($alloc(CloseWhenKeyIdle));
}

$volatile(bool) CloseWhenKeyIdle::wakeupDone = false;

void CloseWhenKeyIdle::init$() {
}

void CloseWhenKeyIdle::main($StringArray* args) {
	$init(CloseWhenKeyIdle);
	$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
	$nc($($nc(ssc)->socket()))->bind($$new($InetSocketAddress, 0));
	$var($InetAddress, var$0, $InetAddress::getLocalHost());
	$var($SocketAddress, remote, $new($InetSocketAddress, var$0, $nc($(ssc->socket()))->getLocalPort()));
	$var($SocketChannel, sc1, $SocketChannel::open(remote));
	$var($SocketChannel, sc2, ssc->accept());
	$var($Selector, sel, $Selector::open());
	$nc(sc1)->configureBlocking(false);
	$var($SelectionKey, k, sc1->register$(sel, 0));
	$nc(sel)->selectNow();
	$nc($($nc(sc2)->socket()))->setSoLinger(true, 0);
	sc2->close();
	$var($Thread, t, $new($Thread, static_cast<$Runnable*>($$new($CloseWhenKeyIdle$Waker, sel, 5000))));
	t->setDaemon(true);
	t->start();
	int32_t spinCount = 0;
	bool failed = false;
	for (;;) {
		int32_t n = sel->select();
		if (n > 0) {
			$init($System);
			$nc($System::err)->println("Channel should not be selected!!!"_s);
			failed = true;
			break;
		}
		if (CloseWhenKeyIdle::wakeupDone) {
			break;
		}
		++spinCount;
		if (spinCount >= 3) {
			$init($System);
			$nc($System::err)->println("Selector appears to be spinning"_s);
			failed = true;
			break;
		}
	}
	sc1->close();
	sel->close();
	if (failed) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	$init($System);
	$nc($System::out)->println("PASS"_s);
}

void clinit$CloseWhenKeyIdle($Class* class$) {
	CloseWhenKeyIdle::wakeupDone = false;
}

CloseWhenKeyIdle::CloseWhenKeyIdle() {
}

$Class* CloseWhenKeyIdle::load$($String* name, bool initialize) {
	$loadClass(CloseWhenKeyIdle, name, initialize, &_CloseWhenKeyIdle_ClassInfo_, clinit$CloseWhenKeyIdle, allocate$CloseWhenKeyIdle);
	return class$;
}

$Class* CloseWhenKeyIdle::class$ = nullptr;