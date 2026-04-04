#include <sun/security/ssl/SSLMasterKeyDerivation$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLMasterKeyDerivation.h>
#include <jcpp.h>

#undef DTLS10
#undef DTLS12
#undef SSL30
#undef TLS10
#undef TLS11
#undef TLS12

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

$ints* SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion = nullptr;

void SSLMasterKeyDerivation$1::clinit$($Class* clazz) {
	$assignStatic(SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion, $new($ints, $($ProtocolVersion::values())->length));
	{
		try {
			SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::SSL30->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::TLS10->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::TLS11->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::DTLS10->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::TLS12->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLMasterKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::DTLS12->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SSLMasterKeyDerivation$1::SSLMasterKeyDerivation$1() {
}

$Class* SSLMasterKeyDerivation$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$ssl$ProtocolVersion", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLMasterKeyDerivation$1, $SwitchMap$sun$security$ssl$ProtocolVersion)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.SSLMasterKeyDerivation",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLMasterKeyDerivation$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.ssl.SSLMasterKeyDerivation$1",
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
		"sun.security.ssl.SSLMasterKeyDerivation"
	};
	$loadClass(SSLMasterKeyDerivation$1, name, initialize, &classInfo$$, SSLMasterKeyDerivation$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLMasterKeyDerivation$1);
	});
	return class$;
}

$Class* SSLMasterKeyDerivation$1::class$ = nullptr;

		} // ssl
	} // security
} // sun