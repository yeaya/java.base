#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/SSLExtension.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $SSLExtension = ::sun::security::ssl::SSLExtension;

namespace sun {
	namespace security {
		namespace ssl {

$InnerClassInfo _SSLExtension$SSLExtensionSpec_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SSLExtension$SSLExtensionSpec_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLExtension$SSLExtensionSpec",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_SSLExtension$SSLExtensionSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLExtension"
};

$Object* allocate$SSLExtension$SSLExtensionSpec($Class* clazz) {
	return $of($alloc(SSLExtension$SSLExtensionSpec));
}

$Class* SSLExtension$SSLExtensionSpec::load$($String* name, bool initialize) {
	$loadClass(SSLExtension$SSLExtensionSpec, name, initialize, &_SSLExtension$SSLExtensionSpec_ClassInfo_, allocate$SSLExtension$SSLExtensionSpec);
	return class$;
}

$Class* SSLExtension$SSLExtensionSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun