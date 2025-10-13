#include <sun/security/ssl/SSLMasterKeyDerivation$1.h>

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
#include <sun/security/ssl/SSLMasterKeyDerivation.h>
#include <jcpp.h>

#undef DTLS10
#undef DTLS12
#undef SSL30
#undef TLS10
#undef TLS11
#undef TLS12

using $ProtocolVersionArray = $Array<::sun::security::ssl::ProtocolVersion>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLMasterKeyDerivation = ::sun::security::ssl::SSLMasterKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLMasterKeyDerivation$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$ssl$ProtocolVersion", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLMasterKeyDerivation$1, $SwitchMap$sun$security$ssl$ProtocolVersion)},
	{}
};

$EnclosingMethodInfo _SSLMasterKeyDerivation$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.SSLMasterKeyDerivation",
	nullptr,
	nullptr
};

$InnerClassInfo _SSLMasterKeyDerivation$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLMasterKeyDerivation$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _SSLMasterKeyDerivation$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.ssl.SSLMasterKeyDerivation$1",
	"java.lang.Object",
	nullptr,
	_SSLMasterKeyDerivation$1_FieldInfo_,
	nullptr,
	nullptr,
	&_SSLMasterKeyDerivation$1_EnclosingMethodInfo_,
	_SSLMasterKeyDerivation$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLMasterKeyDerivation"
};

$Object* allocate$SSLMasterKeyDerivation$1($Class* clazz) {
	return $of($alloc(SSLMasterKeyDerivation$1));
}

$ints* SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion = nullptr;

void clinit$SSLMasterKeyDerivation$1($Class* class$) {
	$assignStatic(SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion, $new($ints, $($ProtocolVersion::values())->length));
	{
		try {
			$nc(SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::SSL30->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::TLS10->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::TLS11->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::DTLS10->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::TLS12->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion)->set($ProtocolVersion::DTLS12->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

SSLMasterKeyDerivation$1::SSLMasterKeyDerivation$1() {
}

$Class* SSLMasterKeyDerivation$1::load$($String* name, bool initialize) {
	$loadClass(SSLMasterKeyDerivation$1, name, initialize, &_SSLMasterKeyDerivation$1_ClassInfo_, clinit$SSLMasterKeyDerivation$1, allocate$SSLMasterKeyDerivation$1);
	return class$;
}

$Class* SSLMasterKeyDerivation$1::class$ = nullptr;

		} // ssl
	} // security
} // sun