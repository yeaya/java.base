#include <SiblingIOEHandle$ProcessC.h>

#include <SiblingIOEHandle$APP.h>
#include <SiblingIOEHandle.h>
#include <java/io/IOException.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

#undef C

using $SiblingIOEHandle = ::SiblingIOEHandle;
using $SiblingIOEHandle$APP = ::SiblingIOEHandle$APP;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $Runnable = ::java::lang::Runnable;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;

$FieldInfo _SiblingIOEHandle$ProcessC_FieldInfo_[] = {
	{"barrier", "Ljava/util/concurrent/CyclicBarrier;", nullptr, $PRIVATE, $field(SiblingIOEHandle$ProcessC, barrier)},
	{"processC", "Ljava/lang/Process;", nullptr, $PRIVATE, $field(SiblingIOEHandle$ProcessC, processC)},
	{}
};

$MethodInfo _SiblingIOEHandle$ProcessC_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CyclicBarrier;)V", nullptr, $PUBLIC, $method(static_cast<void(SiblingIOEHandle$ProcessC::*)($CyclicBarrier*)>(&SiblingIOEHandle$ProcessC::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"waitFor", "()V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _SiblingIOEHandle$ProcessC_InnerClassesInfo_[] = {
	{"SiblingIOEHandle$ProcessC", "SiblingIOEHandle", "ProcessC", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SiblingIOEHandle$ProcessC_ClassInfo_ = {
	$ACC_SUPER,
	"SiblingIOEHandle$ProcessC",
	"java.lang.Object",
	"java.lang.Runnable",
	_SiblingIOEHandle$ProcessC_FieldInfo_,
	_SiblingIOEHandle$ProcessC_MethodInfo_,
	nullptr,
	nullptr,
	_SiblingIOEHandle$ProcessC_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SiblingIOEHandle"
};

$Object* allocate$SiblingIOEHandle$ProcessC($Class* clazz) {
	return $of($alloc(SiblingIOEHandle$ProcessC));
}

void SiblingIOEHandle$ProcessC::init$($CyclicBarrier* barrier) {
	$set(this, barrier, barrier);
}

void SiblingIOEHandle$ProcessC::run() {
	$useLocalCurrentObjectStackCache();
	try {
		if ($SiblingIOEHandle::waitBarrier(this->barrier)) {
			$SiblingIOEHandle::waitAbit();
			$init($SiblingIOEHandle$APP);
			$var($ProcessBuilder, builderC, $new($ProcessBuilder, $($SiblingIOEHandle::getCommandArray($($SiblingIOEHandle$APP::C->name())))));
			$set(this, processC, builderC->start());
			$SiblingIOEHandle::procClaunched = true;
		}
	} catch ($IOException& ex) {
		ex->printStackTrace();
	}
}

void SiblingIOEHandle$ProcessC::waitFor() {
	$nc(this->processC)->waitFor();
}

SiblingIOEHandle$ProcessC::SiblingIOEHandle$ProcessC() {
}

$Class* SiblingIOEHandle$ProcessC::load$($String* name, bool initialize) {
	$loadClass(SiblingIOEHandle$ProcessC, name, initialize, &_SiblingIOEHandle$ProcessC_ClassInfo_, allocate$SiblingIOEHandle$ProcessC);
	return class$;
}

$Class* SiblingIOEHandle$ProcessC::class$ = nullptr;