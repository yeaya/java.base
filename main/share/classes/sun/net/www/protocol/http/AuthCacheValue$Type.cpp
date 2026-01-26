#include <sun/net/www/protocol/http/AuthCacheValue$Type.h>

#include <java/lang/Enum.h>
#include <sun/net/www/protocol/http/AuthCacheValue.h>
#include <jcpp.h>

using $AuthCacheValue$TypeArray = $Array<::sun::net::www::protocol::http::AuthCacheValue$Type>;
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

$FieldInfo _AuthCacheValue$Type_FieldInfo_[] = {
	{"Proxy", "Lsun/net/www/protocol/http/AuthCacheValue$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AuthCacheValue$Type, Proxy)},
	{"Server", "Lsun/net/www/protocol/http/AuthCacheValue$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AuthCacheValue$Type, Server)},
	{"$VALUES", "[Lsun/net/www/protocol/http/AuthCacheValue$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AuthCacheValue$Type, $VALUES)},
	{}
};

$MethodInfo _AuthCacheValue$Type_MethodInfo_[] = {
	{"$values", "()[Lsun/net/www/protocol/http/AuthCacheValue$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AuthCacheValue$Type, $values, $AuthCacheValue$TypeArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(AuthCacheValue$Type, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Lsun/net/www/protocol/http/AuthCacheValue$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(AuthCacheValue$Type, valueOf, AuthCacheValue$Type*, $String*)},
	{"values", "()[Lsun/net/www/protocol/http/AuthCacheValue$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(AuthCacheValue$Type, values, $AuthCacheValue$TypeArray*)},
	{}
};

$InnerClassInfo _AuthCacheValue$Type_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.AuthCacheValue$Type", "sun.net.www.protocol.http.AuthCacheValue", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _AuthCacheValue$Type_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.net.www.protocol.http.AuthCacheValue$Type",
	"java.lang.Enum",
	nullptr,
	_AuthCacheValue$Type_FieldInfo_,
	_AuthCacheValue$Type_MethodInfo_,
	"Ljava/lang/Enum<Lsun/net/www/protocol/http/AuthCacheValue$Type;>;",
	nullptr,
	_AuthCacheValue$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.AuthCacheValue"
};

$Object* allocate$AuthCacheValue$Type($Class* clazz) {
	return $of($alloc(AuthCacheValue$Type));
}

AuthCacheValue$Type* AuthCacheValue$Type::Proxy = nullptr;
AuthCacheValue$Type* AuthCacheValue$Type::Server = nullptr;
$AuthCacheValue$TypeArray* AuthCacheValue$Type::$VALUES = nullptr;

$AuthCacheValue$TypeArray* AuthCacheValue$Type::$values() {
	$init(AuthCacheValue$Type);
	return $new($AuthCacheValue$TypeArray, {
		AuthCacheValue$Type::Proxy,
		AuthCacheValue$Type::Server
	});
}

$AuthCacheValue$TypeArray* AuthCacheValue$Type::values() {
	$init(AuthCacheValue$Type);
	return $cast($AuthCacheValue$TypeArray, AuthCacheValue$Type::$VALUES->clone());
}

AuthCacheValue$Type* AuthCacheValue$Type::valueOf($String* name) {
	$init(AuthCacheValue$Type);
	return $cast(AuthCacheValue$Type, $Enum::valueOf(AuthCacheValue$Type::class$, name));
}

void AuthCacheValue$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$AuthCacheValue$Type($Class* class$) {
	$assignStatic(AuthCacheValue$Type::Proxy, $new(AuthCacheValue$Type, "Proxy"_s, 0));
	$assignStatic(AuthCacheValue$Type::Server, $new(AuthCacheValue$Type, "Server"_s, 1));
	$assignStatic(AuthCacheValue$Type::$VALUES, AuthCacheValue$Type::$values());
}

AuthCacheValue$Type::AuthCacheValue$Type() {
}

$Class* AuthCacheValue$Type::load$($String* name, bool initialize) {
	$loadClass(AuthCacheValue$Type, name, initialize, &_AuthCacheValue$Type_ClassInfo_, clinit$AuthCacheValue$Type, allocate$AuthCacheValue$Type);
	return class$;
}

$Class* AuthCacheValue$Type::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun