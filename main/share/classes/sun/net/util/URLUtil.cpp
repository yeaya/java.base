#include <sun/net/util/URLUtil.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLPermission.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLPermission = ::java::net::URLPermission;
using $Permission = ::java::security::Permission;

namespace sun {
	namespace net {
		namespace util {

void URLUtil::init$() {
}

$String* URLUtil::urlNoFragString($URL* url) {
	$useLocalObjectStack();
	$var($StringBuilder, strForm, $new($StringBuilder));
	$var($String, protocol, $nc(url)->getProtocol());
	if (protocol != nullptr) {
		$assign(protocol, protocol->toLowerCase());
		strForm->append(protocol);
		strForm->append("://"_s);
	}
	$var($String, host, url->getHost());
	if (host != nullptr) {
		$assign(host, host->toLowerCase());
		strForm->append(host);
		int32_t port = url->getPort();
		if (port == -1) {
			port = url->getDefaultPort();
		}
		if (port != -1) {
			strForm->append(":"_s)->append(port);
		}
	}
	$var($String, file, url->getFile());
	if (file != nullptr) {
		strForm->append(file);
	}
	return strForm->toString();
}

$Permission* URLUtil::getConnectPermission($URL* url) {
	$useLocalObjectStack();
	$var($String, urlStringLowerCase, $$nc($nc(url)->toString())->toLowerCase());
	bool var$0 = urlStringLowerCase->startsWith("http:"_s);
	if (var$0 || urlStringLowerCase->startsWith("https:"_s)) {
		return getURLConnectPermission(url);
	} else {
		bool var$1 = urlStringLowerCase->startsWith("jar:http:"_s);
		if (var$1 || urlStringLowerCase->startsWith("jar:https:"_s)) {
			$var($String, urlString, url->toString());
			int32_t bangPos = $nc(urlString)->indexOf("!/"_s);
			$assign(urlString, urlString->substring(4, bangPos > -1 ? bangPos : urlString->length()));
			$var($URL, u, $new($URL, urlString));
			return getURLConnectPermission(u);
		} else {
			return $$nc(url->openConnection())->getPermission();
		}
	}
}

$Permission* URLUtil::getURLConnectPermission($URL* url) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc(url)->getProtocol()));
	var$0->append("://"_s);
	var$0->append($(url->getAuthority()));
	var$0->append($(url->getPath()));
	$var($String, urlString, $str(var$0));
	return $new($URLPermission, urlString);
}

URLUtil::URLUtil() {
}

$Class* URLUtil::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(URLUtil, init$, void)},
		{"getConnectPermission", "(Ljava/net/URL;)Ljava/security/Permission;", nullptr, $PUBLIC | $STATIC, $staticMethod(URLUtil, getConnectPermission, $Permission*, $URL*), "java.io.IOException"},
		{"getURLConnectPermission", "(Ljava/net/URL;)Ljava/security/Permission;", nullptr, $PRIVATE | $STATIC, $staticMethod(URLUtil, getURLConnectPermission, $Permission*, $URL*)},
		{"urlNoFragString", "(Ljava/net/URL;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(URLUtil, urlNoFragString, $String*, $URL*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.util.URLUtil",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(URLUtil, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLUtil);
	});
	return class$;
}

$Class* URLUtil::class$ = nullptr;

		} // util
	} // net
} // sun