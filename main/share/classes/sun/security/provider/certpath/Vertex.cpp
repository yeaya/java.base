#include <sun/security/provider/certpath/Vertex.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Date.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/util/Debug.h>
#include <sun/security/x509/AuthorityKeyIdentifierExtension.h>
#include <sun/security/x509/KeyIdentifier.h>
#include <sun/security/x509/SubjectKeyIdentifierExtension.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

#undef KEY_ID

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $CertificateException = ::java::security::cert::CertificateException;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Date = ::java::util::Date;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $Debug = ::sun::security::util::Debug;
using $AuthorityKeyIdentifierExtension = ::sun::security::x509::AuthorityKeyIdentifierExtension;
using $KeyIdentifier = ::sun::security::x509::KeyIdentifier;
using $SubjectKeyIdentifierExtension = ::sun::security::x509::SubjectKeyIdentifierExtension;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _Vertex_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Vertex, debug)},
	{"cert", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE, $field(Vertex, cert)},
	{"index", "I", nullptr, $PRIVATE, $field(Vertex, index)},
	{"throwable", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(Vertex, throwable)},
	{}
};

$MethodInfo _Vertex_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/X509Certificate;)V", nullptr, 0, $method(static_cast<void(Vertex::*)($X509Certificate*)>(&Vertex::init$))},
	{"certToString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCertificate", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"getThrowable", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"indexToString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"moreToString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setIndex", "(I)V", nullptr, 0},
	{"setThrowable", "(Ljava/lang/Throwable;)V", nullptr, 0},
	{"throwableToString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Vertex_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.certpath.Vertex",
	"java.lang.Object",
	nullptr,
	_Vertex_FieldInfo_,
	_Vertex_MethodInfo_
};

$Object* allocate$Vertex($Class* clazz) {
	return $of($alloc(Vertex));
}

$Debug* Vertex::debug = nullptr;

void Vertex::init$($X509Certificate* cert) {
	$set(this, cert, cert);
	this->index = -1;
}

$X509Certificate* Vertex::getCertificate() {
	return this->cert;
}

int32_t Vertex::getIndex() {
	return this->index;
}

void Vertex::setIndex(int32_t ndx) {
	this->index = ndx;
}

$Throwable* Vertex::getThrowable() {
	return this->throwable;
}

void Vertex::setThrowable($Throwable* throwable) {
	$set(this, throwable, throwable);
}

$String* Vertex::toString() {
	$var($String, var$1, $(certToString()));
	$var($String, var$0, $$concat(var$1, $(throwableToString())));
	return $concat(var$0, $(indexToString()));
}

$String* Vertex::certToString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($X509CertImpl, x509Cert, nullptr);
	try {
		$assign(x509Cert, $X509CertImpl::toImpl(this->cert));
	} catch ($CertificateException&) {
		$var($CertificateException, ce, $catch());
		if (Vertex::debug != nullptr) {
			$nc(Vertex::debug)->println("Vertex.certToString() unexpected exception"_s);
			ce->printStackTrace();
		}
		return sb->toString();
	}
	sb->append("Issuer:     "_s)->append($($of($nc(x509Cert)->getIssuerX500Principal())))->append("\n"_s);
	sb->append("Subject:    "_s)->append($($of($nc(x509Cert)->getSubjectX500Principal())))->append("\n"_s);
	sb->append("SerialNum:  "_s)->append($($nc($($nc(x509Cert)->getSerialNumber()))->toString(16)))->append("\n"_s);
	sb->append("Expires:    "_s)->append($($nc($($nc(x509Cert)->getNotAfter()))->toString()))->append("\n"_s);
	$var($booleans, iUID, $nc(x509Cert)->getIssuerUniqueID());
	if (iUID != nullptr) {
		sb->append("IssuerUID:  "_s);
		{
			$var($booleans, arr$, iUID);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				bool b = arr$->get(i$);
				{
					sb->append(b ? 1 : 0);
				}
			}
		}
		sb->append("\n"_s);
	}
	$var($booleans, sUID, x509Cert->getSubjectUniqueID());
	if (sUID != nullptr) {
		sb->append("SubjectUID: "_s);
		{
			$var($booleans, arr$, sUID);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				bool b = arr$->get(i$);
				{
					sb->append(b ? 1 : 0);
				}
			}
		}
		sb->append("\n"_s);
	}
	try {
		$var($SubjectKeyIdentifierExtension, sKeyID, x509Cert->getSubjectKeyIdentifierExtension());
		if (sKeyID != nullptr) {
			$init($SubjectKeyIdentifierExtension);
			$var($KeyIdentifier, keyID, $cast($KeyIdentifier, sKeyID->get($SubjectKeyIdentifierExtension::KEY_ID)));
			sb->append("SubjKeyID:  "_s)->append($($nc(keyID)->toString()));
		}
		$var($AuthorityKeyIdentifierExtension, aKeyID, x509Cert->getAuthorityKeyIdentifierExtension());
		if (aKeyID != nullptr) {
			$init($AuthorityKeyIdentifierExtension);
			$var($KeyIdentifier, keyID, $cast($KeyIdentifier, aKeyID->get($AuthorityKeyIdentifierExtension::KEY_ID)));
			sb->append("AuthKeyID:  "_s)->append($($nc(keyID)->toString()));
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		if (Vertex::debug != nullptr) {
			$nc(Vertex::debug)->println("Vertex.certToString() unexpected exception"_s);
			e->printStackTrace();
		}
	}
	return sb->toString();
}

$String* Vertex::throwableToString() {
	$var($StringBuilder, sb, $new($StringBuilder, "Exception:  "_s));
	if (this->throwable != nullptr) {
		sb->append($($nc(this->throwable)->toString()));
	} else {
		sb->append("null"_s);
	}
	sb->append("\n"_s);
	return sb->toString();
}

$String* Vertex::moreToString() {
	$var($StringBuilder, sb, $new($StringBuilder, "Last cert?  "_s));
	sb->append((this->index == -1) ? "Yes"_s : "No"_s);
	sb->append("\n"_s);
	return sb->toString();
}

$String* Vertex::indexToString() {
	return $str({"Index:      "_s, $$str(this->index), "\n"_s});
}

void clinit$Vertex($Class* class$) {
	$assignStatic(Vertex::debug, $Debug::getInstance("certpath"_s));
}

Vertex::Vertex() {
}

$Class* Vertex::load$($String* name, bool initialize) {
	$loadClass(Vertex, name, initialize, &_Vertex_ClassInfo_, clinit$Vertex, allocate$Vertex);
	return class$;
}

$Class* Vertex::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun