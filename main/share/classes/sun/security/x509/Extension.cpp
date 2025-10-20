#include <sun/security/x509/Extension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Extension = ::java::security::cert::Extension;
using $Arrays = ::java::util::Arrays;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _Extension_FieldInfo_[] = {
	{"extensionId", "Lsun/security/util/ObjectIdentifier;", nullptr, $PROTECTED, $field(Extension, extensionId)},
	{"critical", "Z", nullptr, $PROTECTED, $field(Extension, critical)},
	{"extensionValue", "[B", nullptr, $PROTECTED, $field(Extension, extensionValue)},
	{"hashMagic", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Extension, hashMagic)},
	{}
};

$MethodInfo _Extension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Extension::*)()>(&Extension::init$))},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(Extension::*)($DerValue*)>(&Extension::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/ObjectIdentifier;Z[B)V", nullptr, $PUBLIC, $method(static_cast<void(Extension::*)($ObjectIdentifier*,bool,$bytes*)>(&Extension::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/x509/Extension;)V", nullptr, $PUBLIC, $method(static_cast<void(Extension::*)(Extension*)>(&Extension::init$))},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getExtensionId", "()Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC},
	{"getExtensionValue", "()[B", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()[B", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isCritical", "()Z", nullptr, $PUBLIC},
	{"newExtension", "(Lsun/security/util/ObjectIdentifier;Z[B)Lsun/security/x509/Extension;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Extension*(*)($ObjectIdentifier*,bool,$bytes*)>(&Extension::newExtension)), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Extension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.Extension",
	"java.lang.Object",
	"java.security.cert.Extension",
	_Extension_FieldInfo_,
	_Extension_MethodInfo_
};

$Object* allocate$Extension($Class* clazz) {
	return $of($alloc(Extension));
}

void Extension::init$() {
	$set(this, extensionId, nullptr);
	this->critical = false;
	$set(this, extensionValue, nullptr);
}

void Extension::init$($DerValue* derVal) {
	$useLocalCurrentObjectStackCache();
	$set(this, extensionId, nullptr);
	this->critical = false;
	$set(this, extensionValue, nullptr);
	$var($DerInputStream, in, $nc(derVal)->toDerInputStream());
	$set(this, extensionId, $nc(in)->getOID());
	$var($DerValue, val, in->getDerValue());
	if ($nc(val)->tag == $DerValue::tag_Boolean) {
		this->critical = val->getBoolean();
		$assign(val, in->getDerValue());
		$set(this, extensionValue, $nc(val)->getOctetString());
	} else {
		this->critical = false;
		$set(this, extensionValue, val->getOctetString());
	}
}

void Extension::init$($ObjectIdentifier* extensionId, bool critical, $bytes* extensionValue) {
	$set(this, extensionId, nullptr);
	this->critical = false;
	$set(this, extensionValue, nullptr);
	$set(this, extensionId, extensionId);
	this->critical = critical;
	$var($DerValue, inDerVal, $new($DerValue, extensionValue));
	$set(this, extensionValue, inDerVal->getOctetString());
}

void Extension::init$(Extension* ext) {
	$set(this, extensionId, nullptr);
	this->critical = false;
	$set(this, extensionValue, nullptr);
	$set(this, extensionId, $nc(ext)->extensionId);
	this->critical = ext->critical;
	$set(this, extensionValue, ext->extensionValue);
}

Extension* Extension::newExtension($ObjectIdentifier* extensionId, bool critical, $bytes* rawExtensionValue) {
	$init(Extension);
	$var(Extension, ext, $new(Extension));
	$set(ext, extensionId, extensionId);
	ext->critical = critical;
	$set(ext, extensionValue, rawExtensionValue);
	return ext;
}

void Extension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	if (out == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($DerOutputStream, dos1, $new($DerOutputStream));
	$var($DerOutputStream, dos2, $new($DerOutputStream));
	dos1->putOID(this->extensionId);
	if (this->critical) {
		dos1->putBoolean(this->critical);
	}
	dos1->putOctetString(this->extensionValue);
	dos2->write($DerValue::tag_Sequence, dos1);
	$nc(out)->write($(dos2->toByteArray()));
}

void Extension::encode($DerOutputStream* out) {
	if (this->extensionId == nullptr) {
		$throwNew($IOException, "Null OID to encode for the extension!"_s);
	}
	if (this->extensionValue == nullptr) {
		$throwNew($IOException, "No value to encode for the extension!"_s);
	}
	$var($DerOutputStream, dos, $new($DerOutputStream));
	dos->putOID(this->extensionId);
	if (this->critical) {
		dos->putBoolean(this->critical);
	}
	dos->putOctetString(this->extensionValue);
	$nc(out)->write($DerValue::tag_Sequence, dos);
}

bool Extension::isCritical() {
	return this->critical;
}

$ObjectIdentifier* Extension::getExtensionId() {
	return this->extensionId;
}

$bytes* Extension::getValue() {
	return $cast($bytes, $nc(this->extensionValue)->clone());
}

$bytes* Extension::getExtensionValue() {
	return this->extensionValue;
}

$String* Extension::getId() {
	return $nc(this->extensionId)->toString();
}

$String* Extension::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"ObjectId: "_s, this->extensionId, " Criticality="_s, $$str(this->critical), $$str(u'\n')});
}

int32_t Extension::hashCode() {
	int32_t h = 0;
	if (this->extensionValue != nullptr) {
		$var($bytes, val, this->extensionValue);
		int32_t len = $nc(val)->length;
		while (len > 0) {
			int32_t var$0 = len;
			h += var$0 * val->get(--len);
		}
	}
	h = h * Extension::hashMagic + $nc(this->extensionId)->hashCode();
	h = h * Extension::hashMagic + (this->critical ? 1231 : 1237);
	return h;
}

bool Extension::equals(Object$* other) {
	if ($equals(this, other)) {
		return true;
	}
	if (!($instanceOf(Extension, other))) {
		return false;
	}
	$var(Extension, otherExt, $cast(Extension, other));
	if (this->critical != $nc(otherExt)->critical) {
		return false;
	}
	if (!$nc(this->extensionId)->equals($nc(otherExt)->extensionId)) {
		return false;
	}
	return $Arrays::equals(this->extensionValue, $nc(otherExt)->extensionValue);
}

Extension::Extension() {
}

$Class* Extension::load$($String* name, bool initialize) {
	$loadClass(Extension, name, initialize, &_Extension_ClassInfo_, allocate$Extension);
	return class$;
}

$Class* Extension::class$ = nullptr;

		} // x509
	} // security
} // sun