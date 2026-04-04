#include <sun/security/ssl/XDHKeyExchange$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/XDHKeyExchange.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $NamedGroup = ::sun::security::ssl::NamedGroup;

namespace sun {
	namespace security {
		namespace ssl {

$ints* XDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup = nullptr;

void XDHKeyExchange$1::clinit$($Class* clazz) {
	$assignStatic(XDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup, $new($ints, $($NamedGroup::values())->length));
	{
		try {
			XDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup->set($NamedGroup::X25519->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			XDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup->set($NamedGroup::X448->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

XDHKeyExchange$1::XDHKeyExchange$1() {
}

$Class* XDHKeyExchange$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$ssl$NamedGroup", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XDHKeyExchange$1, $SwitchMap$sun$security$ssl$NamedGroup)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.XDHKeyExchange",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.XDHKeyExchange$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.ssl.XDHKeyExchange$1",
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
		"sun.security.ssl.XDHKeyExchange"
	};
	$loadClass(XDHKeyExchange$1, name, initialize, &classInfo$$, XDHKeyExchange$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XDHKeyExchange$1);
	});
	return class$;
}

$Class* XDHKeyExchange$1::class$ = nullptr;

		} // ssl
	} // security
} // sun