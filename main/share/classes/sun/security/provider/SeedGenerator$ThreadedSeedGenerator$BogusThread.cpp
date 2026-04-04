#include <sun/security/provider/SeedGenerator$ThreadedSeedGenerator$BogusThread.h>
#include <sun/security/provider/SeedGenerator$ThreadedSeedGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SeedGenerator$ThreadedSeedGenerator$BogusThread, init$, void)},
		{"run", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SeedGenerator$ThreadedSeedGenerator$BogusThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SeedGenerator$ThreadedSeedGenerator", "sun.security.provider.SeedGenerator", "ThreadedSeedGenerator", $PRIVATE | $STATIC},
		{"sun.security.provider.SeedGenerator$ThreadedSeedGenerator$BogusThread", "sun.security.provider.SeedGenerator$ThreadedSeedGenerator", "BogusThread", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.SeedGenerator$ThreadedSeedGenerator$BogusThread",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.SeedGenerator"
	};
	$loadClass(SeedGenerator$ThreadedSeedGenerator$BogusThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SeedGenerator$ThreadedSeedGenerator$BogusThread);
	});
	return class$;
}

$Class* SeedGenerator$ThreadedSeedGenerator$BogusThread::class$ = nullptr;

		} // provider
	} // security
} // sun