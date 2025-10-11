#include <sun/security/x509/CertificateVersion.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <jcpp.h>

#undef IDENT
#undef TAG_CONTEXT
#undef VERSION
#undef NAME

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
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

$FieldInfo _CertificateVersion_FieldInfo_[] = {
	{"V1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertificateVersion, V1)},
	{"V2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertificateVersion, V2)},
	{"V3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertificateVersion, V3)},
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateVersion, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateVersion, NAME)},
	{"VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateVersion, VERSION)},
	{"version", "I", nullptr, 0, $field(CertificateVersion, version)},
	{}
};

$MethodInfo _CertificateVersion_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertificateVersion::*)()>(&CertificateVersion::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateVersion::*)(int32_t)>(&CertificateVersion::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateVersion::*)($DerInputStream*)>(&CertificateVersion::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateVersion::*)($InputStream*)>(&CertificateVersion::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateVersion::*)($DerValue*)>(&CertificateVersion::init$)), "java.io.IOException"},
	{"compare", "(I)I", nullptr, $PUBLIC},
	{"construct", "(Lsun/security/util/DerValue;)V", nullptr, $PRIVATE, $method(static_cast<void(CertificateVersion::*)($DerValue*)>(&CertificateVersion::construct)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVersion", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(CertificateVersion::*)()>(&CertificateVersion::getVersion))},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CertificateVersion_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.CertificateVersion",
	"java.lang.Object",
	"sun.security.x509.CertAttrSet",
	_CertificateVersion_FieldInfo_,
	_CertificateVersion_MethodInfo_,
	"Ljava/lang/Object;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$CertificateVersion($Class* clazz) {
	return $of($alloc(CertificateVersion));
}


$String* CertificateVersion::IDENT = nullptr;

$String* CertificateVersion::NAME = nullptr;
$String* CertificateVersion::VERSION = nullptr;

int32_t CertificateVersion::getVersion() {
	return (this->version);
}

void CertificateVersion::construct($DerValue* derVal$renamed) {
	$var($DerValue, derVal, derVal$renamed);
	bool var$0 = $nc(derVal)->isConstructed();
	if (var$0 && derVal->isContextSpecific()) {
		$assign(derVal, $nc(derVal->data$)->getDerValue());
		this->version = $nc(derVal)->getInteger();
		if ($nc(derVal->data$)->available() != 0) {
			$throwNew($IOException, "X.509 version, bad format"_s);
		}
	}
}

void CertificateVersion::init$() {
	this->version = CertificateVersion::V1;
	this->version = CertificateVersion::V1;
}

void CertificateVersion::init$(int32_t version) {
	this->version = CertificateVersion::V1;
	if (version == CertificateVersion::V1 || version == CertificateVersion::V2 || version == CertificateVersion::V3) {
		this->version = version;
	} else {
		$throwNew($IOException, $$str({"X.509 Certificate version "_s, $$str(version), " not supported.\n"_s}));
	}
}

void CertificateVersion::init$($DerInputStream* in) {
	this->version = CertificateVersion::V1;
	this->version = CertificateVersion::V1;
	$var($DerValue, derVal, $nc(in)->getDerValue());
	construct(derVal);
}

void CertificateVersion::init$($InputStream* in) {
	this->version = CertificateVersion::V1;
	this->version = CertificateVersion::V1;
	$var($DerValue, derVal, $new($DerValue, in));
	construct(derVal);
}

void CertificateVersion::init$($DerValue* val) {
	this->version = CertificateVersion::V1;
	this->version = CertificateVersion::V1;
	construct(val);
}

$String* CertificateVersion::toString() {
	return ($str({"Version: V"_s, $$str((this->version + 1))}));
}

void CertificateVersion::encode($OutputStream* out) {
	if (this->version == CertificateVersion::V1) {
		return;
	}
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	tmp->putInteger(this->version);
	$var($DerOutputStream, seq, $new($DerOutputStream));
	seq->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)0), tmp);
	$nc(out)->write($(seq->toByteArray()));
}

void CertificateVersion::set($String* name, Object$* obj) {
	if (!($instanceOf($Integer, obj))) {
		$throwNew($IOException, "Attribute must be of type Integer."_s);
	}
	if ($nc(name)->equalsIgnoreCase(CertificateVersion::VERSION)) {
		this->version = $nc(($cast($Integer, obj)))->intValue();
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet: CertificateVersion."_s);
	}
}

$Object* CertificateVersion::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateVersion::VERSION)) {
		return $of($Integer::valueOf((getVersion())));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet: CertificateVersion."_s);
	}
}

void CertificateVersion::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateVersion::VERSION)) {
		this->version = CertificateVersion::V1;
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet: CertificateVersion."_s);
	}
}

$Enumeration* CertificateVersion::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(CertificateVersion::VERSION);
	return (elements->elements());
}

$String* CertificateVersion::getName() {
	return (CertificateVersion::NAME);
}

int32_t CertificateVersion::compare(int32_t vers) {
	return (this->version - vers);
}

CertificateVersion::CertificateVersion() {
}

void clinit$CertificateVersion($Class* class$) {
	$assignStatic(CertificateVersion::IDENT, "x509.info.version"_s);
	$assignStatic(CertificateVersion::NAME, "version"_s);
	$assignStatic(CertificateVersion::VERSION, "number"_s);
}

$Class* CertificateVersion::load$($String* name, bool initialize) {
	$loadClass(CertificateVersion, name, initialize, &_CertificateVersion_ClassInfo_, clinit$CertificateVersion, allocate$CertificateVersion);
	return class$;
}

$Class* CertificateVersion::class$ = nullptr;

		} // x509
	} // security
} // sun