#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode.h>
#include <java/lang/Enum.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension.h>
#include <jcpp.h>

#undef PSK_DHE_KE
#undef PSK_KE

using $PskKeyExchangeModesExtension$PskKeyExchangeModeArray = $Array<::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

PskKeyExchangeModesExtension$PskKeyExchangeMode* PskKeyExchangeModesExtension$PskKeyExchangeMode::PSK_KE = nullptr;
PskKeyExchangeModesExtension$PskKeyExchangeMode* PskKeyExchangeModesExtension$PskKeyExchangeMode::PSK_DHE_KE = nullptr;
$PskKeyExchangeModesExtension$PskKeyExchangeModeArray* PskKeyExchangeModesExtension$PskKeyExchangeMode::$VALUES = nullptr;

$PskKeyExchangeModesExtension$PskKeyExchangeModeArray* PskKeyExchangeModesExtension$PskKeyExchangeMode::$values() {
	$init(PskKeyExchangeModesExtension$PskKeyExchangeMode);
	return $new($PskKeyExchangeModesExtension$PskKeyExchangeModeArray, {
		PskKeyExchangeModesExtension$PskKeyExchangeMode::PSK_KE,
		PskKeyExchangeModesExtension$PskKeyExchangeMode::PSK_DHE_KE
	});
}

$PskKeyExchangeModesExtension$PskKeyExchangeModeArray* PskKeyExchangeModesExtension$PskKeyExchangeMode::values() {
	$init(PskKeyExchangeModesExtension$PskKeyExchangeMode);
	return $cast($PskKeyExchangeModesExtension$PskKeyExchangeModeArray, PskKeyExchangeModesExtension$PskKeyExchangeMode::$VALUES->clone());
}

PskKeyExchangeModesExtension$PskKeyExchangeMode* PskKeyExchangeModesExtension$PskKeyExchangeMode::valueOf($String* name) {
	$init(PskKeyExchangeModesExtension$PskKeyExchangeMode);
	return $cast(PskKeyExchangeModesExtension$PskKeyExchangeMode, $Enum::valueOf(PskKeyExchangeModesExtension$PskKeyExchangeMode::class$, name));
}

void PskKeyExchangeModesExtension$PskKeyExchangeMode::init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	$set(this, name$, name);
}

PskKeyExchangeModesExtension$PskKeyExchangeMode* PskKeyExchangeModesExtension$PskKeyExchangeMode::valueOf(int8_t id) {
	$init(PskKeyExchangeModesExtension$PskKeyExchangeMode);
	$var($PskKeyExchangeModesExtension$PskKeyExchangeModeArray, arr$, values());
	for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
		PskKeyExchangeModesExtension$PskKeyExchangeMode* pkem = arr$->get(i$);
		if ($nc(pkem)->id == id) {
			return pkem;
		}
	}
	return nullptr;
}

$String* PskKeyExchangeModesExtension$PskKeyExchangeMode::nameOf(int8_t id) {
	$init(PskKeyExchangeModesExtension$PskKeyExchangeMode);
	$useLocalObjectStack();
	{
		$var($PskKeyExchangeModesExtension$PskKeyExchangeModeArray, arr$, PskKeyExchangeModesExtension$PskKeyExchangeMode::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			PskKeyExchangeModesExtension$PskKeyExchangeMode* pkem = arr$->get(i$);
			if ($nc(pkem)->id == id) {
				return pkem->name$;
			}
		}
	}
	return $str({"<UNKNOWN PskKeyExchangeMode TYPE: "_s, $$str((id & 0xff)), ">"_s});
}

void PskKeyExchangeModesExtension$PskKeyExchangeMode::clinit$($Class* clazz) {
	$assignStatic(PskKeyExchangeModesExtension$PskKeyExchangeMode::PSK_KE, $new(PskKeyExchangeModesExtension$PskKeyExchangeMode, "PSK_KE"_s, 0, (int8_t)0, "psk_ke"_s));
	$assignStatic(PskKeyExchangeModesExtension$PskKeyExchangeMode::PSK_DHE_KE, $new(PskKeyExchangeModesExtension$PskKeyExchangeMode, "PSK_DHE_KE"_s, 1, (int8_t)1, "psk_dhe_ke"_s));
	$assignStatic(PskKeyExchangeModesExtension$PskKeyExchangeMode::$VALUES, PskKeyExchangeModesExtension$PskKeyExchangeMode::$values());
}

PskKeyExchangeModesExtension$PskKeyExchangeMode::PskKeyExchangeModesExtension$PskKeyExchangeMode() {
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeMode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PSK_KE", "Lsun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PskKeyExchangeModesExtension$PskKeyExchangeMode, PSK_KE)},
		{"PSK_DHE_KE", "Lsun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PskKeyExchangeModesExtension$PskKeyExchangeMode, PSK_DHE_KE)},
		{"$VALUES", "[Lsun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(PskKeyExchangeModesExtension$PskKeyExchangeMode, $VALUES)},
		{"id", "B", nullptr, $FINAL, $field(PskKeyExchangeModesExtension$PskKeyExchangeMode, id)},
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(PskKeyExchangeModesExtension$PskKeyExchangeMode, name$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PskKeyExchangeModesExtension$PskKeyExchangeMode, $values, $PskKeyExchangeModesExtension$PskKeyExchangeModeArray*)},
		{"<init>", "(Ljava/lang/String;IBLjava/lang/String;)V", "(BLjava/lang/String;)V", $PRIVATE, $method(PskKeyExchangeModesExtension$PskKeyExchangeMode, init$, void, $String*, int32_t, int8_t, $String*)},
		{"nameOf", "(B)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(PskKeyExchangeModesExtension$PskKeyExchangeMode, nameOf, $String*, int8_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(PskKeyExchangeModesExtension$PskKeyExchangeMode, valueOf, PskKeyExchangeModesExtension$PskKeyExchangeMode*, $String*)},
		{"valueOf", "(B)Lsun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode;", nullptr, $STATIC, $staticMethod(PskKeyExchangeModesExtension$PskKeyExchangeMode, valueOf, PskKeyExchangeModesExtension$PskKeyExchangeMode*, int8_t)},
		{"values", "()[Lsun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(PskKeyExchangeModesExtension$PskKeyExchangeMode, values, $PskKeyExchangeModesExtension$PskKeyExchangeModeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeMode", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeMode", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeMode",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.PskKeyExchangeModesExtension"
	};
	$loadClass(PskKeyExchangeModesExtension$PskKeyExchangeMode, name, initialize, &classInfo$$, PskKeyExchangeModesExtension$PskKeyExchangeMode::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(PskKeyExchangeModesExtension$PskKeyExchangeMode));
	});
	return class$;
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeMode::class$ = nullptr;

		} // ssl
	} // security
} // sun