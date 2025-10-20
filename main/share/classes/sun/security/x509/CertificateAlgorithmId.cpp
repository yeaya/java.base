#include <sun/security/x509/CertificateAlgorithmId.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AlgorithmId.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <jcpp.h>

#undef ALGORITHM
#undef IDENT
#undef NAME

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $CertAttrSet = ::sun::security::x509::CertAttrSet;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _CertificateAlgorithmId_FieldInfo_[] = {
	{"algId", "Lsun/security/x509/AlgorithmId;", nullptr, $PRIVATE, $field(CertificateAlgorithmId, algId)},
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateAlgorithmId, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateAlgorithmId, NAME)},
	{"ALGORITHM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateAlgorithmId, ALGORITHM)},
	{}
};

$MethodInfo _CertificateAlgorithmId_MethodInfo_[] = {
	{"<init>", "(Lsun/security/x509/AlgorithmId;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateAlgorithmId::*)($AlgorithmId*)>(&CertificateAlgorithmId::init$))},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateAlgorithmId::*)($DerInputStream*)>(&CertificateAlgorithmId::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateAlgorithmId::*)($InputStream*)>(&CertificateAlgorithmId::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Lsun/security/x509/AlgorithmId;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CertificateAlgorithmId_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.CertificateAlgorithmId",
	"java.lang.Object",
	"sun.security.x509.CertAttrSet",
	_CertificateAlgorithmId_FieldInfo_,
	_CertificateAlgorithmId_MethodInfo_,
	"Ljava/lang/Object;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$CertificateAlgorithmId($Class* clazz) {
	return $of($alloc(CertificateAlgorithmId));
}


$String* CertificateAlgorithmId::IDENT = nullptr;

$String* CertificateAlgorithmId::NAME = nullptr;

$String* CertificateAlgorithmId::ALGORITHM = nullptr;

void CertificateAlgorithmId::init$($AlgorithmId* algId) {
	$set(this, algId, algId);
}

void CertificateAlgorithmId::init$($DerInputStream* in) {
	$var($DerValue, val, $nc(in)->getDerValue());
	$set(this, algId, $AlgorithmId::parse(val));
}

void CertificateAlgorithmId::init$($InputStream* in) {
	$var($DerValue, val, $new($DerValue, in));
	$set(this, algId, $AlgorithmId::parse(val));
}

$String* CertificateAlgorithmId::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->algId == nullptr) {
		return ""_s;
	}
	$var($String, var$1, $$str({$($nc(this->algId)->toString()), ", OID = "_s}));
	$var($String, var$0, $$concat(var$1, $($nc(($($nc(this->algId)->getOID())))->toString())));
	return ($concat(var$0, "\n"));
}

void CertificateAlgorithmId::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	$nc(this->algId)->encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void CertificateAlgorithmId::set($String* name, Object$* obj) {
	if (!($instanceOf($AlgorithmId, obj))) {
		$throwNew($IOException, "Attribute must be of type AlgorithmId."_s);
	}
	if ($nc(name)->equalsIgnoreCase(CertificateAlgorithmId::ALGORITHM)) {
		$set(this, algId, $cast($AlgorithmId, obj));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateAlgorithmId."_s);
	}
}

$Object* CertificateAlgorithmId::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateAlgorithmId::ALGORITHM)) {
		return $of((this->algId));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateAlgorithmId."_s);
	}
}

void CertificateAlgorithmId::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateAlgorithmId::ALGORITHM)) {
		$set(this, algId, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateAlgorithmId."_s);
	}
}

$Enumeration* CertificateAlgorithmId::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(CertificateAlgorithmId::ALGORITHM);
	return (elements->elements());
}

$String* CertificateAlgorithmId::getName() {
	return (CertificateAlgorithmId::NAME);
}

CertificateAlgorithmId::CertificateAlgorithmId() {
}

void clinit$CertificateAlgorithmId($Class* class$) {
	$assignStatic(CertificateAlgorithmId::IDENT, "x509.info.algorithmID"_s);
	$assignStatic(CertificateAlgorithmId::NAME, "algorithmID"_s);
	$assignStatic(CertificateAlgorithmId::ALGORITHM, "algorithm"_s);
}

$Class* CertificateAlgorithmId::load$($String* name, bool initialize) {
	$loadClass(CertificateAlgorithmId, name, initialize, &_CertificateAlgorithmId_ClassInfo_, clinit$CertificateAlgorithmId, allocate$CertificateAlgorithmId);
	return class$;
}

$Class* CertificateAlgorithmId::class$ = nullptr;

		} // x509
	} // security
} // sun