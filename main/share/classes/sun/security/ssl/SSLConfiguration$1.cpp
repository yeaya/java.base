#include <sun/security/ssl/SSLConfiguration$1.h>

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
#include <sun/security/ssl/ClientAuthType.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <jcpp.h>

#undef CLIENT_AUTH_REQUESTED
#undef CLIENT_AUTH_REQUIRED

using $ClientAuthTypeArray = $Array<::sun::security::ssl::ClientAuthType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ClientAuthType = ::sun::security::ssl::ClientAuthType;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLConfiguration$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$ssl$ClientAuthType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLConfiguration$1, $SwitchMap$sun$security$ssl$ClientAuthType)},
	{}
};

$EnclosingMethodInfo _SSLConfiguration$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.SSLConfiguration",
	nullptr,
	nullptr
};

$InnerClassInfo _SSLConfiguration$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLConfiguration$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _SSLConfiguration$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.ssl.SSLConfiguration$1",
	"java.lang.Object",
	nullptr,
	_SSLConfiguration$1_FieldInfo_,
	nullptr,
	nullptr,
	&_SSLConfiguration$1_EnclosingMethodInfo_,
	_SSLConfiguration$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLConfiguration"
};

$Object* allocate$SSLConfiguration$1($Class* clazz) {
	return $of($alloc(SSLConfiguration$1));
}

$ints* SSLConfiguration$1::$SwitchMap$sun$security$ssl$ClientAuthType = nullptr;

void clinit$SSLConfiguration$1($Class* class$) {
	$assignStatic(SSLConfiguration$1::$SwitchMap$sun$security$ssl$ClientAuthType, $new($ints, $($ClientAuthType::values())->length));
	{
		try {
			$nc(SSLConfiguration$1::$SwitchMap$sun$security$ssl$ClientAuthType)->set($ClientAuthType::CLIENT_AUTH_REQUIRED->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SSLConfiguration$1::$SwitchMap$sun$security$ssl$ClientAuthType)->set($ClientAuthType::CLIENT_AUTH_REQUESTED->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

SSLConfiguration$1::SSLConfiguration$1() {
}

$Class* SSLConfiguration$1::load$($String* name, bool initialize) {
	$loadClass(SSLConfiguration$1, name, initialize, &_SSLConfiguration$1_ClassInfo_, clinit$SSLConfiguration$1, allocate$SSLConfiguration$1);
	return class$;
}

$Class* SSLConfiguration$1::class$ = nullptr;

		} // ssl
	} // security
} // sun