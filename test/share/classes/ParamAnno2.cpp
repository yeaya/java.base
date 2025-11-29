#include <ParamAnno2.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Attribute ParamAnno2_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_PARAMETER"},
	{'-'}
};

$NamedAttribute ParamAnno2_Attribute_var$0[] = {
	{"value", '[', ParamAnno2_Attribute_var$1},
	{}
};

$NamedAttribute ParamAnno2_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _ParamAnno2_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", ParamAnno2_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", ParamAnno2_Attribute_var$2},
	{}
};

$MethodInfo _ParamAnno2_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ParamAnno2_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"ParamAnno2",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ParamAnno2_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ParamAnno2_Annotations_
};

$Object* allocate$ParamAnno2($Class* clazz) {
	return $of($alloc(ParamAnno2));
}

$Class* ParamAnno2::load$($String* name, bool initialize) {
	$loadClass(ParamAnno2, name, initialize, &_ParamAnno2_ClassInfo_, allocate$ParamAnno2);
	return class$;
}

$Class* ParamAnno2::class$ = nullptr;