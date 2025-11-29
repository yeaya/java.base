#include <sun/net/www/protocol/http/HttpURLConnection$5.h>

#include <java/net/InetAddress.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _HttpURLConnection$5_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$5, this$0)},
	{"val$hostarg", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$5, val$hostarg)},
	{}
};

$MethodInfo _HttpURLConnection$5_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(HttpURLConnection$5::*)($HttpURLConnection*,$String*)>(&HttpURLConnection$5::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _HttpURLConnection$5_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.HttpURLConnection",
	"getHostAndPort",
	"(Ljava/net/URL;)Ljava/lang/String;"
};

$InnerClassInfo _HttpURLConnection$5_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpURLConnection$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.HttpURLConnection$5",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_HttpURLConnection$5_FieldInfo_,
	_HttpURLConnection$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/String;>;",
	&_HttpURLConnection$5_EnclosingMethodInfo_,
	_HttpURLConnection$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$5($Class* clazz) {
	return $of($alloc(HttpURLConnection$5));
}

void HttpURLConnection$5::init$($HttpURLConnection* this$0, $String* val$hostarg) {
	$set(this, this$0, this$0);
	$set(this, val$hostarg, val$hostarg);
}

$Object* HttpURLConnection$5::run() {
	$var($InetAddress, addr, $InetAddress::getByName(this->val$hostarg));
	return $of($nc(addr)->getHostAddress());
}

HttpURLConnection$5::HttpURLConnection$5() {
}

$Class* HttpURLConnection$5::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$5, name, initialize, &_HttpURLConnection$5_ClassInfo_, allocate$HttpURLConnection$5);
	return class$;
}

$Class* HttpURLConnection$5::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun