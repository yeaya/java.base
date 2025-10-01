#include <InheritHandle.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $Process = ::java::lang::Process;
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InheritHandle::*)()>(&InheritHandle::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InheritHandle::main)), "java.lang.Exception"},
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
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						sock->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
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
			$var($Throwable, var$1, nullptr);
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
						} catch ($BindException&) {
							$var($BindException, e, $catch());
							if (isWindows && retries++ < 5) {
								$Thread::sleep(InheritHandle::SLEEPTIME_MS);
								$nc($System::out)->println($$str({"BindException \""_s, $(e->getMessage()), "\", retrying..."_s}));
								continue;
							} else {
								$throw(e);
							}
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						sock->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$1, $catch());
			} /*finally*/ {
				sock->close();
			}
			if (var$1 != nullptr) {
				$throw(var$1);
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