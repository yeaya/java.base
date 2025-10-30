#include <p2/PackagedNestHost2$Member.h>

#include <p2/PackagedNestHost2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PackagedNestHost2 = ::p2::PackagedNestHost2;

namespace p2 {

$MethodInfo _PackagedNestHost2$Member_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PackagedNestHost2$Member::*)()>(&PackagedNestHost2$Member::init$))},
	{}
};

$InnerClassInfo _PackagedNestHost2$Member_InnerClassesInfo_[] = {
	{"p2.PackagedNestHost2$Member", "p2.PackagedNestHost2", "Member", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PackagedNestHost2$Member_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p2.PackagedNestHost2$Member",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PackagedNestHost2$Member_MethodInfo_,
	nullptr,
	nullptr,
	_PackagedNestHost2$Member_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"p2.PackagedNestHost2"
};

$Object* allocate$PackagedNestHost2$Member($Class* clazz) {
	return $of($alloc(PackagedNestHost2$Member));
}

void PackagedNestHost2$Member::init$() {
}

PackagedNestHost2$Member::PackagedNestHost2$Member() {
}

$Class* PackagedNestHost2$Member::load$($String* name, bool initialize) {
	$loadClass(PackagedNestHost2$Member, name, initialize, &_PackagedNestHost2$Member_ClassInfo_, allocate$PackagedNestHost2$Member);
	return class$;
}

$Class* PackagedNestHost2$Member::class$ = nullptr;

} // p2