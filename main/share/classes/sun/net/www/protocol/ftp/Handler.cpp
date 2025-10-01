#include <sun/net/www/protocol/ftp/Handler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Proxy.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <java/util/Objects.h>
#include <sun/net/www/URLConnection.h>
#include <sun/net/www/protocol/ftp/FtpURLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::net::Proxy;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $Objects = ::java::util::Objects;
using $1URLConnection = ::sun::net::www::URLConnection;
using $FtpURLConnection = ::sun::net::www::protocol::ftp::FtpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace ftp {

$MethodInfo _Handler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Handler::*)()>(&Handler::init$))},
	{"equals", "(Ljava/net/URL;Ljava/net/URL;)Z", nullptr, $PROTECTED},
	{"getDefaultPort", "()I", nullptr, $PROTECTED},
	{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"openConnection", "(Ljava/net/URL;Ljava/net/Proxy;)Ljava/net/URLConnection;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _Handler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.protocol.ftp.Handler",
	"java.net.URLStreamHandler",
	nullptr,
	nullptr,
	_Handler_MethodInfo_
};

$Object* allocate$Handler($Class* clazz) {
	return $of($alloc(Handler));
}

void Handler::init$() {
	$URLStreamHandler::init$();
}

int32_t Handler::getDefaultPort() {
	return 21;
}

bool Handler::equals($URL* u1, $URL* u2) {
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
	$loadClass(Handler, name, initialize, &_Handler_ClassInfo_, allocate$Handler);
	return class$;
}

$Class* Handler::class$ = nullptr;

				} // ftp
			} // protocol
		} // www
	} // net
} // sun