#include <FinalizeOverride$NoOverride.h>

#include <FinalizeOverride$PrivateFinalize.h>
#include <FinalizeOverride.h>
#include <jcpp.h>

using $FinalizeOverride$PrivateFinalize = ::FinalizeOverride$PrivateFinalize;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _FinalizeOverride$NoOverride_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(FinalizeOverride$NoOverride::*)(int32_t)>(&FinalizeOverride$NoOverride::init$))},
	{}
};

$InnerClassInfo _FinalizeOverride$NoOverride_InnerClassesInfo_[] = {
	{"FinalizeOverride$NoOverride", "FinalizeOverride", "NoOverride", $STATIC},
	{"FinalizeOverride$PrivateFinalize", "FinalizeOverride", "PrivateFinalize", $STATIC},
	{}
};

$ClassInfo _FinalizeOverride$NoOverride_ClassInfo_ = {
	$ACC_SUPER,
	"FinalizeOverride$NoOverride",
	"FinalizeOverride$PrivateFinalize",
	nullptr,
	nullptr,
	_FinalizeOverride$NoOverride_MethodInfo_,
	nullptr,
	nullptr,
	_FinalizeOverride$NoOverride_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FinalizeOverride"
};

$Object* allocate$FinalizeOverride$NoOverride($Class* clazz) {
	return $of($alloc(FinalizeOverride$NoOverride));
}

void FinalizeOverride$NoOverride::init$(int32_t v) {
	$FinalizeOverride$PrivateFinalize::init$(v);
}

FinalizeOverride$NoOverride::FinalizeOverride$NoOverride() {
}

$Class* FinalizeOverride$NoOverride::load$($String* name, bool initialize) {
	$loadClass(FinalizeOverride$NoOverride, name, initialize, &_FinalizeOverride$NoOverride_ClassInfo_, allocate$FinalizeOverride$NoOverride);
	return class$;
}

$Class* FinalizeOverride$NoOverride::class$ = nullptr;