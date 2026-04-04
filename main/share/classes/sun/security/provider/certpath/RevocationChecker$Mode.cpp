#include <sun/security/provider/certpath/RevocationChecker$Mode.h>
#include <java/lang/Enum.h>
#include <sun/security/provider/certpath/RevocationChecker.h>
#include <jcpp.h>

#undef ONLY_CRLS
#undef ONLY_OCSP
#undef PREFER_CRLS
#undef PREFER_OCSP

using $RevocationChecker$ModeArray = $Array<::sun::security::provider::certpath::RevocationChecker$Mode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

RevocationChecker$Mode* RevocationChecker$Mode::PREFER_OCSP = nullptr;
RevocationChecker$Mode* RevocationChecker$Mode::PREFER_CRLS = nullptr;
RevocationChecker$Mode* RevocationChecker$Mode::ONLY_CRLS = nullptr;
RevocationChecker$Mode* RevocationChecker$Mode::ONLY_OCSP = nullptr;
$RevocationChecker$ModeArray* RevocationChecker$Mode::$VALUES = nullptr;

$RevocationChecker$ModeArray* RevocationChecker$Mode::$values() {
	$init(RevocationChecker$Mode);
	return $new($RevocationChecker$ModeArray, {
		RevocationChecker$Mode::PREFER_OCSP,
		RevocationChecker$Mode::PREFER_CRLS,
		RevocationChecker$Mode::ONLY_CRLS,
		RevocationChecker$Mode::ONLY_OCSP
	});
}

$RevocationChecker$ModeArray* RevocationChecker$Mode::values() {
	$init(RevocationChecker$Mode);
	return $cast($RevocationChecker$ModeArray, RevocationChecker$Mode::$VALUES->clone());
}

RevocationChecker$Mode* RevocationChecker$Mode::valueOf($String* name) {
	$init(RevocationChecker$Mode);
	return $cast(RevocationChecker$Mode, $Enum::valueOf(RevocationChecker$Mode::class$, name));
}

void RevocationChecker$Mode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void RevocationChecker$Mode::clinit$($Class* clazz) {
	$assignStatic(RevocationChecker$Mode::PREFER_OCSP, $new(RevocationChecker$Mode, "PREFER_OCSP"_s, 0));
	$assignStatic(RevocationChecker$Mode::PREFER_CRLS, $new(RevocationChecker$Mode, "PREFER_CRLS"_s, 1));
	$assignStatic(RevocationChecker$Mode::ONLY_CRLS, $new(RevocationChecker$Mode, "ONLY_CRLS"_s, 2));
	$assignStatic(RevocationChecker$Mode::ONLY_OCSP, $new(RevocationChecker$Mode, "ONLY_OCSP"_s, 3));
	$assignStatic(RevocationChecker$Mode::$VALUES, RevocationChecker$Mode::$values());
}

RevocationChecker$Mode::RevocationChecker$Mode() {
}

$Class* RevocationChecker$Mode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PREFER_OCSP", "Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RevocationChecker$Mode, PREFER_OCSP)},
		{"PREFER_CRLS", "Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RevocationChecker$Mode, PREFER_CRLS)},
		{"ONLY_CRLS", "Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RevocationChecker$Mode, ONLY_CRLS)},
		{"ONLY_OCSP", "Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RevocationChecker$Mode, ONLY_OCSP)},
		{"$VALUES", "[Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RevocationChecker$Mode, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RevocationChecker$Mode, $values, $RevocationChecker$ModeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(RevocationChecker$Mode, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PUBLIC | $STATIC, $staticMethod(RevocationChecker$Mode, valueOf, RevocationChecker$Mode*, $String*)},
		{"values", "()[Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PUBLIC | $STATIC, $staticMethod(RevocationChecker$Mode, values, $RevocationChecker$ModeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.RevocationChecker$Mode", "sun.security.provider.certpath.RevocationChecker", "Mode", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.security.provider.certpath.RevocationChecker$Mode",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/security/provider/certpath/RevocationChecker$Mode;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.RevocationChecker"
	};
	$loadClass(RevocationChecker$Mode, name, initialize, &classInfo$$, RevocationChecker$Mode::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(RevocationChecker$Mode));
	});
	return class$;
}

$Class* RevocationChecker$Mode::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun