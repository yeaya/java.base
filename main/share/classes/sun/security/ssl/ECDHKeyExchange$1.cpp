#include <sun/security/ssl/ECDHKeyExchange$1.h>

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
#include <sun/security/ssl/ECDHKeyExchange.h>
#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>
#include <jcpp.h>

#undef NAMED_GROUP_ECDHE
#undef NAMED_GROUP_XDH

using $NamedGroup$NamedGroupSpecArray = $Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ECDHKeyExchange = ::sun::security::ssl::ECDHKeyExchange;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ECDHKeyExchange$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ECDHKeyExchange$1, $SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec)},
	{}
};

$EnclosingMethodInfo _ECDHKeyExchange$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.ECDHKeyExchange",
	nullptr,
	nullptr
};

$InnerClassInfo _ECDHKeyExchange$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHKeyExchange$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ECDHKeyExchange$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.ssl.ECDHKeyExchange$1",
	"java.lang.Object",
	nullptr,
	_ECDHKeyExchange$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ECDHKeyExchange$1_EnclosingMethodInfo_,
	_ECDHKeyExchange$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHKeyExchange"
};

$Object* allocate$ECDHKeyExchange$1($Class* clazz) {
	return $of($alloc(ECDHKeyExchange$1));
}

$ints* ECDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec = nullptr;

void clinit$ECDHKeyExchange$1($Class* class$) {
	$assignStatic(ECDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec, $new($ints, $($NamedGroup$NamedGroupSpec::values())->length));
	{
		try {
			$nc(ECDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec)->set($NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ECDHKeyExchange$1::$SwitchMap$sun$security$ssl$NamedGroup$NamedGroupSpec)->set($NamedGroup$NamedGroupSpec::NAMED_GROUP_XDH->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

ECDHKeyExchange$1::ECDHKeyExchange$1() {
}

$Class* ECDHKeyExchange$1::load$($String* name, bool initialize) {
	$loadClass(ECDHKeyExchange$1, name, initialize, &_ECDHKeyExchange$1_ClassInfo_, clinit$ECDHKeyExchange$1, allocate$ECDHKeyExchange$1);
	return class$;
}

$Class* ECDHKeyExchange$1::class$ = nullptr;

		} // ssl
	} // security
} // sun