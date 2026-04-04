#include <java/lang/annotation/Native.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace lang {
		namespace annotation {

$Class* Native::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; FIELD"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; SOURCE"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Documented;", nullptr},
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"java.lang.annotation.Native",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Native, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Native);
	});
	return class$;
}

$Class* Native::class$ = nullptr;

		} // annotation
	} // lang
} // java