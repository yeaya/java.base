#include <FinalizeOverride$PrivateFinalize.h>

#include <FinalizeOverride$Base.h>
#include <FinalizeOverride.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $FinalizeOverride = ::FinalizeOverride;
using $FinalizeOverride$Base = ::FinalizeOverride$Base;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$MethodInfo _FinalizeOverride$PrivateFinalize_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(FinalizeOverride$PrivateFinalize::*)(int32_t)>(&FinalizeOverride$PrivateFinalize::init$))},
	{"f_nal_ze", "()V", nullptr, $PRIVATE, $method(static_cast<void(FinalizeOverride$PrivateFinalize::*)()>(&FinalizeOverride$PrivateFinalize::f_nal_ze))},
	{}
};

$InnerClassInfo _FinalizeOverride$PrivateFinalize_InnerClassesInfo_[] = {
	{"FinalizeOverride$PrivateFinalize", "FinalizeOverride", "PrivateFinalize", $STATIC},
	{"FinalizeOverride$Base", "FinalizeOverride", "Base", $STATIC},
	{}
};

$ClassInfo _FinalizeOverride$PrivateFinalize_ClassInfo_ = {
	$ACC_SUPER,
	"FinalizeOverride$PrivateFinalize",
	"FinalizeOverride$Base",
	nullptr,
	nullptr,
	_FinalizeOverride$PrivateFinalize_MethodInfo_,
	nullptr,
	nullptr,
	_FinalizeOverride$PrivateFinalize_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FinalizeOverride"
};

$Object* allocate$FinalizeOverride$PrivateFinalize($Class* clazz) {
	return $of($alloc(FinalizeOverride$PrivateFinalize));
}

void FinalizeOverride$PrivateFinalize::init$(int32_t v) {
	$FinalizeOverride$Base::init$(v);
}

void FinalizeOverride$PrivateFinalize::f_nal_ze() {
	$nc($System::out)->println("Error: private finalize invoked!!"_s);
	$init($FinalizeOverride);
	$FinalizeOverride::privateFinalizeInvoked = true;
	$nc($FinalizeOverride::finalizedCount)->incrementAndGet();
}

FinalizeOverride$PrivateFinalize::FinalizeOverride$PrivateFinalize() {
}

$Class* FinalizeOverride$PrivateFinalize::load$($String* name, bool initialize) {
	$loadClass(FinalizeOverride$PrivateFinalize, name, initialize, &_FinalizeOverride$PrivateFinalize_ClassInfo_, allocate$FinalizeOverride$PrivateFinalize);
	return class$;
}

$Class* FinalizeOverride$PrivateFinalize::class$ = nullptr;