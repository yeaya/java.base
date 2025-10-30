#include <sun/security/ssl/Authenticator$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/CipherSuite$MacAlg.h>
#include <jcpp.h>

#undef M_MD5
#undef M_SHA
#undef M_SHA256
#undef M_SHA384

using $CipherSuite$MacAlgArray = $Array<::sun::security::ssl::CipherSuite$MacAlg>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $CipherSuite$MacAlg = ::sun::security::ssl::CipherSuite$MacAlg;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Authenticator$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$ssl$CipherSuite$MacAlg", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Authenticator$1, $SwitchMap$sun$security$ssl$CipherSuite$MacAlg)},
	{}
};

$EnclosingMethodInfo _Authenticator$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.Authenticator",
	nullptr,
	nullptr
};

$InnerClassInfo _Authenticator$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Authenticator$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.ssl.Authenticator$1",
	"java.lang.Object",
	nullptr,
	_Authenticator$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Authenticator$1_EnclosingMethodInfo_,
	_Authenticator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$1($Class* clazz) {
	return $of($alloc(Authenticator$1));
}

$ints* Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg = nullptr;

void clinit$Authenticator$1($Class* class$) {
	$assignStatic(Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg, $new($ints, $($CipherSuite$MacAlg::values())->length));
	{
		try {
			$nc(Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg)->set($CipherSuite$MacAlg::M_MD5->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg)->set($CipherSuite$MacAlg::M_SHA->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg)->set($CipherSuite$MacAlg::M_SHA256->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg)->set($CipherSuite$MacAlg::M_SHA384->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Authenticator$1::Authenticator$1() {
}

$Class* Authenticator$1::load$($String* name, bool initialize) {
	$loadClass(Authenticator$1, name, initialize, &_Authenticator$1_ClassInfo_, clinit$Authenticator$1, allocate$Authenticator$1);
	return class$;
}

$Class* Authenticator$1::class$ = nullptr;

		} // ssl
	} // security
} // sun