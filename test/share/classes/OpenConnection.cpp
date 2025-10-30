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

$MethodInfo _OpenConnection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OpenConnection::*)()>(&OpenConnection::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OpenConnection::main)), "java.io.IOException"},
	{}
};

$ClassInfo _OpenConnection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OpenConnection",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OpenConnection_MethodInfo_
};

$Object* allocate$OpenConnection($Class* clazz) {
	return $of($alloc(OpenConnection));
}

void OpenConnection::init$() {
}

void OpenConnection::main($StringArray* args) {
	$load(OpenConnection);
	$useLocalCurrentObjectStackCache();
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
	$loadClass(OpenConnection, name, initialize, &_OpenConnection_ClassInfo_, allocate$OpenConnection);
	return class$;
}

$Class* OpenConnection::class$ = nullptr;