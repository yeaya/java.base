#include <java/security/cert/X509CertSelector$1.h>

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
#include <java/security/cert/X509CertSelector.h>
#include <sun/security/util/KnownOIDs.h>
#include <jcpp.h>

using $KnownOIDsArray = $Array<::sun::security::util::KnownOIDs>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $X509CertSelector = ::java::security::cert::X509CertSelector;
using $KnownOIDs = ::sun::security::util::KnownOIDs;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _X509CertSelector$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$util$KnownOIDs", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(X509CertSelector$1, $SwitchMap$sun$security$util$KnownOIDs)},
	{}
};

$EnclosingMethodInfo _X509CertSelector$1_EnclosingMethodInfo_ = {
	"java.security.cert.X509CertSelector",
	nullptr,
	nullptr
};

$InnerClassInfo _X509CertSelector$1_InnerClassesInfo_[] = {
	{"java.security.cert.X509CertSelector$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _X509CertSelector$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.security.cert.X509CertSelector$1",
	"java.lang.Object",
	nullptr,
	_X509CertSelector$1_FieldInfo_,
	nullptr,
	nullptr,
	&_X509CertSelector$1_EnclosingMethodInfo_,
	_X509CertSelector$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.cert.X509CertSelector"
};

$Object* allocate$X509CertSelector$1($Class* clazz) {
	return $of($alloc(X509CertSelector$1));
}

$ints* X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs = nullptr;

void clinit$X509CertSelector$1($Class* class$) {
	$assignStatic(X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs, $new($ints, $($KnownOIDs::values())->length));
	{
		try {
			$nc(X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs)->set($KnownOIDs::PrivateKeyUsage->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs)->set($KnownOIDs::SubjectAlternativeName->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs)->set($KnownOIDs::NameConstraints->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs)->set($KnownOIDs::CertificatePolicies->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs)->set($KnownOIDs::extendedKeyUsage->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

X509CertSelector$1::X509CertSelector$1() {
}

$Class* X509CertSelector$1::load$($String* name, bool initialize) {
	$loadClass(X509CertSelector$1, name, initialize, &_X509CertSelector$1_ClassInfo_, clinit$X509CertSelector$1, allocate$X509CertSelector$1);
	return class$;
}

$Class* X509CertSelector$1::class$ = nullptr;

		} // cert
	} // security
} // java