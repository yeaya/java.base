#include <sun/security/provider/NativePRNG$Variant.h>
#include <java/lang/Enum.h>
#include <sun/security/provider/NativePRNG.h>
#include <jcpp.h>

#undef BLOCKING
#undef MIXED
#undef NONBLOCKING

using $NativePRNG$VariantArray = $Array<::sun::security::provider::NativePRNG$Variant>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

NativePRNG$Variant* NativePRNG$Variant::MIXED = nullptr;
NativePRNG$Variant* NativePRNG$Variant::BLOCKING = nullptr;
NativePRNG$Variant* NativePRNG$Variant::NONBLOCKING = nullptr;
$NativePRNG$VariantArray* NativePRNG$Variant::$VALUES = nullptr;

$NativePRNG$VariantArray* NativePRNG$Variant::$values() {
	$init(NativePRNG$Variant);
	return $new($NativePRNG$VariantArray, {
		NativePRNG$Variant::MIXED,
		NativePRNG$Variant::BLOCKING,
		NativePRNG$Variant::NONBLOCKING
	});
}

$NativePRNG$VariantArray* NativePRNG$Variant::values() {
	$init(NativePRNG$Variant);
	return $cast($NativePRNG$VariantArray, NativePRNG$Variant::$VALUES->clone());
}

NativePRNG$Variant* NativePRNG$Variant::valueOf($String* name) {
	$init(NativePRNG$Variant);
	return $cast(NativePRNG$Variant, $Enum::valueOf(NativePRNG$Variant::class$, name));
}

void NativePRNG$Variant::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void NativePRNG$Variant::clinit$($Class* clazz) {
	$assignStatic(NativePRNG$Variant::MIXED, $new(NativePRNG$Variant, "MIXED"_s, 0));
	$assignStatic(NativePRNG$Variant::BLOCKING, $new(NativePRNG$Variant, "BLOCKING"_s, 1));
	$assignStatic(NativePRNG$Variant::NONBLOCKING, $new(NativePRNG$Variant, "NONBLOCKING"_s, 2));
	$assignStatic(NativePRNG$Variant::$VALUES, NativePRNG$Variant::$values());
}

NativePRNG$Variant::NativePRNG$Variant() {
}

$Class* NativePRNG$Variant::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MIXED", "Lsun/security/provider/NativePRNG$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NativePRNG$Variant, MIXED)},
		{"BLOCKING", "Lsun/security/provider/NativePRNG$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NativePRNG$Variant, BLOCKING)},
		{"NONBLOCKING", "Lsun/security/provider/NativePRNG$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NativePRNG$Variant, NONBLOCKING)},
		{"$VALUES", "[Lsun/security/provider/NativePRNG$Variant;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(NativePRNG$Variant, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/security/provider/NativePRNG$Variant;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(NativePRNG$Variant, $values, $NativePRNG$VariantArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(NativePRNG$Variant, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/security/provider/NativePRNG$Variant;", nullptr, $PUBLIC | $STATIC, $staticMethod(NativePRNG$Variant, valueOf, NativePRNG$Variant*, $String*)},
		{"values", "()[Lsun/security/provider/NativePRNG$Variant;", nullptr, $PUBLIC | $STATIC, $staticMethod(NativePRNG$Variant, values, $NativePRNG$VariantArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.NativePRNG$Variant", "sun.security.provider.NativePRNG", "Variant", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.security.provider.NativePRNG$Variant",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/security/provider/NativePRNG$Variant;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.NativePRNG"
	};
	$loadClass(NativePRNG$Variant, name, initialize, &classInfo$$, NativePRNG$Variant::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(NativePRNG$Variant));
	});
	return class$;
}

$Class* NativePRNG$Variant::class$ = nullptr;

		} // provider
	} // security
} // sun