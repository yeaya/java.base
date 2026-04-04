#include <sun/net/www/protocol/http/AuthenticationHeader$SchemeMapValue.h>
#include <sun/net/www/HeaderParser.h>
#include <sun/net/www/protocol/http/AuthenticationHeader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HeaderParser = ::sun::net::www::HeaderParser;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

void AuthenticationHeader$SchemeMapValue::init$($HeaderParser* h, $String* r) {
	$set(this, raw, r);
	$set(this, parser, h);
}

AuthenticationHeader$SchemeMapValue::AuthenticationHeader$SchemeMapValue() {
}

$Class* AuthenticationHeader$SchemeMapValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"raw", "Ljava/lang/String;", nullptr, 0, $field(AuthenticationHeader$SchemeMapValue, raw)},
		{"parser", "Lsun/net/www/HeaderParser;", nullptr, 0, $field(AuthenticationHeader$SchemeMapValue, parser)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/HeaderParser;Ljava/lang/String;)V", nullptr, 0, $method(AuthenticationHeader$SchemeMapValue, init$, void, $HeaderParser*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.AuthenticationHeader$SchemeMapValue", "sun.net.www.protocol.http.AuthenticationHeader", "SchemeMapValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.AuthenticationHeader$SchemeMapValue",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.AuthenticationHeader"
	};
	$loadClass(AuthenticationHeader$SchemeMapValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AuthenticationHeader$SchemeMapValue);
	});
	return class$;
}

$Class* AuthenticationHeader$SchemeMapValue::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun