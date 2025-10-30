#include <ImplicitStringConcatShapes$MyClass.h>

#include <ImplicitStringConcatShapes.h>
#include <jcpp.h>

using $ImplicitStringConcatShapes = ::ImplicitStringConcatShapes;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ImplicitStringConcatShapes$MyClass_FieldInfo_[] = {
	{"i", "I", nullptr, $PRIVATE | $FINAL, $field(ImplicitStringConcatShapes$MyClass, i)},
	{}
};

$MethodInfo _ImplicitStringConcatShapes$MyClass_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ImplicitStringConcatShapes$MyClass::*)(int32_t)>(&ImplicitStringConcatShapes$MyClass::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImplicitStringConcatShapes$MyClass_InnerClassesInfo_[] = {
	{"ImplicitStringConcatShapes$MyClass", "ImplicitStringConcatShapes", "MyClass", $STATIC},
	{}
};

$ClassInfo _ImplicitStringConcatShapes$MyClass_ClassInfo_ = {
	$ACC_SUPER,
	"ImplicitStringConcatShapes$MyClass",
	"java.lang.Object",
	nullptr,
	_ImplicitStringConcatShapes$MyClass_FieldInfo_,
	_ImplicitStringConcatShapes$MyClass_MethodInfo_,
	nullptr,
	nullptr,
	_ImplicitStringConcatShapes$MyClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ImplicitStringConcatShapes"
};

$Object* allocate$ImplicitStringConcatShapes$MyClass($Class* clazz) {
	return $of($alloc(ImplicitStringConcatShapes$MyClass));
}

void ImplicitStringConcatShapes$MyClass::init$(int32_t i) {
	this->i = i;
}

$String* ImplicitStringConcatShapes$MyClass::toString() {
	return $$new($StringBuilder, "C("_s)->append(this->i)->append(")"_s)->toString();
}

ImplicitStringConcatShapes$MyClass::ImplicitStringConcatShapes$MyClass() {
}

$Class* ImplicitStringConcatShapes$MyClass::load$($String* name, bool initialize) {
	$loadClass(ImplicitStringConcatShapes$MyClass, name, initialize, &_ImplicitStringConcatShapes$MyClass_ClassInfo_, allocate$ImplicitStringConcatShapes$MyClass);
	return class$;
}

$Class* ImplicitStringConcatShapes$MyClass::class$ = nullptr;