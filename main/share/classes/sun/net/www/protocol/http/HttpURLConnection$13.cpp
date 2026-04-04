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

$ints* HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme = nullptr;

void HttpURLConnection$13::clinit$($Class* clazz) {
	$assignStatic(HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme, $new($ints, $($AuthScheme::values())->length));
	{
		try {
			HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme->set($AuthScheme::BASIC->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme->set($AuthScheme::DIGEST->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme->set($AuthScheme::NTLM->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme->set($AuthScheme::NEGOTIATE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme->set($AuthScheme::KERBEROS->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			HttpURLConnection$13::$SwitchMap$sun$net$www$protocol$http$AuthScheme->set($AuthScheme::UNKNOWN->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

HttpURLConnection$13::HttpURLConnection$13() {
}

$Class* HttpURLConnection$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$net$www$protocol$http$AuthScheme", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HttpURLConnection$13, $SwitchMap$sun$net$www$protocol$http$AuthScheme)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.http.HttpURLConnection",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.HttpURLConnection$13", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.net.www.protocol.http.HttpURLConnection$13",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.HttpURLConnection"
	};
	$loadClass(HttpURLConnection$13, name, initialize, &classInfo$$, HttpURLConnection$13::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HttpURLConnection$13);
	});
	return class$;
}

$Class* HttpURLConnection$13::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun