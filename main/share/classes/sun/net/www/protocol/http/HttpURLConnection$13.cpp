#include <sun/net/www/protocol/http/HttpURLConnection$13.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/net/www/protocol/http/AuthScheme.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

#undef BASIC
#undef DIGEST
#undef KERBEROS
#undef NEGOTIATE
#undef NTLM
#undef UNKNOWN

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $AuthScheme = ::sun::net::www::protocol::http::AuthScheme;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _HttpURLConnection$13_FieldInfo_[] = {
	{"$SwitchMap$sun$net$www$protocol$http$AuthScheme", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HttpURLConnection$13, $SwitchMap$sun$net$www$protocol$http$AuthScheme)},
	{}
};

$EnclosingMethodInfo _HttpURLConnection$13_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.HttpURLConnection",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpURLConnection$13_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$13", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _HttpURLConnection$13_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.net.www.protocol.http.HttpURLConnection$13",
	"java.lang.Object",
	nullptr,
	_HttpURLConnection$13_FieldInfo_,
	nullptr,
	nullptr,
	&_HttpURLConnection$13_EnclosingMethodInfo_,
	_HttpURLConnection$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$13($Class* clazz) {
	return $of($alloc(HttpURLConnection$13));
}

$ints* HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme = nullptr;

void clinit$HttpURLConnection$13($Class* class$) {
	$assignStatic(HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme, $new($ints, $($AuthScheme::values())->length));
	{
		try {
			$nc(HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme)->set($AuthScheme::BASIC->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme)->set($AuthScheme::DIGEST->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme)->set($AuthScheme::NTLM->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme)->set($AuthScheme::NEGOTIATE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme)->set($AuthScheme::KERBEROS->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme)->set($AuthScheme::UNKNOWN->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

HttpURLConnection$13::HttpURLConnection$13() {
}

$Class* HttpURLConnection$13::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$13, name, initialize, &_HttpURLConnection$13_ClassInfo_, clinit$HttpURLConnection$13, allocate$HttpURLConnection$13);
	return class$;
}

$Class* HttpURLConnection$13::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun