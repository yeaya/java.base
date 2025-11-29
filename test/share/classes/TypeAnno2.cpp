#include <TypeAnno2.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Attribute TypeAnno2_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute TypeAnno2_Attribute_var$0[] = {
	{"value", '[', TypeAnno2_Attribute_var$1},
	{}
};

$NamedAttribute TypeAnno2_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _TypeAnno2_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", TypeAnno2_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", TypeAnno2_Attribute_var$2},
	{}
};

$MethodInfo _TypeAnno2_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeAnno2_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TypeAnno2",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TypeAnno2_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TypeAnno2_Annotations_
};

$Object* allocate$TypeAnno2($Class* clazz) {
	return $of($alloc(TypeAnno2));
}

$Class* TypeAnno2::load$($String* name, bool initialize) {
	$loadClass(TypeAnno2, name, initialize, &_TypeAnno2_ClassInfo_, allocate$TypeAnno2);
	return class$;
}

$Class* TypeAnno2::class$ = nullptr;