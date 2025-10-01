#include <sun/security/ssl/SSLTrafficKeyDerivation$1.h>

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
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
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
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLTrafficKeyDerivation$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$ssl$ProtocolVersion", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLTrafficKeyDerivation$1, $SwitchMap$sun$security$ssl$ProtocolVersion)},
	{}
};

$EnclosingMethodInfo _SSLTrafficKeyDerivation$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.SSLTrafficKeyDerivation",
	nullptr,
	nullptr
};

$InnerClassInfo _SSLTrafficKeyDerivation$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLTrafficKeyDerivation$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _SSLTrafficKeyDerivation$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.ssl.SSLTrafficKeyDerivation$1",
	"java.lang.Object",
	nullptr,
	_SSLTrafficKeyDerivation$1_FieldInfo_,
	nullptr,
	nullptr,
	&_SSLTrafficKeyDerivation$1_EnclosingMethodInfo_,
	_SSLTrafficKeyDerivation$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLTrafficKeyDerivation"
};

$Object* allocate$SSLTrafficKeyDerivation$1($Class* clazz) {
	return $of($alloc(SSLTrafficKeyDerivation$1));
}

$ints* SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion = nullptr;

void clinit$SSLTrafficKeyDerivation$1($Class* class$) {
	$assignStatic(SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion, $new($ints, $($ProtocolVersion::values())->length));
	{
		try {
			$nc(SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::SSL30->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::TLS10->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::TLS11->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::DTLS10->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::TLS12->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::DTLS12->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::TLS13->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

SSLTrafficKeyDerivation$1::SSLTrafficKeyDerivation$1() {
}

$Class* SSLTrafficKeyDerivation$1::load$($String* name, bool initialize) {
	$loadClass(SSLTrafficKeyDerivation$1, name, initialize, &_SSLTrafficKeyDerivation$1_ClassInfo_, clinit$SSLTrafficKeyDerivation$1, allocate$SSLTrafficKeyDerivation$1);
	return class$;
}

$Class* SSLTrafficKeyDerivation$1::class$ = nullptr;

		} // ssl
	} // security
} // sun