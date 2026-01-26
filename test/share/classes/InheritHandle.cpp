#include <InheritHandle.h>

#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/net/BindException.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

#undef SLEEPTIME_MS

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $BindException = ::java::net::BindException;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _InheritHandle_FieldInfo_[] = {
	{"SLEEPTIME_MS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InheritHandle, SLEEPTIME_MS)},
	{}
};

$MethodInfo _InheritHandle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InheritHandle, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InheritHandle, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _InheritHandle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InheritHandle",
	"java.lang.Object",
	nullptr,
	_InheritHandle_FieldInfo_,
	_InheritHandle_MethodInfo_
};

$Object* allocate$InheritHandle($Class* clazz) {
	return $of($alloc(InheritHandle));
}

void InheritHandle::init$() {
}

void InheritHandle::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t port = 0;
	{
		$var($DatagramSocket, sock, $new($DatagramSocket, 0));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					sock->setReuseAddress(true);
					port = sock->getLocalPort();
					$nc($($Runtime::getRuntime()))->exec("sleep 10"_s);
				} catch ($Throwable& t$) {
					try {
						sock->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				sock->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	{
		$var($DatagramSocket, sock, $new($DatagramSocket, ($SocketAddress*)nullptr));
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					sock->setReuseAddress(true);
					int32_t retries = 0;
					bool isWindows = $nc($($System::getProperty("os.name"_s)))->startsWith("Windows"_s);
					$var($InetSocketAddress, addr, $new($InetSocketAddress, port));
					while (true) {
						try {
							sock->bind(addr);
							break;
						} catch ($BindException& e) {
							if (isWindows && retries++ < 5) {
								$Thread::sleep(InheritHandle::SLEEPTIME_MS);
								$nc($System::out)->println($$str({"BindException \""_s, $(e->getMessage()), "\", retrying..."_s}));
								continue;
							} else {
								$throw(e);
							}
						}
					}
				} catch ($Throwable& t$) {
					try {
						sock->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				sock->close();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

InheritHandle::InheritHandle() {
}

$Class* InheritHandle::load$($String* name, bool initialize) {
	$loadClass(InheritHandle, name, initialize, &_InheritHandle_ClassInfo_, allocate$InheritHandle);
	return class$;
}

$Class* InheritHandle::class$ = nullptr;