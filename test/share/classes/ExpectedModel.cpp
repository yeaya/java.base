#include <ExpectedModel.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* ExpectedModel::load$($String* name, bool initialize) {

	$Attribute isDefaultdefaultValue$$ = {
		'Z', "false"
	};

	$Attribute modifiersdefaultValue$$ = {
		'I', "1"
	};
	$MethodInfo methodInfos$$[] = {
		{"declaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExpectedModel, declaringClass, $Class*)},
		{"isDefault", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpectedModel, isDefault, bool), nullptr, &isDefaultdefaultValue$$},
		{"modifiers", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpectedModel, modifiers, int32_t), nullptr, &modifiersdefaultValue$$},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"ExpectedModel",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ExpectedModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExpectedModel);
	});
	return class$;
}

$Class* ExpectedModel::class$ = nullptr;