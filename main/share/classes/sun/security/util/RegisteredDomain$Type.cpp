#include <sun/security/util/RegisteredDomain$Type.h>

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
#include <sun/security/util/RegisteredDomain.h>
#include <jcpp.h>

#undef ICANN
#undef PRIVATE

using $RegisteredDomain$TypeArray = $Array<::sun::security::util::RegisteredDomain$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RegisteredDomain = ::sun::security::util::RegisteredDomain;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _RegisteredDomain$Type_FieldInfo_[] = {
	{"ICANN", "Lsun/security/util/RegisteredDomain$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RegisteredDomain$Type, ICANN)},
	{"PRIVATE", "Lsun/security/util/RegisteredDomain$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RegisteredDomain$Type, PRIVATE)},
	{"$VALUES", "[Lsun/security/util/RegisteredDomain$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RegisteredDomain$Type, $VALUES)},
	{}
};

$MethodInfo _RegisteredDomain$Type_MethodInfo_[] = {
	{"$values", "()[Lsun/security/util/RegisteredDomain$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$RegisteredDomain$TypeArray*(*)()>(&RegisteredDomain$Type::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(RegisteredDomain$Type::*)($String*,int32_t)>(&RegisteredDomain$Type::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/util/RegisteredDomain$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RegisteredDomain$Type*(*)($String*)>(&RegisteredDomain$Type::valueOf))},
	{"values", "()[Lsun/security/util/RegisteredDomain$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$RegisteredDomain$TypeArray*(*)()>(&RegisteredDomain$Type::values))},
	{}
};

$InnerClassInfo _RegisteredDomain$Type_InnerClassesInfo_[] = {
	{"sun.security.util.RegisteredDomain$Type", "sun.security.util.RegisteredDomain", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _RegisteredDomain$Type_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.RegisteredDomain$Type",
	"java.lang.Enum",
	nullptr,
	_RegisteredDomain$Type_FieldInfo_,
	_RegisteredDomain$Type_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/util/RegisteredDomain$Type;>;",
	nullptr,
	_RegisteredDomain$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.RegisteredDomain"
};

$Object* allocate$RegisteredDomain$Type($Class* clazz) {
	return $of($alloc(RegisteredDomain$Type));
}


RegisteredDomain$Type* RegisteredDomain$Type::ICANN = nullptr;

RegisteredDomain$Type* RegisteredDomain$Type::PRIVATE = nullptr;
$RegisteredDomain$TypeArray* RegisteredDomain$Type::$VALUES = nullptr;

$RegisteredDomain$TypeArray* RegisteredDomain$Type::$values() {
	$init(RegisteredDomain$Type);
	return $new($RegisteredDomain$TypeArray, {
		RegisteredDomain$Type::ICANN,
		RegisteredDomain$Type::PRIVATE
	});
}

$RegisteredDomain$TypeArray* RegisteredDomain$Type::values() {
	$init(RegisteredDomain$Type);
	return $cast($RegisteredDomain$TypeArray, RegisteredDomain$Type::$VALUES->clone());
}

RegisteredDomain$Type* RegisteredDomain$Type::valueOf($String* name) {
	$init(RegisteredDomain$Type);
	return $cast(RegisteredDomain$Type, $Enum::valueOf(RegisteredDomain$Type::class$, name));
}

void RegisteredDomain$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$RegisteredDomain$Type($Class* class$) {
	$assignStatic(RegisteredDomain$Type::ICANN, $new(RegisteredDomain$Type, "ICANN"_s, 0));
	$assignStatic(RegisteredDomain$Type::PRIVATE, $new(RegisteredDomain$Type, "PRIVATE"_s, 1));
	$assignStatic(RegisteredDomain$Type::$VALUES, RegisteredDomain$Type::$values());
}

RegisteredDomain$Type::RegisteredDomain$Type() {
}

$Class* RegisteredDomain$Type::load$($String* name, bool initialize) {
	$loadClass(RegisteredDomain$Type, name, initialize, &_RegisteredDomain$Type_ClassInfo_, clinit$RegisteredDomain$Type, allocate$RegisteredDomain$Type);
	return class$;
}

$Class* RegisteredDomain$Type::class$ = nullptr;

		} // util
	} // security
} // sun