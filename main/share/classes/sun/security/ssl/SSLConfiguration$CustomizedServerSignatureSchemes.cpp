#include <sun/security/ssl/SSLConfiguration$CustomizedServerSignatureSchemes.h>
#include <java/util/List.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;

namespace sun {
	namespace security {
		namespace ssl {

$List* SSLConfiguration$CustomizedServerSignatureSchemes::signatureSchemes = nullptr;

void SSLConfiguration$CustomizedServerSignatureSchemes::init$() {
}

void SSLConfiguration$CustomizedServerSignatureSchemes::clinit$($Class* clazz) {
	$assignStatic(SSLConfiguration$CustomizedServerSignatureSchemes::signatureSchemes, $SSLConfiguration::getCustomizedSignatureScheme("jdk.tls.server.SignatureSchemes"_s));
}

SSLConfiguration$CustomizedServerSignatureSchemes::SSLConfiguration$CustomizedServerSignatureSchemes() {
}

$Class* SSLConfiguration$CustomizedServerSignatureSchemes::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"signatureSchemes", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/SignatureScheme;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLConfiguration$CustomizedServerSignatureSchemes, signatureSchemes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLConfiguration$CustomizedServerSignatureSchemes, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLConfiguration$CustomizedServerSignatureSchemes", "sun.security.ssl.SSLConfiguration", "CustomizedServerSignatureSchemes", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLConfiguration$CustomizedServerSignatureSchemes",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLConfiguration"
	};
	$loadClass(SSLConfiguration$CustomizedServerSignatureSchemes, name, initialize, &classInfo$$, SSLConfiguration$CustomizedServerSignatureSchemes::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLConfiguration$CustomizedServerSignatureSchemes);
	});
	return class$;
}

$Class* SSLConfiguration$CustomizedServerSignatureSchemes::class$ = nullptr;

		} // ssl
	} // security
} // sun