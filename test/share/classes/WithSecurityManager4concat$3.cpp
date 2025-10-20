#include <WithSecurityManager4concat$3.h>

#include <WithSecurityManager4concat.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $WithSecurityManager4concat = ::WithSecurityManager4concat;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Permission = ::java::security::Permission;

$MethodInfo _WithSecurityManager4concat$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WithSecurityManager4concat$3::*)()>(&WithSecurityManager4concat$3::init$))},
	{"checkPermission", "(Ljava/security/Permission;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WithSecurityManager4concat$3_EnclosingMethodInfo_ = {
	"WithSecurityManager4concat",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _WithSecurityManager4concat$3_InnerClassesInfo_[] = {
	{"WithSecurityManager4concat$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WithSecurityManager4concat$3_ClassInfo_ = {
	$ACC_SUPER,
	"WithSecurityManager4concat$3",
	"java.lang.SecurityManager",
	nullptr,
	nullptr,
	_WithSecurityManager4concat$3_MethodInfo_,
	nullptr,
	&_WithSecurityManager4concat$3_EnclosingMethodInfo_,
	_WithSecurityManager4concat$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WithSecurityManager4concat"
};

$Object* allocate$WithSecurityManager4concat$3($Class* clazz) {
	return $of($alloc(WithSecurityManager4concat$3));
}

void WithSecurityManager4concat$3::init$() {
	$SecurityManager::init$();
}

void WithSecurityManager4concat$3::checkPermission($Permission* perm) {
	$useLocalCurrentObjectStackCache();
	$var($String, abc, "abc"_s);
	int32_t ival = $nc(perm)->hashCode();
	$var($String, full, $str({abc, "abc"_s}));
	$assign(full, $str({"abc"_s, $$str(ival), "def"_s, abc, "def"_s, abc, "def"_s, abc, "def"_s, $$str(ival), "def"_s, abc, "def"_s, abc, "def"_s, abc, 
	"def"_s, abc, "def"_s}));
}

WithSecurityManager4concat$3::WithSecurityManager4concat$3() {
}

$Class* WithSecurityManager4concat$3::load$($String* name, bool initialize) {
	$loadClass(WithSecurityManager4concat$3, name, initialize, &_WithSecurityManager4concat$3_ClassInfo_, allocate$WithSecurityManager4concat$3);
	return class$;
}

$Class* WithSecurityManager4concat$3::class$ = nullptr;