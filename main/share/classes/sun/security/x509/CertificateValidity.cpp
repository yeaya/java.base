#include <sun/security/x509/CertificateValidity.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/CertificateExpiredException.h>
#include <java/security/cert/CertificateNotYetValidException.h>
#include <java/util/Date.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <jcpp.h>

#undef NOT_AFTER
#undef IDENT
#undef NOT_BEFORE
#undef YR_2050
#undef NAME

using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateExpiredException = ::java::security::cert::CertificateExpiredException;
using $CertificateNotYetValidException = ::java::security::cert::CertificateNotYetValidException;
using $Date = ::java::util::Date;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $CertAttrSet = ::sun::security::x509::CertAttrSet;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _CertificateValidity_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateValidity, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateValidity, NAME)},
	{"NOT_BEFORE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateValidity, NOT_BEFORE)},
	{"NOT_AFTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateValidity, NOT_AFTER)},
	{"YR_2050", "J", nullptr, $STATIC | $FINAL, $constField(CertificateValidity, YR_2050)},
	{"notBefore", "Ljava/util/Date;", nullptr, $PRIVATE, $field(CertificateValidity, notBefore)},
	{"notAfter", "Ljava/util/Date;", nullptr, $PRIVATE, $field(CertificateValidity, notAfter)},
	{}
};

$MethodInfo _CertificateValidity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertificateValidity::*)()>(&CertificateValidity::init$))},
	{"<init>", "(Ljava/util/Date;Ljava/util/Date;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateValidity::*)($Date*,$Date*)>(&CertificateValidity::init$))},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateValidity::*)($DerInputStream*)>(&CertificateValidity::init$)), "java.io.IOException"},
	{"construct", "(Lsun/security/util/DerValue;)V", nullptr, $PRIVATE, $method(static_cast<void(CertificateValidity::*)($DerValue*)>(&CertificateValidity::construct)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/util/Date;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNotAfter", "()Ljava/util/Date;", nullptr, $PRIVATE, $method(static_cast<$Date*(CertificateValidity::*)()>(&CertificateValidity::getNotAfter))},
	{"getNotBefore", "()Ljava/util/Date;", nullptr, $PRIVATE, $method(static_cast<$Date*(CertificateValidity::*)()>(&CertificateValidity::getNotBefore))},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valid", "()V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateNotYetValidException,java.security.cert.CertificateExpiredException"},
	{"valid", "(Ljava/util/Date;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateNotYetValidException,java.security.cert.CertificateExpiredException"},
	{}
};

$ClassInfo _CertificateValidity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.CertificateValidity",
	"java.lang.Object",
	"sun.security.x509.CertAttrSet",
	_CertificateValidity_FieldInfo_,
	_CertificateValidity_MethodInfo_,
	"Ljava/lang/Object;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$CertificateValidity($Class* clazz) {
	return $of($alloc(CertificateValidity));
}


$String* CertificateValidity::IDENT = nullptr;

$String* CertificateValidity::NAME = nullptr;
$String* CertificateValidity::NOT_BEFORE = nullptr;
$String* CertificateValidity::NOT_AFTER = nullptr;

$Date* CertificateValidity::getNotBefore() {
	return ($new($Date, $nc(this->notBefore)->getTime()));
}

$Date* CertificateValidity::getNotAfter() {
	return ($new($Date, $nc(this->notAfter)->getTime()));
}

void CertificateValidity::construct($DerValue* derVal) {
	if ($nc(derVal)->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoded CertificateValidity, starting sequence tag missing."_s);
	}
	if ($nc($nc(derVal)->data$)->available() == 0) {
		$throwNew($IOException, "No data encoded for CertificateValidity"_s);
	}
	$var($DerInputStream, derIn, $new($DerInputStream, $($nc(derVal)->toByteArray())));
	$var($DerValueArray, seq, derIn->getSequence(2));
	if ($nc(seq)->length != 2) {
		$throwNew($IOException, "Invalid encoding for CertificateValidity"_s);
	}
	if ($nc($nc(seq)->get(0))->tag == $DerValue::tag_UtcTime) {
		$set(this, notBefore, $nc($nc(derVal)->data$)->getUTCTime());
	} else if ($nc($nc(seq)->get(0))->tag == $DerValue::tag_GeneralizedTime) {
		$set(this, notBefore, $nc($nc(derVal)->data$)->getGeneralizedTime());
	} else {
		$throwNew($IOException, "Invalid encoding for CertificateValidity"_s);
	}
	if ($nc($nc(seq)->get(1))->tag == $DerValue::tag_UtcTime) {
		$set(this, notAfter, $nc($nc(derVal)->data$)->getUTCTime());
	} else if ($nc($nc(seq)->get(1))->tag == $DerValue::tag_GeneralizedTime) {
		$set(this, notAfter, $nc($nc(derVal)->data$)->getGeneralizedTime());
	} else {
		$throwNew($IOException, "Invalid encoding for CertificateValidity"_s);
	}
}

void CertificateValidity::init$() {
}

void CertificateValidity::init$($Date* notBefore, $Date* notAfter) {
	$set(this, notBefore, notBefore);
	$set(this, notAfter, notAfter);
}

void CertificateValidity::init$($DerInputStream* in) {
	$var($DerValue, derVal, $nc(in)->getDerValue());
	construct(derVal);
}

$String* CertificateValidity::toString() {
	if (this->notBefore == nullptr || this->notAfter == nullptr) {
		return ""_s;
	}
	return $str({"Validity: [From: "_s, this->notBefore, ",\n               To: "_s, this->notAfter, $$str(u']')});
}

void CertificateValidity::encode($OutputStream* out) {
	if (this->notBefore == nullptr || this->notAfter == nullptr) {
		$throwNew($IOException, "CertAttrSet:CertificateValidity: null values to encode.\n"_s);
	}
	$var($DerOutputStream, pair, $new($DerOutputStream));
	if ($nc(this->notBefore)->getTime() < CertificateValidity::YR_2050) {
		pair->putUTCTime(this->notBefore);
	} else {
		pair->putGeneralizedTime(this->notBefore);
	}
	if ($nc(this->notAfter)->getTime() < CertificateValidity::YR_2050) {
		pair->putUTCTime(this->notAfter);
	} else {
		pair->putGeneralizedTime(this->notAfter);
	}
	$var($DerOutputStream, seq, $new($DerOutputStream));
	seq->write($DerValue::tag_Sequence, pair);
	$nc(out)->write($(seq->toByteArray()));
}

void CertificateValidity::set($String* name, Object$* obj) {
	if (!($instanceOf($Date, obj))) {
		$throwNew($IOException, "Attribute must be of type Date."_s);
	}
	if ($nc(name)->equalsIgnoreCase(CertificateValidity::NOT_BEFORE)) {
		$set(this, notBefore, $cast($Date, obj));
	} else if ($nc(name)->equalsIgnoreCase(CertificateValidity::NOT_AFTER)) {
		$set(this, notAfter, $cast($Date, obj));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet: CertificateValidity."_s);
	}
}

$Object* CertificateValidity::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateValidity::NOT_BEFORE)) {
		return $of((getNotBefore()));
	} else if ($nc(name)->equalsIgnoreCase(CertificateValidity::NOT_AFTER)) {
		return $of((getNotAfter()));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet: CertificateValidity."_s);
	}
}

void CertificateValidity::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateValidity::NOT_BEFORE)) {
		$set(this, notBefore, nullptr);
	} else if ($nc(name)->equalsIgnoreCase(CertificateValidity::NOT_AFTER)) {
		$set(this, notAfter, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet: CertificateValidity."_s);
	}
}

$Enumeration* CertificateValidity::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(CertificateValidity::NOT_BEFORE);
	elements->addElement(CertificateValidity::NOT_AFTER);
	return (elements->elements());
}

$String* CertificateValidity::getName() {
	return (CertificateValidity::NAME);
}

void CertificateValidity::valid() {
	$var($Date, now, $new($Date));
	valid(now);
}

void CertificateValidity::valid($Date* now) {
	if ($nc(this->notBefore)->after(now)) {
		$throwNew($CertificateNotYetValidException, $$str({"NotBefore: "_s, $($nc(this->notBefore)->toString())}));
	}
	if ($nc(this->notAfter)->before(now)) {
		$throwNew($CertificateExpiredException, $$str({"NotAfter: "_s, $($nc(this->notAfter)->toString())}));
	}
}

CertificateValidity::CertificateValidity() {
}

void clinit$CertificateValidity($Class* class$) {
	$assignStatic(CertificateValidity::IDENT, "x509.info.validity"_s);
	$assignStatic(CertificateValidity::NAME, "validity"_s);
	$assignStatic(CertificateValidity::NOT_BEFORE, "notBefore"_s);
	$assignStatic(CertificateValidity::NOT_AFTER, "notAfter"_s);
}

$Class* CertificateValidity::load$($String* name, bool initialize) {
	$loadClass(CertificateValidity, name, initialize, &_CertificateValidity_ClassInfo_, clinit$CertificateValidity, allocate$CertificateValidity);
	return class$;
}

$Class* CertificateValidity::class$ = nullptr;

		} // x509
	} // security
} // sun