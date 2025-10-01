#include <ParamAnno.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$Attribute ParamAnno_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_PARAMETER"},
	{'-'}
};

$NamedAttribute ParamAnno_Attribute_var$0[] = {
	{"value", '[', ParamAnno_Attribute_var$1},
	{}
};

$NamedAttribute ParamAnno_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _ParamAnno_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", ParamAnno_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", ParamAnno_Attribute_var$2},
	{}
};


$MethodInfo _ParamAnno_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ParamAnno_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"ParamAnno",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ParamAnno_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ParamAnno_Annotations_
};

$Object* allocate$ParamAnno($Class* clazz) {
	return $of($alloc(ParamAnno));
}

$Class* ParamAnno::load$($String* name, bool initialize) {
	$loadClass(ParamAnno, name, initialize, &_ParamAnno_ClassInfo_, allocate$ParamAnno);
	return class$;
}

$Class* ParamAnno::class$ = nullptr;