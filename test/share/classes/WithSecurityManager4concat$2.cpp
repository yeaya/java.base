#include <WithSecurityManager4concat$2.h>

#include <WithSecurityManager4concat.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _WithSecurityManager4concat$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(WithSecurityManager4concat$2, init$, void)},
	{}
};

$EnclosingMethodInfo _WithSecurityManager4concat$2_EnclosingMethodInfo_ = {
	"WithSecurityManager4concat",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _WithSecurityManager4concat$2_InnerClassesInfo_[] = {
	{"WithSecurityManager4concat$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WithSecurityManager4concat$2_ClassInfo_ = {
	$ACC_SUPER,
	"WithSecurityManager4concat$2",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_WithSecurityManager4concat$2_MethodInfo_,
	nullptr,
	&_WithSecurityManager4concat$2_EnclosingMethodInfo_,
	_WithSecurityManager4concat$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WithSecurityManager4concat"
};

$Object* allocate$WithSecurityManager4concat$2($Class* clazz) {
	return $of($alloc(WithSecurityManager4concat$2));
}

void WithSecurityManager4concat$2::init$() {
	$ClassLoader::init$();
}

WithSecurityManager4concat$2::WithSecurityManager4concat$2() {
}

$Class* WithSecurityManager4concat$2::load$($String* name, bool initialize) {
	$loadClass(WithSecurityManager4concat$2, name, initialize, &_WithSecurityManager4concat$2_ClassInfo_, allocate$WithSecurityManager4concat$2);
	return class$;
}

$Class* WithSecurityManager4concat$2::class$ = nullptr;