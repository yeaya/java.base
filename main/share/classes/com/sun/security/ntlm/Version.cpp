#include <com/sun/security/ntlm/Version.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NTLM
#undef NTLM2

using $VersionArray = $Array<::com::sun::security::ntlm::Version>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

Version* Version::NTLM = nullptr;
Version* Version::NTLM2 = nullptr;
Version* Version::NTLMv2 = nullptr;
$VersionArray* Version::$VALUES = nullptr;

$VersionArray* Version::$values() {
	$init(Version);
	return $new($VersionArray, {
		Version::NTLM,
		Version::NTLM2,
		Version::NTLMv2
	});
}

$VersionArray* Version::values() {
	$init(Version);
	return $cast($VersionArray, Version::$VALUES->clone());
}

Version* Version::valueOf($String* name) {
	$init(Version);
	return $cast(Version, $Enum::valueOf(Version::class$, name));
}

void Version::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Version::clinit$($Class* clazz) {
	$assignStatic(Version::NTLM, $new(Version, "NTLM"_s, 0));
	$assignStatic(Version::NTLM2, $new(Version, "NTLM2"_s, 1));
	$assignStatic(Version::NTLMv2, $new(Version, "NTLMv2"_s, 2));
	$assignStatic(Version::$VALUES, Version::$values());
}

Version::Version() {
}

$Class* Version::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NTLM", "Lcom/sun/security/ntlm/Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Version, NTLM)},
		{"NTLM2", "Lcom/sun/security/ntlm/Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Version, NTLM2)},
		{"NTLMv2", "Lcom/sun/security/ntlm/Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Version, NTLMv2)},
		{"$VALUES", "[Lcom/sun/security/ntlm/Version;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Version, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/security/ntlm/Version;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Version, $values, $VersionArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Version, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/security/ntlm/Version;", nullptr, $PUBLIC | $STATIC, $staticMethod(Version, valueOf, Version*, $String*)},
		{"values", "()[Lcom/sun/security/ntlm/Version;", nullptr, $PUBLIC | $STATIC, $staticMethod(Version, values, $VersionArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.security.ntlm.Version",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/security/ntlm/Version;>;"
	};
	$loadClass(Version, name, initialize, &classInfo$$, Version::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Version));
	});
	return class$;
}

$Class* Version::class$ = nullptr;

			} // ntlm
		} // security
	} // sun
} // com