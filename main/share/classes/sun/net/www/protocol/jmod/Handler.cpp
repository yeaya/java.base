#include <sun/net/www/protocol/jmod/Handler.h>
#include <java/io/IOException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $URLStreamHandler = ::java::net::URLStreamHandler;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jmod {

void Handler::init$() {
	$URLStreamHandler::init$();
}

$URLConnection* Handler::openConnection($URL* url) {
	$useLocalObjectStack();
	$var($String, s, $nc(url)->toString());
	int32_t index = $nc(s)->indexOf("!/"_s);
	if (index == -1) {
		$throwNew($MalformedURLException, $$str({"no !/ found in url spec:"_s, s}));
	}
	$throwNew($IOException, "Can\'t connect to jmod URL"_s);
	$shouldNotReachHere();
}

Handler::Handler() {
}

$Class* Handler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Handler, init$, void)},
		{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PROTECTED, $virtualMethod(Handler, openConnection, $URLConnection*, $URL*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.www.protocol.jmod.Handler",
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

				} // jmod
			} // protocol
		} // www
	} // net
} // sun