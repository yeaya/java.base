#include <ClassArray.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute ClassArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _ClassArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ClassArray_Attribute_var$0},
	{}
};

$Attribute ClassArray_Attribute_var$1[] = {
	{'c', "I"},
	{'c', "[LObj;"},
	{'-'}
};

$Attribute _ClassArray_DefaultValue_value0 = {
	'[', ClassArray_Attribute_var$1
};

$MethodInfo _ClassArray_MethodInfo_[] = {
	{"value", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(ClassArray, value, $ClassArray*), nullptr, &_ClassArray_DefaultValue_value0},
	{}
};

$ClassInfo _ClassArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"ClassArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ClassArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ClassArray_Annotations_
};

$Object* allocate$ClassArray($Class* clazz) {
	return $of($alloc(ClassArray));
}

$Class* ClassArray::load$($String* name, bool initialize) {
	$loadClass(ClassArray, name, initialize, &_ClassArray_ClassInfo_, allocate$ClassArray);
	return class$;
}

$Class* ClassArray::class$ = nullptr;