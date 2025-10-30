#include <java/net/Authenticator$RequestorType.h>

#include <java/lang/Enum.h>
#include <java/net/Authenticator.h>
#include <jcpp.h>

#undef PROXY
#undef SERVER

using $Authenticator$RequestorTypeArray = $Array<::java::net::Authenticator$RequestorType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;

namespace java {
	namespace net {

$FieldInfo _Authenticator$RequestorType_FieldInfo_[] = {
	{"PROXY", "Ljava/net/Authenticator$RequestorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Authenticator$RequestorType, PROXY)},
	{"SERVER", "Ljava/net/Authenticator$RequestorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Authenticator$RequestorType, SERVER)},
	{"$VALUES", "[Ljava/net/Authenticator$RequestorType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Authenticator$RequestorType, $VALUES)},
	{}
};

$MethodInfo _Authenticator$RequestorType_MethodInfo_[] = {
	{"$values", "()[Ljava/net/Authenticator$RequestorType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Authenticator$RequestorTypeArray*(*)()>(&Authenticator$RequestorType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Authenticator$RequestorType::*)($String*,int32_t)>(&Authenticator$RequestorType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/net/Authenticator$RequestorType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Authenticator$RequestorType*(*)($String*)>(&Authenticator$RequestorType::valueOf))},
	{"values", "()[Ljava/net/Authenticator$RequestorType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Authenticator$RequestorTypeArray*(*)()>(&Authenticator$RequestorType::values))},
	{}
};

$InnerClassInfo _Authenticator$RequestorType_InnerClassesInfo_[] = {
	{"java.net.Authenticator$RequestorType", "java.net.Authenticator", "RequestorType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Authenticator$RequestorType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.net.Authenticator$RequestorType",
	"java.lang.Enum",
	nullptr,
	_Authenticator$RequestorType_FieldInfo_,
	_Authenticator$RequestorType_MethodInfo_,
	"Ljava/lang/Enum<Ljava/net/Authenticator$RequestorType;>;",
	nullptr,
	_Authenticator$RequestorType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.Authenticator"
};

$Object* allocate$Authenticator$RequestorType($Class* clazz) {
	return $of($alloc(Authenticator$RequestorType));
}

Authenticator$RequestorType* Authenticator$RequestorType::PROXY = nullptr;
Authenticator$RequestorType* Authenticator$RequestorType::SERVER = nullptr;
$Authenticator$RequestorTypeArray* Authenticator$RequestorType::$VALUES = nullptr;

$Authenticator$RequestorTypeArray* Authenticator$RequestorType::$values() {
	$init(Authenticator$RequestorType);
	return $new($Authenticator$RequestorTypeArray, {
		Authenticator$RequestorType::PROXY,
		Authenticator$RequestorType::SERVER
	});
}

$Authenticator$RequestorTypeArray* Authenticator$RequestorType::values() {
	$init(Authenticator$RequestorType);
	return $cast($Authenticator$RequestorTypeArray, Authenticator$RequestorType::$VALUES->clone());
}

Authenticator$RequestorType* Authenticator$RequestorType::valueOf($String* name) {
	$init(Authenticator$RequestorType);
	return $cast(Authenticator$RequestorType, $Enum::valueOf(Authenticator$RequestorType::class$, name));
}

void Authenticator$RequestorType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Authenticator$RequestorType($Class* class$) {
	$assignStatic(Authenticator$RequestorType::PROXY, $new(Authenticator$RequestorType, "PROXY"_s, 0));
	$assignStatic(Authenticator$RequestorType::SERVER, $new(Authenticator$RequestorType, "SERVER"_s, 1));
	$assignStatic(Authenticator$RequestorType::$VALUES, Authenticator$RequestorType::$values());
}

Authenticator$RequestorType::Authenticator$RequestorType() {
}

$Class* Authenticator$RequestorType::load$($String* name, bool initialize) {
	$loadClass(Authenticator$RequestorType, name, initialize, &_Authenticator$RequestorType_ClassInfo_, clinit$Authenticator$RequestorType, allocate$Authenticator$RequestorType);
	return class$;
}

$Class* Authenticator$RequestorType::class$ = nullptr;

	} // net
} // java