#include <P1/PackagedNestHost$Member.h>

#include <P1/PackagedNestHost.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PackagedNestHost = ::P1::PackagedNestHost;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace P1 {

$MethodInfo _PackagedNestHost$Member_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PackagedNestHost$Member::*)()>(&PackagedNestHost$Member::init$))},
	{}
};

$InnerClassInfo _PackagedNestHost$Member_InnerClassesInfo_[] = {
	{"P1.PackagedNestHost$Member", "P1.PackagedNestHost", "Member", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PackagedNestHost$Member_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"P1.PackagedNestHost$Member",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PackagedNestHost$Member_MethodInfo_,
	nullptr,
	nullptr,
	_PackagedNestHost$Member_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"P1.PackagedNestHost"
};

$Object* allocate$PackagedNestHost$Member($Class* clazz) {
	return $of($alloc(PackagedNestHost$Member));
}

void PackagedNestHost$Member::init$() {
}

PackagedNestHost$Member::PackagedNestHost$Member() {
}

$Class* PackagedNestHost$Member::load$($String* name, bool initialize) {
	$loadClass(PackagedNestHost$Member, name, initialize, &_PackagedNestHost$Member_ClassInfo_, allocate$PackagedNestHost$Member);
	return class$;
}

$Class* PackagedNestHost$Member::class$ = nullptr;

} // P1