#include <ForStaticInnerClass.h>

#include <ForStaticInnerClass$Static.h>
#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

using $ForStaticInnerClass$Static = ::ForStaticInnerClass$Static;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::java::lang::reflect::Modifier;

$MethodInfo _ForStaticInnerClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ForStaticInnerClass::*)()>(&ForStaticInnerClass::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ForStaticInnerClass::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ForStaticInnerClass_InnerClassesInfo_[] = {
	{"ForStaticInnerClass$Static", "ForStaticInnerClass", "Static", $STATIC},
	{}
};

$ClassInfo _ForStaticInnerClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ForStaticInnerClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ForStaticInnerClass_MethodInfo_,
	nullptr,
	nullptr,
	_ForStaticInnerClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ForStaticInnerClass$Static"
};

$Object* allocate$ForStaticInnerClass($Class* clazz) {
	return $of($alloc(ForStaticInnerClass));
}

void ForStaticInnerClass::init$() {
}

void ForStaticInnerClass::main($StringArray* args) {
	$load($ForStaticInnerClass$Static);
	if (!$Modifier::isStatic($ForStaticInnerClass$Static::class$->getModifiers())) {
		$throwNew($Exception, "VM lost static modifier of innerclass."_s);
	}
}

ForStaticInnerClass::ForStaticInnerClass() {
}

$Class* ForStaticInnerClass::load$($String* name, bool initialize) {
	$loadClass(ForStaticInnerClass, name, initialize, &_ForStaticInnerClass_ClassInfo_, allocate$ForStaticInnerClass);
	return class$;
}

$Class* ForStaticInnerClass::class$ = nullptr;