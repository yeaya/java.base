#include <sun/security/x509/CertificateX509Key.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/security/PublicKey.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/X509Key.h>
#include <jcpp.h>

#undef IDENT
#undef KEY
#undef NAME

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $Enumeration = ::java::util::Enumeration;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $X509Key = ::sun::security::x509::X509Key;

namespace sun {
	namespace security {
		namespace x509 {

$String* CertificateX509Key::IDENT = nullptr;
$String* CertificateX509Key::NAME = nullptr;
$String* CertificateX509Key::KEY = nullptr;

void CertificateX509Key::init$($PublicKey* key) {
	$set(this, key, key);
}

void CertificateX509Key::init$($DerInputStream* in) {
	$var($DerValue, val, $nc(in)->getDerValue());
	$set(this, key, $X509Key::parse(val));
}

void CertificateX509Key::init$($InputStream* in) {
	$var($DerValue, val, $new($DerValue, in));
	$set(this, key, $X509Key::parse(val));
}

$String* CertificateX509Key::toString() {
	if (this->key == nullptr) {
		return ""_s;
	}
	return ($nc(this->key)->toString());
}

void CertificateX509Key::encode($OutputStream* out) {
	$useLocalObjectStack();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	tmp->write($($nc(this->key)->getEncoded()));
	$nc(out)->write($(tmp->toByteArray()));
}

void CertificateX509Key::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(CertificateX509Key::KEY)) {
		$set(this, key, $cast($PublicKey, obj));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet: CertificateX509Key."_s);
	}
}

$Object* CertificateX509Key::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateX509Key::KEY)) {
		return (this->key);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet: CertificateX509Key."_s);
	}
}

void CertificateX509Key::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateX509Key::KEY)) {
		$set(this, key, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet: CertificateX509Key."_s);
	}
}

$Enumeration* CertificateX509Key::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(CertificateX509Key::KEY);
	return (elements->elements());
}

$String* CertificateX509Key::getName() {
	return (CertificateX509Key::NAME);
}

CertificateX509Key::CertificateX509Key() {
}

void CertificateX509Key::clinit$($Class* clazz) {
	$assignStatic(CertificateX509Key::IDENT, "x509.info.key"_s);
	$assignStatic(CertificateX509Key::NAME, "key"_s);
	$assignStatic(CertificateX509Key::KEY, "value"_s);
}

$Class* CertificateX509Key::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateX509Key, IDENT)},
		{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateX509Key, NAME)},
		{"KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateX509Key, KEY)},
		{"key", "Ljava/security/PublicKey;", nullptr, $PRIVATE, $field(CertificateX509Key, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/PublicKey;)V", nullptr, $PUBLIC, $method(CertificateX509Key, init$, void, $PublicKey*)},
		{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(CertificateX509Key, init$, void, $DerInputStream*), "java.io.IOException"},
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(CertificateX509Key, init$, void, $InputStream*), "java.io.IOException"},
		{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CertificateX509Key, delete$, void, $String*), "java.io.IOException"},
		{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(CertificateX509Key, encode, void, $OutputStream*), "java.io.IOException"},
		{"get", "(Ljava/lang/String;)Ljava/security/PublicKey;", nullptr, $PUBLIC, $virtualMethod(CertificateX509Key, get, $Object*, $String*), "java.io.IOException"},
		{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(CertificateX509Key, getElements, $Enumeration*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificateX509Key, getName, $String*)},
		{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CertificateX509Key, set, void, $String*, Object$*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificateX509Key, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.x509.CertificateX509Key",
		"java.lang.Object",
		"sun.security.x509.CertAttrSet",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
	};
	$loadClass(CertificateX509Key, name, initialize, &classInfo$$, CertificateX509Key::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateX509Key);
	});
	return class$;
}

$Class* CertificateX509Key::class$ = nullptr;

		} // x509
	} // security
} // sun