#include <ImplicitStringConcatOrder$MyClass.h>

#include <ImplicitStringConcatOrder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ImplicitStringConcatOrder$MyClass_FieldInfo_[] = {
	{"x", "I", nullptr, 0, $field(ImplicitStringConcatOrder$MyClass, x)},
	{}
};

$MethodInfo _ImplicitStringConcatOrder$MyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ImplicitStringConcatOrder$MyClass, init$, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImplicitStringConcatOrder$MyClass, toString, $String*)},
	{}
};

$InnerClassInfo _ImplicitStringConcatOrder$MyClass_InnerClassesInfo_[] = {
	{"ImplicitStringConcatOrder$MyClass", "ImplicitStringConcatOrder", "MyClass", $STATIC},
	{}
};

$ClassInfo _ImplicitStringConcatOrder$MyClass_ClassInfo_ = {
	$ACC_SUPER,
	"ImplicitStringConcatOrder$MyClass",
	"java.lang.Object",
	nullptr,
	_ImplicitStringConcatOrder$MyClass_FieldInfo_,
	_ImplicitStringConcatOrder$MyClass_MethodInfo_,
	nullptr,
	nullptr,
	_ImplicitStringConcatOrder$MyClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ImplicitStringConcatOrder"
};

$Object* allocate$ImplicitStringConcatOrder$MyClass($Class* clazz) {
	return $of($alloc(ImplicitStringConcatOrder$MyClass));
}

void ImplicitStringConcatOrder$MyClass::init$() {
}

$String* ImplicitStringConcatOrder$MyClass::toString() {
	return $String::valueOf(++this->x);
}

ImplicitStringConcatOrder$MyClass::ImplicitStringConcatOrder$MyClass() {
}

$Class* ImplicitStringConcatOrder$MyClass::load$($String* name, bool initialize) {
	$loadClass(ImplicitStringConcatOrder$MyClass, name, initialize, &_ImplicitStringConcatOrder$MyClass_ClassInfo_, allocate$ImplicitStringConcatOrder$MyClass);
	return class$;
}

$Class* ImplicitStringConcatOrder$MyClass::class$ = nullptr;