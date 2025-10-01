#include <P1/PackagedNestHost.h>

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

namespace P1 {

$MethodInfo _PackagedNestHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PackagedNestHost::*)()>(&PackagedNestHost::init$))},
	{}
};

$InnerClassInfo _PackagedNestHost_InnerClassesInfo_[] = {
	{"P1.PackagedNestHost$Member", "P1.PackagedNestHost", "Member", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PackagedNestHost_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"P1.PackagedNestHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PackagedNestHost_MethodInfo_,
	nullptr,
	nullptr,
	_PackagedNestHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	"P1.PackagedNestHost$Member"
};

$Object* allocate$PackagedNestHost($Class* clazz) {
	return $of($alloc(PackagedNestHost));
}

void PackagedNestHost::init$() {
}

PackagedNestHost::PackagedNestHost() {
}

$Class* PackagedNestHost::load$($String* name, bool initialize) {
	$loadClass(PackagedNestHost, name, initialize, &_PackagedNestHost_ClassInfo_, allocate$PackagedNestHost);
	return class$;
}

$Class* PackagedNestHost::class$ = nullptr;

} // P1