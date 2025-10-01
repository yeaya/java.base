#include <P2/PackagedNestHost2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace P2 {

$MethodInfo _PackagedNestHost2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PackagedNestHost2::*)()>(&PackagedNestHost2::init$))},
	{}
};

$InnerClassInfo _PackagedNestHost2_InnerClassesInfo_[] = {
	{"P2.PackagedNestHost2$Member", "P2.PackagedNestHost2", "Member", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PackagedNestHost2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"P2.PackagedNestHost2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PackagedNestHost2_MethodInfo_,
	nullptr,
	nullptr,
	_PackagedNestHost2_InnerClassesInfo_,
	nullptr,
	nullptr,
	"P2.PackagedNestHost2$Member"
};

$Object* allocate$PackagedNestHost2($Class* clazz) {
	return $of($alloc(PackagedNestHost2));
}

void PackagedNestHost2::init$() {
}

PackagedNestHost2::PackagedNestHost2() {
}

$Class* PackagedNestHost2::load$($String* name, bool initialize) {
	$loadClass(PackagedNestHost2, name, initialize, &_PackagedNestHost2_ClassInfo_, allocate$PackagedNestHost2);
	return class$;
}

$Class* PackagedNestHost2::class$ = nullptr;

} // P2