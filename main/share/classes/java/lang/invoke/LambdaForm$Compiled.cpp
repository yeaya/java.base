#include <java/lang/invoke/LambdaForm$Compiled.h>
#include <java/lang/invoke/LambdaForm.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace lang {
		namespace invoke {

$Class* LambdaForm$Compiled::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.LambdaForm$Compiled", "java.lang.invoke.LambdaForm", "Compiled", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; METHOD"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"java.lang.invoke.LambdaForm$Compiled",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.lang.invoke.LambdaForm"
	};
	$loadClass(LambdaForm$Compiled, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaForm$Compiled);
	});
	return class$;
}

$Class* LambdaForm$Compiled::class$ = nullptr;

		} // invoke
	} // lang
} // java