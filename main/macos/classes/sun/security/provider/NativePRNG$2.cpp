#include <sun/security/provider/NativePRNG$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/provider/NativePRNG$Variant.h>
#include <sun/security/provider/NativePRNG.h>
#include <jcpp.h>

#undef BLOCKING
#undef MIXED
#undef NONBLOCKING

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $NativePRNG$Variant = ::sun::security::provider::NativePRNG$Variant;

namespace sun {
	namespace security {
		namespace provider {

$ints* NativePRNG$2::$SwitchMap$sun$security$provider$NativePRNG$Variant = nullptr;

void NativePRNG$2::clinit$($Class* clazz) {
	$assignStatic(NativePRNG$2::$SwitchMap$sun$security$provider$NativePRNG$Variant, $new($ints, $($NativePRNG$Variant::values())->length));
	{
		try {
			NativePRNG$2::$SwitchMap$sun$security$provider$NativePRNG$Variant->set($NativePRNG$Variant::MIXED->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			NativePRNG$2::$SwitchMap$sun$security$provider$NativePRNG$Variant->set($NativePRNG$Variant::BLOCKING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			NativePRNG$2::$SwitchMap$sun$security$provider$NativePRNG$Variant->set($NativePRNG$Variant::NONBLOCKING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

NativePRNG$2::NativePRNG$2() {
}

$Class* NativePRNG$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$provider$NativePRNG$Variant", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NativePRNG$2, $SwitchMap$sun$security$provider$NativePRNG$Variant)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.NativePRNG",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.NativePRNG$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.provider.NativePRNG$2",
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
		"sun.security.provider.NativePRNG"
	};
	$loadClass(NativePRNG$2, name, initialize, &classInfo$$, NativePRNG$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NativePRNG$2);
	});
	return class$;
}

$Class* NativePRNG$2::class$ = nullptr;

		} // provider
	} // security
} // sun