#include <WithSecurityManager4concat$4.h>

#include <WithSecurityManager4concat.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $WithSecurityManager4concat = ::WithSecurityManager4concat;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _WithSecurityManager4concat$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WithSecurityManager4concat$4::*)()>(&WithSecurityManager4concat$4::init$))},
	{}
};

$EnclosingMethodInfo _WithSecurityManager4concat$4_EnclosingMethodInfo_ = {
	"WithSecurityManager4concat",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _WithSecurityManager4concat$4_InnerClassesInfo_[] = {
	{"WithSecurityManager4concat$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WithSecurityManager4concat$4_ClassInfo_ = {
	$ACC_SUPER,
	"WithSecurityManager4concat$4",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_WithSecurityManager4concat$4_MethodInfo_,
	nullptr,
	&_WithSecurityManager4concat$4_EnclosingMethodInfo_,
	_WithSecurityManager4concat$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WithSecurityManager4concat"
};

$Object* allocate$WithSecurityManager4concat$4($Class* clazz) {
	return $of($alloc(WithSecurityManager4concat$4));
}

void WithSecurityManager4concat$4::init$() {
	$ClassLoader::init$();
}

WithSecurityManager4concat$4::WithSecurityManager4concat$4() {
}

$Class* WithSecurityManager4concat$4::load$($String* name, bool initialize) {
	$loadClass(WithSecurityManager4concat$4, name, initialize, &_WithSecurityManager4concat$4_ClassInfo_, allocate$WithSecurityManager4concat$4);
	return class$;
}

$Class* WithSecurityManager4concat$4::class$ = nullptr;