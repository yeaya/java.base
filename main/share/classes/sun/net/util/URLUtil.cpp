#include <sun/net/util/URLUtil.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLPermission.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $URLPermission = ::java::net::URLPermission;
using $Permission = ::java::security::Permission;

namespace sun {
	namespace net {
		namespace util {

$MethodInfo _URLUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(URLUtil::*)()>(&URLUtil::init$))},
	{"getConnectPermission", "(Ljava/net/URL;)Ljava/security/Permission;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Permission*(*)($URL*)>(&URLUtil::getConnectPermission)), "java.io.IOException"},
	{"getURLConnectPermission", "(Ljava/net/URL;)Ljava/security/Permission;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Permission*(*)($URL*)>(&URLUtil::getURLConnectPermission))},
	{"urlNoFragString", "(Ljava/net/URL;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($URL*)>(&URLUtil::urlNoFragString))},
	{}
};

$ClassInfo _URLUtil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.util.URLUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_URLUtil_MethodInfo_
};

$Object* allocate$URLUtil($Class* clazz) {
	return $of($alloc(URLUtil));
}

void URLUtil::init$() {
}

$String* URLUtil::urlNoFragString($URL* url) {
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	$var($String, urlStringLowerCase, $nc($($nc(url)->toString()))->toLowerCase());
	bool var$0 = urlStringLowerCase->startsWith("http:"_s);
	if (var$0 || urlStringLowerCase->startsWith("https:"_s)) {
		return getURLConnectPermission(url);
	} else {
		bool var$2 = urlStringLowerCase->startsWith("jar:http:"_s);
		if (var$2 || urlStringLowerCase->startsWith("jar:https:"_s)) {
			$var($String, urlString, url->toString());
			int32_t bangPos = $nc(urlString)->indexOf("!/"_s);
			$assign(urlString, urlString->substring(4, bangPos > -1 ? bangPos : urlString->length()));
			$var($URL, u, $new($URL, urlString));
			return getURLConnectPermission(u);
		} else {
			return $nc($(url->openConnection()))->getPermission();
		}
	}
}

$Permission* URLUtil::getURLConnectPermission($URL* url) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($nc(url)->getProtocol()), "://"_s}));
	$var($String, var$0, $$concat(var$1, $(url->getAuthority())));
	$var($String, urlString, $concat(var$0, $(url->getPath())));
	return $new($URLPermission, urlString);
}

URLUtil::URLUtil() {
}

$Class* URLUtil::load$($String* name, bool initialize) {
	$loadClass(URLUtil, name, initialize, &_URLUtil_ClassInfo_, allocate$URLUtil);
	return class$;
}

$Class* URLUtil::class$ = nullptr;

		} // util
	} // net
} // sun