#include <FinalizeOverride$PublicFinalize.h>

#include <FinalizeOverride$Base.h>
#include <FinalizeOverride.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $FinalizeOverride = ::FinalizeOverride;
using $FinalizeOverride$Base = ::FinalizeOverride$Base;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$MethodInfo _FinalizeOverride$PublicFinalize_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(FinalizeOverride$PublicFinalize::*)(int32_t)>(&FinalizeOverride$PublicFinalize::init$))},
	{"finalize", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FinalizeOverride$PublicFinalize_InnerClassesInfo_[] = {
	{"FinalizeOverride$PublicFinalize", "FinalizeOverride", "PublicFinalize", $STATIC},
	{"FinalizeOverride$Base", "FinalizeOverride", "Base", $STATIC},
	{}
};

$ClassInfo _FinalizeOverride$PublicFinalize_ClassInfo_ = {
	$ACC_SUPER,
	"FinalizeOverride$PublicFinalize",
	"FinalizeOverride$Base",
	nullptr,
	nullptr,
	_FinalizeOverride$PublicFinalize_MethodInfo_,
	nullptr,
	nullptr,
	_FinalizeOverride$PublicFinalize_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FinalizeOverride"
};

$Object* allocate$FinalizeOverride$PublicFinalize($Class* clazz) {
	return $of($alloc(FinalizeOverride$PublicFinalize));
}

void FinalizeOverride$PublicFinalize::init$(int32_t v) {
	$FinalizeOverride$Base::init$(v);
}

void FinalizeOverride$PublicFinalize::finalize() {
	$useLocalCurrentObjectStackCache();
	$init($FinalizeOverride);
	$nc($FinalizeOverride::finalizedSum)->addAndGet(this->value * 100);
	$init($System);
	$nc($System::out)->println($$str({"PublicFinalize.finalize() sum += "_s, $$str(called()), "+"_s, $$str(this->value), "*100"_s}));
	$nc($FinalizeOverride::finalizedCount)->incrementAndGet();
}

FinalizeOverride$PublicFinalize::FinalizeOverride$PublicFinalize() {
}

$Class* FinalizeOverride$PublicFinalize::load$($String* name, bool initialize) {
	$loadClass(FinalizeOverride$PublicFinalize, name, initialize, &_FinalizeOverride$PublicFinalize_ClassInfo_, allocate$FinalizeOverride$PublicFinalize);
	return class$;
}

$Class* FinalizeOverride$PublicFinalize::class$ = nullptr;