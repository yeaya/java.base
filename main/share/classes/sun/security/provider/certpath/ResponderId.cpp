#include <sun/security/provider/certpath/ResponderId.h>

#include <java/io/IOException.h>
#include <java/security/PublicKey.h>
#include <java/util/Arrays.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/provider/certpath/ResponderId$1.h>
#include <sun/security/provider/certpath/ResponderId$Type.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/KeyIdentifier.h>
#include <jcpp.h>

#undef BY_KEY
#undef BY_NAME
#undef TAG_CONTEXT

using $IOException = ::java::io::IOException;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $Arrays = ::java::util::Arrays;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $ResponderId$1 = ::sun::security::provider::certpath::ResponderId$1;
using $ResponderId$Type = ::sun::security::provider::certpath::ResponderId$Type;
using $DerValue = ::sun::security::util::DerValue;
using $KeyIdentifier = ::sun::security::x509::KeyIdentifier;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _ResponderId_FieldInfo_[] = {
	{"type", "Lsun/security/provider/certpath/ResponderId$Type;", nullptr, $PRIVATE, $field(ResponderId, type)},
	{"responderName", "Ljavax/security/auth/x500/X500Principal;", nullptr, $PRIVATE, $field(ResponderId, responderName)},
	{"responderKeyId", "Lsun/security/x509/KeyIdentifier;", nullptr, $PRIVATE, $field(ResponderId, responderKeyId)},
	{"encodedRid", "[B", nullptr, $PRIVATE, $field(ResponderId, encodedRid)},
	{}
};

$MethodInfo _ResponderId_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/x500/X500Principal;)V", nullptr, $PUBLIC, $method(static_cast<void(ResponderId::*)($X500Principal*)>(&ResponderId::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/security/PublicKey;)V", nullptr, $PUBLIC, $method(static_cast<void(ResponderId::*)($PublicKey*)>(&ResponderId::init$)), "java.io.IOException"},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(ResponderId::*)($bytes*)>(&ResponderId::init$)), "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getEncoded", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(ResponderId::*)()>(&ResponderId::getEncoded))},
	{"getKeyIdentifier", "()Lsun/security/x509/KeyIdentifier;", nullptr, $PUBLIC, $method(static_cast<$KeyIdentifier*(ResponderId::*)()>(&ResponderId::getKeyIdentifier))},
	{"getResponderName", "()Ljavax/security/auth/x500/X500Principal;", nullptr, $PUBLIC, $method(static_cast<$X500Principal*(ResponderId::*)()>(&ResponderId::getResponderName))},
	{"getType", "()Lsun/security/provider/certpath/ResponderId$Type;", nullptr, $PUBLIC, $method(static_cast<$ResponderId$Type*(ResponderId::*)()>(&ResponderId::getType))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"keyIdToBytes", "()[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(ResponderId::*)()>(&ResponderId::keyIdToBytes)), "java.io.IOException"},
	{"length", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ResponderId::*)()>(&ResponderId::length))},
	{"principalToBytes", "()[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(ResponderId::*)()>(&ResponderId::principalToBytes)), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ResponderId_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.ResponderId$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.security.provider.certpath.ResponderId$Type", "sun.security.provider.certpath.ResponderId", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ResponderId_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.certpath.ResponderId",
	"java.lang.Object",
	nullptr,
	_ResponderId_FieldInfo_,
	_ResponderId_MethodInfo_,
	nullptr,
	nullptr,
	_ResponderId_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.ResponderId$1,sun.security.provider.certpath.ResponderId$Type"
};

$Object* allocate$ResponderId($Class* clazz) {
	return $of($alloc(ResponderId));
}

void ResponderId::init$($X500Principal* subjectName) {
	$set(this, responderName, subjectName);
	$set(this, responderKeyId, nullptr);
	$set(this, encodedRid, principalToBytes());
	$init($ResponderId$Type);
	$set(this, type, $ResponderId$Type::BY_NAME);
}

void ResponderId::init$($PublicKey* pubKey) {
	$set(this, responderKeyId, $new($KeyIdentifier, pubKey));
	$set(this, responderName, nullptr);
	$set(this, encodedRid, keyIdToBytes());
	$init($ResponderId$Type);
	$set(this, type, $ResponderId$Type::BY_KEY);
}

void ResponderId::init$($bytes* encodedData) {
	$useLocalCurrentObjectStackCache();
	$var($DerValue, outer, $new($DerValue, encodedData));
	$init($ResponderId$Type);
	bool var$0 = outer->isContextSpecific((int8_t)$ResponderId$Type::BY_NAME->value());
	if (var$0 && outer->isConstructed()) {
		$set(this, responderName, $new($X500Principal, $(outer->getDataBytes())));
		$set(this, encodedRid, principalToBytes());
		$set(this, type, $ResponderId$Type::BY_NAME);
	} else {
		bool var$2 = outer->isContextSpecific((int8_t)$ResponderId$Type::BY_KEY->value());
		if (var$2 && outer->isConstructed()) {
			$set(this, responderKeyId, $new($KeyIdentifier, $$new($DerValue, $(outer->getDataBytes()))));
			$set(this, encodedRid, keyIdToBytes());
			$set(this, type, $ResponderId$Type::BY_KEY);
		} else {
			$throwNew($IOException, "Invalid ResponderId content"_s);
		}
	}
}

$bytes* ResponderId::getEncoded() {
	return $cast($bytes, $nc(this->encodedRid)->clone());
}

$ResponderId$Type* ResponderId::getType() {
	return this->type;
}

int32_t ResponderId::length() {
	return $nc(this->encodedRid)->length;
}

$X500Principal* ResponderId::getResponderName() {
	return this->responderName;
}

$KeyIdentifier* ResponderId::getKeyIdentifier() {
	return this->responderKeyId;
}

bool ResponderId::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (obj == nullptr) {
		return false;
	}
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf(ResponderId, obj)) {
		$var(ResponderId, respObj, $cast(ResponderId, obj));
		return $Arrays::equals(this->encodedRid, $($nc(respObj)->getEncoded()));
	}
	return false;
}

int32_t ResponderId::hashCode() {
	return $Arrays::hashCode(this->encodedRid);
}

$String* ResponderId::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	$init($ResponderId$1);
	switch ($nc($ResponderId$1::$SwitchMap$sun$security$provider$certpath$ResponderId$Type)->get($nc((this->type))->ordinal())) {
	case 1:
		{
			sb->append($of(this->type))->append(": "_s)->append($of(this->responderName));
			break;
		}
	case 2:
		{
			sb->append($of(this->type))->append(": "_s);
			{
				$var($bytes, arr$, $nc(this->responderKeyId)->getIdentifier());
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					int8_t keyIdByte = arr$->get(i$);
					{
						sb->append($($String::format("%02X"_s, $$new($ObjectArray, {$($of($Byte::valueOf(keyIdByte)))}))));
					}
				}
			}
			break;
		}
	default:
		{
			sb->append("Unknown ResponderId Type: "_s)->append($of(this->type));
		}
	}
	return sb->toString();
}

$bytes* ResponderId::principalToBytes() {
	$useLocalCurrentObjectStackCache();
	$init($ResponderId$Type);
	int8_t var$0 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)$ResponderId$Type::BY_NAME->value());
	$var($DerValue, dv, $new($DerValue, var$0, $($nc(this->responderName)->getEncoded())));
	return dv->toByteArray();
}

$bytes* ResponderId::keyIdToBytes() {
	$useLocalCurrentObjectStackCache();
	$var($DerValue, inner, $new($DerValue, $DerValue::tag_OctetString, $($nc(this->responderKeyId)->getIdentifier())));
	$init($ResponderId$Type);
	int8_t var$0 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)$ResponderId$Type::BY_KEY->value());
	$var($DerValue, outer, $new($DerValue, var$0, $(inner->toByteArray())));
	return outer->toByteArray();
}

ResponderId::ResponderId() {
}

$Class* ResponderId::load$($String* name, bool initialize) {
	$loadClass(ResponderId, name, initialize, &_ResponderId_ClassInfo_, allocate$ResponderId);
	return class$;
}

$Class* ResponderId::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun