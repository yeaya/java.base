#include <sun/security/ssl/SSLConfiguration$CustomizedClientSignatureSchemes.h>
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

$List* SSLConfiguration$CustomizedClientSignatureSchemes::signatureSchemes = nullptr;

void SSLConfiguration$CustomizedClientSignatureSchemes::init$() {
}

void SSLConfiguration$CustomizedClientSignatureSchemes::clinit$($Class* clazz) {
	$assignStatic(SSLConfiguration$CustomizedClientSignatureSchemes::signatureSchemes, $SSLConfiguration::getCustomizedSignatureScheme("jdk.tls.client.SignatureSchemes"_s));
}

SSLConfiguration$CustomizedClientSignatureSchemes::SSLConfiguration$CustomizedClientSignatureSchemes() {
}

$Class* SSLConfiguration$CustomizedClientSignatureSchemes::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"signatureSchemes", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/SignatureScheme;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLConfiguration$CustomizedClientSignatureSchemes, signatureSchemes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLConfiguration$CustomizedClientSignatureSchemes, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLConfiguration$CustomizedClientSignatureSchemes", "sun.security.ssl.SSLConfiguration", "CustomizedClientSignatureSchemes", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLConfiguration$CustomizedClientSignatureSchemes",
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
	$loadClass(SSLConfiguration$CustomizedClientSignatureSchemes, name, initialize, &classInfo$$, SSLConfiguration$CustomizedClientSignatureSchemes::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLConfiguration$CustomizedClientSignatureSchemes);
	});
	return class$;
}

$Class* SSLConfiguration$CustomizedClientSignatureSchemes::class$ = nullptr;

		} // ssl
	} // security
} // sun