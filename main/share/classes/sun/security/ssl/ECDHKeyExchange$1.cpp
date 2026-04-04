#include <sun/security/ssl/ECDHKeyExchange$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/ECDHKeyExchange.h>
#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>
#include <jcpp.h>

#undef NAMED_GROUP_ECDHE
#undef NAMED_GROUP_XDH

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;

namespace sun {
	namespace security {
		namespace ssl {

$ints* ECDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec = nullptr;

void ECDHKeyExchange$1::clinit$($Class* clazz) {
	$assignStatic(ECDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec, $new($ints, $($NamedGroup$NamedGroupSpec::values())->length));
	{
		try {
			ECDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec->set($NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ECDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec->set($NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ECDHKeyExchange$1::ECDHKeyExchange$1() {
}

$Class* ECDHKeyExchange$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ECDHKeyExchange$1, $SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.ECDHKeyExchange",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ECDHKeyExchange$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.ssl.ECDHKeyExchange$1",
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
		"sun.security.ssl.ECDHKeyExchange"
	};
	$loadClass(ECDHKeyExchange$1, name, initialize, &classInfo$$, ECDHKeyExchange$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ECDHKeyExchange$1);
	});
	return class$;
}

$Class* ECDHKeyExchange$1::class$ = nullptr;

		} // ssl
	} // security
} // sun