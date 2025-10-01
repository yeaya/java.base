#include <ForStaticInnerClass$Static.h>

#include <ForStaticInnerClass.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ForStaticInnerClass = ::ForStaticInnerClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ForStaticInnerClass$Static_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ForStaticInnerClass$Static::*)()>(&ForStaticInnerClass$Static::init$))},
	{}
};

$InnerClassInfo _ForStaticInnerClass$Static_InnerClassesInfo_[] = {
	{"ForStaticInnerClass$Static", "ForStaticInnerClass", "Static", $STATIC},
	{}
};

$ClassInfo _ForStaticInnerClass$Static_ClassInfo_ = {
	$ACC_SUPER,
	"ForStaticInnerClass$Static",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ForStaticInnerClass$Static_MethodInfo_,
	nullptr,
	nullptr,
	_ForStaticInnerClass$Static_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ForStaticInnerClass"
};

$Object* allocate$ForStaticInnerClass$Static($Class* clazz) {
	return $of($alloc(ForStaticInnerClass$Static));
}

void ForStaticInnerClass$Static::init$() {
}

ForStaticInnerClass$Static::ForStaticInnerClass$Static() {
}

$Class* ForStaticInnerClass$Static::load$($String* name, bool initialize) {
	$loadClass(ForStaticInnerClass$Static, name, initialize, &_ForStaticInnerClass$Static_ClassInfo_, allocate$ForStaticInnerClass$Static);
	return class$;
}

$Class* ForStaticInnerClass$Static::class$ = nullptr;