#include <ImplicitStringConcat$MyClass.h>

#include <ImplicitStringConcat.h>
#include <jcpp.h>

using $ImplicitStringConcat = ::ImplicitStringConcat;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ImplicitStringConcat$MyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImplicitStringConcat$MyClass::*)()>(&ImplicitStringConcat$MyClass::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImplicitStringConcat$MyClass_InnerClassesInfo_[] = {
	{"ImplicitStringConcat$MyClass", "ImplicitStringConcat", "MyClass", $STATIC},
	{}
};

$ClassInfo _ImplicitStringConcat$MyClass_ClassInfo_ = {
	$ACC_SUPER,
	"ImplicitStringConcat$MyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ImplicitStringConcat$MyClass_MethodInfo_,
	nullptr,
	nullptr,
	_ImplicitStringConcat$MyClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ImplicitStringConcat"
};

$Object* allocate$ImplicitStringConcat$MyClass($Class* clazz) {
	return $of($alloc(ImplicitStringConcat$MyClass));
}

void ImplicitStringConcat$MyClass::init$() {
}

$String* ImplicitStringConcat$MyClass::toString() {
	return "MyClass"_s;
}

ImplicitStringConcat$MyClass::ImplicitStringConcat$MyClass() {
}

$Class* ImplicitStringConcat$MyClass::load$($String* name, bool initialize) {
	$loadClass(ImplicitStringConcat$MyClass, name, initialize, &_ImplicitStringConcat$MyClass_ClassInfo_, allocate$ImplicitStringConcat$MyClass);
	return class$;
}

$Class* ImplicitStringConcat$MyClass::class$ = nullptr;