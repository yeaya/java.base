#include <sun/security/provider/NativePRNG$Variant.h>

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
#include <sun/security/provider/NativePRNG.h>
#include <jcpp.h>

#undef MIXED
#undef NONBLOCKING
#undef BLOCKING

using $NativePRNG$VariantArray = $Array<::sun::security::provider::NativePRNG$Variant>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NativePRNG = ::sun::security::provider::NativePRNG;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _NativePRNG$Variant_FieldInfo_[] = {
	{"MIXED", "Lsun/security/provider/NativePRNG$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NativePRNG$Variant, MIXED)},
	{"BLOCKING", "Lsun/security/provider/NativePRNG$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NativePRNG$Variant, BLOCKING)},
	{"NONBLOCKING", "Lsun/security/provider/NativePRNG$Variant;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NativePRNG$Variant, NONBLOCKING)},
	{"$VALUES", "[Lsun/security/provider/NativePRNG$Variant;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(NativePRNG$Variant, $VALUES)},
	{}
};

$MethodInfo _NativePRNG$Variant_MethodInfo_[] = {
	{"$values", "()[Lsun/security/provider/NativePRNG$Variant;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$NativePRNG$VariantArray*(*)()>(&NativePRNG$Variant::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(NativePRNG$Variant::*)($String*,int32_t)>(&NativePRNG$Variant::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/provider/NativePRNG$Variant;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NativePRNG$Variant*(*)($String*)>(&NativePRNG$Variant::valueOf))},
	{"values", "()[Lsun/security/provider/NativePRNG$Variant;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$NativePRNG$VariantArray*(*)()>(&NativePRNG$Variant::values))},
	{}
};

$InnerClassInfo _NativePRNG$Variant_InnerClassesInfo_[] = {
	{"sun.security.provider.NativePRNG$Variant", "sun.security.provider.NativePRNG", "Variant", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _NativePRNG$Variant_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.provider.NativePRNG$Variant",
	"java.lang.Enum",
	nullptr,
	_NativePRNG$Variant_FieldInfo_,
	_NativePRNG$Variant_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/provider/NativePRNG$Variant;>;",
	nullptr,
	_NativePRNG$Variant_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.NativePRNG"
};

$Object* allocate$NativePRNG$Variant($Class* clazz) {
	return $of($alloc(NativePRNG$Variant));
}

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

void clinit$NativePRNG$Variant($Class* class$) {
	$assignStatic(NativePRNG$Variant::MIXED, $new(NativePRNG$Variant, "MIXED"_s, 0));
	$assignStatic(NativePRNG$Variant::BLOCKING, $new(NativePRNG$Variant, "BLOCKING"_s, 1));
	$assignStatic(NativePRNG$Variant::NONBLOCKING, $new(NativePRNG$Variant, "NONBLOCKING"_s, 2));
	$assignStatic(NativePRNG$Variant::$VALUES, NativePRNG$Variant::$values());
}

NativePRNG$Variant::NativePRNG$Variant() {
}

$Class* NativePRNG$Variant::load$($String* name, bool initialize) {
	$loadClass(NativePRNG$Variant, name, initialize, &_NativePRNG$Variant_ClassInfo_, clinit$NativePRNG$Variant, allocate$NativePRNG$Variant);
	return class$;
}

$Class* NativePRNG$Variant::class$ = nullptr;

		} // provider
	} // security
} // sun