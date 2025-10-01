#include <sun/security/ssl/Finished$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/Finished.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <jcpp.h>

#undef SSL30
#undef DTLS12
#undef TLS11
#undef TLS10
#undef DTLS10
#undef TLS13
#undef TLS12

using $ProtocolVersionArray = $Array<::sun::security::ssl::ProtocolVersion>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Finished = ::sun::security::ssl::Finished;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Finished$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$ssl$ProtocolVersion", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Finished$1, $SwitchMap$sun$security$ssl$ProtocolVersion)},
	{}
};

$EnclosingMethodInfo _Finished$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.Finished",
	nullptr,
	nullptr
};

$InnerClassInfo _Finished$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.Finished$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Finished$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.ssl.Finished$1",
	"java.lang.Object",
	nullptr,
	_Finished$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Finished$1_EnclosingMethodInfo_,
	_Finished$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Finished"
};

$Object* allocate$Finished$1($Class* clazz) {
	return $of($alloc(Finished$1));
}

$ints* Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion = nullptr;

void clinit$Finished$1($Class* class$) {
	$assignStatic(Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion, $new($ints, $($ProtocolVersion::values())->length));
	{
		try {
			$nc(Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::SSL30->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::TLS10->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::TLS11->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::DTLS10->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::TLS12->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::DTLS12->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::TLS13->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

Finished$1::Finished$1() {
}

$Class* Finished$1::load$($String* name, bool initialize) {
	$loadClass(Finished$1, name, initialize, &_Finished$1_ClassInfo_, clinit$Finished$1, allocate$Finished$1);
	return class$;
}

$Class* Finished$1::class$ = nullptr;

		} // ssl
	} // security
} // sun