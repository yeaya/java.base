#include <sun/security/x509/IssuerAlternativeNameExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/GeneralName.h>
#include <sun/security/x509/GeneralNames.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef IDENT
#undef ISSUER_NAME
#undef NAME

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $Extension = ::sun::security::x509::Extension;
using $GeneralName = ::sun::security::x509::GeneralName;
using $GeneralNames = ::sun::security::x509::GeneralNames;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _IssuerAlternativeNameExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IssuerAlternativeNameExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IssuerAlternativeNameExtension, NAME)},
	{"ISSUER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IssuerAlternativeNameExtension, ISSUER_NAME)},
	{"names", "Lsun/security/x509/GeneralNames;", nullptr, 0, $field(IssuerAlternativeNameExtension, names)},
	{}
};

$MethodInfo _IssuerAlternativeNameExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/security/x509/GeneralNames;)V", nullptr, $PUBLIC, $method(static_cast<void(IssuerAlternativeNameExtension::*)($GeneralNames*)>(&IssuerAlternativeNameExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Lsun/security/x509/GeneralNames;)V", nullptr, $PUBLIC, $method(static_cast<void(IssuerAlternativeNameExtension::*)($Boolean*,$GeneralNames*)>(&IssuerAlternativeNameExtension::init$)), "java.io.IOException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IssuerAlternativeNameExtension::*)()>(&IssuerAlternativeNameExtension::init$))},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(IssuerAlternativeNameExtension::*)($Boolean*,Object$*)>(&IssuerAlternativeNameExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(IssuerAlternativeNameExtension::*)()>(&IssuerAlternativeNameExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Lsun/security/x509/GeneralNames;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IssuerAlternativeNameExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.IssuerAlternativeNameExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_IssuerAlternativeNameExtension_FieldInfo_,
	_IssuerAlternativeNameExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$IssuerAlternativeNameExtension($Class* clazz) {
	return $of($alloc(IssuerAlternativeNameExtension));
}

int32_t IssuerAlternativeNameExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool IssuerAlternativeNameExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* IssuerAlternativeNameExtension::clone() {
	 return this->$Extension::clone();
}

void IssuerAlternativeNameExtension::finalize() {
	this->$Extension::finalize();
}

$String* IssuerAlternativeNameExtension::IDENT = nullptr;
$String* IssuerAlternativeNameExtension::NAME = nullptr;
$String* IssuerAlternativeNameExtension::ISSUER_NAME = nullptr;

void IssuerAlternativeNameExtension::encodeThis() {
	if (this->names == nullptr || $nc(this->names)->isEmpty()) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, os, $new($DerOutputStream));
	$nc(this->names)->encode(os);
	$set(this, extensionValue, os->toByteArray());
}

void IssuerAlternativeNameExtension::init$($GeneralNames* names) {
	$Extension::init$();
	$set(this, names, nullptr);
	$set(this, names, names);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::IssuerAlternativeName_Id);
	this->critical = false;
	encodeThis();
}

void IssuerAlternativeNameExtension::init$($Boolean* critical, $GeneralNames* names) {
	$Extension::init$();
	$set(this, names, nullptr);
	$set(this, names, names);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::IssuerAlternativeName_Id);
	this->critical = $nc(critical)->booleanValue();
	encodeThis();
}

void IssuerAlternativeNameExtension::init$() {
	$Extension::init$();
	$set(this, names, nullptr);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::IssuerAlternativeName_Id);
	this->critical = false;
	$set(this, names, $new($GeneralNames));
}

void IssuerAlternativeNameExtension::init$($Boolean* critical, Object$* value) {
	$Extension::init$();
	$set(this, names, nullptr);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::IssuerAlternativeName_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	if (val->data$ == nullptr) {
		$set(this, names, $new($GeneralNames));
		return;
	}
	$set(this, names, $new($GeneralNames, val));
}

$String* IssuerAlternativeNameExtension::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Extension::toString()))->append("IssuerAlternativeName [\n"_s);
	if (this->names == nullptr) {
		sb->append("  null\n"_s);
	} else {
		{
			$var($Iterator, i$, $nc($($nc(this->names)->names()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($GeneralName, name, $cast($GeneralName, i$->next()));
				{
					sb->append("  "_s)->append($of(name))->append(u'\n');
				}
			}
		}
	}
	sb->append("]\n"_s);
	return sb->toString();
}

void IssuerAlternativeNameExtension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::IssuerAlternativeName_Id);
		this->critical = false;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void IssuerAlternativeNameExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(IssuerAlternativeNameExtension::ISSUER_NAME)) {
		if (!($instanceOf($GeneralNames, obj))) {
			$throwNew($IOException, "Attribute value should be of type GeneralNames."_s);
		}
		$set(this, names, $cast($GeneralNames, obj));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:IssuerAlternativeName."_s);
	}
	encodeThis();
}

$Object* IssuerAlternativeNameExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(IssuerAlternativeNameExtension::ISSUER_NAME)) {
		return $of((this->names));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:IssuerAlternativeName."_s);
	}
}

void IssuerAlternativeNameExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(IssuerAlternativeNameExtension::ISSUER_NAME)) {
		$set(this, names, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:IssuerAlternativeName."_s);
	}
	encodeThis();
}

$Enumeration* IssuerAlternativeNameExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(IssuerAlternativeNameExtension::ISSUER_NAME);
	return (elements->elements());
}

$String* IssuerAlternativeNameExtension::getName() {
	return (IssuerAlternativeNameExtension::NAME);
}

IssuerAlternativeNameExtension::IssuerAlternativeNameExtension() {
}

void clinit$IssuerAlternativeNameExtension($Class* class$) {
	$assignStatic(IssuerAlternativeNameExtension::IDENT, "x509.info.extensions.IssuerAlternativeName"_s);
	$assignStatic(IssuerAlternativeNameExtension::NAME, "IssuerAlternativeName"_s);
	$assignStatic(IssuerAlternativeNameExtension::ISSUER_NAME, "issuer_name"_s);
}

$Class* IssuerAlternativeNameExtension::load$($String* name, bool initialize) {
	$loadClass(IssuerAlternativeNameExtension, name, initialize, &_IssuerAlternativeNameExtension_ClassInfo_, clinit$IssuerAlternativeNameExtension, allocate$IssuerAlternativeNameExtension);
	return class$;
}

$Class* IssuerAlternativeNameExtension::class$ = nullptr;

		} // x509
	} // security
} // sun