#include <SecurityRace.h>

#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <jcpp.h>

#undef GETPROPERTY_LOOPS
#undef GET_TIMING_LOOPS
#undef MAX_MILLISECONDS
#undef SET_TIMING_LOOPS
#undef STRESS_MILLISECONDS
#undef TIMING_TRIALS
#undef WARMUP_LOOPS

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;

$FieldInfo _SecurityRace_FieldInfo_[] = {
	{"WARMUP_LOOPS", "I", nullptr, $STATIC | $FINAL, $constField(SecurityRace, WARMUP_LOOPS)},
	{"TIMING_TRIALS", "I", nullptr, $STATIC | $FINAL, $constField(SecurityRace, TIMING_TRIALS)},
	{"STRESS_MILLISECONDS", "I", nullptr, $STATIC | $FINAL, $constField(SecurityRace, STRESS_MILLISECONDS)},
	{"SET_TIMING_LOOPS", "I", nullptr, $STATIC | $FINAL, $constField(SecurityRace, SET_TIMING_LOOPS)},
	{"MAX_MILLISECONDS", "I", nullptr, $STATIC, $staticField(SecurityRace, MAX_MILLISECONDS)},
	{"GET_TIMING_LOOPS", "I", nullptr, $STATIC | $FINAL, $constField(SecurityRace, GET_TIMING_LOOPS)},
	{"stopthreads", "Z", nullptr, $STATIC | $VOLATILE, $staticField(SecurityRace, stopthreads)},
	{"GETPROPERTY_LOOPS", "I", nullptr, $STATIC | $FINAL, $constField(SecurityRace, GETPROPERTY_LOOPS)},
	{"sm", "Ljava/lang/SecurityManager;", nullptr, $STATIC, $staticField(SecurityRace, sm)},
	{}
};

$MethodInfo _SecurityRace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SecurityRace::*)()>(&SecurityRace::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SecurityRace::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"timeit", "(III)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&SecurityRace::timeit))},
	{}
};

$ClassInfo _SecurityRace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SecurityRace",
	"java.lang.Object",
	"java.lang.Runnable",
	_SecurityRace_FieldInfo_,
	_SecurityRace_MethodInfo_
};

$Object* allocate$SecurityRace($Class* clazz) {
	return $of($alloc(SecurityRace));
}

int32_t SecurityRace::MAX_MILLISECONDS = 0;
$volatile(bool) SecurityRace::stopthreads = false;
$SecurityManager* SecurityRace::sm = nullptr;

void SecurityRace::init$() {
}

void SecurityRace::main($StringArray* argv) {
	$init(SecurityRace);
	$useLocalCurrentObjectStackCache();
	$var($String, s, nullptr);
	if ($nc(argv)->length > 0) {
		if ($nc(argv->get(0))->equals("time"_s)) {
			for (int32_t i = 0; i < SecurityRace::WARMUP_LOOPS; ++i) {
				timeit(1, 1, 1);
			}
			$nc($System::out)->println("boo"_s);
			timeit(SecurityRace::TIMING_TRIALS, SecurityRace::GET_TIMING_LOOPS, SecurityRace::SET_TIMING_LOOPS);
		} else if ($nc(argv->get(0))->equals("stress"_s)) {
			SecurityRace::MAX_MILLISECONDS = SecurityRace::STRESS_MILLISECONDS;
		} else {
			$throwNew($RuntimeException, $$str({"SecurityRace: "_s, argv->get(0), " argument to main not recognized"_s}));
		}
	}
	int64_t start = $System::currentTimeMillis();
	int64_t end = start + SecurityRace::MAX_MILLISECONDS;
	($$new($Thread, static_cast<$Runnable*>($$new(SecurityRace))))->start();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				do {
					if (SecurityRace::stopthreads) {
						$throwNew($RuntimeException, "SecurityRace failed with NPE"_s);
					}
					for (int32_t i = 0; i < SecurityRace::GETPROPERTY_LOOPS; ++i) {
						$assign(s, $System::getProperty("java.version"_s));
					}
				} while ($System::currentTimeMillis() < end);
			} catch ($NullPointerException& e) {
				$throwNew($RuntimeException, "SecurityRace failed with NPE"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			SecurityRace::stopthreads = true;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SecurityRace::run() {
	$beforeCallerSensitive();
	try {
		while (true) {
			if (SecurityRace::stopthreads) {
				return;
			}
			$System::setSecurityManager(SecurityRace::sm);
			$System::setSecurityManager(nullptr);
		}
	} catch ($NullPointerException& e) {
		SecurityRace::stopthreads = true;
		return;
	}
}

void SecurityRace::timeit(int32_t timing_trials, int32_t get_timing_loops, int32_t set_timing_loops) {
	$init(SecurityRace);
	$beforeCallerSensitive();
	try {
		int64_t start = 0;
		for (int32_t j = 0; j < timing_trials; ++j) {
			start = $System::nanoTime();
			for (int32_t i = 0; i < get_timing_loops; ++i) {
				$assignStatic(SecurityRace::sm, $System::getSecurityManager());
			}
			if (timing_trials > 1) {
				$nc($System::out)->println((float)($System::nanoTime() - start) / (float)get_timing_loops);
			}
		}
		for (int32_t j = 0; j < timing_trials; ++j) {
			start = $System::nanoTime();
			for (int32_t i = 0; i < set_timing_loops; ++i) {
				$System::setSecurityManager(SecurityRace::sm);
			}
			if (timing_trials > 1) {
				$nc($System::out)->println((float)($System::nanoTime() - start) / (float)set_timing_loops);
			}
		}
		return;
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $$str({"SecurityRace got unexpected: "_s, e}));
	}
}

void clinit$SecurityRace($Class* class$) {
	SecurityRace::MAX_MILLISECONDS = 100;
	SecurityRace::stopthreads = false;
	$assignStatic(SecurityRace::sm, $new($SecurityManager));
}

SecurityRace::SecurityRace() {
}

$Class* SecurityRace::load$($String* name, bool initialize) {
	$loadClass(SecurityRace, name, initialize, &_SecurityRace_ClassInfo_, clinit$SecurityRace, allocate$SecurityRace);
	return class$;
}

$Class* SecurityRace::class$ = nullptr;