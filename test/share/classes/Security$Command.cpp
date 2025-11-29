#include <Security$Command.h>

#include <Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Security$Command_MethodInfo_[] = {
	{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _Security$Command_InnerClassesInfo_[] = {
	{"Security$Command", "Security", "Command", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Security$Command_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"Security$Command",
	nullptr,
	nullptr,
	nullptr,
	_Security$Command_MethodInfo_,
	nullptr,
	nullptr,
	_Security$Command_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Security"
};

$Object* allocate$Security$Command($Class* clazz) {
	return $of($alloc(Security$Command));
}

$Class* Security$Command::load$($String* name, bool initialize) {
	$loadClass(Security$Command, name, initialize, &_Security$Command_ClassInfo_, allocate$Security$Command);
	return class$;
}

$Class* Security$Command::class$ = nullptr;