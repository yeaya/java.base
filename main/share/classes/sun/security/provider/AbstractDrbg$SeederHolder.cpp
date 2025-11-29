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
#include <java/security/SecureRandomParameters.h>
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
using $SecureRandomParameters = ::java::security::SecureRandomParameters;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbstractDrbg$SeederHolder$$Lambda$lambda$static$0>());
	}
	$HashDrbg* first = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AbstractDrbg$SeederHolder$$Lambda$lambda$static$0::fieldInfos[2] = {
	{"first", "Lsun/security/provider/HashDrbg;", nullptr, $PUBLIC, $field(AbstractDrbg$SeederHolder$$Lambda$lambda$static$0, first)},
	{}
};
$MethodInfo AbstractDrbg$SeederHolder$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "(Lsun/security/provider/HashDrbg;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractDrbg$SeederHolder$$Lambda$lambda$static$0::*)($HashDrbg*)>(&AbstractDrbg$SeederHolder$$Lambda$lambda$static$0::init$))},
	{"getEntropy", "(IIIZ)[B", nullptr, $PUBLIC},
	{}
};
$ClassInfo AbstractDrbg$SeederHolder$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.provider.AbstractDrbg$SeederHolder$$Lambda$lambda$static$0",
	"java.lang.Object",
	"sun.security.provider.EntropySource",
	fieldInfos,
	methodInfos
};
$Class* AbstractDrbg$SeederHolder$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(AbstractDrbg$SeederHolder$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbstractDrbg$SeederHolder$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _AbstractDrbg$SeederHolder_FieldInfo_[] = {
	{"prseeder", "Lsun/security/provider/EntropySource;", nullptr, $STATIC | $FINAL, $staticField(AbstractDrbg$SeederHolder, prseeder)},
	{"seeder", "Lsun/security/provider/EntropySource;", nullptr, $STATIC | $FINAL, $staticField(AbstractDrbg$SeederHolder, seeder)},
	{}
};

$MethodInfo _AbstractDrbg$SeederHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractDrbg$SeederHolder::*)()>(&AbstractDrbg$SeederHolder::init$))},
	{"lambda$static$0", "(Lsun/security/provider/HashDrbg;IIIZ)[B", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$bytes*(*)($HashDrbg*,int32_t,int32_t,int32_t,bool)>(&AbstractDrbg$SeederHolder::lambda$static$0))},
	{}
};

$InnerClassInfo _AbstractDrbg$SeederHolder_InnerClassesInfo_[] = {
	{"sun.security.provider.AbstractDrbg$SeederHolder", "sun.security.provider.AbstractDrbg", "SeederHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AbstractDrbg$SeederHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.AbstractDrbg$SeederHolder",
	"java.lang.Object",
	nullptr,
	_AbstractDrbg$SeederHolder_FieldInfo_,
	_AbstractDrbg$SeederHolder_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDrbg$SeederHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.AbstractDrbg"
};

$Object* allocate$AbstractDrbg$SeederHolder($Class* clazz) {
	return $of($alloc(AbstractDrbg$SeederHolder));
}

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

void clinit$AbstractDrbg$SeederHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$init($AbstractDrbg);
		$assignStatic(AbstractDrbg$SeederHolder::prseeder, $AbstractDrbg::defaultES);
		$init($DrbgParameters$Capability);
		$var($HashDrbg, first, $new($HashDrbg, $$new($MoreDrbgParameters, AbstractDrbg$SeederHolder::prseeder, nullptr, "SHA-256"_s, nullptr, false, $($DrbgParameters::instantiation(256, $DrbgParameters$Capability::NONE, $($SeedGenerator::getSystemEntropy()))))));
		$assignStatic(AbstractDrbg$SeederHolder::seeder, static_cast<$EntropySource*>($new(AbstractDrbg$SeederHolder$$Lambda$lambda$static$0, first)));
	}
}

AbstractDrbg$SeederHolder::AbstractDrbg$SeederHolder() {
}

$Class* AbstractDrbg$SeederHolder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AbstractDrbg$SeederHolder$$Lambda$lambda$static$0::classInfo$.name)) {
			return AbstractDrbg$SeederHolder$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(AbstractDrbg$SeederHolder, name, initialize, &_AbstractDrbg$SeederHolder_ClassInfo_, clinit$AbstractDrbg$SeederHolder, allocate$AbstractDrbg$SeederHolder);
	return class$;
}

$Class* AbstractDrbg$SeederHolder::class$ = nullptr;

		} // provider
	} // security
} // sun