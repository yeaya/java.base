#include <sun/security/x509/BasicConstraintsExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef IDENT
#undef IS_CA
#undef MAX_VALUE
#undef NAME
#undef PATH_LEN

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $Extension = ::sun::security::x509::Extension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _BasicConstraintsExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicConstraintsExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicConstraintsExtension, NAME)},
	{"IS_CA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicConstraintsExtension, IS_CA)},
	{"PATH_LEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicConstraintsExtension, PATH_LEN)},
	{"ca", "Z", nullptr, $PRIVATE, $field(BasicConstraintsExtension, ca)},
	{"pathLen", "I", nullptr, $PRIVATE, $field(BasicConstraintsExtension, pathLen)},
	{}
};

$MethodInfo _BasicConstraintsExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(ZI)V", nullptr, $PUBLIC, $method(BasicConstraintsExtension, init$, void, bool, int32_t), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;ZI)V", nullptr, $PUBLIC, $method(BasicConstraintsExtension, init$, void, $Boolean*, bool, int32_t), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(BasicConstraintsExtension, init$, void, $Boolean*, Object$*), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BasicConstraintsExtension, delete$, void, $String*), "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(BasicConstraintsExtension, encode, void, $OutputStream*), "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(BasicConstraintsExtension, encodeThis, void), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicConstraintsExtension, get, $Object*, $String*), "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(BasicConstraintsExtension, getElements, $Enumeration*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicConstraintsExtension, getName, $String*)},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(BasicConstraintsExtension, set, void, $String*, Object$*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicConstraintsExtension, toString, $String*)},
	{}
};

$ClassInfo _BasicConstraintsExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.BasicConstraintsExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_BasicConstraintsExtension_FieldInfo_,
	_BasicConstraintsExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$BasicConstraintsExtension($Class* clazz) {
	return $of($alloc(BasicConstraintsExtension));
}

int32_t BasicConstraintsExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool BasicConstraintsExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* BasicConstraintsExtension::clone() {
	 return this->$Extension::clone();
}

void BasicConstraintsExtension::finalize() {
	this->$Extension::finalize();
}

$String* BasicConstraintsExtension::IDENT = nullptr;
$String* BasicConstraintsExtension::NAME = nullptr;
$String* BasicConstraintsExtension::IS_CA = nullptr;
$String* BasicConstraintsExtension::PATH_LEN = nullptr;

void BasicConstraintsExtension::encodeThis() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, out, $new($DerOutputStream));
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->ca) {
		tmp->putBoolean(this->ca);
		if (this->pathLen >= 0) {
			tmp->putInteger(this->pathLen);
		}
	}
	out->write($DerValue::tag_Sequence, tmp);
	$set(this, extensionValue, out->toByteArray());
}

void BasicConstraintsExtension::init$(bool ca, int32_t len) {
	BasicConstraintsExtension::init$($($Boolean::valueOf(ca)), ca, len);
}

void BasicConstraintsExtension::init$($Boolean* critical, bool ca, int32_t len) {
	$Extension::init$();
	this->ca = false;
	this->pathLen = -1;
	this->ca = ca;
	this->pathLen = len;
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::BasicConstraints_Id);
	this->critical = $nc(critical)->booleanValue();
	encodeThis();
}

void BasicConstraintsExtension::init$($Boolean* critical, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$Extension::init$();
	this->ca = false;
	this->pathLen = -1;
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::BasicConstraints_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	if (val->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding of BasicConstraints"_s);
	}
	if (val->data$ == nullptr || $nc(val->data$)->available() == 0) {
		return;
	}
	$var($DerValue, opt, $nc(val->data$)->getDerValue());
	if ($nc(opt)->tag != $DerValue::tag_Boolean) {
		return;
	}
	this->ca = $nc(opt)->getBoolean();
	if ($nc(val->data$)->available() == 0) {
		this->pathLen = $Integer::MAX_VALUE;
		return;
	}
	$assign(opt, $nc(val->data$)->getDerValue());
	if (opt->tag != $DerValue::tag_Integer) {
		$throwNew($IOException, "Invalid encoding of BasicConstraints"_s);
	}
	this->pathLen = opt->getInteger();
}

$String* BasicConstraintsExtension::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, pathLenAsString, nullptr);
	if (this->pathLen < 0) {
		$assign(pathLenAsString, " undefined"_s);
	} else if (this->pathLen == $Integer::MAX_VALUE) {
		$assign(pathLenAsString, " no limit"_s);
	} else {
		$assign(pathLenAsString, $String::valueOf(this->pathLen));
	}
	return $str({$($Extension::toString()), "BasicConstraints:[\n  CA:"_s, $$str(this->ca), "\n  PathLen:"_s, pathLenAsString, "\n]\n"_s});
}

void BasicConstraintsExtension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::BasicConstraints_Id);
		if (this->ca) {
			this->critical = true;
		} else {
			this->critical = false;
		}
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void BasicConstraintsExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(BasicConstraintsExtension::IS_CA)) {
		if (!($instanceOf($Boolean, obj))) {
			$throwNew($IOException, "Attribute value should be of type Boolean."_s);
		}
		this->ca = $nc(($cast($Boolean, obj)))->booleanValue();
	} else if (name->equalsIgnoreCase(BasicConstraintsExtension::PATH_LEN)) {
		if (!($instanceOf($Integer, obj))) {
			$throwNew($IOException, "Attribute value should be of type Integer."_s);
		}
		this->pathLen = $nc(($cast($Integer, obj)))->intValue();
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:BasicConstraints."_s);
	}
	encodeThis();
}

$Object* BasicConstraintsExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(BasicConstraintsExtension::IS_CA)) {
		return $of(($Boolean::valueOf(this->ca)));
	} else if (name->equalsIgnoreCase(BasicConstraintsExtension::PATH_LEN)) {
		return $of(($Integer::valueOf(this->pathLen)));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:BasicConstraints."_s);
	}
}

void BasicConstraintsExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(BasicConstraintsExtension::IS_CA)) {
		this->ca = false;
	} else if (name->equalsIgnoreCase(BasicConstraintsExtension::PATH_LEN)) {
		this->pathLen = -1;
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:BasicConstraints."_s);
	}
	encodeThis();
}

$Enumeration* BasicConstraintsExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(BasicConstraintsExtension::IS_CA);
	elements->addElement(BasicConstraintsExtension::PATH_LEN);
	return (elements->elements());
}

$String* BasicConstraintsExtension::getName() {
	return (BasicConstraintsExtension::NAME);
}

BasicConstraintsExtension::BasicConstraintsExtension() {
}

void clinit$BasicConstraintsExtension($Class* class$) {
	$assignStatic(BasicConstraintsExtension::IDENT, "x509.info.extensions.BasicConstraints"_s);
	$assignStatic(BasicConstraintsExtension::NAME, "BasicConstraints"_s);
	$assignStatic(BasicConstraintsExtension::IS_CA, "is_ca"_s);
	$assignStatic(BasicConstraintsExtension::PATH_LEN, "path_len"_s);
}

$Class* BasicConstraintsExtension::load$($String* name, bool initialize) {
	$loadClass(BasicConstraintsExtension, name, initialize, &_BasicConstraintsExtension_ClassInfo_, clinit$BasicConstraintsExtension, allocate$BasicConstraintsExtension);
	return class$;
}

$Class* BasicConstraintsExtension::class$ = nullptr;

		} // x509
	} // security
} // sun