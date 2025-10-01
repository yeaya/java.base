#include <sun/security/tools/keytool/ShowInfo.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Socket.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLSocket.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $SocketFactory = ::javax::net::SocketFactory;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

$MethodInfo _ShowInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ShowInfo::*)()>(&ShowInfo::init$))},
	{"tls", "(Z)V", nullptr, $STATIC, $method(static_cast<void(*)(bool)>(&ShowInfo::tls)), "java.lang.Exception"},
	{}
};

$ClassInfo _ShowInfo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.tools.keytool.ShowInfo",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ShowInfo_MethodInfo_
};

$Object* allocate$ShowInfo($Class* clazz) {
	return $of($alloc(ShowInfo));
}

void ShowInfo::init$() {
}

void ShowInfo::tls(bool verbose) {
	$var($SSLSocket, ssls, $cast($SSLSocket, $nc($($nc($($SSLContext::getDefault()))->getSocketFactory()))->createSocket()));
	$init($System);
	$nc($System::out)->println("Enabled Protocols"_s);
	$nc($System::out)->println("-----------------"_s);
	{
		$var($StringArray, arr$, $nc(ssls)->getEnabledProtocols());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				$nc($System::out)->println(s);
			}
		}
	}
	$nc($System::out)->println();
	$nc($System::out)->println("Enabled Cipher Suites"_s);
	$nc($System::out)->println("---------------------"_s);
	{
		$var($StringArray, arr$, ssls->getEnabledCipherSuites());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				$nc($System::out)->println(s);
			}
		}
	}
}

ShowInfo::ShowInfo() {
}

$Class* ShowInfo::load$($String* name, bool initialize) {
	$loadClass(ShowInfo, name, initialize, &_ShowInfo_ClassInfo_, allocate$ShowInfo);
	return class$;
}

$Class* ShowInfo::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun