#include <sun/security/ssl/NamedGroup$ExceptionSupplier.h>

#include <sun/security/ssl/NamedGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedGroup = ::sun::security::ssl::NamedGroup;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _NamedGroup$ExceptionSupplier_MethodInfo_[] = {
	{"apply", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.net.ssl.SSLException"},
	{}
};

$InnerClassInfo _NamedGroup$ExceptionSupplier_InnerClassesInfo_[] = {
	{"sun.security.ssl.NamedGroup$ExceptionSupplier", "sun.security.ssl.NamedGroup", "ExceptionSupplier", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NamedGroup$ExceptionSupplier_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.NamedGroup$ExceptionSupplier",
	nullptr,
	nullptr,
	nullptr,
	_NamedGroup$ExceptionSupplier_MethodInfo_,
	nullptr,
	nullptr,
	_NamedGroup$ExceptionSupplier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.NamedGroup"
};

$Object* allocate$NamedGroup$ExceptionSupplier($Class* clazz) {
	return $of($alloc(NamedGroup$ExceptionSupplier));
}

$Class* NamedGroup$ExceptionSupplier::load$($String* name, bool initialize) {
	$loadClass(NamedGroup$ExceptionSupplier, name, initialize, &_NamedGroup$ExceptionSupplier_ClassInfo_, allocate$NamedGroup$ExceptionSupplier);
	return class$;
}

$Class* NamedGroup$ExceptionSupplier::class$ = nullptr;

		} // ssl
	} // security
} // sun