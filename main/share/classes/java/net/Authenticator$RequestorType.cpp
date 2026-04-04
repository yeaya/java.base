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

namespace java {
	namespace net {

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

void Authenticator$RequestorType::clinit$($Class* clazz) {
	$assignStatic(Authenticator$RequestorType::PROXY, $new(Authenticator$RequestorType, "PROXY"_s, 0));
	$assignStatic(Authenticator$RequestorType::SERVER, $new(Authenticator$RequestorType, "SERVER"_s, 1));
	$assignStatic(Authenticator$RequestorType::$VALUES, Authenticator$RequestorType::$values());
}

Authenticator$RequestorType::Authenticator$RequestorType() {
}

$Class* Authenticator$RequestorType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PROXY", "Ljava/net/Authenticator$RequestorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Authenticator$RequestorType, PROXY)},
		{"SERVER", "Ljava/net/Authenticator$RequestorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Authenticator$RequestorType, SERVER)},
		{"$VALUES", "[Ljava/net/Authenticator$RequestorType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Authenticator$RequestorType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/net/Authenticator$RequestorType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Authenticator$RequestorType, $values, $Authenticator$RequestorTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Authenticator$RequestorType, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/net/Authenticator$RequestorType;", nullptr, $PUBLIC | $STATIC, $staticMethod(Authenticator$RequestorType, valueOf, Authenticator$RequestorType*, $String*)},
		{"values", "()[Ljava/net/Authenticator$RequestorType;", nullptr, $PUBLIC | $STATIC, $staticMethod(Authenticator$RequestorType, values, $Authenticator$RequestorTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.Authenticator$RequestorType", "java.net.Authenticator", "RequestorType", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.net.Authenticator$RequestorType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/net/Authenticator$RequestorType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.Authenticator"
	};
	$loadClass(Authenticator$RequestorType, name, initialize, &classInfo$$, Authenticator$RequestorType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Authenticator$RequestorType));
	});
	return class$;
}

$Class* Authenticator$RequestorType::class$ = nullptr;

	} // net
} // java