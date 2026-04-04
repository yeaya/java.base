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

void FreshestCRLExtension::clinit$($Class* clazz) {
	$assignStatic(FreshestCRLExtension::NAME, "FreshestCRL"_s);
}

$Class* FreshestCRLExtension::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FreshestCRLExtension, NAME)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/security/x509/DistributionPoint;>;)V", $PUBLIC, $method(FreshestCRLExtension, init$, void, $List*), "java.io.IOException"},
		{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(FreshestCRLExtension, init$, void, $Boolean*, Object$*), "java.io.IOException"},
		{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(FreshestCRLExtension, encode, void, $OutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.x509.FreshestCRLExtension",
		"sun.security.x509.CRLDistributionPointsExtension",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FreshestCRLExtension, name, initialize, &classInfo$$, FreshestCRLExtension::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(FreshestCRLExtension));
	});
	return class$;
}

$Class* FreshestCRLExtension::class$ = nullptr;

		} // x509
	} // security
} // sun