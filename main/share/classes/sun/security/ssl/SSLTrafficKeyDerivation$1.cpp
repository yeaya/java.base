#include <sun/security/ssl/SSLTrafficKeyDerivation$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <jcpp.h>

#undef DTLS10
#undef DTLS12
#undef SSL30
#undef TLS10
#undef TLS11
#undef TLS12
#undef TLS13

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

$ints* SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion = nullptr;

void SSLTrafficKeyDerivation$1::clinit$($Class* clazz) {
	$assignStatic(SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion, $new($ints, $($ProtocolVersion::values())->length));
	{
		try {
			SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::SSL30->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::TLS10->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::TLS11->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::DTLS10->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::TLS12->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::DTLS12->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLTrafficKeyDerivation$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::TLS13->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SSLTrafficKeyDerivation$1::SSLTrafficKeyDerivation$1() {
}

$Class* SSLTrafficKeyDerivation$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$ssl$ProtocolVersion", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLTrafficKeyDerivation$1, $SwitchMap$sun$security$ssl$ProtocolVersion)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.SSLTrafficKeyDerivation",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLTrafficKeyDerivation$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.ssl.SSLTrafficKeyDerivation$1",
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
		"sun.security.ssl.SSLTrafficKeyDerivation"
	};
	$loadClass(SSLTrafficKeyDerivation$1, name, initialize, &classInfo$$, SSLTrafficKeyDerivation$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLTrafficKeyDerivation$1);
	});
	return class$;
}

$Class* SSLTrafficKeyDerivation$1::class$ = nullptr;

		} // ssl
	} // security
} // sun