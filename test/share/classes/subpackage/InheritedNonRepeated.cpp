#include <subpackage/InheritedNonRepeated.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace subpackage {

$NamedAttribute InheritedNonRepeated_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _InheritedNonRepeated_Annotations_[] = {
	{"Ljava/lang/annotation/Inherited;", nullptr},
	{"Ljava/lang/annotation/Retention;", InheritedNonRepeated_Attribute_var$0},
	{}
};

$Attribute _InheritedNonRepeated_DefaultValue_value0 = {
	'I', "20"
};

$MethodInfo _InheritedNonRepeated_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_InheritedNonRepeated_DefaultValue_value0},
	{}
};

$ClassInfo _InheritedNonRepeated_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"subpackage.InheritedNonRepeated",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_InheritedNonRepeated_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_InheritedNonRepeated_Annotations_
};

$Object* allocate$InheritedNonRepeated($Class* clazz) {
	return $of($alloc(InheritedNonRepeated));
}

$Class* InheritedNonRepeated::load$($String* name, bool initialize) {
	$loadClass(InheritedNonRepeated, name, initialize, &_InheritedNonRepeated_ClassInfo_, allocate$InheritedNonRepeated);
	return class$;
}

$Class* InheritedNonRepeated::class$ = nullptr;

} // subpackage