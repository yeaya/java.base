#include <Classes.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute Classes_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _Classes_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", Classes_Attribute_var$0},
	{}
};

$MethodInfo _Classes_MethodInfo_[] = {
	{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Classes, value, $StringArray*)},
	{}
};

$ClassInfo _Classes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"Classes",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Classes_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Classes_Annotations_
};

$Object* allocate$Classes($Class* clazz) {
	return $of($alloc(Classes));
}

$Class* Classes::load$($String* name, bool initialize) {
	$loadClass(Classes, name, initialize, &_Classes_ClassInfo_, allocate$Classes);
	return class$;
}

$Class* Classes::class$ = nullptr;