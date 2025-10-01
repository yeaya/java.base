#include <jdk/internal/util/random/RandomSupport$RandomGeneratorProperties.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$NamedAttribute RandomSupport$RandomGeneratorProperties_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute RandomSupport$RandomGeneratorProperties_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute RandomSupport$RandomGeneratorProperties_Attribute_var$1[] = {
	{"value", '[', RandomSupport$RandomGeneratorProperties_Attribute_var$2},
	{}
};
$CompoundAttribute _RandomSupport$RandomGeneratorProperties_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", RandomSupport$RandomGeneratorProperties_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", RandomSupport$RandomGeneratorProperties_Attribute_var$1},
	{}
};
$Attribute _RandomSupport$RandomGeneratorProperties_DefaultValue_equidistribution0 = {
'I', "2147483647"};
$Attribute _RandomSupport$RandomGeneratorProperties_DefaultValue_group1 = {
's', "Legacy"};
$Attribute _RandomSupport$RandomGeneratorProperties_DefaultValue_i2 = {
'I', "0"};
$Attribute _RandomSupport$RandomGeneratorProperties_DefaultValue_isHardware3 = {
'Z', "false"};
$Attribute _RandomSupport$RandomGeneratorProperties_DefaultValue_isStochastic4 = {
'Z', "false"};
$Attribute _RandomSupport$RandomGeneratorProperties_DefaultValue_j5 = {
'I', "0"};
$Attribute _RandomSupport$RandomGeneratorProperties_DefaultValue_k6 = {
'I', "0"};


$MethodInfo _RandomSupport$RandomGeneratorProperties_MethodInfo_[] = {
	{"equidistribution", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_RandomSupport$RandomGeneratorProperties_DefaultValue_equidistribution0},
	{"group", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_RandomSupport$RandomGeneratorProperties_DefaultValue_group1},
	{"i", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_RandomSupport$RandomGeneratorProperties_DefaultValue_i2},
	{"isHardware", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_RandomSupport$RandomGeneratorProperties_DefaultValue_isHardware3},
	{"isStochastic", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_RandomSupport$RandomGeneratorProperties_DefaultValue_isStochastic4},
	{"j", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_RandomSupport$RandomGeneratorProperties_DefaultValue_j5},
	{"k", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_RandomSupport$RandomGeneratorProperties_DefaultValue_k6},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _RandomSupport$RandomGeneratorProperties_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$RandomGeneratorProperties", "jdk.internal.util.random.RandomSupport", "RandomGeneratorProperties", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _RandomSupport$RandomGeneratorProperties_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.util.random.RandomSupport$RandomGeneratorProperties",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_RandomSupport$RandomGeneratorProperties_MethodInfo_,
	nullptr,
	nullptr,
	_RandomSupport$RandomGeneratorProperties_InnerClassesInfo_,
	_RandomSupport$RandomGeneratorProperties_Annotations_,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport"
};

$Object* allocate$RandomSupport$RandomGeneratorProperties($Class* clazz) {
	return $of($alloc(RandomSupport$RandomGeneratorProperties));
}

$Class* RandomSupport$RandomGeneratorProperties::load$($String* name, bool initialize) {
	$loadClass(RandomSupport$RandomGeneratorProperties, name, initialize, &_RandomSupport$RandomGeneratorProperties_ClassInfo_, allocate$RandomSupport$RandomGeneratorProperties);
	return class$;
}

$Class* RandomSupport$RandomGeneratorProperties::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk