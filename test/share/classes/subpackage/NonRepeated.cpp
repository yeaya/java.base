#include <subpackage/NonRepeated.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace subpackage {

$NamedAttribute NonRepeated_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _NonRepeated_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", NonRepeated_Attribute_var$0},
	{}
};

$Attribute _NonRepeated_DefaultValue_value0 = {
	'I', "10"
};

$MethodInfo _NonRepeated_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NonRepeated, value, int32_t), nullptr, &_NonRepeated_DefaultValue_value0},
	{}
};

$ClassInfo _NonRepeated_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"subpackage.NonRepeated",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_NonRepeated_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_NonRepeated_Annotations_
};

$Object* allocate$NonRepeated($Class* clazz) {
	return $of($alloc(NonRepeated));
}

$Class* NonRepeated::load$($String* name, bool initialize) {
	$loadClass(NonRepeated, name, initialize, &_NonRepeated_ClassInfo_, allocate$NonRepeated);
	return class$;
}

$Class* NonRepeated::class$ = nullptr;

} // subpackage