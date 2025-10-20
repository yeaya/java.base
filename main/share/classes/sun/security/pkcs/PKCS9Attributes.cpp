#include <sun/security/pkcs/PKCS9Attributes.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Hashtable.h>
#include <sun/security/pkcs/PKCS9Attribute.h>
#include <sun/security/pkcs/ParsingException.h>
#include <sun/security/util/DerEncoder.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

#undef PKCS9_OIDS

using $PKCS9AttributeArray = $Array<::sun::security::pkcs::PKCS9Attribute>;
using $DerEncoderArray = $Array<::sun::security::util::DerEncoder>;
using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $ObjectIdentifierArray = $Array<::sun::security::util::ObjectIdentifier>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Collection = ::java::util::Collection;
using $Hashtable = ::java::util::Hashtable;
using $PKCS9Attribute = ::sun::security::pkcs::PKCS9Attribute;
using $ParsingException = ::sun::security::pkcs::ParsingException;
using $DerEncoder = ::sun::security::util::DerEncoder;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace sun {
	namespace security {
		namespace pkcs {

$FieldInfo _PKCS9Attributes_FieldInfo_[] = {
	{"attributes", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Lsun/security/util/ObjectIdentifier;Lsun/security/pkcs/PKCS9Attribute;>;", $PRIVATE | $FINAL, $field(PKCS9Attributes, attributes)},
	{"permittedAttributes", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Lsun/security/util/ObjectIdentifier;Lsun/security/util/ObjectIdentifier;>;", $PRIVATE | $FINAL, $field(PKCS9Attributes, permittedAttributes)},
	{"derEncoding", "[B", nullptr, $PRIVATE | $FINAL, $field(PKCS9Attributes, derEncoding)},
	{"ignoreUnsupportedAttributes", "Z", nullptr, $PRIVATE, $field(PKCS9Attributes, ignoreUnsupportedAttributes)},
	{}
};

$MethodInfo _PKCS9Attributes_MethodInfo_[] = {
	{"<init>", "([Lsun/security/util/ObjectIdentifier;Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(PKCS9Attributes::*)($ObjectIdentifierArray*,$DerInputStream*)>(&PKCS9Attributes::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(PKCS9Attributes::*)($DerInputStream*)>(&PKCS9Attributes::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/DerInputStream;Z)V", nullptr, $PUBLIC, $method(static_cast<void(PKCS9Attributes::*)($DerInputStream*,bool)>(&PKCS9Attributes::init$)), "java.io.IOException"},
	{"<init>", "([Lsun/security/pkcs/PKCS9Attribute;)V", nullptr, $PUBLIC, $method(static_cast<void(PKCS9Attributes::*)($PKCS9AttributeArray*)>(&PKCS9Attributes::init$)), "java.lang.IllegalArgumentException,java.io.IOException"},
	{"castToDerEncoder", "([Ljava/lang/Object;)[Lsun/security/util/DerEncoder;", nullptr, $STATIC, $method(static_cast<$DerEncoderArray*(*)($ObjectArray*)>(&PKCS9Attributes::castToDerEncoder))},
	{"decode", "(Lsun/security/util/DerInputStream;)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(PKCS9Attributes::*)($DerInputStream*)>(&PKCS9Attributes::decode)), "java.io.IOException"},
	{"encode", "(BLjava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"generateDerEncoding", "()[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(PKCS9Attributes::*)()>(&PKCS9Attributes::generateDerEncoding)), "java.io.IOException"},
	{"getAttribute", "(Lsun/security/util/ObjectIdentifier;)Lsun/security/pkcs/PKCS9Attribute;", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/String;)Lsun/security/pkcs/PKCS9Attribute;", nullptr, $PUBLIC},
	{"getAttributeValue", "(Lsun/security/util/ObjectIdentifier;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getAttributeValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getAttributes", "()[Lsun/security/pkcs/PKCS9Attribute;", nullptr, $PUBLIC},
	{"getDerEncoding", "()[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PKCS9Attributes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.pkcs.PKCS9Attributes",
	"java.lang.Object",
	nullptr,
	_PKCS9Attributes_FieldInfo_,
	_PKCS9Attributes_MethodInfo_
};

$Object* allocate$PKCS9Attributes($Class* clazz) {
	return $of($alloc(PKCS9Attributes));
}

void PKCS9Attributes::init$($ObjectIdentifierArray* permittedAttributes, $DerInputStream* in) {
	$set(this, attributes, $new($Hashtable, 3));
	this->ignoreUnsupportedAttributes = false;
	if (permittedAttributes != nullptr) {
		$set(this, permittedAttributes, $new($Hashtable, permittedAttributes->length));
		for (int32_t i = 0; i < permittedAttributes->length; ++i) {
			$nc(this->permittedAttributes)->put(permittedAttributes->get(i), permittedAttributes->get(i));
		}
	} else {
		$set(this, permittedAttributes, nullptr);
	}
	$set(this, derEncoding, decode(in));
}

void PKCS9Attributes::init$($DerInputStream* in) {
	PKCS9Attributes::init$(in, false);
}

void PKCS9Attributes::init$($DerInputStream* in, bool ignoreUnsupportedAttributes) {
	$set(this, attributes, $new($Hashtable, 3));
	this->ignoreUnsupportedAttributes = false;
	this->ignoreUnsupportedAttributes = ignoreUnsupportedAttributes;
	$set(this, derEncoding, decode(in));
	$set(this, permittedAttributes, nullptr);
}

void PKCS9Attributes::init$($PKCS9AttributeArray* attribs) {
	$useLocalCurrentObjectStackCache();
	$set(this, attributes, $new($Hashtable, 3));
	this->ignoreUnsupportedAttributes = false;
	$var($ObjectIdentifier, oid, nullptr);
	for (int32_t i = 0; i < $nc(attribs)->length; ++i) {
		$assign(oid, $nc(attribs->get(i))->getOID());
		if ($nc(this->attributes)->containsKey(oid)) {
			$throwNew($IllegalArgumentException, $$str({"PKCSAttribute "_s, $($nc(attribs->get(i))->getOID()), " duplicated while constructing PKCS9Attributes."_s}));
		}
		$nc(this->attributes)->put(oid, attribs->get(i));
	}
	$set(this, derEncoding, generateDerEncoding());
	$set(this, permittedAttributes, nullptr);
}

$bytes* PKCS9Attributes::decode($DerInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($DerValue, val, $nc(in)->getDerValue());
	$var($bytes, derEncoding, $nc(val)->toByteArray());
	$nc(derEncoding)->set(0, $DerValue::tag_SetOf);
	$var($DerInputStream, derIn, $new($DerInputStream, derEncoding));
	$var($DerValueArray, derVals, derIn->getSet(3, true));
	$var($PKCS9Attribute, attrib, nullptr);
	$var($ObjectIdentifier, oid, nullptr);
	bool reuseEncoding = true;
	for (int32_t i = 0; i < $nc(derVals)->length; ++i) {
		try {
			$assign(attrib, $new($PKCS9Attribute, derVals->get(i)));
		} catch ($ParsingException&) {
			$var($ParsingException, e, $catch());
			if (this->ignoreUnsupportedAttributes) {
				reuseEncoding = false;
				continue;
			} else {
				$throw(e);
			}
		}
		$assign(oid, $nc(attrib)->getOID());
		if ($nc(this->attributes)->get(oid) != nullptr) {
			$throwNew($IOException, $$str({"Duplicate PKCS9 attribute: "_s, oid}));
		}
		if (this->permittedAttributes != nullptr && !$nc(this->permittedAttributes)->containsKey(oid)) {
			$throwNew($IOException, $$str({"Attribute "_s, oid, " not permitted in this attribute set"_s}));
		}
		$nc(this->attributes)->put(oid, attrib);
	}
	return reuseEncoding ? derEncoding : generateDerEncoding();
}

void PKCS9Attributes::encode(int8_t tag, $OutputStream* out) {
	$nc(out)->write((int32_t)tag);
	out->write(this->derEncoding, 1, $nc(this->derEncoding)->length - 1);
}

$bytes* PKCS9Attributes::generateDerEncoding() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, out, $new($DerOutputStream));
	$var($ObjectArray, attribVals, $nc($($nc(this->attributes)->values()))->toArray());
	out->putOrderedSetOf($DerValue::tag_SetOf, $(castToDerEncoder(attribVals)));
	return out->toByteArray();
}

$bytes* PKCS9Attributes::getDerEncoding() {
	return $cast($bytes, $nc(this->derEncoding)->clone());
}

$PKCS9Attribute* PKCS9Attributes::getAttribute($ObjectIdentifier* oid) {
	return $cast($PKCS9Attribute, $nc(this->attributes)->get(oid));
}

$PKCS9Attribute* PKCS9Attributes::getAttribute($String* name) {
	return $cast($PKCS9Attribute, $nc(this->attributes)->get($($PKCS9Attribute::getOID(name))));
}

$PKCS9AttributeArray* PKCS9Attributes::getAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($PKCS9AttributeArray, attribs, $new($PKCS9AttributeArray, $nc(this->attributes)->size()));
	$var($ObjectIdentifier, oid, nullptr);
	int32_t j = 0;
	$init($PKCS9Attribute);
	for (int32_t i = 1; i < $nc($PKCS9Attribute::PKCS9_OIDS)->length && j < attribs->length; ++i) {
		attribs->set(j, $(getAttribute($nc($PKCS9Attribute::PKCS9_OIDS)->get(i))));
		if (attribs->get(j) != nullptr) {
			++j;
		}
	}
	return attribs;
}

$Object* PKCS9Attributes::getAttributeValue($ObjectIdentifier* oid) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Object, value, $nc($(getAttribute(oid)))->getValue());
		return $of(value);
	} catch ($NullPointerException&) {
		$var($NullPointerException, ex, $catch());
		$throwNew($IOException, $$str({"No value found for attribute "_s, oid}));
	}
	$shouldNotReachHere();
}

$Object* PKCS9Attributes::getAttributeValue($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectIdentifier, oid, $PKCS9Attribute::getOID(name));
	if (oid == nullptr) {
		$throwNew($IOException, $$str({"Attribute name "_s, name, " not recognized or not supported."_s}));
	}
	return $of(getAttributeValue(oid));
}

$String* PKCS9Attributes::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, 200));
	sb->append("PKCS9 Attributes: [\n\t"_s);
	$var($ObjectIdentifier, oid, nullptr);
	$var($PKCS9Attribute, value, nullptr);
	bool first = true;
	$init($PKCS9Attribute);
	for (int32_t i = 1; i < $nc($PKCS9Attribute::PKCS9_OIDS)->length; ++i) {
		$assign(value, getAttribute($nc($PKCS9Attribute::PKCS9_OIDS)->get(i)));
		if (value == nullptr) {
			continue;
		}
		if (first) {
			first = false;
		} else {
			sb->append(";\n\t"_s);
		}
		sb->append($($nc(value)->toString()));
	}
	sb->append("\n\t] (end PKCS9 Attributes)"_s);
	return sb->toString();
}

$DerEncoderArray* PKCS9Attributes::castToDerEncoder($ObjectArray* objs) {
	$var($DerEncoderArray, encoders, $new($DerEncoderArray, $nc(objs)->length));
	for (int32_t i = 0; i < encoders->length; ++i) {
		encoders->set(i, $cast($DerEncoder, objs->get(i)));
	}
	return encoders;
}

PKCS9Attributes::PKCS9Attributes() {
}

$Class* PKCS9Attributes::load$($String* name, bool initialize) {
	$loadClass(PKCS9Attributes, name, initialize, &_PKCS9Attributes_ClassInfo_, allocate$PKCS9Attributes);
	return class$;
}

$Class* PKCS9Attributes::class$ = nullptr;

		} // pkcs
	} // security
} // sun