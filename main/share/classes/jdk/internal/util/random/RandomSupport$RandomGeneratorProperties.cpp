#include <jdk/internal/util/random/RandomSupport$RandomGeneratorProperties.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$Class* RandomSupport$RandomGeneratorProperties::load$($String* name, bool initialize) {

	$Attribute equidistributiondefaultValue$$ = {
		'I', "2147483647"
	};

	$Attribute groupdefaultValue$$ = {
		's', "Legacy"
	};

	$Attribute idefaultValue$$ = {
		'I', "0"
	};

	$Attribute isHardwaredefaultValue$$ = {
		'Z', "false"
	};

	$Attribute isStochasticdefaultValue$$ = {
		'Z', "false"
	};

	$Attribute jdefaultValue$$ = {
		'I', "0"
	};

	$Attribute kdefaultValue$$ = {
		'I', "0"
	};
	$MethodInfo methodInfos$$[] = {
		{"equidistribution", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomSupport$RandomGeneratorProperties, equidistribution, int32_t), nullptr, &equidistributiondefaultValue$$},
		{"group", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomSupport$RandomGeneratorProperties, group, $String*), nullptr, &groupdefaultValue$$},
		{"i", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomSupport$RandomGeneratorProperties, i, int32_t), nullptr, &idefaultValue$$},
		{"isHardware", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomSupport$RandomGeneratorProperties, isHardware, bool), nullptr, &isHardwaredefaultValue$$},
		{"isStochastic", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomSupport$RandomGeneratorProperties, isStochastic, bool), nullptr, &isStochasticdefaultValue$$},
		{"j", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomSupport$RandomGeneratorProperties, j, int32_t), nullptr, &jdefaultValue$$},
		{"k", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomSupport$RandomGeneratorProperties, k, int32_t), nullptr, &kdefaultValue$$},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomSupport$RandomGeneratorProperties, name, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.util.random.RandomSupport$RandomGeneratorProperties", "jdk.internal.util.random.RandomSupport", "RandomGeneratorProperties", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; TYPE"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"jdk.internal.util.random.RandomSupport$RandomGeneratorProperties",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"jdk.internal.util.random.RandomSupport"
	};
	$loadClass(RandomSupport$RandomGeneratorProperties, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomSupport$RandomGeneratorProperties);
	});
	return class$;
}

$Class* RandomSupport$RandomGeneratorProperties::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk