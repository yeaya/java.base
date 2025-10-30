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

$FieldInfo _SSLConfiguration$CustomizedClientSignatureSchemes_FieldInfo_[] = {
	{"signatureSchemes", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/SignatureScheme;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLConfiguration$CustomizedClientSignatureSchemes, signatureSchemes)},
	{}
};

$MethodInfo _SSLConfiguration$CustomizedClientSignatureSchemes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLConfiguration$CustomizedClientSignatureSchemes::*)()>(&SSLConfiguration$CustomizedClientSignatureSchemes::init$))},
	{}
};

$InnerClassInfo _SSLConfiguration$CustomizedClientSignatureSchemes_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLConfiguration$CustomizedClientSignatureSchemes", "sun.security.ssl.SSLConfiguration", "CustomizedClientSignatureSchemes", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLConfiguration$CustomizedClientSignatureSchemes_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLConfiguration$CustomizedClientSignatureSchemes",
	"java.lang.Object",
	nullptr,
	_SSLConfiguration$CustomizedClientSignatureSchemes_FieldInfo_,
	_SSLConfiguration$CustomizedClientSignatureSchemes_MethodInfo_,
	nullptr,
	nullptr,
	_SSLConfiguration$CustomizedClientSignatureSchemes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLConfiguration"
};

$Object* allocate$SSLConfiguration$CustomizedClientSignatureSchemes($Class* clazz) {
	return $of($alloc(SSLConfiguration$CustomizedClientSignatureSchemes));
}

$List* SSLConfiguration$CustomizedClientSignatureSchemes::signatureSchemes = nullptr;

void SSLConfiguration$CustomizedClientSignatureSchemes::init$() {
}

void clinit$SSLConfiguration$CustomizedClientSignatureSchemes($Class* class$) {
	$assignStatic(SSLConfiguration$CustomizedClientSignatureSchemes::signatureSchemes, $SSLConfiguration::getCustomizedSignatureScheme("jdk.tls.client.SignatureSchemes"_s));
}

SSLConfiguration$CustomizedClientSignatureSchemes::SSLConfiguration$CustomizedClientSignatureSchemes() {
}

$Class* SSLConfiguration$CustomizedClientSignatureSchemes::load$($String* name, bool initialize) {
	$loadClass(SSLConfiguration$CustomizedClientSignatureSchemes, name, initialize, &_SSLConfiguration$CustomizedClientSignatureSchemes_ClassInfo_, clinit$SSLConfiguration$CustomizedClientSignatureSchemes, allocate$SSLConfiguration$CustomizedClientSignatureSchemes);
	return class$;
}

$Class* SSLConfiguration$CustomizedClientSignatureSchemes::class$ = nullptr;

		} // ssl
	} // security
} // sun