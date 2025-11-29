#include <sun/security/util/DomainName$Rule$Type.h>

#include <java/lang/Enum.h>
#include <sun/security/util/DomainName$Rule.h>
#include <sun/security/util/DomainName.h>
#include <jcpp.h>

#undef EXCEPTION
#undef NORMAL
#undef OTHER
#undef WILDCARD

using $DomainName$Rule$TypeArray = $Array<::sun::security::util::DomainName$Rule$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DomainName$Rule$Type_FieldInfo_[] = {
	{"EXCEPTION", "Lsun/security/util/DomainName$Rule$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DomainName$Rule$Type, EXCEPTION)},
	{"NORMAL", "Lsun/security/util/DomainName$Rule$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DomainName$Rule$Type, NORMAL)},
	{"OTHER", "Lsun/security/util/DomainName$Rule$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DomainName$Rule$Type, OTHER)},
	{"WILDCARD", "Lsun/security/util/DomainName$Rule$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DomainName$Rule$Type, WILDCARD)},
	{"$VALUES", "[Lsun/security/util/DomainName$Rule$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DomainName$Rule$Type, $VALUES)},
	{}
};

$MethodInfo _DomainName$Rule$Type_MethodInfo_[] = {
	{"$values", "()[Lsun/security/util/DomainName$Rule$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DomainName$Rule$TypeArray*(*)()>(&DomainName$Rule$Type::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DomainName$Rule$Type::*)($String*,int32_t)>(&DomainName$Rule$Type::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/util/DomainName$Rule$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DomainName$Rule$Type*(*)($String*)>(&DomainName$Rule$Type::valueOf))},
	{"values", "()[Lsun/security/util/DomainName$Rule$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DomainName$Rule$TypeArray*(*)()>(&DomainName$Rule$Type::values))},
	{}
};

$InnerClassInfo _DomainName$Rule$Type_InnerClassesInfo_[] = {
	{"sun.security.util.DomainName$Rule", "sun.security.util.DomainName", "Rule", $PRIVATE | $STATIC},
	{"sun.security.util.DomainName$Rule$Type", "sun.security.util.DomainName$Rule", "Type", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DomainName$Rule$Type_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.DomainName$Rule$Type",
	"java.lang.Enum",
	nullptr,
	_DomainName$Rule$Type_FieldInfo_,
	_DomainName$Rule$Type_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/util/DomainName$Rule$Type;>;",
	nullptr,
	_DomainName$Rule$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DomainName"
};

$Object* allocate$DomainName$Rule$Type($Class* clazz) {
	return $of($alloc(DomainName$Rule$Type));
}

DomainName$Rule$Type* DomainName$Rule$Type::EXCEPTION = nullptr;
DomainName$Rule$Type* DomainName$Rule$Type::NORMAL = nullptr;
DomainName$Rule$Type* DomainName$Rule$Type::OTHER = nullptr;
DomainName$Rule$Type* DomainName$Rule$Type::WILDCARD = nullptr;
$DomainName$Rule$TypeArray* DomainName$Rule$Type::$VALUES = nullptr;

$DomainName$Rule$TypeArray* DomainName$Rule$Type::$values() {
	$init(DomainName$Rule$Type);
	return $new($DomainName$Rule$TypeArray, {
		DomainName$Rule$Type::EXCEPTION,
		DomainName$Rule$Type::NORMAL,
		DomainName$Rule$Type::OTHER,
		DomainName$Rule$Type::WILDCARD
	});
}

$DomainName$Rule$TypeArray* DomainName$Rule$Type::values() {
	$init(DomainName$Rule$Type);
	return $cast($DomainName$Rule$TypeArray, DomainName$Rule$Type::$VALUES->clone());
}

DomainName$Rule$Type* DomainName$Rule$Type::valueOf($String* name) {
	$init(DomainName$Rule$Type);
	return $cast(DomainName$Rule$Type, $Enum::valueOf(DomainName$Rule$Type::class$, name));
}

void DomainName$Rule$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$DomainName$Rule$Type($Class* class$) {
	$assignStatic(DomainName$Rule$Type::EXCEPTION, $new(DomainName$Rule$Type, "EXCEPTION"_s, 0));
	$assignStatic(DomainName$Rule$Type::NORMAL, $new(DomainName$Rule$Type, "NORMAL"_s, 1));
	$assignStatic(DomainName$Rule$Type::OTHER, $new(DomainName$Rule$Type, "OTHER"_s, 2));
	$assignStatic(DomainName$Rule$Type::WILDCARD, $new(DomainName$Rule$Type, "WILDCARD"_s, 3));
	$assignStatic(DomainName$Rule$Type::$VALUES, DomainName$Rule$Type::$values());
}

DomainName$Rule$Type::DomainName$Rule$Type() {
}

$Class* DomainName$Rule$Type::load$($String* name, bool initialize) {
	$loadClass(DomainName$Rule$Type, name, initialize, &_DomainName$Rule$Type_ClassInfo_, clinit$DomainName$Rule$Type, allocate$DomainName$Rule$Type);
	return class$;
}

$Class* DomainName$Rule$Type::class$ = nullptr;

		} // util
	} // security
} // sun