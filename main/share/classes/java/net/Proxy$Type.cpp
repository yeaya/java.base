#include <java/net/Proxy$Type.h>
#include <java/lang/Enum.h>
#include <java/net/Proxy.h>
#include <jcpp.h>

#undef DIRECT
#undef HTTP
#undef SOCKS

using $Proxy$TypeArray = $Array<::java::net::Proxy$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

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

void Proxy$Type::clinit$($Class* clazz) {
	$assignStatic(Proxy$Type::DIRECT, $new(Proxy$Type, "DIRECT"_s, 0));
	$assignStatic(Proxy$Type::HTTP, $new(Proxy$Type, "HTTP"_s, 1));
	$assignStatic(Proxy$Type::SOCKS, $new(Proxy$Type, "SOCKS"_s, 2));
	$assignStatic(Proxy$Type::$VALUES, Proxy$Type::$values());
}

Proxy$Type::Proxy$Type() {
}

$Class* Proxy$Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DIRECT", "Ljava/net/Proxy$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Proxy$Type, DIRECT)},
		{"HTTP", "Ljava/net/Proxy$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Proxy$Type, HTTP)},
		{"SOCKS", "Ljava/net/Proxy$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Proxy$Type, SOCKS)},
		{"$VALUES", "[Ljava/net/Proxy$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Proxy$Type, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/net/Proxy$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Proxy$Type, $values, $Proxy$TypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Proxy$Type, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/net/Proxy$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Proxy$Type, valueOf, Proxy$Type*, $String*)},
		{"values", "()[Ljava/net/Proxy$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Proxy$Type, values, $Proxy$TypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.Proxy$Type", "java.net.Proxy", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.net.Proxy$Type",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/net/Proxy$Type;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.Proxy"
	};
	$loadClass(Proxy$Type, name, initialize, &classInfo$$, Proxy$Type::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Proxy$Type));
	});
	return class$;
}

$Class* Proxy$Type::class$ = nullptr;

	} // net
} // java