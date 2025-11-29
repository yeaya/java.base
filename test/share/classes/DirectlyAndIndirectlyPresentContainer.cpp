#include <DirectlyAndIndirectlyPresentContainer.h>

#include <DirectlyAndIndirectlyPresent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute DirectlyAndIndirectlyPresentContainer_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _DirectlyAndIndirectlyPresentContainer_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", DirectlyAndIndirectlyPresentContainer_Attribute_var$0},
	{}
};

$MethodInfo _DirectlyAndIndirectlyPresentContainer_MethodInfo_[] = {
	{"value", "()[LDirectlyAndIndirectlyPresent;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DirectlyAndIndirectlyPresentContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"DirectlyAndIndirectlyPresentContainer",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_DirectlyAndIndirectlyPresentContainer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DirectlyAndIndirectlyPresentContainer_Annotations_
};

$Object* allocate$DirectlyAndIndirectlyPresentContainer($Class* clazz) {
	return $of($alloc(DirectlyAndIndirectlyPresentContainer));
}

$Class* DirectlyAndIndirectlyPresentContainer::load$($String* name, bool initialize) {
	$loadClass(DirectlyAndIndirectlyPresentContainer, name, initialize, &_DirectlyAndIndirectlyPresentContainer_ClassInfo_, allocate$DirectlyAndIndirectlyPresentContainer);
	return class$;
}

$Class* DirectlyAndIndirectlyPresentContainer::class$ = nullptr;