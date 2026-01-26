#include <java/lang/annotation/Repeatable.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace lang {
		namespace annotation {

$NamedAttribute Repeatable_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute Repeatable_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; ANNOTATION_TYPE"},
	{'-'}
};

$NamedAttribute Repeatable_Attribute_var$1[] = {
	{"value", '[', Repeatable_Attribute_var$2},
	{}
};

$CompoundAttribute _Repeatable_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", Repeatable_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", Repeatable_Attribute_var$1},
	{}
};

$MethodInfo _Repeatable_MethodInfo_[] = {
	{"value", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Repeatable, value, $Class*)},
	{}
};

$ClassInfo _Repeatable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.annotation.Repeatable",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Repeatable_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Repeatable_Annotations_
};

$Object* allocate$Repeatable($Class* clazz) {
	return $of($alloc(Repeatable));
}

$Class* Repeatable::load$($String* name, bool initialize) {
	$loadClass(Repeatable, name, initialize, &_Repeatable_ClassInfo_, allocate$Repeatable);
	return class$;
}

$Class* Repeatable::class$ = nullptr;

		} // annotation
	} // lang
} // java