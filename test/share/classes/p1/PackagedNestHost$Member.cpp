#include <p1/PackagedNestHost$Member.h>

#include <p1/PackagedNestHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PackagedNestHost = ::p1::PackagedNestHost;

namespace p1 {

$MethodInfo _PackagedNestHost$Member_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PackagedNestHost$Member::*)()>(&PackagedNestHost$Member::init$))},
	{}
};

$InnerClassInfo _PackagedNestHost$Member_InnerClassesInfo_[] = {
	{"p1.PackagedNestHost$Member", "p1.PackagedNestHost", "Member", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PackagedNestHost$Member_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p1.PackagedNestHost$Member",
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
	"p1.PackagedNestHost"
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

} // p1