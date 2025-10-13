#include <ForInnerClass.h>

#include <ForInnerClass$Inner.h>
#include <ForInnerClass$Protected.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

#undef PRIVATE
#undef PROTECTED
#undef SYNCHRONIZED

using $ForInnerClass$Inner = ::ForInnerClass$Inner;
using $ForInnerClass$Protected = ::ForInnerClass$Protected;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::java::lang::reflect::Modifier;

$MethodInfo _ForInnerClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ForInnerClass::*)()>(&ForInnerClass::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ForInnerClass::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ForInnerClass_InnerClassesInfo_[] = {
	{"ForInnerClass$Protected", "ForInnerClass", "Protected", $PROTECTED},
	{"ForInnerClass$Inner", "ForInnerClass", "Inner", $PRIVATE},
	{}
};

$ClassInfo _ForInnerClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ForInnerClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ForInnerClass_MethodInfo_,
	nullptr,
	nullptr,
	_ForInnerClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ForInnerClass$Protected,ForInnerClass$Inner"
};

$Object* allocate$ForInnerClass($Class* clazz) {
	return $of($alloc(ForInnerClass));
}

void ForInnerClass::init$() {
}

void ForInnerClass::main($StringArray* args) {
	int32_t m = 0;
	$load($ForInnerClass$Inner);
	m = (int32_t)($ForInnerClass$Inner::class$->getModifiers() & (uint32_t)(~$Modifier::SYNCHRONIZED));
	if (m != $Modifier::PRIVATE) {
		$throwNew($Exception, "Access bits for innerclass not from InnerClasses attribute"_s);
	}
	$load($ForInnerClass$Protected);
	m = (int32_t)($ForInnerClass$Protected::class$->getModifiers() & (uint32_t)(~$Modifier::SYNCHRONIZED));
	if (m != $Modifier::PROTECTED) {
		$throwNew($Exception, "Protected inner class wronged modifiers"_s);
	}
}

ForInnerClass::ForInnerClass() {
}

$Class* ForInnerClass::load$($String* name, bool initialize) {
	$loadClass(ForInnerClass, name, initialize, &_ForInnerClass_ClassInfo_, allocate$ForInnerClass);
	return class$;
}

$Class* ForInnerClass::class$ = nullptr;