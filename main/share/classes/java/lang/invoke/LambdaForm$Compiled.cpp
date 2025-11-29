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

$Attribute LambdaForm$Compiled_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'-'}
};

$NamedAttribute LambdaForm$Compiled_Attribute_var$0[] = {
	{"value", '[', LambdaForm$Compiled_Attribute_var$1},
	{}
};

$NamedAttribute LambdaForm$Compiled_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _LambdaForm$Compiled_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", LambdaForm$Compiled_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", LambdaForm$Compiled_Attribute_var$2},
	{}
};

$InnerClassInfo _LambdaForm$Compiled_InnerClassesInfo_[] = {
	{"java.lang.invoke.LambdaForm$Compiled", "java.lang.invoke.LambdaForm", "Compiled", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _LambdaForm$Compiled_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.invoke.LambdaForm$Compiled",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_LambdaForm$Compiled_InnerClassesInfo_,
	_LambdaForm$Compiled_Annotations_,
	nullptr,
	nullptr,
	"java.lang.invoke.LambdaForm"
};

$Object* allocate$LambdaForm$Compiled($Class* clazz) {
	return $of($alloc(LambdaForm$Compiled));
}

$Class* LambdaForm$Compiled::load$($String* name, bool initialize) {
	$loadClass(LambdaForm$Compiled, name, initialize, &_LambdaForm$Compiled_ClassInfo_, allocate$LambdaForm$Compiled);
	return class$;
}

$Class* LambdaForm$Compiled::class$ = nullptr;

		} // invoke
	} // lang
} // java