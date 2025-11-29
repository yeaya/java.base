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

$FieldInfo _NTLMAuthentication$3_FieldInfo_[] = {
	{"$SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NTLMAuthentication$3, $SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth)},
	{}
};

$EnclosingMethodInfo _NTLMAuthentication$3_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication",
	nullptr,
	nullptr
};

$InnerClassInfo _NTLMAuthentication$3_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.ntlm.NTLMAuthentication$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _NTLMAuthentication$3_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication$3",
	"java.lang.Object",
	nullptr,
	_NTLMAuthentication$3_FieldInfo_,
	nullptr,
	nullptr,
	&_NTLMAuthentication$3_EnclosingMethodInfo_,
	_NTLMAuthentication$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication"
};

$Object* allocate$NTLMAuthentication$3($Class* clazz) {
	return $of($alloc(NTLMAuthentication$3));
}

$ints* NTLMAuthentication$3::$SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth = nullptr;

void clinit$NTLMAuthentication$3($Class* class$) {
	$assignStatic(NTLMAuthentication$3::$SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth, $new($ints, $($NTLMAuthentication$TransparentAuth::values())->length));
	{
		try {
			$nc(NTLMAuthentication$3::$SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth)->set($NTLMAuthentication$TransparentAuth::TRUSTED_HOSTS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(NTLMAuthentication$3::$SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth)->set($NTLMAuthentication$TransparentAuth::ALL_HOSTS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

NTLMAuthentication$3::NTLMAuthentication$3() {
}

$Class* NTLMAuthentication$3::load$($String* name, bool initialize) {
	$loadClass(NTLMAuthentication$3, name, initialize, &_NTLMAuthentication$3_ClassInfo_, clinit$NTLMAuthentication$3, allocate$NTLMAuthentication$3);
	return class$;
}

$Class* NTLMAuthentication$3::class$ = nullptr;

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun