#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication$3.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication$TransparentAuth.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication.h>
#include <jcpp.h>

#undef ALL_HOSTS
#undef TRUSTED_HOSTS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $NTLMAuthentication$TransparentAuth = ::sun::net::www::protocol::http::ntlm::NTLMAuthentication$TransparentAuth;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

$ints* NTLMAuthentication$3::$SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth = nullptr;

void NTLMAuthentication$3::clinit$($Class* clazz) {
	$assignStatic(NTLMAuthentication$3::$SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth, $new($ints, $($NTLMAuthentication$TransparentAuth::values())->length));
	{
		try {
			NTLMAuthentication$3::$SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth->set($NTLMAuthentication$TransparentAuth::TRUSTED_HOSTS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			NTLMAuthentication$3::$SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth->set($NTLMAuthentication$TransparentAuth::ALL_HOSTS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

NTLMAuthentication$3::NTLMAuthentication$3() {
}

$Class* NTLMAuthentication$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NTLMAuthentication$3, $SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.http.ntlm.NTLMAuthentication",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.ntlm.NTLMAuthentication$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.net.www.protocol.http.ntlm.NTLMAuthentication$3",
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
		"sun.net.www.protocol.http.ntlm.NTLMAuthentication"
	};
	$loadClass(NTLMAuthentication$3, name, initialize, &classInfo$$, NTLMAuthentication$3::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NTLMAuthentication$3);
	});
	return class$;
}

$Class* NTLMAuthentication$3::class$ = nullptr;

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun