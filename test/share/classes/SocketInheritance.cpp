#include <SocketInheritance.h>

#include <SocketInheritance$IOHandler.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $SocketInheritance$IOHandler = ::SocketInheritance$IOHandler;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$MethodInfo _SocketInheritance_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SocketInheritance::*)()>(&SocketInheritance::init$))},
	{"child", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&SocketInheritance::child))},
	{"connect", "(I)Ljava/nio/channels/SocketChannel;", nullptr, $STATIC, $method(static_cast<$SocketChannel*(*)(int32_t)>(&SocketInheritance::connect)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SocketInheritance::main)), "java.lang.Exception"},
	{"start", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&SocketInheritance::start)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SocketInheritance_InnerClassesInfo_[] = {
	{"SocketInheritance$IOHandler", "SocketInheritance", "IOHandler", $STATIC},
	{}
};

$ClassInfo _SocketInheritance_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SocketInheritance",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SocketInheritance_MethodInfo_,
	nullptr,
	nullptr,
	_SocketInheritance_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SocketInheritance$IOHandler"
};

$Object* allocate$SocketInheritance($Class* clazz) {
	return $of($alloc(SocketInheritance));
}

void SocketInheritance::init$() {
}

$SocketChannel* SocketInheritance::connect(int32_t port) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, lh, $InetAddress::getLoopbackAddress());
	$var($InetSocketAddress, isa, $new($InetSocketAddress, lh, port));
	return $SocketChannel::open(static_cast<$SocketAddress*>(isa));
}

void SocketInheritance::child(int32_t port) {
	try {
		$nc($(connect(port)))->close();
	} catch ($IOException& x) {
		x->printStackTrace();
		return;
	}
	for (;;) {
		try {
			$Thread::sleep(10 * 1000);
		} catch ($InterruptedException& x) {
		}
	}
}

void SocketInheritance::start() {
	$useLocalCurrentObjectStackCache();
	$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
	$nc($($nc(ssc)->socket()))->bind($$new($InetSocketAddress, 0));
	int32_t port = $nc($(ssc->socket()))->getLocalPort();
	$var($SocketChannel, sc1, connect(port));
	$var($SocketChannel, sc2, ssc->accept());
	$init($File);
	$var($String, cmd, $str({$($System::getProperty("java.home"_s)), $File::separator, "bin"_s, $File::separator, "java"_s}));
	$var($String, testClasses, $System::getProperty("test.classes"_s));
	if (testClasses != nullptr) {
		$plusAssign(cmd, $$str({" -cp "_s, testClasses}));
	}
	$plusAssign(cmd, $$str({" SocketInheritance -child "_s, $$str(port)}));
	$var($Process, p, $nc($($Runtime::getRuntime()))->exec(cmd));
	$SocketInheritance$IOHandler::handle($($nc(p)->getInputStream()));
	$SocketInheritance$IOHandler::handle($($nc(p)->getErrorStream()));
	$var($SocketChannel, sc3, ssc->accept());
	$nc(sc1)->close();
	$nc(sc2)->close();
	$nc(sc3)->close();
	ssc->close();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(ssc, $ServerSocketChannel::open());
			$nc($($nc(ssc)->socket()))->bind($$new($InetSocketAddress, port));
			ssc->close();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(p)->destroy();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SocketInheritance::main($StringArray* args) {
	if (!$nc($($System::getProperty("os.name"_s)))->startsWith("Windows"_s)) {
		return;
	}
	if ($nc(args)->length == 0) {
		start();
	} else if ($nc(args->get(0))->equals("-child"_s)) {
		child($Integer::parseInt(args->get(1)));
	}
}

SocketInheritance::SocketInheritance() {
}

$Class* SocketInheritance::load$($String* name, bool initialize) {
	$loadClass(SocketInheritance, name, initialize, &_SocketInheritance_ClassInfo_, allocate$SocketInheritance);
	return class$;
}

$Class* SocketInheritance::class$ = nullptr;