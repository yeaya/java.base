#include <NonInheritableContainee$Parent.h>

#include <NonInheritableContainee.h>
#include <jcpp.h>

using $NonInheritableContainee = ::NonInheritableContainee;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute NonInheritableContainee$Parent_Attribute_var$3[] = {
	{"name", 's', "A"},
	{}
};

$CompoundAttribute NonInheritableContainee$Parent_CompoundAttribute_var$2 = {
"LNonInheritableContainee$NonInheritedAnnotationRepeated;", NonInheritableContainee$Parent_Attribute_var$3
};

$NamedAttribute NonInheritableContainee$Parent_Attribute_var$5[] = {
	{"name", 's', "B"},
	{}
};

$CompoundAttribute NonInheritableContainee$Parent_CompoundAttribute_var$4 = {
"LNonInheritableContainee$NonInheritedAnnotationRepeated;", NonInheritableContainee$Parent_Attribute_var$5
};

$Attribute NonInheritableContainee$Parent_Attribute_var$1[] = {
	{'@', &NonInheritableContainee$Parent_CompoundAttribute_var$2},
	{'@', &NonInheritableContainee$Parent_CompoundAttribute_var$4},
	{'-'}
};

$NamedAttribute NonInheritableContainee$Parent_Attribute_var$0[] = {
	{"value", '[', NonInheritableContainee$Parent_Attribute_var$1},
	{}
};

$CompoundAttribute _NonInheritableContainee$Parent_Annotations_[] = {
	{"LNonInheritableContainee$InheritedAnnotationContainer;", NonInheritableContainee$Parent_Attribute_var$0},
	{}
};

$FieldInfo _NonInheritableContainee$Parent_FieldInfo_[] = {
	{"this$0", "LNonInheritableContainee;", nullptr, $FINAL | $SYNTHETIC, $field(NonInheritableContainee$Parent, this$0)},
	{}
};

$MethodInfo _NonInheritableContainee$Parent_MethodInfo_[] = {
	{"<init>", "(LNonInheritableContainee;)V", nullptr, 0, $method(static_cast<void(NonInheritableContainee$Parent::*)($NonInheritableContainee*)>(&NonInheritableContainee$Parent::init$))},
	{}
};

$InnerClassInfo _NonInheritableContainee$Parent_InnerClassesInfo_[] = {
	{"NonInheritableContainee$Parent", "NonInheritableContainee", "Parent", 0},
	{}
};

$ClassInfo _NonInheritableContainee$Parent_ClassInfo_ = {
	$ACC_SUPER,
	"NonInheritableContainee$Parent",
	"java.lang.Object",
	nullptr,
	_NonInheritableContainee$Parent_FieldInfo_,
	_NonInheritableContainee$Parent_MethodInfo_,
	nullptr,
	nullptr,
	_NonInheritableContainee$Parent_InnerClassesInfo_,
	_NonInheritableContainee$Parent_Annotations_,
	nullptr,
	nullptr,
	"NonInheritableContainee"
};

$Object* allocate$NonInheritableContainee$Parent($Class* clazz) {
	return $of($alloc(NonInheritableContainee$Parent));
}

void NonInheritableContainee$Parent::init$($NonInheritableContainee* this$0) {
	$set(this, this$0, this$0);
}

NonInheritableContainee$Parent::NonInheritableContainee$Parent() {
}

$Class* NonInheritableContainee$Parent::load$($String* name, bool initialize) {
	$loadClass(NonInheritableContainee$Parent, name, initialize, &_NonInheritableContainee$Parent_ClassInfo_, allocate$NonInheritableContainee$Parent);
	return class$;
}

$Class* NonInheritableContainee$Parent::class$ = nullptr;