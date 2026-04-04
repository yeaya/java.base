#include <OpenConnection.h>
#include <java/lang/SecurityManager.h>
#include <java/net/Proxy.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

#undef NO_PROXY

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Proxy = ::java::net::Proxy;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $UnknownHostException = ::java::net::UnknownHostException;

void OpenConnection::init$() {
}

void OpenConnection::main($StringArray* args) {
	$useLocalObjectStack();
	$load(OpenConnection);
	$beforeCallerSensitive();
	$System::setSecurityManager($$new($SecurityManager));
	$var($URL, u, $new($URL, "http://foo.bar.baz/"_s));
	try {
		$init($Proxy);
		$var($URLConnection, con, u->openConnection($Proxy::NO_PROXY));
	} catch ($UnknownHostException& ex) {
		return;
	}
}

OpenConnection::OpenConnection() {
}

$Class* OpenConnection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OpenConnection, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(OpenConnection, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"OpenConnection",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OpenConnection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenConnection);
	});
	return class$;
}

$Class* OpenConnection::class$ = nullptr;