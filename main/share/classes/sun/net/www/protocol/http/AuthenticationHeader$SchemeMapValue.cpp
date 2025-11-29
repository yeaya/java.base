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

$FieldInfo _AuthenticationHeader$SchemeMapValue_FieldInfo_[] = {
	{"raw", "Ljava/lang/String;", nullptr, 0, $field(AuthenticationHeader$SchemeMapValue, raw)},
	{"parser", "Lsun/net/www/HeaderParser;", nullptr, 0, $field(AuthenticationHeader$SchemeMapValue, parser)},
	{}
};

$MethodInfo _AuthenticationHeader$SchemeMapValue_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/HeaderParser;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AuthenticationHeader$SchemeMapValue::*)($HeaderParser*,$String*)>(&AuthenticationHeader$SchemeMapValue::init$))},
	{}
};

$InnerClassInfo _AuthenticationHeader$SchemeMapValue_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.AuthenticationHeader$SchemeMapValue", "sun.net.www.protocol.http.AuthenticationHeader", "SchemeMapValue", $STATIC},
	{}
};

$ClassInfo _AuthenticationHeader$SchemeMapValue_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.AuthenticationHeader$SchemeMapValue",
	"java.lang.Object",
	nullptr,
	_AuthenticationHeader$SchemeMapValue_FieldInfo_,
	_AuthenticationHeader$SchemeMapValue_MethodInfo_,
	nullptr,
	nullptr,
	_AuthenticationHeader$SchemeMapValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.AuthenticationHeader"
};

$Object* allocate$AuthenticationHeader$SchemeMapValue($Class* clazz) {
	return $of($alloc(AuthenticationHeader$SchemeMapValue));
}

void AuthenticationHeader$SchemeMapValue::init$($HeaderParser* h, $String* r) {
	$set(this, raw, r);
	$set(this, parser, h);
}

AuthenticationHeader$SchemeMapValue::AuthenticationHeader$SchemeMapValue() {
}

$Class* AuthenticationHeader$SchemeMapValue::load$($String* name, bool initialize) {
	$loadClass(AuthenticationHeader$SchemeMapValue, name, initialize, &_AuthenticationHeader$SchemeMapValue_ClassInfo_, allocate$AuthenticationHeader$SchemeMapValue);
	return class$;
}

$Class* AuthenticationHeader$SchemeMapValue::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun