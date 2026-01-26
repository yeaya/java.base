#include <ImplicitStringConcatShapes$MyClassNullToString.h>

#include <ImplicitStringConcatShapes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ImplicitStringConcatShapes$MyClassNullToString_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ImplicitStringConcatShapes$MyClassNullToString, init$, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImplicitStringConcatShapes$MyClassNullToString, toString, $String*)},
	{}
};

$InnerClassInfo _ImplicitStringConcatShapes$MyClassNullToString_InnerClassesInfo_[] = {
	{"ImplicitStringConcatShapes$MyClassNullToString", "ImplicitStringConcatShapes", "MyClassNullToString", $STATIC},
	{}
};

$ClassInfo _ImplicitStringConcatShapes$MyClassNullToString_ClassInfo_ = {
	$ACC_SUPER,
	"ImplicitStringConcatShapes$MyClassNullToString",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ImplicitStringConcatShapes$MyClassNullToString_MethodInfo_,
	nullptr,
	nullptr,
	_ImplicitStringConcatShapes$MyClassNullToString_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ImplicitStringConcatShapes"
};

$Object* allocate$ImplicitStringConcatShapes$MyClassNullToString($Class* clazz) {
	return $of($alloc(ImplicitStringConcatShapes$MyClassNullToString));
}

void ImplicitStringConcatShapes$MyClassNullToString::init$() {
}

$String* ImplicitStringConcatShapes$MyClassNullToString::toString() {
	return nullptr;
}

ImplicitStringConcatShapes$MyClassNullToString::ImplicitStringConcatShapes$MyClassNullToString() {
}

$Class* ImplicitStringConcatShapes$MyClassNullToString::load$($String* name, bool initialize) {
	$loadClass(ImplicitStringConcatShapes$MyClassNullToString, name, initialize, &_ImplicitStringConcatShapes$MyClassNullToString_ClassInfo_, allocate$ImplicitStringConcatShapes$MyClassNullToString);
	return class$;
}

$Class* ImplicitStringConcatShapes$MyClassNullToString::class$ = nullptr;