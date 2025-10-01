#include <ImplicitStringConcatShapes$MyClassNullToString.h>

#include <ImplicitStringConcatShapes.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ImplicitStringConcatShapes = ::ImplicitStringConcatShapes;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ImplicitStringConcatShapes$MyClassNullToString_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImplicitStringConcatShapes$MyClassNullToString::*)()>(&ImplicitStringConcatShapes$MyClassNullToString::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
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