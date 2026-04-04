#include <sun/security/ssl/TransportContext$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef ALERT
#undef HANDSHAKE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ContentType = ::sun::security::ssl::ContentType;

namespace sun {
	namespace security {
		namespace ssl {

$ints* TransportContext$1::$SwitchMap$sun$security$ssl$ContentType = nullptr;

void TransportContext$1::clinit$($Class* clazz) {
	$assignStatic(TransportContext$1::$SwitchMap$sun$security$ssl$ContentType, $new($ints, $($ContentType::values())->length));
	{
		try {
			TransportContext$1::$SwitchMap$sun$security$ssl$ContentType->set($ContentType::HANDSHAKE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TransportContext$1::$SwitchMap$sun$security$ssl$ContentType->set($ContentType::ALERT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TransportContext$1::TransportContext$1() {
}

$Class* TransportContext$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$ssl$ContentType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TransportContext$1, $SwitchMap$sun$security$ssl$ContentType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.TransportContext",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.TransportContext$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.ssl.TransportContext$1",
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
		"sun.security.ssl.TransportContext"
	};
	$loadClass(TransportContext$1, name, initialize, &classInfo$$, TransportContext$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TransportContext$1);
	});
	return class$;
}

$Class* TransportContext$1::class$ = nullptr;

		} // ssl
	} // security
} // sun