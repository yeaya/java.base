#include <SoTimeout.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Runnable.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _SoTimeout_FieldInfo_[] = {
	{"serverSocket", "Ljava/net/ServerSocket;", nullptr, $STATIC, $staticField(SoTimeout, serverSocket)},
	{"timeWritten", "J", nullptr, $STATIC, $staticField(SoTimeout, timeWritten)},
	{"addr", "Ljava/net/InetAddress;", nullptr, $STATIC, $staticField(SoTimeout, addr)},
	{"port", "I", nullptr, $STATIC, $staticField(SoTimeout, port)},
	{}
};

$MethodInfo _SoTimeout_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SoTimeout, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SoTimeout, main, void, $StringArray*), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SoTimeout, run, void)},
	{}
};

$ClassInfo _SoTimeout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SoTimeout",
	"java.lang.Object",
	"java.lang.Runnable",
	_SoTimeout_FieldInfo_,
	_SoTimeout_MethodInfo_
};

$Object* allocate$SoTimeout($Class* clazz) {
	return $of($alloc(SoTimeout));
}

$ServerSocket* SoTimeout::serverSocket = nullptr;
int64_t SoTimeout::timeWritten = 0;
$InetAddress* SoTimeout::addr = nullptr;
int32_t SoTimeout::port = 0;

void SoTimeout::init$() {
}

void SoTimeout::main($StringArray* args) {
	$init(SoTimeout);
	$useLocalCurrentObjectStackCache();
	$assignStatic(SoTimeout::addr, $InetAddress::getLocalHost());
	$assignStatic(SoTimeout::serverSocket, $new($ServerSocket));
	$nc(SoTimeout::serverSocket)->bind($$new($InetSocketAddress, SoTimeout::addr, 0));
	SoTimeout::port = $nc(SoTimeout::serverSocket)->getLocalPort();
	$var($bytes, b, $new($bytes, 12));
	$var($Thread, t, $new($Thread, static_cast<$Runnable*>($$new(SoTimeout))));
	t->start();
	$var($Socket, s, $nc(SoTimeout::serverSocket)->accept());
	$nc(SoTimeout::serverSocket)->close();
	$nc(s)->setSoTimeout(5000);
	$nc($(s->getInputStream()))->read(b, 0, b->length);
	s->close();
	int64_t waited = $System::currentTimeMillis() - SoTimeout::timeWritten;
	if (waited > 2000) {
		$throwNew($Exception, $$str({"shouldn\'t take "_s, $$str(waited), " to complete"_s}));
	}
}

void SoTimeout::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, b, $new($bytes, 12));
		$var($Socket, s, $new($Socket, SoTimeout::addr, SoTimeout::port));
		$Thread::yield();
		SoTimeout::timeWritten = $System::currentTimeMillis();
		$nc($(s->getOutputStream()))->write(b, 0, 12);
		s->close();
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

SoTimeout::SoTimeout() {
}

$Class* SoTimeout::load$($String* name, bool initialize) {
	$loadClass(SoTimeout, name, initialize, &_SoTimeout_ClassInfo_, allocate$SoTimeout);
	return class$;
}

$Class* SoTimeout::class$ = nullptr;