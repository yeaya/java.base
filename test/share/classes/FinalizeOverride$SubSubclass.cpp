#include <FinalizeOverride$SubSubclass.h>

#include <FinalizeOverride$Base.h>
#include <FinalizeOverride$Subclass.h>
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
using $FinalizeOverride$Subclass = ::FinalizeOverride$Subclass;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$MethodInfo _FinalizeOverride$SubSubclass_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(FinalizeOverride$SubSubclass::*)(int32_t)>(&FinalizeOverride$SubSubclass::init$))},
	{"finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{}
};

$InnerClassInfo _FinalizeOverride$SubSubclass_InnerClassesInfo_[] = {
	{"FinalizeOverride$SubSubclass", "FinalizeOverride", "SubSubclass", $STATIC},
	{"FinalizeOverride$Subclass", "FinalizeOverride", "Subclass", $STATIC},
	{}
};

$ClassInfo _FinalizeOverride$SubSubclass_ClassInfo_ = {
	$ACC_SUPER,
	"FinalizeOverride$SubSubclass",
	"FinalizeOverride$Subclass",
	nullptr,
	nullptr,
	_FinalizeOverride$SubSubclass_MethodInfo_,
	nullptr,
	nullptr,
	_FinalizeOverride$SubSubclass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FinalizeOverride"
};

$Object* allocate$FinalizeOverride$SubSubclass($Class* clazz) {
	return $of($alloc(FinalizeOverride$SubSubclass));
}

void FinalizeOverride$SubSubclass::init$(int32_t v) {
	$FinalizeOverride$Subclass::init$(v);
}

void FinalizeOverride$SubSubclass::finalize() {
	$useLocalCurrentObjectStackCache();
	$init($FinalizeOverride);
	$nc($FinalizeOverride::finalizedSum)->addAndGet(this->value);
	$init($System);
	$nc($System::out)->println($$str({"SubSubclass.finalize() sum +="_s, $$str(this->value)}));
	$nc($FinalizeOverride::finalizedCount)->incrementAndGet();
}

FinalizeOverride$SubSubclass::FinalizeOverride$SubSubclass() {
}

$Class* FinalizeOverride$SubSubclass::load$($String* name, bool initialize) {
	$loadClass(FinalizeOverride$SubSubclass, name, initialize, &_FinalizeOverride$SubSubclass_ClassInfo_, allocate$FinalizeOverride$SubSubclass);
	return class$;
}

$Class* FinalizeOverride$SubSubclass::class$ = nullptr;