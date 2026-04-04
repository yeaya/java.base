#include <sun/security/provider/certpath/ResponderId$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/provider/certpath/ResponderId$Type.h>
#include <sun/security/provider/certpath/ResponderId.h>
#include <jcpp.h>

#undef BY_KEY
#undef BY_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ResponderId$Type = ::sun::security::provider::certpath::ResponderId$Type;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$ints* ResponderId$1::$SwitchMap$sun$security$provider$certpath$ResponderId$Type = nullptr;

void ResponderId$1::clinit$($Class* clazz) {
	$assignStatic(ResponderId$1::$SwitchMap$sun$security$provider$certpath$ResponderId$Type, $new($ints, $($ResponderId$Type::values())->length));
	{
		try {
			ResponderId$1::$SwitchMap$sun$security$provider$certpath$ResponderId$Type->set($ResponderId$Type::BY_NAME->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ResponderId$1::$SwitchMap$sun$security$provider$certpath$ResponderId$Type->set($ResponderId$Type::BY_KEY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ResponderId$1::ResponderId$1() {
}

$Class* ResponderId$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$provider$certpath$ResponderId$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ResponderId$1, $SwitchMap$sun$security$provider$certpath$ResponderId$Type)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.certpath.ResponderId",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.ResponderId$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.provider.certpath.ResponderId$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.ResponderId"
	};
	$loadClass(ResponderId$1, name, initialize, &classInfo$$, ResponderId$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResponderId$1);
	});
	return class$;
}

$Class* ResponderId$1::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun