#include <sun/security/ssl/ContentType.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <jcpp.h>

#undef ALERT
#undef APPLICATION_DATA
#undef CHANGE_CIPHER_SPEC
#undef HANDSHAKE
#undef INVALID
#undef PROTOCOLS_OF_13
#undef PROTOCOLS_TO_12
#undef PROTOCOLS_TO_13

using $ContentTypeArray = $Array<::sun::security::ssl::ContentType>;
using $ProtocolVersionArray = $Array<::sun::security::ssl::ProtocolVersion>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ContentType_FieldInfo_[] = {
	{"INVALID", "Lsun/security/ssl/ContentType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ContentType, INVALID)},
	{"CHANGE_CIPHER_SPEC", "Lsun/security/ssl/ContentType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ContentType, CHANGE_CIPHER_SPEC)},
	{"ALERT", "Lsun/security/ssl/ContentType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ContentType, ALERT)},
	{"HANDSHAKE", "Lsun/security/ssl/ContentType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ContentType, HANDSHAKE)},
	{"APPLICATION_DATA", "Lsun/security/ssl/ContentType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ContentType, APPLICATION_DATA)},
	{"$VALUES", "[Lsun/security/ssl/ContentType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ContentType, $VALUES)},
	{"id", "B", nullptr, $FINAL, $field(ContentType, id)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(ContentType, name$)},
	{"supportedProtocols", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $FINAL, $field(ContentType, supportedProtocols)},
	{}
};

$MethodInfo _ContentType_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/ContentType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ContentTypeArray*(*)()>(&ContentType::$values))},
	{"<init>", "(Ljava/lang/String;IBLjava/lang/String;[Lsun/security/ssl/ProtocolVersion;)V", "(BLjava/lang/String;[Lsun/security/ssl/ProtocolVersion;)V", $PRIVATE, $method(static_cast<void(ContentType::*)($String*,int32_t,int8_t,$String*,$ProtocolVersionArray*)>(&ContentType::init$))},
	{"nameOf", "(B)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int8_t)>(&ContentType::nameOf))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/ContentType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ContentType*(*)($String*)>(&ContentType::valueOf))},
	{"valueOf", "(B)Lsun/security/ssl/ContentType;", nullptr, $STATIC, $method(static_cast<ContentType*(*)(int8_t)>(&ContentType::valueOf))},
	{"values", "()[Lsun/security/ssl/ContentType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ContentTypeArray*(*)()>(&ContentType::values))},
	{}
};

$ClassInfo _ContentType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.ContentType",
	"java.lang.Enum",
	nullptr,
	_ContentType_FieldInfo_,
	_ContentType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/ContentType;>;"
};

$Object* allocate$ContentType($Class* clazz) {
	return $of($alloc(ContentType));
}

ContentType* ContentType::INVALID = nullptr;
ContentType* ContentType::CHANGE_CIPHER_SPEC = nullptr;
ContentType* ContentType::ALERT = nullptr;
ContentType* ContentType::HANDSHAKE = nullptr;
ContentType* ContentType::APPLICATION_DATA = nullptr;
$ContentTypeArray* ContentType::$VALUES = nullptr;

$ContentTypeArray* ContentType::$values() {
	$init(ContentType);
	return $new($ContentTypeArray, {
		ContentType::INVALID,
		ContentType::CHANGE_CIPHER_SPEC,
		ContentType::ALERT,
		ContentType::HANDSHAKE,
		ContentType::APPLICATION_DATA
	});
}

$ContentTypeArray* ContentType::values() {
	$init(ContentType);
	return $cast($ContentTypeArray, ContentType::$VALUES->clone());
}

ContentType* ContentType::valueOf($String* name) {
	$init(ContentType);
	return $cast(ContentType, $Enum::valueOf(ContentType::class$, name));
}

void ContentType::init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name, $ProtocolVersionArray* supportedProtocols) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	$set(this, name$, name);
	$set(this, supportedProtocols, supportedProtocols);
}

ContentType* ContentType::valueOf(int8_t id) {
	$init(ContentType);
	{
		$var($ContentTypeArray, arr$, ContentType::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			ContentType* ct = arr$->get(i$);
			{
				if ($nc(ct)->id == id) {
					return ct;
				}
			}
		}
	}
	return nullptr;
}

$String* ContentType::nameOf(int8_t id) {
	$init(ContentType);
	$useLocalCurrentObjectStackCache();
	{
		$var($ContentTypeArray, arr$, ContentType::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			ContentType* ct = arr$->get(i$);
			{
				if ($nc(ct)->id == id) {
					return ct->name$;
				}
			}
		}
	}
	return $str({"<UNKNOWN CONTENT TYPE: "_s, $$str(((int32_t)(id & (uint32_t)255))), ">"_s});
}

void clinit$ContentType($Class* class$) {
	$init($ProtocolVersion);
	$assignStatic(ContentType::INVALID, $new(ContentType, "INVALID"_s, 0, (int8_t)0, "invalid"_s, $ProtocolVersion::PROTOCOLS_OF_13));
	$assignStatic(ContentType::CHANGE_CIPHER_SPEC, $new(ContentType, "CHANGE_CIPHER_SPEC"_s, 1, (int8_t)20, "change_cipher_spec"_s, $ProtocolVersion::PROTOCOLS_TO_12));
	$assignStatic(ContentType::ALERT, $new(ContentType, "ALERT"_s, 2, (int8_t)21, "alert"_s, $ProtocolVersion::PROTOCOLS_TO_13));
	$assignStatic(ContentType::HANDSHAKE, $new(ContentType, "HANDSHAKE"_s, 3, (int8_t)22, "handshake"_s, $ProtocolVersion::PROTOCOLS_TO_13));
	$assignStatic(ContentType::APPLICATION_DATA, $new(ContentType, "APPLICATION_DATA"_s, 4, (int8_t)23, "application_data"_s, $ProtocolVersion::PROTOCOLS_TO_13));
	$assignStatic(ContentType::$VALUES, ContentType::$values());
}

ContentType::ContentType() {
}

$Class* ContentType::load$($String* name, bool initialize) {
	$loadClass(ContentType, name, initialize, &_ContentType_ClassInfo_, clinit$ContentType, allocate$ContentType);
	return class$;
}

$Class* ContentType::class$ = nullptr;

		} // ssl
	} // security
} // sun