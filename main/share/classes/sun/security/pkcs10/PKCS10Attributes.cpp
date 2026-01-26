#include <sun/security/pkcs10/PKCS10Attributes.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <sun/security/pkcs10/PKCS10Attribute.h>
#include <sun/security/util/DerEncoder.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

#undef TAG_CONTEXT

using $PKCS10AttributeArray = $Array<::sun::security::pkcs10::PKCS10Attribute>;
using $DerEncoderArray = $Array<::sun::security::util::DerEncoder>;
using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $PKCS10Attribute = ::sun::security::pkcs10::PKCS10Attribute;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace sun {
	namespace security {
		namespace pkcs10 {

$FieldInfo _PKCS10Attributes_FieldInfo_[] = {
	{"map", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Lsun/security/pkcs10/PKCS10Attribute;>;", $PRIVATE, $field(PKCS10Attributes, map)},
	{}
};

$MethodInfo _PKCS10Attributes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PKCS10Attributes, init$, void)},
	{"<init>", "([Lsun/security/pkcs10/PKCS10Attribute;)V", nullptr, $PUBLIC, $method(PKCS10Attributes, init$, void, $PKCS10AttributeArray*)},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(PKCS10Attributes, init$, void, $DerInputStream*), "java.io.IOException"},
	{"deleteAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(PKCS10Attributes, deleteAttribute, void, $String*)},
	{"derEncode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(PKCS10Attributes, derEncode, void, $OutputStream*), "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(PKCS10Attributes, encode, void, $OutputStream*), "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PKCS10Attributes, equals, bool, Object$*)},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PKCS10Attributes, getAttribute, $Object*, $String*)},
	{"getAttributes", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lsun/security/pkcs10/PKCS10Attribute;>;", $PUBLIC, $virtualMethod(PKCS10Attributes, getAttributes, $Collection*)},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Lsun/security/pkcs10/PKCS10Attribute;>;", $PUBLIC, $virtualMethod(PKCS10Attributes, getElements, $Enumeration*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PKCS10Attributes, hashCode, int32_t)},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(PKCS10Attributes, setAttribute, void, $String*, Object$*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PKCS10Attributes, toString, $String*)},
	{}
};

$ClassInfo _PKCS10Attributes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.pkcs10.PKCS10Attributes",
	"java.lang.Object",
	"sun.security.util.DerEncoder",
	_PKCS10Attributes_FieldInfo_,
	_PKCS10Attributes_MethodInfo_
};

$Object* allocate$PKCS10Attributes($Class* clazz) {
	return $of($alloc(PKCS10Attributes));
}

void PKCS10Attributes::init$() {
	$set(this, map, $new($Hashtable, 3));
}

void PKCS10Attributes::init$($PKCS10AttributeArray* attrs) {
	$useLocalCurrentObjectStackCache();
	$set(this, map, $new($Hashtable, 3));
	for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
		$nc(this->map)->put($($nc($($nc(attrs->get(i))->getAttributeId()))->toString()), attrs->get(i));
	}
}

void PKCS10Attributes::init$($DerInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$set(this, map, $new($Hashtable, 3));
	$var($DerValueArray, attrs, $nc(in)->getSet(3, true));
	if (attrs == nullptr) {
		$throwNew($IOException, "Illegal encoding of attributes"_s);
	}
	for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
		$var($PKCS10Attribute, attr, $new($PKCS10Attribute, attrs->get(i)));
		$nc(this->map)->put($($nc($(attr->getAttributeId()))->toString()), attr);
	}
}

void PKCS10Attributes::encode($OutputStream* out) {
	derEncode(out);
}

void PKCS10Attributes::derEncode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($Collection, allAttrs, $nc(this->map)->values());
	$var($PKCS10AttributeArray, attribs, $fcast($PKCS10AttributeArray, $nc(allAttrs)->toArray($$new($PKCS10AttributeArray, $nc(this->map)->size()))));
	$var($DerOutputStream, attrOut, $new($DerOutputStream));
	attrOut->putOrderedSetOf($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)0), $fcast($DerEncoderArray, attribs));
	$nc(out)->write($(attrOut->toByteArray()));
}

void PKCS10Attributes::setAttribute($String* name, Object$* obj) {
	if ($instanceOf($PKCS10Attribute, obj)) {
		$nc(this->map)->put(name, $cast($PKCS10Attribute, obj));
	}
}

$Object* PKCS10Attributes::getAttribute($String* name) {
	return $of($nc(this->map)->get(name));
}

void PKCS10Attributes::deleteAttribute($String* name) {
	$nc(this->map)->remove(name);
}

$Enumeration* PKCS10Attributes::getElements() {
	return ($nc(this->map)->elements());
}

$Collection* PKCS10Attributes::getAttributes() {
	return ($Collections::unmodifiableCollection($($nc(this->map)->values())));
}

bool PKCS10Attributes::equals(Object$* other) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, other)) {
		return true;
	}
	if (!($instanceOf(PKCS10Attributes, other))) {
		return false;
	}
	$var($Collection, othersAttribs, $nc(($cast(PKCS10Attributes, other)))->getAttributes());
	$var($PKCS10AttributeArray, attrs, $fcast($PKCS10AttributeArray, $nc(othersAttribs)->toArray($$new($PKCS10AttributeArray, othersAttribs->size()))));
	int32_t len = $nc(attrs)->length;
	if (len != $nc(this->map)->size()) {
		return false;
	}
	$var($PKCS10Attribute, thisAttr, nullptr);
	$var($PKCS10Attribute, otherAttr, nullptr);
	$var($String, key, nullptr);
	for (int32_t i = 0; i < len; ++i) {
		$assign(otherAttr, attrs->get(i));
		$assign(key, $nc($($nc(otherAttr)->getAttributeId()))->toString());
		if (key == nullptr) {
			return false;
		}
		$assign(thisAttr, $cast($PKCS10Attribute, $nc(this->map)->get(key)));
		if (thisAttr == nullptr) {
			return false;
		}
		if (!$nc($of(thisAttr))->equals(otherAttr)) {
			return false;
		}
	}
	return true;
}

int32_t PKCS10Attributes::hashCode() {
	return $nc(this->map)->hashCode();
}

$String* PKCS10Attributes::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$$str($nc(this->map)->size()), "\n"_s}));
	$var($String, s, $concat(var$0, $($nc(this->map)->toString())));
	return s;
}

PKCS10Attributes::PKCS10Attributes() {
}

$Class* PKCS10Attributes::load$($String* name, bool initialize) {
	$loadClass(PKCS10Attributes, name, initialize, &_PKCS10Attributes_ClassInfo_, allocate$PKCS10Attributes);
	return class$;
}

$Class* PKCS10Attributes::class$ = nullptr;

		} // pkcs10
	} // security
} // sun