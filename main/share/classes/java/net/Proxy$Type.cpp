#include <java/net/Proxy$Type.h>

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
#include <java/net/Proxy.h>
#include <jcpp.h>

#undef SOCKS
#undef HTTP
#undef DIRECT

using $Proxy$TypeArray = $Array<::java::net::Proxy$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::net::Proxy;

namespace java {
	namespace net {

$FieldInfo _Proxy$Type_FieldInfo_[] = {
	{"DIRECT", "Ljava/net/Proxy$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Proxy$Type, DIRECT)},
	{"HTTP", "Ljava/net/Proxy$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Proxy$Type, HTTP)},
	{"SOCKS", "Ljava/net/Proxy$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Proxy$Type, SOCKS)},
	{"$VALUES", "[Ljava/net/Proxy$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Proxy$Type, $VALUES)},
	{}
};

$MethodInfo _Proxy$Type_MethodInfo_[] = {
	{"$values", "()[Ljava/net/Proxy$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Proxy$TypeArray*(*)()>(&Proxy$Type::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Proxy$Type::*)($String*,int32_t)>(&Proxy$Type::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/net/Proxy$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Proxy$Type*(*)($String*)>(&Proxy$Type::valueOf))},
	{"values", "()[Ljava/net/Proxy$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Proxy$TypeArray*(*)()>(&Proxy$Type::values))},
	{}
};

$InnerClassInfo _Proxy$Type_InnerClassesInfo_[] = {
	{"java.net.Proxy$Type", "java.net.Proxy", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Proxy$Type_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.net.Proxy$Type",
	"java.lang.Enum",
	nullptr,
	_Proxy$Type_FieldInfo_,
	_Proxy$Type_MethodInfo_,
	"Ljava/lang/Enum<Ljava/net/Proxy$Type;>;",
	nullptr,
	_Proxy$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.Proxy"
};

$Object* allocate$Proxy$Type($Class* clazz) {
	return $of($alloc(Proxy$Type));
}


Proxy$Type* Proxy$Type::DIRECT = nullptr;

Proxy$Type* Proxy$Type::HTTP = nullptr;

Proxy$Type* Proxy$Type::SOCKS = nullptr;
$Proxy$TypeArray* Proxy$Type::$VALUES = nullptr;

$Proxy$TypeArray* Proxy$Type::$values() {
	$init(Proxy$Type);
	return $new($Proxy$TypeArray, {
		Proxy$Type::DIRECT,
		Proxy$Type::HTTP,
		Proxy$Type::SOCKS
	});
}

$Proxy$TypeArray* Proxy$Type::values() {
	$init(Proxy$Type);
	return $cast($Proxy$TypeArray, Proxy$Type::$VALUES->clone());
}

Proxy$Type* Proxy$Type::valueOf($String* name) {
	$init(Proxy$Type);
	return $cast(Proxy$Type, $Enum::valueOf(Proxy$Type::class$, name));
}

void Proxy$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Proxy$Type($Class* class$) {
	$assignStatic(Proxy$Type::DIRECT, $new(Proxy$Type, "DIRECT"_s, 0));
	$assignStatic(Proxy$Type::HTTP, $new(Proxy$Type, "HTTP"_s, 1));
	$assignStatic(Proxy$Type::SOCKS, $new(Proxy$Type, "SOCKS"_s, 2));
	$assignStatic(Proxy$Type::$VALUES, Proxy$Type::$values());
}

Proxy$Type::Proxy$Type() {
}

$Class* Proxy$Type::load$($String* name, bool initialize) {
	$loadClass(Proxy$Type, name, initialize, &_Proxy$Type_ClassInfo_, clinit$Proxy$Type, allocate$Proxy$Type);
	return class$;
}

$Class* Proxy$Type::class$ = nullptr;

	} // net
} // java