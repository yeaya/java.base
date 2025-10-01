#include <sun/security/ssl/StatusResponseManager$StaplingParameters.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequest.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestType.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/StatusResponseManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $CertStatusExtension$CertStatusRequest = ::sun::security::ssl::CertStatusExtension$CertStatusRequest;
using $CertStatusExtension$CertStatusRequestType = ::sun::security::ssl::CertStatusExtension$CertStatusRequestType;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $StatusResponseManager = ::sun::security::ssl::StatusResponseManager;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _StatusResponseManager$StaplingParameters_FieldInfo_[] = {
	{"statusRespExt", "Lsun/security/ssl/SSLExtension;", nullptr, $FINAL, $field(StatusResponseManager$StaplingParameters, statusRespExt)},
	{"statReqType", "Lsun/security/ssl/CertStatusExtension$CertStatusRequestType;", nullptr, $FINAL, $field(StatusResponseManager$StaplingParameters, statReqType)},
	{"statReqData", "Lsun/security/ssl/CertStatusExtension$CertStatusRequest;", nullptr, $FINAL, $field(StatusResponseManager$StaplingParameters, statReqData)},
	{"responseMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/security/cert/X509Certificate;[B>;", $FINAL, $field(StatusResponseManager$StaplingParameters, responseMap)},
	{}
};

$MethodInfo _StatusResponseManager$StaplingParameters_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/SSLExtension;Lsun/security/ssl/CertStatusExtension$CertStatusRequestType;Lsun/security/ssl/CertStatusExtension$CertStatusRequest;Ljava/util/Map;)V", "(Lsun/security/ssl/SSLExtension;Lsun/security/ssl/CertStatusExtension$CertStatusRequestType;Lsun/security/ssl/CertStatusExtension$CertStatusRequest;Ljava/util/Map<Ljava/security/cert/X509Certificate;[B>;)V", 0, $method(static_cast<void(StatusResponseManager$StaplingParameters::*)($SSLExtension*,$CertStatusExtension$CertStatusRequestType*,$CertStatusExtension$CertStatusRequest*,$Map*)>(&StatusResponseManager$StaplingParameters::init$))},
	{}
};

$InnerClassInfo _StatusResponseManager$StaplingParameters_InnerClassesInfo_[] = {
	{"sun.security.ssl.StatusResponseManager$StaplingParameters", "sun.security.ssl.StatusResponseManager", "StaplingParameters", $STATIC | $FINAL},
	{}
};

$ClassInfo _StatusResponseManager$StaplingParameters_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.StatusResponseManager$StaplingParameters",
	"java.lang.Object",
	nullptr,
	_StatusResponseManager$StaplingParameters_FieldInfo_,
	_StatusResponseManager$StaplingParameters_MethodInfo_,
	nullptr,
	nullptr,
	_StatusResponseManager$StaplingParameters_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.StatusResponseManager"
};

$Object* allocate$StatusResponseManager$StaplingParameters($Class* clazz) {
	return $of($alloc(StatusResponseManager$StaplingParameters));
}

void StatusResponseManager$StaplingParameters::init$($SSLExtension* ext, $CertStatusExtension$CertStatusRequestType* type, $CertStatusExtension$CertStatusRequest* req, $Map* responses) {
	$set(this, statusRespExt, ext);
	$set(this, statReqType, type);
	$set(this, statReqData, req);
	$set(this, responseMap, responses);
}

StatusResponseManager$StaplingParameters::StatusResponseManager$StaplingParameters() {
}

$Class* StatusResponseManager$StaplingParameters::load$($String* name, bool initialize) {
	$loadClass(StatusResponseManager$StaplingParameters, name, initialize, &_StatusResponseManager$StaplingParameters_ClassInfo_, allocate$StatusResponseManager$StaplingParameters);
	return class$;
}

$Class* StatusResponseManager$StaplingParameters::class$ = nullptr;

		} // ssl
	} // security
} // sun