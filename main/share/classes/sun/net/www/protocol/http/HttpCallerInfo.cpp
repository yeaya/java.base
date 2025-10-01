#include <sun/net/www/protocol/http/HttpCallerInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Authenticator$RequestorType.h>
#include <java/net/Authenticator.h>
#include <java/net/InetAddress.h>
#include <java/net/URL.h>
#include <jcpp.h>

#undef PROXY
#undef SERVER

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $Authenticator$RequestorType = ::java::net::Authenticator$RequestorType;
using $InetAddress = ::java::net::InetAddress;
using $URL = ::java::net::URL;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _HttpCallerInfo_FieldInfo_[] = {
	{"url", "Ljava/net/URL;", nullptr, $PUBLIC | $FINAL, $field(HttpCallerInfo, url)},
	{"host", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(HttpCallerInfo, host)},
	{"protocol", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(HttpCallerInfo, protocol)},
	{"prompt", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(HttpCallerInfo, prompt)},
	{"scheme", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(HttpCallerInfo, scheme)},
	{"port", "I", nullptr, $PUBLIC | $FINAL, $field(HttpCallerInfo, port)},
	{"addr", "Ljava/net/InetAddress;", nullptr, $PUBLIC | $FINAL, $field(HttpCallerInfo, addr)},
	{"authType", "Ljava/net/Authenticator$RequestorType;", nullptr, $PUBLIC | $FINAL, $field(HttpCallerInfo, authType)},
	{"authenticator", "Ljava/net/Authenticator;", nullptr, $PUBLIC | $FINAL, $field(HttpCallerInfo, authenticator)},
	{}
};

$MethodInfo _HttpCallerInfo_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/HttpCallerInfo;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpCallerInfo::*)(HttpCallerInfo*,$String*)>(&HttpCallerInfo::init$))},
	{"<init>", "(Ljava/net/URL;Ljava/net/Authenticator;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpCallerInfo::*)($URL*,$Authenticator*)>(&HttpCallerInfo::init$))},
	{"<init>", "(Ljava/net/URL;Ljava/lang/String;ILjava/net/Authenticator;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpCallerInfo::*)($URL*,$String*,int32_t,$Authenticator*)>(&HttpCallerInfo::init$))},
	{}
};

$ClassInfo _HttpCallerInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.net.www.protocol.http.HttpCallerInfo",
	"java.lang.Object",
	nullptr,
	_HttpCallerInfo_FieldInfo_,
	_HttpCallerInfo_MethodInfo_
};

$Object* allocate$HttpCallerInfo($Class* clazz) {
	return $of($alloc(HttpCallerInfo));
}

void HttpCallerInfo::init$(HttpCallerInfo* old, $String* scheme) {
	$set(this, url, $nc(old)->url);
	$set(this, host, old->host);
	$set(this, protocol, old->protocol);
	$set(this, prompt, old->prompt);
	this->port = old->port;
	$set(this, addr, old->addr);
	$set(this, authType, old->authType);
	$set(this, scheme, scheme);
	$set(this, authenticator, old->authenticator);
}

void HttpCallerInfo::init$($URL* url, $Authenticator* a) {
	$set(this, url, url);
	$set(this, prompt, ""_s);
	$set(this, host, $nc(url)->getHost());
	int32_t p = url->getPort();
	if (p == -1) {
		this->port = url->getDefaultPort();
	} else {
		this->port = p;
	}
	$var($InetAddress, ia, nullptr);
	try {
		$assign(ia, $InetAddress::getByName($(url->getHost())));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$assign(ia, nullptr);
	}
	$set(this, addr, ia);
	$set(this, protocol, url->getProtocol());
	$init($Authenticator$RequestorType);
	$set(this, authType, $Authenticator$RequestorType::SERVER);
	$set(this, scheme, ""_s);
	$set(this, authenticator, a);
}

void HttpCallerInfo::init$($URL* url, $String* host, int32_t port, $Authenticator* a) {
	$set(this, url, url);
	$set(this, host, host);
	this->port = port;
	$set(this, prompt, ""_s);
	$set(this, addr, nullptr);
	$set(this, protocol, $nc(url)->getProtocol());
	$init($Authenticator$RequestorType);
	$set(this, authType, $Authenticator$RequestorType::PROXY);
	$set(this, scheme, ""_s);
	$set(this, authenticator, a);
}

HttpCallerInfo::HttpCallerInfo() {
}

$Class* HttpCallerInfo::load$($String* name, bool initialize) {
	$loadClass(HttpCallerInfo, name, initialize, &_HttpCallerInfo_ClassInfo_, allocate$HttpCallerInfo);
	return class$;
}

$Class* HttpCallerInfo::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun