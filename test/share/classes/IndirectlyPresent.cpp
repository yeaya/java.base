#include <IndirectlyPresent.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute IndirectlyPresent_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$NamedAttribute IndirectlyPresent_Attribute_var$1[] = {
	{"value", 'c', "LIndirectlyPresentContainer;"},
	{}
};

$CompoundAttribute _IndirectlyPresent_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", IndirectlyPresent_Attribute_var$0},
	{"Ljava/lang/annotation/Repeatable;", IndirectlyPresent_Attribute_var$1},
	{}
};

$MethodInfo _IndirectlyPresent_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IndirectlyPresent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"IndirectlyPresent",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_IndirectlyPresent_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_IndirectlyPresent_Annotations_
};

$Object* allocate$IndirectlyPresent($Class* clazz) {
	return $of($alloc(IndirectlyPresent));
}

$Class* IndirectlyPresent::load$($String* name, bool initialize) {
	$loadClass(IndirectlyPresent, name, initialize, &_IndirectlyPresent_ClassInfo_, allocate$IndirectlyPresent);
	return class$;
}

$Class* IndirectlyPresent::class$ = nullptr;