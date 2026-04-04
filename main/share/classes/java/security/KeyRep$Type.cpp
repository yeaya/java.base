#include <java/security/KeyRep$Type.h>
#include <java/lang/Enum.h>
#include <java/security/KeyRep.h>
#include <jcpp.h>

#undef PRIVATE
#undef PUBLIC
#undef SECRET

using $KeyRep$TypeArray = $Array<::java::security::KeyRep$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

KeyRep$Type* KeyRep$Type::SECRET = nullptr;
KeyRep$Type* KeyRep$Type::PUBLIC = nullptr;
KeyRep$Type* KeyRep$Type::PRIVATE = nullptr;
$KeyRep$TypeArray* KeyRep$Type::$VALUES = nullptr;

$KeyRep$TypeArray* KeyRep$Type::$values() {
	$init(KeyRep$Type);
	return $new($KeyRep$TypeArray, {
		KeyRep$Type::SECRET,
		KeyRep$Type::PUBLIC,
		KeyRep$Type::PRIVATE
	});
}

$KeyRep$TypeArray* KeyRep$Type::values() {
	$init(KeyRep$Type);
	return $cast($KeyRep$TypeArray, KeyRep$Type::$VALUES->clone());
}

KeyRep$Type* KeyRep$Type::valueOf($String* name) {
	$init(KeyRep$Type);
	return $cast(KeyRep$Type, $Enum::valueOf(KeyRep$Type::class$, name));
}

void KeyRep$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void KeyRep$Type::clinit$($Class* clazz) {
	$assignStatic(KeyRep$Type::SECRET, $new(KeyRep$Type, "SECRET"_s, 0));
	$assignStatic(KeyRep$Type::PUBLIC, $new(KeyRep$Type, "PUBLIC"_s, 1));
	$assignStatic(KeyRep$Type::PRIVATE, $new(KeyRep$Type, "PRIVATE"_s, 2));
	$assignStatic(KeyRep$Type::$VALUES, KeyRep$Type::$values());
}

KeyRep$Type::KeyRep$Type() {
}

$Class* KeyRep$Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SECRET", "Ljava/security/KeyRep$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(KeyRep$Type, SECRET)},
		{"PUBLIC", "Ljava/security/KeyRep$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(KeyRep$Type, PUBLIC)},
		{"PRIVATE", "Ljava/security/KeyRep$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(KeyRep$Type, PRIVATE)},
		{"$VALUES", "[Ljava/security/KeyRep$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(KeyRep$Type, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/security/KeyRep$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(KeyRep$Type, $values, $KeyRep$TypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(KeyRep$Type, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/security/KeyRep$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(KeyRep$Type, valueOf, KeyRep$Type*, $String*)},
		{"values", "()[Ljava/security/KeyRep$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(KeyRep$Type, values, $KeyRep$TypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.KeyRep$Type", "java.security.KeyRep", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.security.KeyRep$Type",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/security/KeyRep$Type;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.KeyRep"
	};
	$loadClass(KeyRep$Type, name, initialize, &classInfo$$, KeyRep$Type::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(KeyRep$Type));
	});
	return class$;
}

$Class* KeyRep$Type::class$ = nullptr;

	} // security
} // java