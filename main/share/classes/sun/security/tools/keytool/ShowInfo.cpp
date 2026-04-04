#include <sun/security/tools/keytool/ShowInfo.h>
#include <java/net/Socket.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLSocket.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLSocket = ::javax::net::ssl::SSLSocket;

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

void ShowInfo::init$() {
}

void ShowInfo::tls(bool verbose) {
	$useLocalObjectStack();
	$var($SSLSocket, ssls, $cast($SSLSocket, $$nc($$nc($SSLContext::getDefault())->getSocketFactory())->createSocket()));
	$nc($System::out)->println("Enabled Protocols"_s);
	$System::out->println("-----------------"_s);
	{
		$var($StringArray, arr$, $nc(ssls)->getEnabledProtocols());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				$System::out->println(s);
			}
		}
	}
	$System::out->println();
	$System::out->println("Enabled Cipher Suites"_s);
	$System::out->println("---------------------"_s);
	{
		$var($StringArray, arr$, ssls->getEnabledCipherSuites());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				$System::out->println(s);
			}
		}
	}
}

ShowInfo::ShowInfo() {
}

$Class* ShowInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ShowInfo, init$, void)},
		{"tls", "(Z)V", nullptr, $STATIC, $staticMethod(ShowInfo, tls, void, bool), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.tools.keytool.ShowInfo",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ShowInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShowInfo);
	});
	return class$;
}

$Class* ShowInfo::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun