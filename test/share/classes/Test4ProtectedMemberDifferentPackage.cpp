#include <Test4ProtectedMemberDifferentPackage.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Test4ProtectedMemberDifferentPackage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4ProtectedMemberDifferentPackage::*)()>(&Test4ProtectedMemberDifferentPackage::init$))},
	{}
};

$ClassInfo _Test4ProtectedMemberDifferentPackage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4ProtectedMemberDifferentPackage",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test4ProtectedMemberDifferentPackage_MethodInfo_
};

$Object* allocate$Test4ProtectedMemberDifferentPackage($Class* clazz) {
	return $of($alloc(Test4ProtectedMemberDifferentPackage));
}

void Test4ProtectedMemberDifferentPackage::init$() {
}

Test4ProtectedMemberDifferentPackage::Test4ProtectedMemberDifferentPackage() {
}

$Class* Test4ProtectedMemberDifferentPackage::load$($String* name, bool initialize) {
	$loadClass(Test4ProtectedMemberDifferentPackage, name, initialize, &_Test4ProtectedMemberDifferentPackage_ClassInfo_, allocate$Test4ProtectedMemberDifferentPackage);
	return class$;
}

$Class* Test4ProtectedMemberDifferentPackage::class$ = nullptr;