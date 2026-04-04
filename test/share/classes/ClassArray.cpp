#include <ClassArray.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* ClassArray::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'c', "I"},
		{'c', "[LObj;"},
		{'-'}
	};

	$Attribute valuedefaultValue$$ = {
		'[', $attribute
	};
	$MethodInfo methodInfos$$[] = {
		{"value", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(ClassArray, value, $ClassArray*), nullptr, &valuedefaultValue$$},
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
		"ClassArray",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ClassArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassArray);
	});
	return class$;
}

$Class* ClassArray::class$ = nullptr;