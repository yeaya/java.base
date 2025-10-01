#include <java/security/cert/CertPath$CertPathRep.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/NotSerializableException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/CertificateFactory.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $NotSerializableException = ::java::io::NotSerializableException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $CertPath = ::java::security::cert::CertPath;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateFactory = ::java::security::cert::CertificateFactory;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertPath$CertPathRep_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertPath$CertPathRep, serialVersionUID)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CertPath$CertPathRep, type)},
	{"data", "[B", nullptr, $PRIVATE, $field(CertPath$CertPathRep, data)},
	{}
};

$MethodInfo _CertPath$CertPathRep_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[B)V", nullptr, $PROTECTED, $method(static_cast<void(CertPath$CertPathRep::*)($String*,$bytes*)>(&CertPath$CertPathRep::init$))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{}
};

$InnerClassInfo _CertPath$CertPathRep_InnerClassesInfo_[] = {
	{"java.security.cert.CertPath$CertPathRep", "java.security.cert.CertPath", "CertPathRep", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _CertPath$CertPathRep_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertPath$CertPathRep",
	"java.lang.Object",
	"java.io.Serializable",
	_CertPath$CertPathRep_FieldInfo_,
	_CertPath$CertPathRep_MethodInfo_,
	nullptr,
	nullptr,
	_CertPath$CertPathRep_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.cert.CertPath"
};

$Object* allocate$CertPath$CertPathRep($Class* clazz) {
	return $of($alloc(CertPath$CertPathRep));
}

void CertPath$CertPathRep::init$($String* type, $bytes* data) {
	$set(this, type, type);
	$set(this, data, data);
}

$Object* CertPath$CertPathRep::readResolve() {
	try {
		$var($CertificateFactory, cf, $CertificateFactory::getInstance(this->type));
		return $of($nc(cf)->generateCertPath(static_cast<$InputStream*>($$new($ByteArrayInputStream, this->data))));
	} catch ($CertificateException&) {
		$var($CertificateException, ce, $catch());
		$var($NotSerializableException, nse, $new($NotSerializableException, $$str({"java.security.cert.CertPath: "_s, this->type})));
		nse->initCause(ce);
		$throw(nse);
	}
	$shouldNotReachHere();
}

CertPath$CertPathRep::CertPath$CertPathRep() {
}

$Class* CertPath$CertPathRep::load$($String* name, bool initialize) {
	$loadClass(CertPath$CertPathRep, name, initialize, &_CertPath$CertPathRep_ClassInfo_, allocate$CertPath$CertPathRep);
	return class$;
}

$Class* CertPath$CertPathRep::class$ = nullptr;

		} // cert
	} // security
} // java