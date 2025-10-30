#include <sun/security/x509/CertAttrSet.h>

#include <java/io/OutputStream.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace sun {
	namespace security {
		namespace x509 {

$MethodInfo _CertAttrSet_MethodInfo_[] = {
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertificateException,java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertificateException,java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertificateException,java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<TT;>;", $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertificateException,java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CertAttrSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.x509.CertAttrSet",
	nullptr,
	nullptr,
	nullptr,
	_CertAttrSet_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$CertAttrSet($Class* clazz) {
	return $of($alloc(CertAttrSet));
}

$String* CertAttrSet::toString() {
	 return this->$Object::toString();
}

$Class* CertAttrSet::load$($String* name, bool initialize) {
	$loadClass(CertAttrSet, name, initialize, &_CertAttrSet_ClassInfo_, allocate$CertAttrSet);
	return class$;
}

$Class* CertAttrSet::class$ = nullptr;

		} // x509
	} // security
} // sun