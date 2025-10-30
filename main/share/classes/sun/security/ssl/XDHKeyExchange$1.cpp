#include <sun/security/ssl/XDHKeyExchange$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/XDHKeyExchange.h>
#include <jcpp.h>

using $NamedGroupArray = $Array<::sun::security::ssl::NamedGroup>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $XDHKeyExchange = ::sun::security::ssl::XDHKeyExchange;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _XDHKeyExchange$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$ssl$NamedGroup", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XDHKeyExchange$1, $SwitchMap$sun$security$ssl$NamedGroup)},
	{}
};

$EnclosingMethodInfo _XDHKeyExchange$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.XDHKeyExchange",
	nullptr,
	nullptr
};

$InnerClassInfo _XDHKeyExchange$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.XDHKeyExchange$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _XDHKeyExchange$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.ssl.XDHKeyExchange$1",
	"java.lang.Object",
	nullptr,
	_XDHKeyExchange$1_FieldInfo_,
	nullptr,
	nullptr,
	&_XDHKeyExchange$1_EnclosingMethodInfo_,
	_XDHKeyExchange$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.XDHKeyExchange"
};

$Object* allocate$XDHKeyExchange$1($Class* clazz) {
	return $of($alloc(XDHKeyExchange$1));
}

$ints* XDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup = nullptr;

void clinit$XDHKeyExchange$1($Class* class$) {
	$assignStatic(XDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup, $new($ints, $($NamedGroup::values())->length));
	{
		try {
			$nc(XDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup)->set($NamedGroup::X25519->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(XDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup)->set($NamedGroup::X448->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

XDHKeyExchange$1::XDHKeyExchange$1() {
}

$Class* XDHKeyExchange$1::load$($String* name, bool initialize) {
	$loadClass(XDHKeyExchange$1, name, initialize, &_XDHKeyExchange$1_ClassInfo_, clinit$XDHKeyExchange$1, allocate$XDHKeyExchange$1);
	return class$;
}

$Class* XDHKeyExchange$1::class$ = nullptr;

		} // ssl
	} // security
} // sun