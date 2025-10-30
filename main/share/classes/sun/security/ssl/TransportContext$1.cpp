#include <sun/security/ssl/TransportContext$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef ALERT
#undef HANDSHAKE

using $ContentTypeArray = $Array<::sun::security::ssl::ContentType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ContentType = ::sun::security::ssl::ContentType;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _TransportContext$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$ssl$ContentType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TransportContext$1, $SwitchMap$sun$security$ssl$ContentType)},
	{}
};

$EnclosingMethodInfo _TransportContext$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.TransportContext",
	nullptr,
	nullptr
};

$InnerClassInfo _TransportContext$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.TransportContext$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TransportContext$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.ssl.TransportContext$1",
	"java.lang.Object",
	nullptr,
	_TransportContext$1_FieldInfo_,
	nullptr,
	nullptr,
	&_TransportContext$1_EnclosingMethodInfo_,
	_TransportContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.TransportContext"
};

$Object* allocate$TransportContext$1($Class* clazz) {
	return $of($alloc(TransportContext$1));
}

$ints* TransportContext$1::$SwitchMap$sun$security$ssl$ContentType = nullptr;

void clinit$TransportContext$1($Class* class$) {
	$assignStatic(TransportContext$1::$SwitchMap$sun$security$ssl$ContentType, $new($ints, $($ContentType::values())->length));
	{
		try {
			$nc(TransportContext$1::$SwitchMap$sun$security$ssl$ContentType)->set($ContentType::HANDSHAKE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TransportContext$1::$SwitchMap$sun$security$ssl$ContentType)->set($ContentType::ALERT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TransportContext$1::TransportContext$1() {
}

$Class* TransportContext$1::load$($String* name, bool initialize) {
	$loadClass(TransportContext$1, name, initialize, &_TransportContext$1_ClassInfo_, clinit$TransportContext$1, allocate$TransportContext$1);
	return class$;
}

$Class* TransportContext$1::class$ = nullptr;

		} // ssl
	} // security
} // sun