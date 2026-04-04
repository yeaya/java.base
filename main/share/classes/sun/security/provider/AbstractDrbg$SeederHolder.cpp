#include <sun/security/provider/AbstractDrbg$SeederHolder.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/DrbgParameters$Capability.h>
#include <java/security/DrbgParameters$Instantiation.h>
#include <java/security/DrbgParameters.h>
#include <sun/security/provider/AbstractDrbg.h>
#include <sun/security/provider/EntropySource.h>
#include <sun/security/provider/HashDrbg.h>
#include <sun/security/provider/MoreDrbgParameters.h>
#include <sun/security/provider/SeedGenerator.h>
#include <jcpp.h>

#undef NONE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $DrbgParameters = ::java::security::DrbgParameters;
using $DrbgParameters$Capability = ::java::security::DrbgParameters$Capability;
using $AbstractDrbg = ::sun::security::provider::AbstractDrbg;
using $EntropySource = ::sun::security::provider::EntropySource;
using $HashDrbg = ::sun::security::provider::HashDrbg;
using $MoreDrbgParameters = ::sun::security::provider::MoreDrbgParameters;
using $SeedGenerator = ::sun::security::provider::SeedGenerator;

namespace sun {
	namespace security {
		namespace provider {

class AbstractDrbg$SeederHolder$$Lambda$lambda$static$0 : public $EntropySource {
	$class(AbstractDrbg$SeederHolder$$Lambda$lambda$static$0, $NO_CLASS_INIT, $EntropySource)
public:
	void init$($HashDrbg* first) {
		$set(this, first, first);
	}
	virtual $bytes* getEntropy(int32_t entropy, int32_t minLen, int32_t maxLen, bool pr) override {
		 return AbstractDrbg$SeederHolder::lambda$static$0(first, entropy, minLen, maxLen, pr);
	}
	$HashDrbg* first = nullptr;
};
$Class* AbstractDrbg$SeederHolder$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"first", "Lsun/security/provider/HashDrbg;", nullptr, $PUBLIC, $field(AbstractDrbg$SeederHolder$$Lambda$lambda$static$0, first)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/HashDrbg;)V", nullptr, $PUBLIC, $method(AbstractDrbg$SeederHolder$$Lambda$lambda$static$0, init$, void, $HashDrbg*)},
		{"getEntropy", "(IIIZ)[B", nullptr, $PUBLIC, $virtualMethod(AbstractDrbg$SeederHolder$$Lambda$lambda$static$0, getEntropy, $bytes*, int32_t, int32_t, int32_t, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.security.provider.AbstractDrbg$SeederHolder$$Lambda$lambda$static$0",
		"java.lang.Object",
		"sun.security.provider.EntropySource",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AbstractDrbg$SeederHolder$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDrbg$SeederHolder$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* AbstractDrbg$SeederHolder$$Lambda$lambda$static$0::class$ = nullptr;

$EntropySource* AbstractDrbg$SeederHolder::prseeder = nullptr;
$EntropySource* AbstractDrbg$SeederHolder::seeder = nullptr;

void AbstractDrbg$SeederHolder::init$() {
}

$bytes* AbstractDrbg$SeederHolder::lambda$static$0($HashDrbg* first, int32_t entropy, int32_t minLen, int32_t maxLen, bool pr) {
	$init(AbstractDrbg$SeederHolder);
	if (pr) {
		$throwNew($IllegalArgumentException, "pr not supported"_s);
	}
	$var($bytes, result, $new($bytes, minLen));
	$nc(first)->engineNextBytes(result);
	return result;
}

void AbstractDrbg$SeederHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$init($AbstractDrbg);
		$assignStatic(AbstractDrbg$SeederHolder::prseeder, $AbstractDrbg::defaultES);
		$init($DrbgParameters$Capability);
		$var($HashDrbg, first, $new($HashDrbg, $$new($MoreDrbgParameters, AbstractDrbg$SeederHolder::prseeder, nullptr, "SHA-256"_s, nullptr, false, $($DrbgParameters::instantiation(256, $DrbgParameters$Capability::NONE, $($SeedGenerator::getSystemEntropy()))))));
		$assignStatic(AbstractDrbg$SeederHolder::seeder, $new(AbstractDrbg$SeederHolder$$Lambda$lambda$static$0, first));
	}
}

AbstractDrbg$SeederHolder::AbstractDrbg$SeederHolder() {
}

$Class* AbstractDrbg$SeederHolder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.security.provider.AbstractDrbg$SeederHolder$$Lambda$lambda$static$0")) {
			return AbstractDrbg$SeederHolder$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"prseeder", "Lsun/security/provider/EntropySource;", nullptr, $STATIC | $FINAL, $staticField(AbstractDrbg$SeederHolder, prseeder)},
		{"seeder", "Lsun/security/provider/EntropySource;", nullptr, $STATIC | $FINAL, $staticField(AbstractDrbg$SeederHolder, seeder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AbstractDrbg$SeederHolder, init$, void)},
		{"lambda$static$0", "(Lsun/security/provider/HashDrbg;IIIZ)[B", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AbstractDrbg$SeederHolder, lambda$static$0, $bytes*, $HashDrbg*, int32_t, int32_t, int32_t, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.AbstractDrbg$SeederHolder", "sun.security.provider.AbstractDrbg", "SeederHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.AbstractDrbg$SeederHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.AbstractDrbg"
	};
	$loadClass(AbstractDrbg$SeederHolder, name, initialize, &classInfo$$, AbstractDrbg$SeederHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDrbg$SeederHolder);
	});
	return class$;
}

$Class* AbstractDrbg$SeederHolder::class$ = nullptr;

		} // provider
	} // security
} // sun