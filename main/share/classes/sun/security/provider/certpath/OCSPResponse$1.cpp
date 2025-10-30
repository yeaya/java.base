#include <sun/security/provider/certpath/OCSPResponse$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/security/provider/certpath/OCSPResponse$ResponseStatus.h>
#include <sun/security/provider/certpath/OCSPResponse.h>
#include <jcpp.h>

#undef INTERNAL_ERROR
#undef SUCCESSFUL
#undef TRY_LATER
#undef UNAUTHORIZED

using $OCSPResponse$ResponseStatusArray = $Array<::sun::security::provider::certpath::OCSPResponse$ResponseStatus>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $OCSPResponse = ::sun::security::provider::certpath::OCSPResponse;
using $OCSPResponse$ResponseStatus = ::sun::security::provider::certpath::OCSPResponse$ResponseStatus;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _OCSPResponse$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(OCSPResponse$1, $SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus)},
	{}
};

$EnclosingMethodInfo _OCSPResponse$1_EnclosingMethodInfo_ = {
	"sun.security.provider.certpath.OCSPResponse",
	nullptr,
	nullptr
};

$InnerClassInfo _OCSPResponse$1_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.OCSPResponse$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _OCSPResponse$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.provider.certpath.OCSPResponse$1",
	"java.lang.Object",
	nullptr,
	_OCSPResponse$1_FieldInfo_,
	nullptr,
	nullptr,
	&_OCSPResponse$1_EnclosingMethodInfo_,
	_OCSPResponse$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.OCSPResponse"
};

$Object* allocate$OCSPResponse$1($Class* clazz) {
	return $of($alloc(OCSPResponse$1));
}

$ints* OCSPResponse$1::$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus = nullptr;

void clinit$OCSPResponse$1($Class* class$) {
	$assignStatic(OCSPResponse$1::$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus, $new($ints, $($OCSPResponse$ResponseStatus::values())->length));
	{
		try {
			$nc(OCSPResponse$1::$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus)->set($OCSPResponse$ResponseStatus::SUCCESSFUL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(OCSPResponse$1::$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus)->set($OCSPResponse$ResponseStatus::TRY_LATER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(OCSPResponse$1::$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus)->set($OCSPResponse$ResponseStatus::INTERNAL_ERROR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(OCSPResponse$1::$SwitchMap$sun$security$provider$certpath$OCSPResponse$ResponseStatus)->set($OCSPResponse$ResponseStatus::UNAUTHORIZED->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

OCSPResponse$1::OCSPResponse$1() {
}

$Class* OCSPResponse$1::load$($String* name, bool initialize) {
	$loadClass(OCSPResponse$1, name, initialize, &_OCSPResponse$1_ClassInfo_, clinit$OCSPResponse$1, allocate$OCSPResponse$1);
	return class$;
}

$Class* OCSPResponse$1::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun