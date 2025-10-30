#include <DirectlyAndIndirectlyPresent.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute DirectlyAndIndirectlyPresent_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$NamedAttribute DirectlyAndIndirectlyPresent_Attribute_var$1[] = {
	{"value", 'c', "LDirectlyAndIndirectlyPresentContainer;"},
	{}
};

$CompoundAttribute _DirectlyAndIndirectlyPresent_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", DirectlyAndIndirectlyPresent_Attribute_var$0},
	{"Ljava/lang/annotation/Repeatable;", DirectlyAndIndirectlyPresent_Attribute_var$1},
	{}
};

$MethodInfo _DirectlyAndIndirectlyPresent_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DirectlyAndIndirectlyPresent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"DirectlyAndIndirectlyPresent",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_DirectlyAndIndirectlyPresent_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DirectlyAndIndirectlyPresent_Annotations_
};

$Object* allocate$DirectlyAndIndirectlyPresent($Class* clazz) {
	return $of($alloc(DirectlyAndIndirectlyPresent));
}

$Class* DirectlyAndIndirectlyPresent::load$($String* name, bool initialize) {
	$loadClass(DirectlyAndIndirectlyPresent, name, initialize, &_DirectlyAndIndirectlyPresent_ClassInfo_, allocate$DirectlyAndIndirectlyPresent);
	return class$;
}

$Class* DirectlyAndIndirectlyPresent::class$ = nullptr;