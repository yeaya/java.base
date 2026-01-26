#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication$TransparentAuth.h>

#include <java/lang/Enum.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication.h>
#include <jcpp.h>

#undef ALL_HOSTS
#undef DISABLED
#undef TRUSTED_HOSTS

using $NTLMAuthentication$TransparentAuthArray = $Array<::sun::net::www::protocol::http::ntlm::NTLMAuthentication$TransparentAuth>;
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
					namespace ntlm {

$FieldInfo _NTLMAuthentication$TransparentAuth_FieldInfo_[] = {
	{"DISABLED", "Lsun/net/www/protocol/http/ntlm/NTLMAuthentication$TransparentAuth;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NTLMAuthentication$TransparentAuth, DISABLED)},
	{"TRUSTED_HOSTS", "Lsun/net/www/protocol/http/ntlm/NTLMAuthentication$TransparentAuth;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NTLMAuthentication$TransparentAuth, TRUSTED_HOSTS)},
	{"ALL_HOSTS", "Lsun/net/www/protocol/http/ntlm/NTLMAuthentication$TransparentAuth;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NTLMAuthentication$TransparentAuth, ALL_HOSTS)},
	{"$VALUES", "[Lsun/net/www/protocol/http/ntlm/NTLMAuthentication$TransparentAuth;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(NTLMAuthentication$TransparentAuth, $VALUES)},
	{}
};

$MethodInfo _NTLMAuthentication$TransparentAuth_MethodInfo_[] = {
	{"$values", "()[Lsun/net/www/protocol/http/ntlm/NTLMAuthentication$TransparentAuth;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(NTLMAuthentication$TransparentAuth, $values, $NTLMAuthentication$TransparentAuthArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(NTLMAuthentication$TransparentAuth, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Lsun/net/www/protocol/http/ntlm/NTLMAuthentication$TransparentAuth;", nullptr, $PUBLIC | $STATIC, $staticMethod(NTLMAuthentication$TransparentAuth, valueOf, NTLMAuthentication$TransparentAuth*, $String*)},
	{"values", "()[Lsun/net/www/protocol/http/ntlm/NTLMAuthentication$TransparentAuth;", nullptr, $PUBLIC | $STATIC, $staticMethod(NTLMAuthentication$TransparentAuth, values, $NTLMAuthentication$TransparentAuthArray*)},
	{}
};

$InnerClassInfo _NTLMAuthentication$TransparentAuth_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.ntlm.NTLMAuthentication$TransparentAuth", "sun.net.www.protocol.http.ntlm.NTLMAuthentication", "TransparentAuth", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _NTLMAuthentication$TransparentAuth_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication$TransparentAuth",
	"java.lang.Enum",
	nullptr,
	_NTLMAuthentication$TransparentAuth_FieldInfo_,
	_NTLMAuthentication$TransparentAuth_MethodInfo_,
	"Ljava/lang/Enum<Lsun/net/www/protocol/http/ntlm/NTLMAuthentication$TransparentAuth;>;",
	nullptr,
	_NTLMAuthentication$TransparentAuth_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication"
};

$Object* allocate$NTLMAuthentication$TransparentAuth($Class* clazz) {
	return $of($alloc(NTLMAuthentication$TransparentAuth));
}

NTLMAuthentication$TransparentAuth* NTLMAuthentication$TransparentAuth::DISABLED = nullptr;
NTLMAuthentication$TransparentAuth* NTLMAuthentication$TransparentAuth::TRUSTED_HOSTS = nullptr;
NTLMAuthentication$TransparentAuth* NTLMAuthentication$TransparentAuth::ALL_HOSTS = nullptr;
$NTLMAuthentication$TransparentAuthArray* NTLMAuthentication$TransparentAuth::$VALUES = nullptr;

$NTLMAuthentication$TransparentAuthArray* NTLMAuthentication$TransparentAuth::$values() {
	$init(NTLMAuthentication$TransparentAuth);
	return $new($NTLMAuthentication$TransparentAuthArray, {
		NTLMAuthentication$TransparentAuth::DISABLED,
		NTLMAuthentication$TransparentAuth::TRUSTED_HOSTS,
		NTLMAuthentication$TransparentAuth::ALL_HOSTS
	});
}

$NTLMAuthentication$TransparentAuthArray* NTLMAuthentication$TransparentAuth::values() {
	$init(NTLMAuthentication$TransparentAuth);
	return $cast($NTLMAuthentication$TransparentAuthArray, NTLMAuthentication$TransparentAuth::$VALUES->clone());
}

NTLMAuthentication$TransparentAuth* NTLMAuthentication$TransparentAuth::valueOf($String* name) {
	$init(NTLMAuthentication$TransparentAuth);
	return $cast(NTLMAuthentication$TransparentAuth, $Enum::valueOf(NTLMAuthentication$TransparentAuth::class$, name));
}

void NTLMAuthentication$TransparentAuth::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$NTLMAuthentication$TransparentAuth($Class* class$) {
	$assignStatic(NTLMAuthentication$TransparentAuth::DISABLED, $new(NTLMAuthentication$TransparentAuth, "DISABLED"_s, 0));
	$assignStatic(NTLMAuthentication$TransparentAuth::TRUSTED_HOSTS, $new(NTLMAuthentication$TransparentAuth, "TRUSTED_HOSTS"_s, 1));
	$assignStatic(NTLMAuthentication$TransparentAuth::ALL_HOSTS, $new(NTLMAuthentication$TransparentAuth, "ALL_HOSTS"_s, 2));
	$assignStatic(NTLMAuthentication$TransparentAuth::$VALUES, NTLMAuthentication$TransparentAuth::$values());
}

NTLMAuthentication$TransparentAuth::NTLMAuthentication$TransparentAuth() {
}

$Class* NTLMAuthentication$TransparentAuth::load$($String* name, bool initialize) {
	$loadClass(NTLMAuthentication$TransparentAuth, name, initialize, &_NTLMAuthentication$TransparentAuth_ClassInfo_, clinit$NTLMAuthentication$TransparentAuth, allocate$NTLMAuthentication$TransparentAuth);
	return class$;
}

$Class* NTLMAuthentication$TransparentAuth::class$ = nullptr;

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun