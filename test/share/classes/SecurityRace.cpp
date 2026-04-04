#include <SecurityRace.h>
#include <java/lang/SecurityManager.h>
#include <jcpp.h>

#undef GETPROPERTY_LOOPS
#undef GET_TIMING_LOOPS
#undef MAX_MILLISECONDS
#undef SET_TIMING_LOOPS
#undef STRESS_MILLISECONDS
#undef TIMING_TRIALS
#undef WARMUP_LOOPS

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;

int32_t SecurityRace::MAX_MILLISECONDS = 0;
$volatile(bool) SecurityRace::stopthreads = false;
$SecurityManager* SecurityRace::sm = nullptr;

void SecurityRace::init$() {
}

void SecurityRace::main($StringArray* argv) {
	$init(SecurityRace);
	$useLocalObjectStack();
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
	($$new($Thread, $$new(SecurityRace)))->start();
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

void SecurityRace::clinit$($Class* clazz) {
	SecurityRace::MAX_MILLISECONDS = 100;
	SecurityRace::stopthreads = false;
	$assignStatic(SecurityRace::sm, $new($SecurityManager));
}

SecurityRace::SecurityRace() {
}

$Class* SecurityRace::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SecurityRace, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SecurityRace, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SecurityRace, run, void)},
		{"timeit", "(III)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SecurityRace, timeit, void, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SecurityRace",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SecurityRace, name, initialize, &classInfo$$, SecurityRace::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityRace);
	});
	return class$;
}

$Class* SecurityRace::class$ = nullptr;