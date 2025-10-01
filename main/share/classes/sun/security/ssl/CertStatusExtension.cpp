#include <sun/security/ssl/CertStatusExtension.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/CertStatusExtension$CHCertStatusReqConsumer.h>
#include <sun/security/ssl/CertStatusExtension$CHCertStatusReqProducer.h>
#include <sun/security/ssl/CertStatusExtension$CHCertStatusReqV2Consumer.h>
#include <sun/security/ssl/CertStatusExtension$CHCertStatusReqV2Producer.h>
#include <sun/security/ssl/CertStatusExtension$CTCertStatusResponseConsumer.h>
#include <sun/security/ssl/CertStatusExtension$CTCertStatusResponseProducer.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestStringizer.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestsStringizer.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRespStringizer.h>
#include <sun/security/ssl/CertStatusExtension$SHCertStatusReqConsumer.h>
#include <sun/security/ssl/CertStatusExtension$SHCertStatusReqProducer.h>
#include <sun/security/ssl/CertStatusExtension$SHCertStatusReqV2Consumer.h>
#include <sun/security/ssl/CertStatusExtension$SHCertStatusReqV2Producer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertStatusExtension$CHCertStatusReqConsumer = ::sun::security::ssl::CertStatusExtension$CHCertStatusReqConsumer;
using $CertStatusExtension$CHCertStatusReqProducer = ::sun::security::ssl::CertStatusExtension$CHCertStatusReqProducer;
using $CertStatusExtension$CHCertStatusReqV2Consumer = ::sun::security::ssl::CertStatusExtension$CHCertStatusReqV2Consumer;
using $CertStatusExtension$CHCertStatusReqV2Producer = ::sun::security::ssl::CertStatusExtension$CHCertStatusReqV2Producer;
using $CertStatusExtension$CTCertStatusResponseConsumer = ::sun::security::ssl::CertStatusExtension$CTCertStatusResponseConsumer;
using $CertStatusExtension$CTCertStatusResponseProducer = ::sun::security::ssl::CertStatusExtension$CTCertStatusResponseProducer;
using $CertStatusExtension$CertStatusRequestStringizer = ::sun::security::ssl::CertStatusExtension$CertStatusRequestStringizer;
using $CertStatusExtension$CertStatusRequestsStringizer = ::sun::security::ssl::CertStatusExtension$CertStatusRequestsStringizer;
using $CertStatusExtension$CertStatusRespStringizer = ::sun::security::ssl::CertStatusExtension$CertStatusRespStringizer;
using $CertStatusExtension$SHCertStatusReqConsumer = ::sun::security::ssl::CertStatusExtension$SHCertStatusReqConsumer;
using $CertStatusExtension$SHCertStatusReqProducer = ::sun::security::ssl::CertStatusExtension$SHCertStatusReqProducer;
using $CertStatusExtension$SHCertStatusReqV2Consumer = ::sun::security::ssl::CertStatusExtension$SHCertStatusReqV2Consumer;
using $CertStatusExtension$SHCertStatusReqV2Producer = ::sun::security::ssl::CertStatusExtension$SHCertStatusReqV2Producer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertStatusExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, chOnLoadConsumer)},
	{"shNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, shNetworkProducer)},
	{"shOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, shOnLoadConsumer)},
	{"ctNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, ctNetworkProducer)},
	{"ctOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, ctOnLoadConsumer)},
	{"certStatusReqStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, certStatusReqStringizer)},
	{"chV2NetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, chV2NetworkProducer)},
	{"chV2OnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, chV2OnLoadConsumer)},
	{"shV2NetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, shV2NetworkProducer)},
	{"shV2OnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, shV2OnLoadConsumer)},
	{"certStatusReqV2Stringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, certStatusReqV2Stringizer)},
	{"certStatusRespStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(CertStatusExtension, certStatusRespStringizer)},
	{}
};

$MethodInfo _CertStatusExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CertStatusExtension::*)()>(&CertStatusExtension::init$))},
	{}
};

$InnerClassInfo _CertStatusExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$CTCertStatusResponseConsumer", "sun.security.ssl.CertStatusExtension", "CTCertStatusResponseConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CTCertStatusResponseProducer", "sun.security.ssl.CertStatusExtension", "CTCertStatusResponseProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$SHCertStatusReqV2Consumer", "sun.security.ssl.CertStatusExtension", "SHCertStatusReqV2Consumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$SHCertStatusReqV2Producer", "sun.security.ssl.CertStatusExtension", "SHCertStatusReqV2Producer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CHCertStatusReqV2Consumer", "sun.security.ssl.CertStatusExtension", "CHCertStatusReqV2Consumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CHCertStatusReqV2Producer", "sun.security.ssl.CertStatusExtension", "CHCertStatusReqV2Producer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CertStatusRequestsStringizer", "sun.security.ssl.CertStatusExtension", "CertStatusRequestsStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CertStatusRequestV2Spec", "sun.security.ssl.CertStatusExtension", "CertStatusRequestV2Spec", $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$SHCertStatusReqConsumer", "sun.security.ssl.CertStatusExtension", "SHCertStatusReqConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$SHCertStatusReqProducer", "sun.security.ssl.CertStatusExtension", "SHCertStatusReqProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CHCertStatusReqConsumer", "sun.security.ssl.CertStatusExtension", "CHCertStatusReqConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CHCertStatusReqProducer", "sun.security.ssl.CertStatusExtension", "CHCertStatusReqProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$OCSPStatusResponse", "sun.security.ssl.CertStatusExtension", "OCSPStatusResponse", $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CertStatusResponse", "sun.security.ssl.CertStatusExtension", "CertStatusResponse", $STATIC},
	{"sun.security.ssl.CertStatusExtension$OCSPStatusRequest", "sun.security.ssl.CertStatusExtension", "OCSPStatusRequest", $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CertStatusRequest", "sun.security.ssl.CertStatusExtension", "CertStatusRequest", $STATIC},
	{"sun.security.ssl.CertStatusExtension$CertStatusRequestType", "sun.security.ssl.CertStatusExtension", "CertStatusRequestType", $STATIC | $FINAL | $ENUM},
	{"sun.security.ssl.CertStatusExtension$CertStatusRespStringizer", "sun.security.ssl.CertStatusExtension", "CertStatusRespStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CertStatusRequestStringizer", "sun.security.ssl.CertStatusExtension", "CertStatusRequestStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CertStatusResponseSpec", "sun.security.ssl.CertStatusExtension", "CertStatusResponseSpec", $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CertStatusRequestSpec", "sun.security.ssl.CertStatusExtension", "CertStatusRequestSpec", $STATIC | $FINAL},
	{}
};

$ClassInfo _CertStatusExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertStatusExtension",
	"java.lang.Object",
	nullptr,
	_CertStatusExtension_FieldInfo_,
	_CertStatusExtension_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension$CTCertStatusResponseConsumer,sun.security.ssl.CertStatusExtension$CTCertStatusResponseProducer,sun.security.ssl.CertStatusExtension$SHCertStatusReqV2Consumer,sun.security.ssl.CertStatusExtension$SHCertStatusReqV2Producer,sun.security.ssl.CertStatusExtension$CHCertStatusReqV2Consumer,sun.security.ssl.CertStatusExtension$CHCertStatusReqV2Producer,sun.security.ssl.CertStatusExtension$CertStatusRequestsStringizer,sun.security.ssl.CertStatusExtension$CertStatusRequestV2Spec,sun.security.ssl.CertStatusExtension$SHCertStatusReqConsumer,sun.security.ssl.CertStatusExtension$SHCertStatusReqProducer,sun.security.ssl.CertStatusExtension$CHCertStatusReqConsumer,sun.security.ssl.CertStatusExtension$CHCertStatusReqProducer,sun.security.ssl.CertStatusExtension$OCSPStatusResponse,sun.security.ssl.CertStatusExtension$CertStatusResponse,sun.security.ssl.CertStatusExtension$OCSPStatusRequest,sun.security.ssl.CertStatusExtension$CertStatusRequest,sun.security.ssl.CertStatusExtension$CertStatusRequestType,sun.security.ssl.CertStatusExtension$CertStatusRespStringizer,sun.security.ssl.CertStatusExtension$CertStatusRequestStringizer,sun.security.ssl.CertStatusExtension$CertStatusResponseSpec,sun.security.ssl.CertStatusExtension$CertStatusRequestSpec"
};

$Object* allocate$CertStatusExtension($Class* clazz) {
	return $of($alloc(CertStatusExtension));
}

$HandshakeProducer* CertStatusExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* CertStatusExtension::chOnLoadConsumer = nullptr;
$HandshakeProducer* CertStatusExtension::shNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* CertStatusExtension::shOnLoadConsumer = nullptr;
$HandshakeProducer* CertStatusExtension::ctNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* CertStatusExtension::ctOnLoadConsumer = nullptr;
$SSLStringizer* CertStatusExtension::certStatusReqStringizer = nullptr;
$HandshakeProducer* CertStatusExtension::chV2NetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* CertStatusExtension::chV2OnLoadConsumer = nullptr;
$HandshakeProducer* CertStatusExtension::shV2NetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* CertStatusExtension::shV2OnLoadConsumer = nullptr;
$SSLStringizer* CertStatusExtension::certStatusReqV2Stringizer = nullptr;
$SSLStringizer* CertStatusExtension::certStatusRespStringizer = nullptr;

void CertStatusExtension::init$() {
}

void clinit$CertStatusExtension($Class* class$) {
	$assignStatic(CertStatusExtension::chNetworkProducer, $new($CertStatusExtension$CHCertStatusReqProducer));
	$assignStatic(CertStatusExtension::chOnLoadConsumer, $new($CertStatusExtension$CHCertStatusReqConsumer));
	$assignStatic(CertStatusExtension::shNetworkProducer, $new($CertStatusExtension$SHCertStatusReqProducer));
	$assignStatic(CertStatusExtension::shOnLoadConsumer, $new($CertStatusExtension$SHCertStatusReqConsumer));
	$assignStatic(CertStatusExtension::ctNetworkProducer, $new($CertStatusExtension$CTCertStatusResponseProducer));
	$assignStatic(CertStatusExtension::ctOnLoadConsumer, $new($CertStatusExtension$CTCertStatusResponseConsumer));
	$assignStatic(CertStatusExtension::certStatusReqStringizer, $new($CertStatusExtension$CertStatusRequestStringizer));
	$assignStatic(CertStatusExtension::chV2NetworkProducer, $new($CertStatusExtension$CHCertStatusReqV2Producer));
	$assignStatic(CertStatusExtension::chV2OnLoadConsumer, $new($CertStatusExtension$CHCertStatusReqV2Consumer));
	$assignStatic(CertStatusExtension::shV2NetworkProducer, $new($CertStatusExtension$SHCertStatusReqV2Producer));
	$assignStatic(CertStatusExtension::shV2OnLoadConsumer, $new($CertStatusExtension$SHCertStatusReqV2Consumer));
	$assignStatic(CertStatusExtension::certStatusReqV2Stringizer, $new($CertStatusExtension$CertStatusRequestsStringizer));
	$assignStatic(CertStatusExtension::certStatusRespStringizer, $new($CertStatusExtension$CertStatusRespStringizer));
}

CertStatusExtension::CertStatusExtension() {
}

$Class* CertStatusExtension::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension, name, initialize, &_CertStatusExtension_ClassInfo_, clinit$CertStatusExtension, allocate$CertStatusExtension);
	return class$;
}

$Class* CertStatusExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun