#include <sun/security/ssl/SSLContextImpl$CustomizedSSLProtocols.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <jcpp.h>

#undef JDK_TLS_SERVER_PROTOCOLS
#undef JDK_TLS_CLIENT_PROTOCOLS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLContextImpl$CustomizedSSLProtocols_FieldInfo_[] = {
	{"JDK_TLS_CLIENT_PROTOCOLS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$CustomizedSSLProtocols, JDK_TLS_CLIENT_PROTOCOLS)},
	{"JDK_TLS_SERVER_PROTOCOLS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$CustomizedSSLProtocols, JDK_TLS_SERVER_PROTOCOLS)},
	{"reservedException", "Ljava/lang/IllegalArgumentException;", nullptr, $STATIC, $staticField(SSLContextImpl$CustomizedSSLProtocols, reservedException)},
	{"customizedClientProtocols", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/security/ssl/ProtocolVersion;>;", $STATIC | $FINAL, $staticField(SSLContextImpl$CustomizedSSLProtocols, customizedClientProtocols)},
	{"customizedServerProtocols", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/security/ssl/ProtocolVersion;>;", $STATIC | $FINAL, $staticField(SSLContextImpl$CustomizedSSLProtocols, customizedServerProtocols)},
	{}
};

$MethodInfo _SSLContextImpl$CustomizedSSLProtocols_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLContextImpl$CustomizedSSLProtocols::*)()>(&SSLContextImpl$CustomizedSSLProtocols::init$))},
	{"populate", "(Ljava/lang/String;Ljava/util/ArrayList;)V", "(Ljava/lang/String;Ljava/util/ArrayList<Lsun/security/ssl/ProtocolVersion;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$ArrayList*)>(&SSLContextImpl$CustomizedSSLProtocols::populate))},
	{}
};

$InnerClassInfo _SSLContextImpl$CustomizedSSLProtocols_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$CustomizedSSLProtocols", "sun.security.ssl.SSLContextImpl", "CustomizedSSLProtocols", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLContextImpl$CustomizedSSLProtocols_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLContextImpl$CustomizedSSLProtocols",
	"java.lang.Object",
	nullptr,
	_SSLContextImpl$CustomizedSSLProtocols_FieldInfo_,
	_SSLContextImpl$CustomizedSSLProtocols_MethodInfo_,
	nullptr,
	nullptr,
	_SSLContextImpl$CustomizedSSLProtocols_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl"
};

$Object* allocate$SSLContextImpl$CustomizedSSLProtocols($Class* clazz) {
	return $of($alloc(SSLContextImpl$CustomizedSSLProtocols));
}

$String* SSLContextImpl$CustomizedSSLProtocols::JDK_TLS_CLIENT_PROTOCOLS = nullptr;
$String* SSLContextImpl$CustomizedSSLProtocols::JDK_TLS_SERVER_PROTOCOLS = nullptr;
$IllegalArgumentException* SSLContextImpl$CustomizedSSLProtocols::reservedException = nullptr;
$ArrayList* SSLContextImpl$CustomizedSSLProtocols::customizedClientProtocols = nullptr;
$ArrayList* SSLContextImpl$CustomizedSSLProtocols::customizedServerProtocols = nullptr;

void SSLContextImpl$CustomizedSSLProtocols::init$() {
}

void SSLContextImpl$CustomizedSSLProtocols::populate($String* propname, $ArrayList* arrayList) {
	$init(SSLContextImpl$CustomizedSSLProtocols);
	$var($String, property, $GetPropertyAction::privilegedGetProperty(propname));
	if (property == nullptr) {
		return;
	}
	if (!$nc(property)->isEmpty()) {
		bool var$1 = property->length() > 1;
		bool var$0 = var$1 && property->charAt(0) == u'\"';
		if (var$0 && property->charAt(property->length() - 1) == u'\"') {
			$assign(property, property->substring(1, property->length() - 1));
		}
	}
	if (!$nc(property)->isEmpty()) {
		$var($StringArray, protocols, property->split(","_s));
		for (int32_t i = 0; i < protocols->length; ++i) {
			protocols->set(i, $($nc(protocols->get(i))->trim()));
			$ProtocolVersion* pv = $ProtocolVersion::nameOf(protocols->get(i));
			if (pv == nullptr) {
				$assignStatic(SSLContextImpl$CustomizedSSLProtocols::reservedException, $new($IllegalArgumentException, $$str({propname, ": "_s, protocols->get(i), " is not a supported SSL protocol name"_s})));
			}
			if (!$nc(arrayList)->contains(pv)) {
				arrayList->add(pv);
			}
		}
	}
}

void clinit$SSLContextImpl$CustomizedSSLProtocols($Class* class$) {
	$assignStatic(SSLContextImpl$CustomizedSSLProtocols::JDK_TLS_CLIENT_PROTOCOLS, "jdk.tls.client.protocols"_s);
	$assignStatic(SSLContextImpl$CustomizedSSLProtocols::JDK_TLS_SERVER_PROTOCOLS, "jdk.tls.server.protocols"_s);
	$assignStatic(SSLContextImpl$CustomizedSSLProtocols::reservedException, nullptr);
	$assignStatic(SSLContextImpl$CustomizedSSLProtocols::customizedClientProtocols, $new($ArrayList));
	$assignStatic(SSLContextImpl$CustomizedSSLProtocols::customizedServerProtocols, $new($ArrayList));
	{
		SSLContextImpl$CustomizedSSLProtocols::populate(SSLContextImpl$CustomizedSSLProtocols::JDK_TLS_CLIENT_PROTOCOLS, SSLContextImpl$CustomizedSSLProtocols::customizedClientProtocols);
		SSLContextImpl$CustomizedSSLProtocols::populate(SSLContextImpl$CustomizedSSLProtocols::JDK_TLS_SERVER_PROTOCOLS, SSLContextImpl$CustomizedSSLProtocols::customizedServerProtocols);
	}
}

SSLContextImpl$CustomizedSSLProtocols::SSLContextImpl$CustomizedSSLProtocols() {
}

$Class* SSLContextImpl$CustomizedSSLProtocols::load$($String* name, bool initialize) {
	$loadClass(SSLContextImpl$CustomizedSSLProtocols, name, initialize, &_SSLContextImpl$CustomizedSSLProtocols_ClassInfo_, clinit$SSLContextImpl$CustomizedSSLProtocols, allocate$SSLContextImpl$CustomizedSSLProtocols);
	return class$;
}

$Class* SSLContextImpl$CustomizedSSLProtocols::class$ = nullptr;

		} // ssl
	} // security
} // sun