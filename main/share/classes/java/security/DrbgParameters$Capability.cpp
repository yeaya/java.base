#include <java/security/DrbgParameters$Capability.h>

#include <java/lang/Enum.h>
#include <java/security/DrbgParameters.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef NONE
#undef PR_AND_RESEED
#undef RESEED_ONLY
#undef ROOT

using $DrbgParameters$CapabilityArray = $Array<::java::security::DrbgParameters$Capability>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace java {
	namespace security {

$FieldInfo _DrbgParameters$Capability_FieldInfo_[] = {
	{"PR_AND_RESEED", "Ljava/security/DrbgParameters$Capability;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DrbgParameters$Capability, PR_AND_RESEED)},
	{"RESEED_ONLY", "Ljava/security/DrbgParameters$Capability;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DrbgParameters$Capability, RESEED_ONLY)},
	{"NONE", "Ljava/security/DrbgParameters$Capability;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DrbgParameters$Capability, NONE)},
	{"$VALUES", "[Ljava/security/DrbgParameters$Capability;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DrbgParameters$Capability, $VALUES)},
	{}
};

$MethodInfo _DrbgParameters$Capability_MethodInfo_[] = {
	{"$values", "()[Ljava/security/DrbgParameters$Capability;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DrbgParameters$Capability, $values, $DrbgParameters$CapabilityArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(DrbgParameters$Capability, init$, void, $String*, int32_t)},
	{"supportsPredictionResistance", "()Z", nullptr, $PUBLIC, $method(DrbgParameters$Capability, supportsPredictionResistance, bool)},
	{"supportsReseeding", "()Z", nullptr, $PUBLIC, $method(DrbgParameters$Capability, supportsReseeding, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DrbgParameters$Capability, toString, $String*)},
	{"valueOf", "(Ljava/lang/String;)Ljava/security/DrbgParameters$Capability;", nullptr, $PUBLIC | $STATIC, $staticMethod(DrbgParameters$Capability, valueOf, DrbgParameters$Capability*, $String*)},
	{"values", "()[Ljava/security/DrbgParameters$Capability;", nullptr, $PUBLIC | $STATIC, $staticMethod(DrbgParameters$Capability, values, $DrbgParameters$CapabilityArray*)},
	{}
};

$InnerClassInfo _DrbgParameters$Capability_InnerClassesInfo_[] = {
	{"java.security.DrbgParameters$Capability", "java.security.DrbgParameters", "Capability", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DrbgParameters$Capability_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.security.DrbgParameters$Capability",
	"java.lang.Enum",
	nullptr,
	_DrbgParameters$Capability_FieldInfo_,
	_DrbgParameters$Capability_MethodInfo_,
	"Ljava/lang/Enum<Ljava/security/DrbgParameters$Capability;>;",
	nullptr,
	_DrbgParameters$Capability_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.DrbgParameters"
};

$Object* allocate$DrbgParameters$Capability($Class* clazz) {
	return $of($alloc(DrbgParameters$Capability));
}

DrbgParameters$Capability* DrbgParameters$Capability::PR_AND_RESEED = nullptr;
DrbgParameters$Capability* DrbgParameters$Capability::RESEED_ONLY = nullptr;
DrbgParameters$Capability* DrbgParameters$Capability::NONE = nullptr;
$DrbgParameters$CapabilityArray* DrbgParameters$Capability::$VALUES = nullptr;

$DrbgParameters$CapabilityArray* DrbgParameters$Capability::$values() {
	$init(DrbgParameters$Capability);
	return $new($DrbgParameters$CapabilityArray, {
		DrbgParameters$Capability::PR_AND_RESEED,
		DrbgParameters$Capability::RESEED_ONLY,
		DrbgParameters$Capability::NONE
	});
}

$DrbgParameters$CapabilityArray* DrbgParameters$Capability::values() {
	$init(DrbgParameters$Capability);
	return $cast($DrbgParameters$CapabilityArray, DrbgParameters$Capability::$VALUES->clone());
}

DrbgParameters$Capability* DrbgParameters$Capability::valueOf($String* name) {
	$init(DrbgParameters$Capability);
	return $cast(DrbgParameters$Capability, $Enum::valueOf(DrbgParameters$Capability::class$, name));
}

void DrbgParameters$Capability::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

$String* DrbgParameters$Capability::toString() {
	$init($Locale);
	return $nc($(name()))->toLowerCase($Locale::ROOT);
}

bool DrbgParameters$Capability::supportsReseeding() {
	return this != DrbgParameters$Capability::NONE;
}

bool DrbgParameters$Capability::supportsPredictionResistance() {
	return this == DrbgParameters$Capability::PR_AND_RESEED;
}

void clinit$DrbgParameters$Capability($Class* class$) {
	$assignStatic(DrbgParameters$Capability::PR_AND_RESEED, $new(DrbgParameters$Capability, "PR_AND_RESEED"_s, 0));
	$assignStatic(DrbgParameters$Capability::RESEED_ONLY, $new(DrbgParameters$Capability, "RESEED_ONLY"_s, 1));
	$assignStatic(DrbgParameters$Capability::NONE, $new(DrbgParameters$Capability, "NONE"_s, 2));
	$assignStatic(DrbgParameters$Capability::$VALUES, DrbgParameters$Capability::$values());
}

DrbgParameters$Capability::DrbgParameters$Capability() {
}

$Class* DrbgParameters$Capability::load$($String* name, bool initialize) {
	$loadClass(DrbgParameters$Capability, name, initialize, &_DrbgParameters$Capability_ClassInfo_, clinit$DrbgParameters$Capability, allocate$DrbgParameters$Capability);
	return class$;
}

$Class* DrbgParameters$Capability::class$ = nullptr;

	} // security
} // java