#include <FinalizeOverride$Base.h>

#include <FinalizeOverride.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $FinalizeOverride = ::FinalizeOverride;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$FieldInfo _FinalizeOverride$Base_FieldInfo_[] = {
	{"value", "I", nullptr, $PROTECTED, $field(FinalizeOverride$Base, value)},
	{}
};

$MethodInfo _FinalizeOverride$Base_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(FinalizeOverride$Base::*)(int32_t)>(&FinalizeOverride$Base::init$))},
	{"called", "()I", nullptr, 0},
	{"finalize", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _FinalizeOverride$Base_InnerClassesInfo_[] = {
	{"FinalizeOverride$Base", "FinalizeOverride", "Base", $STATIC},
	{}
};

$ClassInfo _FinalizeOverride$Base_ClassInfo_ = {
	$ACC_SUPER,
	"FinalizeOverride$Base",
	"java.lang.Object",
	nullptr,
	_FinalizeOverride$Base_FieldInfo_,
	_FinalizeOverride$Base_MethodInfo_,
	nullptr,
	nullptr,
	_FinalizeOverride$Base_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FinalizeOverride"
};

$Object* allocate$FinalizeOverride$Base($Class* clazz) {
	return $of($alloc(FinalizeOverride$Base));
}

void FinalizeOverride$Base::init$(int32_t v) {
	this->value = v;
}

int32_t FinalizeOverride$Base::called() {
	$init($FinalizeOverride);
	$nc($FinalizeOverride::finalizedSum)->addAndGet(this->value);
	return this->value;
}

void FinalizeOverride$Base::finalize() {
	$init($System);
	$nc($System::out)->println($$str({"Base.finalize() sum += "_s, $$str(called())}));
	$init($FinalizeOverride);
	$nc($FinalizeOverride::finalizedCount)->incrementAndGet();
}

FinalizeOverride$Base::FinalizeOverride$Base() {
}

$Class* FinalizeOverride$Base::load$($String* name, bool initialize) {
	$loadClass(FinalizeOverride$Base, name, initialize, &_FinalizeOverride$Base_ClassInfo_, allocate$FinalizeOverride$Base);
	return class$;
}

$Class* FinalizeOverride$Base::class$ = nullptr;