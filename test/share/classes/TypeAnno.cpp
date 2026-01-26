#include <TypeAnno.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Attribute TypeAnno_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute TypeAnno_Attribute_var$0[] = {
	{"value", '[', TypeAnno_Attribute_var$1},
	{}
};

$NamedAttribute TypeAnno_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _TypeAnno_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", TypeAnno_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", TypeAnno_Attribute_var$2},
	{}
};

$MethodInfo _TypeAnno_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeAnno, value, $String*)},
	{}
};

$ClassInfo _TypeAnno_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TypeAnno",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TypeAnno_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TypeAnno_Annotations_
};

$Object* allocate$TypeAnno($Class* clazz) {
	return $of($alloc(TypeAnno));
}

$Class* TypeAnno::load$($String* name, bool initialize) {
	$loadClass(TypeAnno, name, initialize, &_TypeAnno_ClassInfo_, allocate$TypeAnno);
	return class$;
}

$Class* TypeAnno::class$ = nullptr;