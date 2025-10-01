#include <AdaptServerSocket$1.h>

#include <AdaptServerSocket.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $AdaptServerSocket = ::AdaptServerSocket;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _AdaptServerSocket$1_FieldInfo_[] = {
	{"val$port", "I", nullptr, $FINAL | $SYNTHETIC, $field(AdaptServerSocket$1, val$port)},
	{"val$dally", "I", nullptr, $FINAL | $SYNTHETIC, $field(AdaptServerSocket$1, val$dally)},
	{}
};

$MethodInfo _AdaptServerSocket$1_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(AdaptServerSocket$1::*)(int32_t,int32_t)>(&AdaptServerSocket$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AdaptServerSocket$1_EnclosingMethodInfo_ = {
	"AdaptServerSocket",
	"startClient",
	"(II)V"
};

$InnerClassInfo _AdaptServerSocket$1_InnerClassesInfo_[] = {
	{"AdaptServerSocket$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AdaptServerSocket$1_ClassInfo_ = {
	$ACC_SUPER,
	"AdaptServerSocket$1",
	"java.lang.Thread",
	nullptr,
	_AdaptServerSocket$1_FieldInfo_,
	_AdaptServerSocket$1_MethodInfo_,
	nullptr,
	&_AdaptServerSocket$1_EnclosingMethodInfo_,
	_AdaptServerSocket$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AdaptServerSocket"
};

$Object* allocate$AdaptServerSocket$1($Class* clazz) {
	return $of($alloc(AdaptServerSocket$1));
}

void AdaptServerSocket$1::init$(int32_t val$dally, int32_t val$port) {
	this->val$dally = val$dally;
	this->val$port = val$port;
	$Thread::init$();
}

void AdaptServerSocket$1::run() {
	try {
		$var($Socket, so, $new($Socket));
		{
			$var($Throwable, var$0, nullptr);
			bool return$1 = false;
			try {
				try {
					$init($AdaptServerSocket);
					$nc($AdaptServerSocket::out)->println($$str({"client:  "_s, so}));
					$AdaptServerSocket::clientStarted = true;
					if (this->val$dally > 0) {
						$Thread::sleep(this->val$dally);
					}
					so->connect($$new($InetSocketAddress, this->val$port));
					if ($Thread::interrupted()) {
						$nc($AdaptServerSocket::out)->println("client interrupted"_s);
						return$1 = true;
						goto $finally;
					}
					$nc($AdaptServerSocket::out)->println($$str({"client:  "_s, so}));
					int32_t a = $nc($(so->getInputStream()))->read();
					$nc($AdaptServerSocket::out)->println($$str({"client:  read "_s, $$str(a)}));
					a += 1;
					$nc($(so->getOutputStream()))->write(a);
					$nc($AdaptServerSocket::out)->println($$str({"client:  wrote "_s, $$str(a)}));
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						so->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				so->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return;
			}
		}
	} catch ($Exception&) {
		$var($Exception, x, $catch());
		if ($instanceOf($InterruptedException, x)) {
			return;
		}
		$init($AdaptServerSocket);
		$assignStatic($AdaptServerSocket::clientException, x);
		x->printStackTrace();
	}
}

AdaptServerSocket$1::AdaptServerSocket$1() {
}

$Class* AdaptServerSocket$1::load$($String* name, bool initialize) {
	$loadClass(AdaptServerSocket$1, name, initialize, &_AdaptServerSocket$1_ClassInfo_, allocate$AdaptServerSocket$1);
	return class$;
}

$Class* AdaptServerSocket$1::class$ = nullptr;