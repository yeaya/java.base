#include <sun/net/www/protocol/http/AuthScheme.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BASIC
#undef DIGEST
#undef KERBEROS
#undef NEGOTIATE
#undef NTLM
#undef UNKNOWN

using $AuthSchemeArray = $Array<::sun::net::www::protocol::http::AuthScheme>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

AuthScheme* AuthScheme::BASIC = nullptr;
AuthScheme* AuthScheme::DIGEST = nullptr;
AuthScheme* AuthScheme::NTLM = nullptr;
AuthScheme* AuthScheme::NEGOTIATE = nullptr;
AuthScheme* AuthScheme::KERBEROS = nullptr;
AuthScheme* AuthScheme::UNKNOWN = nullptr;
$AuthSchemeArray* AuthScheme::$VALUES = nullptr;

$AuthSchemeArray* AuthScheme::$values() {
	$init(AuthScheme);
	return $new($AuthSchemeArray, {
		AuthScheme::BASIC,
		AuthScheme::DIGEST,
		AuthScheme::NTLM,
		AuthScheme::NEGOTIATE,
		AuthScheme::KERBEROS,
		AuthScheme::UNKNOWN
	});
}

$AuthSchemeArray* AuthScheme::values() {
	$init(AuthScheme);
	return $cast($AuthSchemeArray, AuthScheme::$VALUES->clone());
}

AuthScheme* AuthScheme::valueOf($String* name) {
	$init(AuthScheme);
	return $cast(AuthScheme, $Enum::valueOf(AuthScheme::class$, name));
}

void AuthScheme::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void AuthScheme::clinit$($Class* clazz) {
	$assignStatic(AuthScheme::BASIC, $new(AuthScheme, "BASIC"_s, 0));
	$assignStatic(AuthScheme::DIGEST, $new(AuthScheme, "DIGEST"_s, 1));
	$assignStatic(AuthScheme::NTLM, $new(AuthScheme, "NTLM"_s, 2));
	$assignStatic(AuthScheme::NEGOTIATE, $new(AuthScheme, "NEGOTIATE"_s, 3));
	$assignStatic(AuthScheme::KERBEROS, $new(AuthScheme, "KERBEROS"_s, 4));
	$assignStatic(AuthScheme::UNKNOWN, $new(AuthScheme, "UNKNOWN"_s, 5));
	$assignStatic(AuthScheme::$VALUES, AuthScheme::$values());
}

AuthScheme::AuthScheme() {
}

$Class* AuthScheme::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BASIC", "Lsun/net/www/protocol/http/AuthScheme;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AuthScheme, BASIC)},
		{"DIGEST", "Lsun/net/www/protocol/http/AuthScheme;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AuthScheme, DIGEST)},
		{"NTLM", "Lsun/net/www/protocol/http/AuthScheme;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AuthScheme, NTLM)},
		{"NEGOTIATE", "Lsun/net/www/protocol/http/AuthScheme;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AuthScheme, NEGOTIATE)},
		{"KERBEROS", "Lsun/net/www/protocol/http/AuthScheme;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AuthScheme, KERBEROS)},
		{"UNKNOWN", "Lsun/net/www/protocol/http/AuthScheme;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AuthScheme, UNKNOWN)},
		{"$VALUES", "[Lsun/net/www/protocol/http/AuthScheme;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AuthScheme, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/net/www/protocol/http/AuthScheme;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AuthScheme, $values, $AuthSchemeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(AuthScheme, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/net/www/protocol/http/AuthScheme;", nullptr, $PUBLIC | $STATIC, $staticMethod(AuthScheme, valueOf, AuthScheme*, $String*)},
		{"values", "()[Lsun/net/www/protocol/http/AuthScheme;", nullptr, $PUBLIC | $STATIC, $staticMethod(AuthScheme, values, $AuthSchemeArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"sun.net.www.protocol.http.AuthScheme",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/net/www/protocol/http/AuthScheme;>;"
	};
	$loadClass(AuthScheme, name, initialize, &classInfo$$, AuthScheme::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AuthScheme));
	});
	return class$;
}

$Class* AuthScheme::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun