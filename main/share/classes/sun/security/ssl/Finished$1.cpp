#include <sun/security/ssl/Finished$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/Finished.h>
#include <sun/security/ssl/ProtocolVersion.h>
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

$ints* Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion = nullptr;

void Finished$1::clinit$($Class* clazz) {
	$assignStatic(Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion, $new($ints, $($ProtocolVersion::values())->length));
	{
		try {
			Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::SSL30->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::TLS10->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::TLS11->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::DTLS10->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::TLS12->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::DTLS12->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Finished$1::$SwitchMap$sun$security$ssl$ProtocolVersion->set($ProtocolVersion::TLS13->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Finished$1::Finished$1() {
}

$Class* Finished$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$ssl$ProtocolVersion", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Finished$1, $SwitchMap$sun$security$ssl$ProtocolVersion)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.Finished",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Finished$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.ssl.Finished$1",
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
		"sun.security.ssl.Finished"
	};
	$loadClass(Finished$1, name, initialize, &classInfo$$, Finished$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Finished$1);
	});
	return class$;
}

$Class* Finished$1::class$ = nullptr;

		} // ssl
	} // security
} // sun