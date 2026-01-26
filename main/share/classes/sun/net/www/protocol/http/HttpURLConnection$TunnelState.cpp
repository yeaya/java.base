#include <sun/net/www/protocol/http/HttpURLConnection$TunnelState.h>

#include <java/lang/Enum.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

#undef NONE
#undef SETUP
#undef TUNNELING

using $HttpURLConnection$TunnelStateArray = $Array<::sun::net::www::protocol::http::HttpURLConnection$TunnelState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _HttpURLConnection$TunnelState_FieldInfo_[] = {
	{"NONE", "Lsun/net/www/protocol/http/HttpURLConnection$TunnelState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(HttpURLConnection$TunnelState, NONE)},
	{"SETUP", "Lsun/net/www/protocol/http/HttpURLConnection$TunnelState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(HttpURLConnection$TunnelState, SETUP)},
	{"TUNNELING", "Lsun/net/www/protocol/http/HttpURLConnection$TunnelState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(HttpURLConnection$TunnelState, TUNNELING)},
	{"$VALUES", "[Lsun/net/www/protocol/http/HttpURLConnection$TunnelState;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(HttpURLConnection$TunnelState, $VALUES)},
	{}
};

$MethodInfo _HttpURLConnection$TunnelState_MethodInfo_[] = {
	{"$values", "()[Lsun/net/www/protocol/http/HttpURLConnection$TunnelState;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpURLConnection$TunnelState, $values, $HttpURLConnection$TunnelStateArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(HttpURLConnection$TunnelState, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Lsun/net/www/protocol/http/HttpURLConnection$TunnelState;", nullptr, $PUBLIC | $STATIC, $staticMethod(HttpURLConnection$TunnelState, valueOf, HttpURLConnection$TunnelState*, $String*)},
	{"values", "()[Lsun/net/www/protocol/http/HttpURLConnection$TunnelState;", nullptr, $PUBLIC | $STATIC, $staticMethod(HttpURLConnection$TunnelState, values, $HttpURLConnection$TunnelStateArray*)},
	{}
};

$InnerClassInfo _HttpURLConnection$TunnelState_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$TunnelState", "sun.net.www.protocol.http.HttpURLConnection", "TunnelState", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _HttpURLConnection$TunnelState_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.net.www.protocol.http.HttpURLConnection$TunnelState",
	"java.lang.Enum",
	nullptr,
	_HttpURLConnection$TunnelState_FieldInfo_,
	_HttpURLConnection$TunnelState_MethodInfo_,
	"Ljava/lang/Enum<Lsun/net/www/protocol/http/HttpURLConnection$TunnelState;>;",
	nullptr,
	_HttpURLConnection$TunnelState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$TunnelState($Class* clazz) {
	return $of($alloc(HttpURLConnection$TunnelState));
}

HttpURLConnection$TunnelState* HttpURLConnection$TunnelState::NONE = nullptr;
HttpURLConnection$TunnelState* HttpURLConnection$TunnelState::SETUP = nullptr;
HttpURLConnection$TunnelState* HttpURLConnection$TunnelState::TUNNELING = nullptr;
$HttpURLConnection$TunnelStateArray* HttpURLConnection$TunnelState::$VALUES = nullptr;

$HttpURLConnection$TunnelStateArray* HttpURLConnection$TunnelState::$values() {
	$init(HttpURLConnection$TunnelState);
	return $new($HttpURLConnection$TunnelStateArray, {
		HttpURLConnection$TunnelState::NONE,
		HttpURLConnection$TunnelState::SETUP,
		HttpURLConnection$TunnelState::TUNNELING
	});
}

$HttpURLConnection$TunnelStateArray* HttpURLConnection$TunnelState::values() {
	$init(HttpURLConnection$TunnelState);
	return $cast($HttpURLConnection$TunnelStateArray, HttpURLConnection$TunnelState::$VALUES->clone());
}

HttpURLConnection$TunnelState* HttpURLConnection$TunnelState::valueOf($String* name) {
	$init(HttpURLConnection$TunnelState);
	return $cast(HttpURLConnection$TunnelState, $Enum::valueOf(HttpURLConnection$TunnelState::class$, name));
}

void HttpURLConnection$TunnelState::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$HttpURLConnection$TunnelState($Class* class$) {
	$assignStatic(HttpURLConnection$TunnelState::NONE, $new(HttpURLConnection$TunnelState, "NONE"_s, 0));
	$assignStatic(HttpURLConnection$TunnelState::SETUP, $new(HttpURLConnection$TunnelState, "SETUP"_s, 1));
	$assignStatic(HttpURLConnection$TunnelState::TUNNELING, $new(HttpURLConnection$TunnelState, "TUNNELING"_s, 2));
	$assignStatic(HttpURLConnection$TunnelState::$VALUES, HttpURLConnection$TunnelState::$values());
}

HttpURLConnection$TunnelState::HttpURLConnection$TunnelState() {
}

$Class* HttpURLConnection$TunnelState::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$TunnelState, name, initialize, &_HttpURLConnection$TunnelState_ClassInfo_, clinit$HttpURLConnection$TunnelState, allocate$HttpURLConnection$TunnelState);
	return class$;
}

$Class* HttpURLConnection$TunnelState::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun