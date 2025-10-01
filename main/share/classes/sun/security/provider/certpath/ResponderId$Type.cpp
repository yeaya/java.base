#include <sun/security/provider/certpath/ResponderId$Type.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/provider/certpath/ResponderId.h>
#include <jcpp.h>

#undef BY_KEY
#undef BY_NAME

using $ResponderId$TypeArray = $Array<::sun::security::provider::certpath::ResponderId$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResponderId = ::sun::security::provider::certpath::ResponderId;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _ResponderId$Type_FieldInfo_[] = {
	{"BY_NAME", "Lsun/security/provider/certpath/ResponderId$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ResponderId$Type, BY_NAME)},
	{"BY_KEY", "Lsun/security/provider/certpath/ResponderId$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ResponderId$Type, BY_KEY)},
	{"$VALUES", "[Lsun/security/provider/certpath/ResponderId$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ResponderId$Type, $VALUES)},
	{"tagNumber", "I", nullptr, $PRIVATE | $FINAL, $field(ResponderId$Type, tagNumber)},
	{"ridTypeName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ResponderId$Type, ridTypeName)},
	{}
};

$MethodInfo _ResponderId$Type_MethodInfo_[] = {
	{"$values", "()[Lsun/security/provider/certpath/ResponderId$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ResponderId$TypeArray*(*)()>(&ResponderId$Type::$values))},
	{"<init>", "(Ljava/lang/String;IILjava/lang/String;)V", "(ILjava/lang/String;)V", $PRIVATE, $method(static_cast<void(ResponderId$Type::*)($String*,int32_t,int32_t,$String*)>(&ResponderId$Type::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"value", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ResponderId$Type::*)()>(&ResponderId$Type::value))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/provider/certpath/ResponderId$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ResponderId$Type*(*)($String*)>(&ResponderId$Type::valueOf))},
	{"values", "()[Lsun/security/provider/certpath/ResponderId$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ResponderId$TypeArray*(*)()>(&ResponderId$Type::values))},
	{}
};

$InnerClassInfo _ResponderId$Type_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.ResponderId$Type", "sun.security.provider.certpath.ResponderId", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ResponderId$Type_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.security.provider.certpath.ResponderId$Type",
	"java.lang.Enum",
	nullptr,
	_ResponderId$Type_FieldInfo_,
	_ResponderId$Type_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/provider/certpath/ResponderId$Type;>;",
	nullptr,
	_ResponderId$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.ResponderId"
};

$Object* allocate$ResponderId$Type($Class* clazz) {
	return $of($alloc(ResponderId$Type));
}


ResponderId$Type* ResponderId$Type::BY_NAME = nullptr;

ResponderId$Type* ResponderId$Type::BY_KEY = nullptr;
$ResponderId$TypeArray* ResponderId$Type::$VALUES = nullptr;

$ResponderId$TypeArray* ResponderId$Type::$values() {
	$init(ResponderId$Type);
	return $new($ResponderId$TypeArray, {
		ResponderId$Type::BY_NAME,
		ResponderId$Type::BY_KEY
	});
}

$ResponderId$TypeArray* ResponderId$Type::values() {
	$init(ResponderId$Type);
	return $cast($ResponderId$TypeArray, ResponderId$Type::$VALUES->clone());
}

ResponderId$Type* ResponderId$Type::valueOf($String* name) {
	$init(ResponderId$Type);
	return $cast(ResponderId$Type, $Enum::valueOf(ResponderId$Type::class$, name));
}

void ResponderId$Type::init$($String* $enum$name, int32_t $enum$ordinal, int32_t value, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->tagNumber = value;
	$set(this, ridTypeName, name);
}

int32_t ResponderId$Type::value() {
	return this->tagNumber;
}

$String* ResponderId$Type::toString() {
	return this->ridTypeName;
}

void clinit$ResponderId$Type($Class* class$) {
	$assignStatic(ResponderId$Type::BY_NAME, $new(ResponderId$Type, "BY_NAME"_s, 0, 1, "byName"_s));
	$assignStatic(ResponderId$Type::BY_KEY, $new(ResponderId$Type, "BY_KEY"_s, 1, 2, "byKey"_s));
	$assignStatic(ResponderId$Type::$VALUES, ResponderId$Type::$values());
}

ResponderId$Type::ResponderId$Type() {
}

$Class* ResponderId$Type::load$($String* name, bool initialize) {
	$loadClass(ResponderId$Type, name, initialize, &_ResponderId$Type_ClassInfo_, clinit$ResponderId$Type, allocate$ResponderId$Type);
	return class$;
}

$Class* ResponderId$Type::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun