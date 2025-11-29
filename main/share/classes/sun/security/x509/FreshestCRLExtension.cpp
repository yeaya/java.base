#include <sun/security/x509/FreshestCRLExtension.h>

#include <java/io/OutputStream.h>
#include <java/util/List.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/CRLDistributionPointsExtension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef NAME

using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $CRLDistributionPointsExtension = ::sun::security::x509::CRLDistributionPointsExtension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _FreshestCRLExtension_FieldInfo_[] = {
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FreshestCRLExtension, NAME)},
	{}
};

$MethodInfo _FreshestCRLExtension_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/security/x509/DistributionPoint;>;)V", $PUBLIC, $method(static_cast<void(FreshestCRLExtension::*)($List*)>(&FreshestCRLExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(FreshestCRLExtension::*)($Boolean*,Object$*)>(&FreshestCRLExtension::init$)), "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FreshestCRLExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.FreshestCRLExtension",
	"sun.security.x509.CRLDistributionPointsExtension",
	nullptr,
	_FreshestCRLExtension_FieldInfo_,
	_FreshestCRLExtension_MethodInfo_
};

$Object* allocate$FreshestCRLExtension($Class* clazz) {
	return $of($alloc(FreshestCRLExtension));
}

$String* FreshestCRLExtension::NAME = nullptr;

void FreshestCRLExtension::init$($List* distributionPoints) {
	$init($PKIXExtensions);
	$CRLDistributionPointsExtension::init$($PKIXExtensions::FreshestCRL_Id, false, distributionPoints, FreshestCRLExtension::NAME);
}

void FreshestCRLExtension::init$($Boolean* critical, Object$* value) {
	$init($PKIXExtensions);
	$CRLDistributionPointsExtension::init$($PKIXExtensions::FreshestCRL_Id, $($Boolean::valueOf($nc(critical)->booleanValue())), value, FreshestCRLExtension::NAME);
}

void FreshestCRLExtension::encode($OutputStream* out) {
	$init($PKIXExtensions);
	$CRLDistributionPointsExtension::encode(out, $PKIXExtensions::FreshestCRL_Id, false);
}

FreshestCRLExtension::FreshestCRLExtension() {
}

void clinit$FreshestCRLExtension($Class* class$) {
	$assignStatic(FreshestCRLExtension::NAME, "FreshestCRL"_s);
}

$Class* FreshestCRLExtension::load$($String* name, bool initialize) {
	$loadClass(FreshestCRLExtension, name, initialize, &_FreshestCRLExtension_ClassInfo_, clinit$FreshestCRLExtension, allocate$FreshestCRLExtension);
	return class$;
}

$Class* FreshestCRLExtension::class$ = nullptr;

		} // x509
	} // security
} // sun