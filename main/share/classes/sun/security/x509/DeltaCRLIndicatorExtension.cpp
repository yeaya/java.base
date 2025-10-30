#include <sun/security/x509/DeltaCRLIndicatorExtension.h>

#include <java/io/OutputStream.h>
#include <java/math/BigInteger.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/CRLNumberExtension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef LABEL
#undef NAME

using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $CRLNumberExtension = ::sun::security::x509::CRLNumberExtension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _DeltaCRLIndicatorExtension_FieldInfo_[] = {
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DeltaCRLIndicatorExtension, NAME)},
	{"LABEL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DeltaCRLIndicatorExtension, LABEL)},
	{}
};

$MethodInfo _DeltaCRLIndicatorExtension_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DeltaCRLIndicatorExtension::*)(int32_t)>(&DeltaCRLIndicatorExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(DeltaCRLIndicatorExtension::*)($BigInteger*)>(&DeltaCRLIndicatorExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(DeltaCRLIndicatorExtension::*)($Boolean*,Object$*)>(&DeltaCRLIndicatorExtension::init$)), "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _DeltaCRLIndicatorExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.DeltaCRLIndicatorExtension",
	"sun.security.x509.CRLNumberExtension",
	nullptr,
	_DeltaCRLIndicatorExtension_FieldInfo_,
	_DeltaCRLIndicatorExtension_MethodInfo_
};

$Object* allocate$DeltaCRLIndicatorExtension($Class* clazz) {
	return $of($alloc(DeltaCRLIndicatorExtension));
}

$String* DeltaCRLIndicatorExtension::NAME = nullptr;
$String* DeltaCRLIndicatorExtension::LABEL = nullptr;

void DeltaCRLIndicatorExtension::init$(int32_t crlNum) {
	$init($PKIXExtensions);
	$CRLNumberExtension::init$($PKIXExtensions::DeltaCRLIndicator_Id, true, $($BigInteger::valueOf((int64_t)crlNum)), DeltaCRLIndicatorExtension::NAME, DeltaCRLIndicatorExtension::LABEL);
}

void DeltaCRLIndicatorExtension::init$($BigInteger* crlNum) {
	$init($PKIXExtensions);
	$CRLNumberExtension::init$($PKIXExtensions::DeltaCRLIndicator_Id, true, crlNum, DeltaCRLIndicatorExtension::NAME, DeltaCRLIndicatorExtension::LABEL);
}

void DeltaCRLIndicatorExtension::init$($Boolean* critical, Object$* value) {
	$init($PKIXExtensions);
	$CRLNumberExtension::init$($PKIXExtensions::DeltaCRLIndicator_Id, $($Boolean::valueOf($nc(critical)->booleanValue())), value, DeltaCRLIndicatorExtension::NAME, DeltaCRLIndicatorExtension::LABEL);
}

void DeltaCRLIndicatorExtension::encode($OutputStream* out) {
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	$init($PKIXExtensions);
	$CRLNumberExtension::encode(out, $PKIXExtensions::DeltaCRLIndicator_Id, true);
}

DeltaCRLIndicatorExtension::DeltaCRLIndicatorExtension() {
}

void clinit$DeltaCRLIndicatorExtension($Class* class$) {
	$assignStatic(DeltaCRLIndicatorExtension::NAME, "DeltaCRLIndicator"_s);
	$assignStatic(DeltaCRLIndicatorExtension::LABEL, "Base CRL Number"_s);
}

$Class* DeltaCRLIndicatorExtension::load$($String* name, bool initialize) {
	$loadClass(DeltaCRLIndicatorExtension, name, initialize, &_DeltaCRLIndicatorExtension_ClassInfo_, clinit$DeltaCRLIndicatorExtension, allocate$DeltaCRLIndicatorExtension);
	return class$;
}

$Class* DeltaCRLIndicatorExtension::class$ = nullptr;

		} // x509
	} // security
} // sun