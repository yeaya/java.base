#include <ImplicitStringConcatAssignLHS$MyClass.h>

#include <ImplicitStringConcatAssignLHS.h>
#include <jcpp.h>

using $ImplicitStringConcatAssignLHS = ::ImplicitStringConcatAssignLHS;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ImplicitStringConcatAssignLHS$MyClass_FieldInfo_[] = {
	{"o", "Ljava/lang/Object;", nullptr, 0, $field(ImplicitStringConcatAssignLHS$MyClass, o)},
	{"s", "Ljava/lang/String;", nullptr, 0, $field(ImplicitStringConcatAssignLHS$MyClass, s)},
	{}
};

$MethodInfo _ImplicitStringConcatAssignLHS$MyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ImplicitStringConcatAssignLHS$MyClass, init$, void)},
	{}
};

$InnerClassInfo _ImplicitStringConcatAssignLHS$MyClass_InnerClassesInfo_[] = {
	{"ImplicitStringConcatAssignLHS$MyClass", "ImplicitStringConcatAssignLHS", "MyClass", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ImplicitStringConcatAssignLHS$MyClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ImplicitStringConcatAssignLHS$MyClass",
	"java.lang.Object",
	nullptr,
	_ImplicitStringConcatAssignLHS$MyClass_FieldInfo_,
	_ImplicitStringConcatAssignLHS$MyClass_MethodInfo_,
	nullptr,
	nullptr,
	_ImplicitStringConcatAssignLHS$MyClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ImplicitStringConcatAssignLHS"
};

$Object* allocate$ImplicitStringConcatAssignLHS$MyClass($Class* clazz) {
	return $of($alloc(ImplicitStringConcatAssignLHS$MyClass));
}

void ImplicitStringConcatAssignLHS$MyClass::init$() {
	$init($ImplicitStringConcatAssignLHS);
	++$ImplicitStringConcatAssignLHS::x;
}

ImplicitStringConcatAssignLHS$MyClass::ImplicitStringConcatAssignLHS$MyClass() {
}

$Class* ImplicitStringConcatAssignLHS$MyClass::load$($String* name, bool initialize) {
	$loadClass(ImplicitStringConcatAssignLHS$MyClass, name, initialize, &_ImplicitStringConcatAssignLHS$MyClass_ClassInfo_, allocate$ImplicitStringConcatAssignLHS$MyClass);
	return class$;
}

$Class* ImplicitStringConcatAssignLHS$MyClass::class$ = nullptr;