#include <sun/net/www/protocol/http/HttpURLConnection$1.h>

#include <java/net/Authenticator$RequestorType.h>
#include <java/net/Authenticator.h>
#include <java/net/InetAddress.h>
#include <java/net/PasswordAuthentication.h>
#include <java/net/URL.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINEST

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $Authenticator$RequestorType = ::java::net::Authenticator$RequestorType;
using $InetAddress = ::java::net::InetAddress;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $URL = ::java::net::URL;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _HttpURLConnection$1_FieldInfo_[] = {
	{"val$authType", "Ljava/net/Authenticator$RequestorType;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$1, val$authType)},
	{"val$scheme", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$1, val$scheme)},
	{"val$prompt", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$1, val$prompt)},
	{"val$protocol", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$1, val$protocol)},
	{"val$port", "I", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$1, val$port)},
	{"val$addr", "Ljava/net/InetAddress;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$1, val$addr)},
	{"val$authenticator", "Ljava/net/Authenticator;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$1, val$authenticator)},
	{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$1, val$url)},
	{"val$host", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$1, val$host)},
	{}
};

$MethodInfo _HttpURLConnection$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/Authenticator$RequestorType;)V", nullptr, 0, $method(static_cast<void(HttpURLConnection$1::*)($String*,$URL*,$Authenticator*,$InetAddress*,int32_t,$String*,$String*,$String*,$Authenticator$RequestorType*)>(&HttpURLConnection$1::init$))},
	{"run", "()Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpURLConnection$1_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.HttpURLConnection",
	"privilegedRequestPasswordAuthentication",
	"(Ljava/net/Authenticator;Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;"
};

$InnerClassInfo _HttpURLConnection$1_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$1", nullptr, nullptr, 0},
	{"java.net.Authenticator$RequestorType", "java.net.Authenticator", "RequestorType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _HttpURLConnection$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.HttpURLConnection$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_HttpURLConnection$1_FieldInfo_,
	_HttpURLConnection$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/PasswordAuthentication;>;",
	&_HttpURLConnection$1_EnclosingMethodInfo_,
	_HttpURLConnection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$1($Class* clazz) {
	return $of($alloc(HttpURLConnection$1));
}

void HttpURLConnection$1::init$($String* val$host, $URL* val$url, $Authenticator* val$authenticator, $InetAddress* val$addr, int32_t val$port, $String* val$protocol, $String* val$prompt, $String* val$scheme, $Authenticator$RequestorType* val$authType) {
	$set(this, val$host, val$host);
	$set(this, val$url, val$url);
	$set(this, val$authenticator, val$authenticator);
	$set(this, val$addr, val$addr);
	this->val$port = val$port;
	$set(this, val$protocol, val$protocol);
	$set(this, val$prompt, val$prompt);
	$set(this, val$scheme, val$scheme);
	$set(this, val$authType, val$authType);
}

$Object* HttpURLConnection$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($HttpURLConnection);
	$init($PlatformLogger$Level);
	if ($nc($HttpURLConnection::logger)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc($HttpURLConnection::logger)->finest($$str({"Requesting Authentication: host ="_s, this->val$host, " url = "_s, this->val$url}));
	}
	$var($PasswordAuthentication, pass, $Authenticator::requestPasswordAuthentication(this->val$authenticator, this->val$host, this->val$addr, this->val$port, this->val$protocol, this->val$prompt, this->val$scheme, this->val$url, this->val$authType));
	if ($nc($HttpURLConnection::logger)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc($HttpURLConnection::logger)->finest($$str({"Authentication returned: "_s, (pass != nullptr ? $($nc($of(pass))->toString()) : "null"_s)}));
	}
	return $of(pass);
}

HttpURLConnection$1::HttpURLConnection$1() {
}

$Class* HttpURLConnection$1::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$1, name, initialize, &_HttpURLConnection$1_ClassInfo_, allocate$HttpURLConnection$1);
	return class$;
}

$Class* HttpURLConnection$1::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun