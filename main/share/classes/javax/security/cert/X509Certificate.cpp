#include <javax/security/cert/X509Certificate.h>

#include <java/io/InputStream.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/math/BigInteger.h>
#include <java/security/AccessController.h>
#include <java/security/Principal.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Date.h>
#include <javax/security/cert/Certificate.h>
#include <javax/security/cert/CertificateException.h>
#include <javax/security/cert/X509Certificate$1.h>
#include <jcpp.h>

#undef X509_PROVIDER

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $BigInteger = ::java::math::BigInteger;
using $AccessController = ::java::security::AccessController;
using $Principal = ::java::security::Principal;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Date = ::java::util::Date;
using $Certificate = ::javax::security::cert::Certificate;
using $CertificateException = ::javax::security::cert::CertificateException;
using $X509Certificate$1 = ::javax::security::cert::X509Certificate$1;

namespace javax {
	namespace security {
		namespace cert {

$NamedAttribute X509Certificate_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _X509Certificate_Annotations_[] = {
	{"Ljava/lang/Deprecated;", X509Certificate_Attribute_var$0},
	{}
};

$FieldInfo _X509Certificate_FieldInfo_[] = {
	{"X509_PROVIDER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(X509Certificate, X509_PROVIDER)},
	{"X509Provider", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(X509Certificate, X509Provider)},
	{}
};

$MethodInfo _X509Certificate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(X509Certificate, init$, void)},
	{"checkValidity", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Certificate, checkValidity, void), "javax.security.cert.CertificateExpiredException,javax.security.cert.CertificateNotYetValidException"},
	{"checkValidity", "(Ljava/util/Date;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Certificate, checkValidity, void, $Date*), "javax.security.cert.CertificateExpiredException,javax.security.cert.CertificateNotYetValidException"},
	{"getInst", "(Ljava/lang/Object;)Ljavax/security/cert/X509Certificate;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(X509Certificate, getInst, X509Certificate*, Object$*), "javax.security.cert.CertificateException"},
	{"getInstance", "(Ljava/io/InputStream;)Ljavax/security/cert/X509Certificate;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(X509Certificate, getInstance, X509Certificate*, $InputStream*), "javax.security.cert.CertificateException"},
	{"getInstance", "([B)Ljavax/security/cert/X509Certificate;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(X509Certificate, getInstance, X509Certificate*, $bytes*), "javax.security.cert.CertificateException"},
	{"getIssuerDN", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Certificate, getIssuerDN, $Principal*)},
	{"getNotAfter", "()Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Certificate, getNotAfter, $Date*)},
	{"getNotBefore", "()Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Certificate, getNotBefore, $Date*)},
	{"getSerialNumber", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Certificate, getSerialNumber, $BigInteger*)},
	{"getSigAlgName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Certificate, getSigAlgName, $String*)},
	{"getSigAlgOID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Certificate, getSigAlgOID, $String*)},
	{"getSigAlgParams", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Certificate, getSigAlgParams, $bytes*)},
	{"getSubjectDN", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Certificate, getSubjectDN, $Principal*)},
	{"getVersion", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Certificate, getVersion, int32_t)},
	{}
};

$InnerClassInfo _X509Certificate_InnerClassesInfo_[] = {
	{"javax.security.cert.X509Certificate$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _X509Certificate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.security.cert.X509Certificate",
	"javax.security.cert.Certificate",
	nullptr,
	_X509Certificate_FieldInfo_,
	_X509Certificate_MethodInfo_,
	nullptr,
	nullptr,
	_X509Certificate_InnerClassesInfo_,
	_X509Certificate_Annotations_,
	nullptr,
	"javax.security.cert.X509Certificate$1"
};

$Object* allocate$X509Certificate($Class* clazz) {
	return $of($alloc(X509Certificate));
}

$String* X509Certificate::X509_PROVIDER = nullptr;
$String* X509Certificate::X509Provider = nullptr;

void X509Certificate::init$() {
	$Certificate::init$();
}

X509Certificate* X509Certificate::getInstance($InputStream* inStream) {
	$init(X509Certificate);
	return getInst($of(inStream));
}

X509Certificate* X509Certificate::getInstance($bytes* certData) {
	$init(X509Certificate);
	return getInst($of(certData));
}

X509Certificate* X509Certificate::getInst(Object$* value) {
	$init(X509Certificate);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, className, X509Certificate::X509Provider);
	if (className == nullptr || $nc(className)->isEmpty()) {
		$assign(className, "com.sun.security.cert.internal.x509.X509V1CertImpl"_s);
	}
	try {
		$var($ClassArray, params, nullptr);
		if ($instanceOf($InputStream, value)) {
			$load($InputStream);
			$assign(params, $new($ClassArray, {$InputStream::class$}));
		} else if ($instanceOf($bytes, value)) {
			$assign(params, $new($ClassArray, {$nc($of(value))->getClass()}));
		} else {
			$throwNew($CertificateException, "Unsupported argument type"_s);
		}
		$Class* certClass = $Class::forName(className);
		$var($Constructor, cons, $nc(certClass)->getConstructor(params));
		$var($Object, obj, $nc(cons)->newInstance($$new($ObjectArray, {value})));
		return $cast(X509Certificate, obj);
	} catch ($ClassNotFoundException& e) {
		$throwNew($CertificateException, $$str({"Could not find class: "_s, e}));
	} catch ($IllegalAccessException& e) {
		$throwNew($CertificateException, $$str({"Could not access class: "_s, e}));
	} catch ($InstantiationException& e) {
		$throwNew($CertificateException, $$str({"Problems instantiating: "_s, e}));
	} catch ($InvocationTargetException& e) {
		$throwNew($CertificateException, $$str({"InvocationTargetException: "_s, $(e->getTargetException())}));
	} catch ($NoSuchMethodException& e) {
		$throwNew($CertificateException, $$str({"Could not find class method: "_s, $(e->getMessage())}));
	}
	$shouldNotReachHere();
}

void clinit$X509Certificate($Class* class$) {
	$assignStatic(X509Certificate::X509_PROVIDER, "cert.provider.x509v1"_s);
	$beforeCallerSensitive();
	{
		$assignStatic(X509Certificate::X509Provider, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($X509Certificate$1)))));
	}
}

X509Certificate::X509Certificate() {
}

$Class* X509Certificate::load$($String* name, bool initialize) {
	$loadClass(X509Certificate, name, initialize, &_X509Certificate_ClassInfo_, clinit$X509Certificate, allocate$X509Certificate);
	return class$;
}

$Class* X509Certificate::class$ = nullptr;

		} // cert
	} // security
} // javax