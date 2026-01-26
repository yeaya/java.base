#include <ClassAttributesTest$NestedClass.h>

#include <ClassAttributesTest.h>
#include <jcpp.h>

using $ClassAttributesTest = ::ClassAttributesTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ClassAttributesTest$NestedClass_FieldInfo_[] = {
	{"this$0", "LClassAttributesTest;", nullptr, $FINAL | $SYNTHETIC, $field(ClassAttributesTest$NestedClass, this$0)},
	{}
};

$MethodInfo _ClassAttributesTest$NestedClass_MethodInfo_[] = {
	{"<init>", "(LClassAttributesTest;)V", nullptr, 0, $method(ClassAttributesTest$NestedClass, init$, void, $ClassAttributesTest*)},
	{}
};

$InnerClassInfo _ClassAttributesTest$NestedClass_InnerClassesInfo_[] = {
	{"ClassAttributesTest$NestedClass", "ClassAttributesTest", "NestedClass", 0},
	{}
};

$ClassInfo _ClassAttributesTest$NestedClass_ClassInfo_ = {
	$ACC_SUPER,
	"ClassAttributesTest$NestedClass",
	"java.lang.Object",
	nullptr,
	_ClassAttributesTest$NestedClass_FieldInfo_,
	_ClassAttributesTest$NestedClass_MethodInfo_,
	nullptr,
	nullptr,
	_ClassAttributesTest$NestedClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ClassAttributesTest"
};

$Object* allocate$ClassAttributesTest$NestedClass($Class* clazz) {
	return $of($alloc(ClassAttributesTest$NestedClass));
}

void ClassAttributesTest$NestedClass::init$($ClassAttributesTest* this$0) {
	$set(this, this$0, this$0);
}

ClassAttributesTest$NestedClass::ClassAttributesTest$NestedClass() {
}

$Class* ClassAttributesTest$NestedClass::load$($String* name, bool initialize) {
	$loadClass(ClassAttributesTest$NestedClass, name, initialize, &_ClassAttributesTest$NestedClass_ClassInfo_, allocate$ClassAttributesTest$NestedClass);
	return class$;
}

$Class* ClassAttributesTest$NestedClass::class$ = nullptr;