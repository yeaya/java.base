#include <MissingRepeatable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute MissingRepeatable_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$NamedAttribute MissingRepeatable_Attribute_var$1[] = {
	{"value", 'c', "LMissingRepeatableContainer;"},
	{}
};

$CompoundAttribute _MissingRepeatable_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", MissingRepeatable_Attribute_var$0},
	{"Ljava/lang/annotation/Repeatable;", MissingRepeatable_Attribute_var$1},
	{}
};

$MethodInfo _MissingRepeatable_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MissingRepeatable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"MissingRepeatable",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_MissingRepeatable_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_MissingRepeatable_Annotations_
};

$Object* allocate$MissingRepeatable($Class* clazz) {
	return $of($alloc(MissingRepeatable));
}

$Class* MissingRepeatable::load$($String* name, bool initialize) {
	$loadClass(MissingRepeatable, name, initialize, &_MissingRepeatable_ClassInfo_, allocate$MissingRepeatable);
	return class$;
}

$Class* MissingRepeatable::class$ = nullptr;