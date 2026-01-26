#include <DirectlyPresent.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute DirectlyPresent_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _DirectlyPresent_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", DirectlyPresent_Attribute_var$0},
	{}
};

$MethodInfo _DirectlyPresent_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirectlyPresent, value, int32_t)},
	{}
};

$ClassInfo _DirectlyPresent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"DirectlyPresent",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_DirectlyPresent_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DirectlyPresent_Annotations_
};

$Object* allocate$DirectlyPresent($Class* clazz) {
	return $of($alloc(DirectlyPresent));
}

$Class* DirectlyPresent::load$($String* name, bool initialize) {
	$loadClass(DirectlyPresent, name, initialize, &_DirectlyPresent_ClassInfo_, allocate$DirectlyPresent);
	return class$;
}

$Class* DirectlyPresent::class$ = nullptr;