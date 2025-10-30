#include <sun/security/x509/SubjectAlternativeNameExtension.h>

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

#undef FALSE
#undef IDENT
#undef NAME
#undef SUBJECT_NAME

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $CertAttrSet = ::sun::security::x509::CertAttrSet;
using $Extension = ::sun::security::x509::Extension;
using $GeneralName = ::sun::security::x509::GeneralName;
using $GeneralNames = ::sun::security::x509::GeneralNames;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _SubjectAlternativeNameExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SubjectAlternativeNameExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SubjectAlternativeNameExtension, NAME)},
	{"SUBJECT_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SubjectAlternativeNameExtension, SUBJECT_NAME)},
	{"names", "Lsun/security/x509/GeneralNames;", nullptr, 0, $field(SubjectAlternativeNameExtension, names)},
	{}
};

$MethodInfo _SubjectAlternativeNameExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/security/x509/GeneralNames;)V", nullptr, $PUBLIC, $method(static_cast<void(SubjectAlternativeNameExtension::*)($GeneralNames*)>(&SubjectAlternativeNameExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Lsun/security/x509/GeneralNames;)V", nullptr, $PUBLIC, $method(static_cast<void(SubjectAlternativeNameExtension::*)($Boolean*,$GeneralNames*)>(&SubjectAlternativeNameExtension::init$)), "java.io.IOException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SubjectAlternativeNameExtension::*)()>(&SubjectAlternativeNameExtension::init$))},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(SubjectAlternativeNameExtension::*)($Boolean*,Object$*)>(&SubjectAlternativeNameExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(SubjectAlternativeNameExtension::*)()>(&SubjectAlternativeNameExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Lsun/security/x509/GeneralNames;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SubjectAlternativeNameExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.SubjectAlternativeNameExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_SubjectAlternativeNameExtension_FieldInfo_,
	_SubjectAlternativeNameExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$SubjectAlternativeNameExtension($Class* clazz) {
	return $of($alloc(SubjectAlternativeNameExtension));
}

int32_t SubjectAlternativeNameExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool SubjectAlternativeNameExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* SubjectAlternativeNameExtension::clone() {
	 return this->$Extension::clone();
}

void SubjectAlternativeNameExtension::finalize() {
	this->$Extension::finalize();
}

$String* SubjectAlternativeNameExtension::IDENT = nullptr;
$String* SubjectAlternativeNameExtension::NAME = nullptr;
$String* SubjectAlternativeNameExtension::SUBJECT_NAME = nullptr;

void SubjectAlternativeNameExtension::encodeThis() {
	if (this->names == nullptr || $nc(this->names)->isEmpty()) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, os, $new($DerOutputStream));
	$nc(this->names)->encode(os);
	$set(this, extensionValue, os->toByteArray());
}

void SubjectAlternativeNameExtension::init$($GeneralNames* names) {
	$init($Boolean);
	SubjectAlternativeNameExtension::init$($Boolean::FALSE, names);
}

void SubjectAlternativeNameExtension::init$($Boolean* critical, $GeneralNames* names) {
	$Extension::init$();
	$set(this, names, nullptr);
	$set(this, names, names);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::SubjectAlternativeName_Id);
	this->critical = $nc(critical)->booleanValue();
	encodeThis();
}

void SubjectAlternativeNameExtension::init$() {
	$Extension::init$();
	$set(this, names, nullptr);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::SubjectAlternativeName_Id);
	this->critical = false;
	$set(this, names, $new($GeneralNames));
}

void SubjectAlternativeNameExtension::init$($Boolean* critical, Object$* value) {
	$Extension::init$();
	$set(this, names, nullptr);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::SubjectAlternativeName_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	if (val->data$ == nullptr) {
		$set(this, names, $new($GeneralNames));
		return;
	}
	$set(this, names, $new($GeneralNames, val));
}

$String* SubjectAlternativeNameExtension::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, result, $str({$($Extension::toString()), "SubjectAlternativeName [\n"_s}));
	if (this->names == nullptr) {
		$plusAssign(result, "  null\n"_s);
	} else {
		{
			$var($Iterator, i$, $nc($($nc(this->names)->names()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($GeneralName, name, $cast($GeneralName, i$->next()));
				{
					$plusAssign(result, $$str({"  "_s, name, "\n"_s}));
				}
			}
		}
	}
	$plusAssign(result, "]\n"_s);
	return result;
}

void SubjectAlternativeNameExtension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::SubjectAlternativeName_Id);
		this->critical = false;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void SubjectAlternativeNameExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(SubjectAlternativeNameExtension::SUBJECT_NAME)) {
		if (!($instanceOf($GeneralNames, obj))) {
			$throwNew($IOException, "Attribute value should be of type GeneralNames."_s);
		}
		$set(this, names, $cast($GeneralNames, obj));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:SubjectAlternativeName."_s);
	}
	encodeThis();
}

$Object* SubjectAlternativeNameExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(SubjectAlternativeNameExtension::SUBJECT_NAME)) {
		return $of((this->names));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:SubjectAlternativeName."_s);
	}
}

void SubjectAlternativeNameExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(SubjectAlternativeNameExtension::SUBJECT_NAME)) {
		$set(this, names, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:SubjectAlternativeName."_s);
	}
	encodeThis();
}

$Enumeration* SubjectAlternativeNameExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(SubjectAlternativeNameExtension::SUBJECT_NAME);
	return (elements->elements());
}

$String* SubjectAlternativeNameExtension::getName() {
	return (SubjectAlternativeNameExtension::NAME);
}

SubjectAlternativeNameExtension::SubjectAlternativeNameExtension() {
}

void clinit$SubjectAlternativeNameExtension($Class* class$) {
	$assignStatic(SubjectAlternativeNameExtension::IDENT, "x509.info.extensions.SubjectAlternativeName"_s);
	$assignStatic(SubjectAlternativeNameExtension::NAME, "SubjectAlternativeName"_s);
	$assignStatic(SubjectAlternativeNameExtension::SUBJECT_NAME, "subject_name"_s);
}

$Class* SubjectAlternativeNameExtension::load$($String* name, bool initialize) {
	$loadClass(SubjectAlternativeNameExtension, name, initialize, &_SubjectAlternativeNameExtension_ClassInfo_, clinit$SubjectAlternativeNameExtension, allocate$SubjectAlternativeNameExtension);
	return class$;
}

$Class* SubjectAlternativeNameExtension::class$ = nullptr;

		} // x509
	} // security
} // sun