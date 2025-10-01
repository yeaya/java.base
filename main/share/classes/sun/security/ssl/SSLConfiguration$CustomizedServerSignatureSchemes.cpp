#include <sun/security/ssl/SSLConfiguration$CustomizedServerSignatureSchemes.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _SSLConfiguration$CustomizedServerSignatureSchemes_FieldInfo_[] = {
	{"signatureSchemes", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/SignatureScheme;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLConfiguration$CustomizedServerSignatureSchemes, signatureSchemes)},
	{}
};

$MethodInfo _SSLConfiguration$CustomizedServerSignatureSchemes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLConfiguration$CustomizedServerSignatureSchemes::*)()>(&SSLConfiguration$CustomizedServerSignatureSchemes::init$))},
	{}
};

$InnerClassInfo _SSLConfiguration$CustomizedServerSignatureSchemes_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLConfiguration$CustomizedServerSignatureSchemes", "sun.security.ssl.SSLConfiguration", "CustomizedServerSignatureSchemes", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLConfiguration$CustomizedServerSignatureSchemes_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLConfiguration$CustomizedServerSignatureSchemes",
	"java.lang.Object",
	nullptr,
	_SSLConfiguration$CustomizedServerSignatureSchemes_FieldInfo_,
	_SSLConfiguration$CustomizedServerSignatureSchemes_MethodInfo_,
	nullptr,
	nullptr,
	_SSLConfiguration$CustomizedServerSignatureSchemes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLConfiguration"
};

$Object* allocate$SSLConfiguration$CustomizedServerSignatureSchemes($Class* clazz) {
	return $of($alloc(SSLConfiguration$CustomizedServerSignatureSchemes));
}

$List* SSLConfiguration$CustomizedServerSignatureSchemes::signatureSchemes = nullptr;

void SSLConfiguration$CustomizedServerSignatureSchemes::init$() {
}

void clinit$SSLConfiguration$CustomizedServerSignatureSchemes($Class* class$) {
	$assignStatic(SSLConfiguration$CustomizedServerSignatureSchemes::signatureSchemes, $SSLConfiguration::getCustomizedSignatureScheme("jdk.tls.server.SignatureSchemes"_s));
}

SSLConfiguration$CustomizedServerSignatureSchemes::SSLConfiguration$CustomizedServerSignatureSchemes() {
}

$Class* SSLConfiguration$CustomizedServerSignatureSchemes::load$($String* name, bool initialize) {
	$loadClass(SSLConfiguration$CustomizedServerSignatureSchemes, name, initialize, &_SSLConfiguration$CustomizedServerSignatureSchemes_ClassInfo_, clinit$SSLConfiguration$CustomizedServerSignatureSchemes, allocate$SSLConfiguration$CustomizedServerSignatureSchemes);
	return class$;
}

$Class* SSLConfiguration$CustomizedServerSignatureSchemes::class$ = nullptr;

		} // ssl
	} // security
} // sun