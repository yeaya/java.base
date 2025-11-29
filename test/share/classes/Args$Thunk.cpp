#include <Args$Thunk.h>

#include <Args.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Args$Thunk_MethodInfo_[] = {
	{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _Args$Thunk_InnerClassesInfo_[] = {
	{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Args$Thunk_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"Args$Thunk",
	nullptr,
	nullptr,
	nullptr,
	_Args$Thunk_MethodInfo_,
	nullptr,
	nullptr,
	_Args$Thunk_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Args"
};

$Object* allocate$Args$Thunk($Class* clazz) {
	return $of($alloc(Args$Thunk));
}

$Class* Args$Thunk::load$($String* name, bool initialize) {
	$loadClass(Args$Thunk, name, initialize, &_Args$Thunk_ClassInfo_, allocate$Args$Thunk);
	return class$;
}

$Class* Args$Thunk::class$ = nullptr;