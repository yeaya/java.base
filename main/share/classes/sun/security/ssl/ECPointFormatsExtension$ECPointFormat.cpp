#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormat.h>

#include <java/lang/Enum.h>
#include <sun/security/ssl/ECPointFormatsExtension.h>
#include <jcpp.h>

#undef ANSIX962_COMPRESSED_PRIME
#undef UNCOMPRESSED

using $ECPointFormatsExtension$ECPointFormatArray = $Array<::sun::security::ssl::ECPointFormatsExtension$ECPointFormat>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ECPointFormatsExtension$ECPointFormat_FieldInfo_[] = {
	{"UNCOMPRESSED", "Lsun/security/ssl/ECPointFormatsExtension$ECPointFormat;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ECPointFormatsExtension$ECPointFormat, UNCOMPRESSED)},
	{"ANSIX962_COMPRESSED_PRIME", "Lsun/security/ssl/ECPointFormatsExtension$ECPointFormat;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ECPointFormatsExtension$ECPointFormat, ANSIX962_COMPRESSED_PRIME)},
	{"FMT_ANSIX962_COMPRESSED_CHAR2", "Lsun/security/ssl/ECPointFormatsExtension$ECPointFormat;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ECPointFormatsExtension$ECPointFormat, FMT_ANSIX962_COMPRESSED_CHAR2)},
	{"$VALUES", "[Lsun/security/ssl/ECPointFormatsExtension$ECPointFormat;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ECPointFormatsExtension$ECPointFormat, $VALUES)},
	{"id", "B", nullptr, $FINAL, $field(ECPointFormatsExtension$ECPointFormat, id)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(ECPointFormatsExtension$ECPointFormat, name$)},
	{}
};

$MethodInfo _ECPointFormatsExtension$ECPointFormat_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/ECPointFormatsExtension$ECPointFormat;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ECPointFormatsExtension$ECPointFormatArray*(*)()>(&ECPointFormatsExtension$ECPointFormat::$values))},
	{"<init>", "(Ljava/lang/String;IBLjava/lang/String;)V", "(BLjava/lang/String;)V", $PRIVATE, $method(static_cast<void(ECPointFormatsExtension$ECPointFormat::*)($String*,int32_t,int8_t,$String*)>(&ECPointFormatsExtension$ECPointFormat::init$))},
	{"nameOf", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&ECPointFormatsExtension$ECPointFormat::nameOf))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/ECPointFormatsExtension$ECPointFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ECPointFormatsExtension$ECPointFormat*(*)($String*)>(&ECPointFormatsExtension$ECPointFormat::valueOf))},
	{"values", "()[Lsun/security/ssl/ECPointFormatsExtension$ECPointFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ECPointFormatsExtension$ECPointFormatArray*(*)()>(&ECPointFormatsExtension$ECPointFormat::values))},
	{}
};

$InnerClassInfo _ECPointFormatsExtension$ECPointFormat_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECPointFormatsExtension$ECPointFormat", "sun.security.ssl.ECPointFormatsExtension", "ECPointFormat", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ECPointFormatsExtension$ECPointFormat_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.ECPointFormatsExtension$ECPointFormat",
	"java.lang.Enum",
	nullptr,
	_ECPointFormatsExtension$ECPointFormat_FieldInfo_,
	_ECPointFormatsExtension$ECPointFormat_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/ECPointFormatsExtension$ECPointFormat;>;",
	nullptr,
	_ECPointFormatsExtension$ECPointFormat_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECPointFormatsExtension"
};

$Object* allocate$ECPointFormatsExtension$ECPointFormat($Class* clazz) {
	return $of($alloc(ECPointFormatsExtension$ECPointFormat));
}

ECPointFormatsExtension$ECPointFormat* ECPointFormatsExtension$ECPointFormat::UNCOMPRESSED = nullptr;
ECPointFormatsExtension$ECPointFormat* ECPointFormatsExtension$ECPointFormat::ANSIX962_COMPRESSED_PRIME = nullptr;
ECPointFormatsExtension$ECPointFormat* ECPointFormatsExtension$ECPointFormat::FMT_ANSIX962_COMPRESSED_CHAR2 = nullptr;
$ECPointFormatsExtension$ECPointFormatArray* ECPointFormatsExtension$ECPointFormat::$VALUES = nullptr;

$ECPointFormatsExtension$ECPointFormatArray* ECPointFormatsExtension$ECPointFormat::$values() {
	$init(ECPointFormatsExtension$ECPointFormat);
	return $new($ECPointFormatsExtension$ECPointFormatArray, {
		ECPointFormatsExtension$ECPointFormat::UNCOMPRESSED,
		ECPointFormatsExtension$ECPointFormat::ANSIX962_COMPRESSED_PRIME,
		ECPointFormatsExtension$ECPointFormat::FMT_ANSIX962_COMPRESSED_CHAR2
	});
}

$ECPointFormatsExtension$ECPointFormatArray* ECPointFormatsExtension$ECPointFormat::values() {
	$init(ECPointFormatsExtension$ECPointFormat);
	return $cast($ECPointFormatsExtension$ECPointFormatArray, ECPointFormatsExtension$ECPointFormat::$VALUES->clone());
}

ECPointFormatsExtension$ECPointFormat* ECPointFormatsExtension$ECPointFormat::valueOf($String* name) {
	$init(ECPointFormatsExtension$ECPointFormat);
	return $cast(ECPointFormatsExtension$ECPointFormat, $Enum::valueOf(ECPointFormatsExtension$ECPointFormat::class$, name));
}

void ECPointFormatsExtension$ECPointFormat::init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	$set(this, name$, name);
}

$String* ECPointFormatsExtension$ECPointFormat::nameOf(int32_t id) {
	$init(ECPointFormatsExtension$ECPointFormat);
	$useLocalCurrentObjectStackCache();
	{
		$var($ECPointFormatsExtension$ECPointFormatArray, arr$, ECPointFormatsExtension$ECPointFormat::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			ECPointFormatsExtension$ECPointFormat* pf = arr$->get(i$);
			{
				if ($nc(pf)->id == id) {
					return pf->name$;
				}
			}
		}
	}
	return $str({"UNDEFINED-EC-POINT-FORMAT("_s, $$str(id), ")"_s});
}

void clinit$ECPointFormatsExtension$ECPointFormat($Class* class$) {
	$assignStatic(ECPointFormatsExtension$ECPointFormat::UNCOMPRESSED, $new(ECPointFormatsExtension$ECPointFormat, "UNCOMPRESSED"_s, 0, (int8_t)0, "uncompressed"_s));
	$assignStatic(ECPointFormatsExtension$ECPointFormat::ANSIX962_COMPRESSED_PRIME, $new(ECPointFormatsExtension$ECPointFormat, "ANSIX962_COMPRESSED_PRIME"_s, 1, (int8_t)1, "ansiX962_compressed_prime"_s));
	$assignStatic(ECPointFormatsExtension$ECPointFormat::FMT_ANSIX962_COMPRESSED_CHAR2, $new(ECPointFormatsExtension$ECPointFormat, "FMT_ANSIX962_COMPRESSED_CHAR2"_s, 2, (int8_t)2, "ansiX962_compressed_char2"_s));
	$assignStatic(ECPointFormatsExtension$ECPointFormat::$VALUES, ECPointFormatsExtension$ECPointFormat::$values());
}

ECPointFormatsExtension$ECPointFormat::ECPointFormatsExtension$ECPointFormat() {
}

$Class* ECPointFormatsExtension$ECPointFormat::load$($String* name, bool initialize) {
	$loadClass(ECPointFormatsExtension$ECPointFormat, name, initialize, &_ECPointFormatsExtension$ECPointFormat_ClassInfo_, clinit$ECPointFormatsExtension$ECPointFormat, allocate$ECPointFormatsExtension$ECPointFormat);
	return class$;
}

$Class* ECPointFormatsExtension$ECPointFormat::class$ = nullptr;

		} // ssl
	} // security
} // sun