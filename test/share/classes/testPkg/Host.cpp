#include <testPkg/Host.h>

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

namespace testPkg {

$MethodInfo _Host_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Host::*)()>(&Host::init$))},
	{}
};

$InnerClassInfo _Host_InnerClassesInfo_[] = {
	{"testPkg.Host$Member", "testPkg.Host", "Member", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Host_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"testPkg.Host",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Host_MethodInfo_,
	nullptr,
	nullptr,
	_Host_InnerClassesInfo_,
	nullptr,
	nullptr,
	"testPkg.Host$Member"
};

$Object* allocate$Host($Class* clazz) {
	return $of($alloc(Host));
}

void Host::init$() {
}

Host::Host() {
}

$Class* Host::load$($String* name, bool initialize) {
	$loadClass(Host, name, initialize, &_Host_ClassInfo_, allocate$Host);
	return class$;
}

$Class* Host::class$ = nullptr;

} // testPkg