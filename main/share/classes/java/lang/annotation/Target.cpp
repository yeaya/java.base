#include <java/lang/annotation/Target.h>

#include <java/lang/annotation/ElementType.h>
#include <jcpp.h>

using $ElementTypeArray = $Array<::java::lang::annotation::ElementType>;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace lang {
		namespace annotation {

$NamedAttribute Target_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute Target_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; ANNOTATION_TYPE"},
	{'-'}
};

$NamedAttribute Target_Attribute_var$1[] = {
	{"value", '[', Target_Attribute_var$2},
	{}
};

$CompoundAttribute _Target_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", Target_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", Target_Attribute_var$1},
	{}
};

$MethodInfo _Target_MethodInfo_[] = {
	{"value", "()[Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Target, value, $ElementTypeArray*)},
	{}
};

$ClassInfo _Target_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.annotation.Target",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Target_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Target_Annotations_
};

$Object* allocate$Target($Class* clazz) {
	return $of($alloc(Target));
}

$Class* Target::load$($String* name, bool initialize) {
	$loadClass(Target, name, initialize, &_Target_ClassInfo_, allocate$Target);
	return class$;
}

$Class* Target::class$ = nullptr;

		} // annotation
	} // lang
} // java