#include <sun/security/ssl/ClientAuthType.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLIENT_AUTH_NONE
#undef CLIENT_AUTH_REQUESTED
#undef CLIENT_AUTH_REQUIRED

using $ClientAuthTypeArray = $Array<::sun::security::ssl::ClientAuthType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

ClientAuthType* ClientAuthType::CLIENT_AUTH_NONE = nullptr;
ClientAuthType* ClientAuthType::CLIENT_AUTH_REQUESTED = nullptr;
ClientAuthType* ClientAuthType::CLIENT_AUTH_REQUIRED = nullptr;
$ClientAuthTypeArray* ClientAuthType::$VALUES = nullptr;

$ClientAuthTypeArray* ClientAuthType::$values() {
	$init(ClientAuthType);
	return $new($ClientAuthTypeArray, {
		ClientAuthType::CLIENT_AUTH_NONE,
		ClientAuthType::CLIENT_AUTH_REQUESTED,
		ClientAuthType::CLIENT_AUTH_REQUIRED
	});
}

$ClientAuthTypeArray* ClientAuthType::values() {
	$init(ClientAuthType);
	return $cast($ClientAuthTypeArray, ClientAuthType::$VALUES->clone());
}

ClientAuthType* ClientAuthType::valueOf($String* name) {
	$init(ClientAuthType);
	return $cast(ClientAuthType, $Enum::valueOf(ClientAuthType::class$, name));
}

void ClientAuthType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void ClientAuthType::clinit$($Class* clazz) {
	$assignStatic(ClientAuthType::CLIENT_AUTH_NONE, $new(ClientAuthType, "CLIENT_AUTH_NONE"_s, 0));
	$assignStatic(ClientAuthType::CLIENT_AUTH_REQUESTED, $new(ClientAuthType, "CLIENT_AUTH_REQUESTED"_s, 1));
	$assignStatic(ClientAuthType::CLIENT_AUTH_REQUIRED, $new(ClientAuthType, "CLIENT_AUTH_REQUIRED"_s, 2));
	$assignStatic(ClientAuthType::$VALUES, ClientAuthType::$values());
}

ClientAuthType::ClientAuthType() {
}

$Class* ClientAuthType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CLIENT_AUTH_NONE", "Lsun/security/ssl/ClientAuthType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClientAuthType, CLIENT_AUTH_NONE)},
		{"CLIENT_AUTH_REQUESTED", "Lsun/security/ssl/ClientAuthType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClientAuthType, CLIENT_AUTH_REQUESTED)},
		{"CLIENT_AUTH_REQUIRED", "Lsun/security/ssl/ClientAuthType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClientAuthType, CLIENT_AUTH_REQUIRED)},
		{"$VALUES", "[Lsun/security/ssl/ClientAuthType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ClientAuthType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/security/ssl/ClientAuthType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ClientAuthType, $values, $ClientAuthTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(ClientAuthType, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/ClientAuthType;", nullptr, $PUBLIC | $STATIC, $staticMethod(ClientAuthType, valueOf, ClientAuthType*, $String*)},
		{"values", "()[Lsun/security/ssl/ClientAuthType;", nullptr, $PUBLIC | $STATIC, $staticMethod(ClientAuthType, values, $ClientAuthTypeArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.security.ssl.ClientAuthType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/security/ssl/ClientAuthType;>;"
	};
	$loadClass(ClientAuthType, name, initialize, &classInfo$$, ClientAuthType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ClientAuthType));
	});
	return class$;
}

$Class* ClientAuthType::class$ = nullptr;

		} // ssl
	} // security
} // sun