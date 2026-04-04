#include <sun/net/www/protocol/ftp/Handler.h>
#include <java/net/Proxy.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <java/util/Objects.h>
#include <sun/net/www/protocol/ftp/FtpURLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::net::Proxy;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $Objects = ::java::util::Objects;
using $FtpURLConnection = ::sun::net::www::protocol::ftp::FtpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace ftp {

void Handler::init$() {
	$URLStreamHandler::init$();
}

int32_t Handler::getDefaultPort() {
	return 21;
}

bool Handler::equals($URL* u1, $URL* u2) {
	$useLocalObjectStack();
	$var($String, userInfo1, $nc(u1)->getUserInfo());
	$var($String, userInfo2, $nc(u2)->getUserInfo());
	bool var$0 = $URLStreamHandler::equals(u1, u2);
	return var$0 && $Objects::equals(userInfo1, userInfo2);
}

$URLConnection* Handler::openConnection($URL* u) {
	return openConnection(u, nullptr);
}

$URLConnection* Handler::openConnection($URL* u, $Proxy* p) {
	return $new($FtpURLConnection, u, p);
}

Handler::Handler() {
}

$Class* Handler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Handler, init$, void)},
		{"equals", "(Ljava/net/URL;Ljava/net/URL;)Z", nullptr, $PROTECTED, $virtualMethod(Handler, equals, bool, $URL*, $URL*)},
		{"getDefaultPort", "()I", nullptr, $PROTECTED, $virtualMethod(Handler, getDefaultPort, int32_t)},
		{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PROTECTED, $virtualMethod(Handler, openConnection, $URLConnection*, $URL*), "java.io.IOException"},
		{"openConnection", "(Ljava/net/URL;Ljava/net/Proxy;)Ljava/net/URLConnection;", nullptr, $PROTECTED, $virtualMethod(Handler, openConnection, $URLConnection*, $URL*, $Proxy*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.www.protocol.ftp.Handler",
		"java.net.URLStreamHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Handler);
	});
	return class$;
}

$Class* Handler::class$ = nullptr;

				} // ftp
			} // protocol
		} // www
	} // net
} // sun