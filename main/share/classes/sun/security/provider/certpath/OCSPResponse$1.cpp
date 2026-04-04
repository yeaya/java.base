#include <sun/security/provider/certpath/OCSPResponse$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/provider/certpath/OCSPResponse$ResponseStatus.h>
#include <sun/security/provider/certpath/OCSPResponse.h>
#include <jcpp.h>

#undef INTERNAL_ERROR
#undef SUCCESSFUL
#undef TRY_LATER
#undef UNAUTHORIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $OCSPResponse$ResponseStatus = ::sun::security::provider::certpath::OCSPResponse$ResponseStatus;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$ints* OCSPResponse$1::$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus = nullptr;

void OCSPResponse$1::clinit$($Class* clazz) {
	$assignStatic(OCSPResponse$1::$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus, $new($ints, $($OCSPResponse$ResponseStatus::values())->length));
	{
		try {
			OCSPResponse$1::$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus->set($OCSPResponse$ResponseStatus::SUCCESSFUL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			OCSPResponse$1::$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus->set($OCSPResponse$ResponseStatus::TRY_LATER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			OCSPResponse$1::$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus->set($OCSPResponse$ResponseStatus::INTERNAL_ERROR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			OCSPResponse$1::$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus->set($OCSPResponse$ResponseStatus::UNAUTHORIZED->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

OCSPResponse$1::OCSPResponse$1() {
}

$Class* OCSPResponse$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(OCSPResponse$1, $SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.certpath.OCSPResponse",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.OCSPResponse$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.provider.certpath.OCSPResponse$1",
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
		"sun.security.provider.certpath.OCSPResponse"
	};
	$loadClass(OCSPResponse$1, name, initialize, &classInfo$$, OCSPResponse$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(OCSPResponse$1);
	});
	return class$;
}

$Class* OCSPResponse$1::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun