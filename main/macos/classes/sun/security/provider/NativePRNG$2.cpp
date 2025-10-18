#include <sun/security/provider/NativePRNG$2.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/provider/NativePRNG$Variant.h>
#include <sun/security/provider/NativePRNG.h>
#include <jcpp.h>

#undef BLOCKING
#undef MIXED
#undef NONBLOCKING

using $NativePRNG$VariantArray = $Array<::sun::security::provider::NativePRNG$Variant>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $NativePRNG = ::sun::security::provider::NativePRNG;
using $NativePRNG$Variant = ::sun::security::provider::NativePRNG$Variant;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _NativePRNG$2_FieldInfo_[] = {
	{"$SwitchMap$sun$security$provider$NativePRNG$Variant", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NativePRNG$2, $SwitchMap$sun$security$provider$NativePRNG$Variant)},
	{}
};

$EnclosingMethodInfo _NativePRNG$2_EnclosingMethodInfo_ = {
	"sun.security.provider.NativePRNG",
	nullptr,
	nullptr
};

$InnerClassInfo _NativePRNG$2_InnerClassesInfo_[] = {
	{"sun.security.provider.NativePRNG$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _NativePRNG$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.provider.NativePRNG$2",
	"java.lang.Object",
	nullptr,
	_NativePRNG$2_FieldInfo_,
	nullptr,
	nullptr,
	&_NativePRNG$2_EnclosingMethodInfo_,
	_NativePRNG$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.NativePRNG"
};

$Object* allocate$NativePRNG$2($Class* clazz) {
	return $of($alloc(NativePRNG$2));
}

$ints* NativePRNG$2::$SwitchMap$sun$security$provider$NativePRNG$Variant = nullptr;

void clinit$NativePRNG$2($Class* class$) {
	$assignStatic(NativePRNG$2::$SwitchMap$sun$security$provider$NativePRNG$Variant, $new($ints, $($NativePRNG$Variant::values())->length));
	{
		try {
			$nc(NativePRNG$2::$SwitchMap$sun$security$provider$NativePRNG$Variant)->set($NativePRNG$Variant::MIXED->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(NativePRNG$2::$SwitchMap$sun$security$provider$NativePRNG$Variant)->set($NativePRNG$Variant::BLOCKING->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(NativePRNG$2::$SwitchMap$sun$security$provider$NativePRNG$Variant)->set($NativePRNG$Variant::NONBLOCKING->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

NativePRNG$2::NativePRNG$2() {
}

$Class* NativePRNG$2::load$($String* name, bool initialize) {
	$loadClass(NativePRNG$2, name, initialize, &_NativePRNG$2_ClassInfo_, clinit$NativePRNG$2, allocate$NativePRNG$2);
	return class$;
}

$Class* NativePRNG$2::class$ = nullptr;

		} // provider
	} // security
} // sun