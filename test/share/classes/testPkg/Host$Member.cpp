#include <testPkg/Host$Member.h>

#include <testPkg/Host.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Host = ::testPkg::Host;

namespace testPkg {

$MethodInfo _Host$Member_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Host$Member::*)()>(&Host$Member::init$))},
	{}
};

$InnerClassInfo _Host$Member_InnerClassesInfo_[] = {
	{"testPkg.Host$Member", "testPkg.Host", "Member", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Host$Member_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"testPkg.Host$Member",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Host$Member_MethodInfo_,
	nullptr,
	nullptr,
	_Host$Member_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"testPkg.Host"
};

$Object* allocate$Host$Member($Class* clazz) {
	return $of($alloc(Host$Member));
}

void Host$Member::init$() {
}

Host$Member::Host$Member() {
}

$Class* Host$Member::load$($String* name, bool initialize) {
	$loadClass(Host$Member, name, initialize, &_Host$Member_ClassInfo_, allocate$Host$Member);
	return class$;
}

$Class* Host$Member::class$ = nullptr;

} // testPkg