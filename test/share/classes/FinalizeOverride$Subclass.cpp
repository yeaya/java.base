#include <FinalizeOverride$Subclass.h>

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

$MethodInfo _FinalizeOverride$Subclass_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(FinalizeOverride$Subclass::*)(int32_t)>(&FinalizeOverride$Subclass::init$))},
	{"finalize", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _FinalizeOverride$Subclass_InnerClassesInfo_[] = {
	{"FinalizeOverride$Subclass", "FinalizeOverride", "Subclass", $STATIC},
	{"FinalizeOverride$Base", "FinalizeOverride", "Base", $STATIC},
	{}
};

$ClassInfo _FinalizeOverride$Subclass_ClassInfo_ = {
	$ACC_SUPER,
	"FinalizeOverride$Subclass",
	"FinalizeOverride$Base",
	nullptr,
	nullptr,
	_FinalizeOverride$Subclass_MethodInfo_,
	nullptr,
	nullptr,
	_FinalizeOverride$Subclass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FinalizeOverride"
};

$Object* allocate$FinalizeOverride$Subclass($Class* clazz) {
	return $of($alloc(FinalizeOverride$Subclass));
}

void FinalizeOverride$Subclass::init$(int32_t v) {
	$FinalizeOverride$Base::init$(v);
}

void FinalizeOverride$Subclass::finalize() {
	$init($System);
	$nc($System::out)->println("Subclass.finalize() sum += 0"_s);
	$init($FinalizeOverride);
	$nc($FinalizeOverride::finalizedCount)->incrementAndGet();
}

FinalizeOverride$Subclass::FinalizeOverride$Subclass() {
}

$Class* FinalizeOverride$Subclass::load$($String* name, bool initialize) {
	$loadClass(FinalizeOverride$Subclass, name, initialize, &_FinalizeOverride$Subclass_ClassInfo_, allocate$FinalizeOverride$Subclass);
	return class$;
}

$Class* FinalizeOverride$Subclass::class$ = nullptr;