#include <sun/security/provider/SeedGenerator$ThreadedSeedGenerator$BogusThread.h>

#include <sun/security/provider/SeedGenerator$ThreadedSeedGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SeedGenerator$ThreadedSeedGenerator = ::sun::security::provider::SeedGenerator$ThreadedSeedGenerator;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _SeedGenerator$ThreadedSeedGenerator$BogusThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SeedGenerator$ThreadedSeedGenerator$BogusThread::*)()>(&SeedGenerator$ThreadedSeedGenerator$BogusThread::init$))},
	{"run", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _SeedGenerator$ThreadedSeedGenerator$BogusThread_InnerClassesInfo_[] = {
	{"sun.security.provider.SeedGenerator$ThreadedSeedGenerator", "sun.security.provider.SeedGenerator", "ThreadedSeedGenerator", $PRIVATE | $STATIC},
	{"sun.security.provider.SeedGenerator$ThreadedSeedGenerator$BogusThread", "sun.security.provider.SeedGenerator$ThreadedSeedGenerator", "BogusThread", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SeedGenerator$ThreadedSeedGenerator$BogusThread_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.SeedGenerator$ThreadedSeedGenerator$BogusThread",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_SeedGenerator$ThreadedSeedGenerator$BogusThread_MethodInfo_,
	nullptr,
	nullptr,
	_SeedGenerator$ThreadedSeedGenerator$BogusThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SeedGenerator"
};

$Object* allocate$SeedGenerator$ThreadedSeedGenerator$BogusThread($Class* clazz) {
	return $of($alloc(SeedGenerator$ThreadedSeedGenerator$BogusThread));
}

void SeedGenerator$ThreadedSeedGenerator$BogusThread::init$() {
}

void SeedGenerator$ThreadedSeedGenerator$BogusThread::run() {
	try {
		for (int32_t i = 0; i < 5; ++i) {
			$Thread::sleep(50);
		}
	} catch ($Exception& e) {
	}
}

SeedGenerator$ThreadedSeedGenerator$BogusThread::SeedGenerator$ThreadedSeedGenerator$BogusThread() {
}

$Class* SeedGenerator$ThreadedSeedGenerator$BogusThread::load$($String* name, bool initialize) {
	$loadClass(SeedGenerator$ThreadedSeedGenerator$BogusThread, name, initialize, &_SeedGenerator$ThreadedSeedGenerator$BogusThread_ClassInfo_, allocate$SeedGenerator$ThreadedSeedGenerator$BogusThread);
	return class$;
}

$Class* SeedGenerator$ThreadedSeedGenerator$BogusThread::class$ = nullptr;

		} // provider
	} // security
} // sun