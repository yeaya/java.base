#include <TypeCheckMicroBenchmark.h>
#include <TypeCheckMicroBenchmark$1.h>
#include <TypeCheckMicroBenchmark$2.h>
#include <TypeCheckMicroBenchmark$3.h>
#include <TypeCheckMicroBenchmark$4.h>
#include <TypeCheckMicroBenchmark$5.h>
#include <TypeCheckMicroBenchmark$6.h>
#include <TypeCheckMicroBenchmark$Job.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Random.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $TypeCheckMicroBenchmark$1 = ::TypeCheckMicroBenchmark$1;
using $TypeCheckMicroBenchmark$2 = ::TypeCheckMicroBenchmark$2;
using $TypeCheckMicroBenchmark$3 = ::TypeCheckMicroBenchmark$3;
using $TypeCheckMicroBenchmark$4 = ::TypeCheckMicroBenchmark$4;
using $TypeCheckMicroBenchmark$5 = ::TypeCheckMicroBenchmark$5;
using $TypeCheckMicroBenchmark$6 = ::TypeCheckMicroBenchmark$6;
using $TypeCheckMicroBenchmark$Job = ::TypeCheckMicroBenchmark$Job;
using $TypeCheckMicroBenchmark$JobArray = $Array<TypeCheckMicroBenchmark$Job>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Random = ::java::util::Random;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $Pattern = ::java::util::regex::Pattern;

void TypeCheckMicroBenchmark::init$() {
}

void TypeCheckMicroBenchmark::collectAllGarbage() {
	$var($CountDownLatch, drained, $new($CountDownLatch, 1));
	try {
		$System::gc();
		$new($TypeCheckMicroBenchmark$1, drained);
		$System::gc();
		drained->await();
		$System::gc();
	} catch ($InterruptedException& e) {
		$throwNew($Error, e);
	}
}

$longs* TypeCheckMicroBenchmark::time0($TypeCheckMicroBenchmark$JobArray* jobs) {
	int64_t warmupNanos = (int64_t)1 * (int64_t)1000 * (int64_t)1000 * (int64_t)1000;
	$var($longs, nanoss, $new($longs, $nc(jobs)->length));
	for (int32_t i = 0; i < jobs->length; ++i) {
		collectAllGarbage();
		int64_t t0 = $System::nanoTime();
		int64_t t = 0;
		int32_t j = 0;
		do {
			$nc(jobs->get(i))->work();
			++j;
		} while ((t = $System::nanoTime() - t0) < warmupNanos);
		nanoss->set(i, $div(t, j));
	}
	return nanoss;
}

void TypeCheckMicroBenchmark::time($TypeCheckMicroBenchmark$JobArray* jobs) {
	$useLocalObjectStack();
	$var($longs, warmup, time0(jobs));
	$var($longs, nanoss, time0(jobs));
	$var($longs, milliss, $new($longs, $nc(jobs)->length));
	$var($doubles, ratios, $new($doubles, jobs->length));
	$var($String, nameHeader, "Method"_s);
	$var($String, millisHeader, "Millis"_s);
	$var($String, ratioHeader, "Ratio"_s);
	int32_t nameWidth = nameHeader->length();
	int32_t millisWidth = millisHeader->length();
	int32_t ratioWidth = ratioHeader->length();
	for (int32_t i = 0; i < jobs->length; ++i) {
		nameWidth = $Math::max(nameWidth, $$nc($nc(jobs->get(i))->name())->length());
		milliss->set(i, $div($nc(nanoss)->get(i), ((int64_t)1000 * (int64_t)1000)));
		millisWidth = $Math::max(millisWidth, $$nc($String::format("%d"_s, $$new($ObjectArray, {$($Long::valueOf(milliss->get(i)))})))->length());
		ratios->set(i, (double)nanoss->get(i) / (double)nanoss->get(0));
		ratioWidth = $Math::max(ratioWidth, $$nc($String::format("%.3f"_s, $$new($ObjectArray, {$($Double::valueOf(ratios->get(i)))})))->length());
	}
	$var($String, format, $String::format("%%-%ds %%%dd %%%d.3f%%n"_s, $$new($ObjectArray, {
		$($Integer::valueOf(nameWidth)),
		$($Integer::valueOf(millisWidth)),
		$($Integer::valueOf(ratioWidth))
	})));
	$var($String, headerFormat, $String::format("%%-%ds %%%ds %%%ds%%n"_s, $$new($ObjectArray, {
		$($Integer::valueOf(nameWidth)),
		$($Integer::valueOf(millisWidth)),
		$($Integer::valueOf(ratioWidth))
	})));
	$nc($System::out)->printf(headerFormat, $$new($ObjectArray, {
		"Method"_s,
		"Millis"_s,
		"Ratio"_s
	}));
	for (int32_t i = 0; i < jobs->length; ++i) {
		$System::out->printf(format, $$new($ObjectArray, {
			$($nc(jobs->get(i))->name()),
			$($Long::valueOf(milliss->get(i))),
			$($Double::valueOf(ratios->get(i)))
		}));
	}
}

$String* TypeCheckMicroBenchmark::keywordValue($StringArray* args, $String* keyword) {
	$useLocalObjectStack();
	$var($StringArray, arr$, args);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($String, arg, arr$->get(i$));
		if ($nc(arg)->startsWith(keyword)) {
			return arg->substring($nc(keyword)->length() + 1);
		}
	}
	return nullptr;
}

int32_t TypeCheckMicroBenchmark::intArg($StringArray* args, $String* keyword, int32_t defaultValue) {
	$var($String, val, keywordValue(args, keyword));
	return val == nullptr ? defaultValue : $Integer::parseInt(val);
}

$Pattern* TypeCheckMicroBenchmark::patternArg($StringArray* args, $String* keyword) {
	$var($String, val, keywordValue(args, keyword));
	return val == nullptr ? ($Pattern*)nullptr : $Pattern::compile(val);
}

$TypeCheckMicroBenchmark$JobArray* TypeCheckMicroBenchmark::filter($Pattern* filter, $TypeCheckMicroBenchmark$JobArray* jobs) {
	$useLocalObjectStack();
	if (filter == nullptr) {
		return jobs;
	}
	$var($TypeCheckMicroBenchmark$JobArray, newJobs, $new($TypeCheckMicroBenchmark$JobArray, $nc(jobs)->length));
	int32_t n = 0;
	{
		$var($TypeCheckMicroBenchmark$JobArray, arr$, jobs);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($TypeCheckMicroBenchmark$Job, job, arr$->get(i$));
			if ($$nc($nc(filter)->matcher($($nc(job)->name())))->find()) {
				newJobs->set(n++, job);
			}
		}
	}
	$var($TypeCheckMicroBenchmark$JobArray, ret, $new($TypeCheckMicroBenchmark$JobArray, n));
	$System::arraycopy(newJobs, 0, ret, 0, n);
	return ret;
}

void TypeCheckMicroBenchmark::main($StringArray* args) {
	$useLocalObjectStack();
	int32_t iterations = intArg(args, "iterations"_s, 30000);
	int32_t size = intArg(args, "size"_s, 1000);
	$var($Pattern, filter, patternArg(args, "filter"_s));
	$var($List, list, $new($ArrayList));
	$var($Random, rnd, $new($Random));
	for (int32_t i = 0; i < size; ++i) {
		list->add($($Integer::valueOf(rnd->nextInt())));
	}
	$Class* klazz = $Integer::class$;
	$var($TypeCheckMicroBenchmark$JobArray, jobs, $new($TypeCheckMicroBenchmark$JobArray, {
		$$new($TypeCheckMicroBenchmark$2, "toArray(T[])"_s, iterations, list),
		$$new($TypeCheckMicroBenchmark$3, "isInstance"_s, iterations, list, klazz),
		$$new($TypeCheckMicroBenchmark$4, "Class.cast"_s, iterations, list, klazz),
		$$new($TypeCheckMicroBenchmark$5, "write into array"_s, iterations, list),
		$$new($TypeCheckMicroBenchmark$6, "write into dynamic array"_s, iterations, list, klazz)
	}));
	time($(TypeCheckMicroBenchmark::filter(filter, jobs)));
}

TypeCheckMicroBenchmark::TypeCheckMicroBenchmark() {
}

$Class* TypeCheckMicroBenchmark::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TypeCheckMicroBenchmark, init$, void)},
		{"collectAllGarbage", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeCheckMicroBenchmark, collectAllGarbage, void)},
		{"filter", "(Ljava/util/regex/Pattern;[LTypeCheckMicroBenchmark$Job;)[LTypeCheckMicroBenchmark$Job;", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeCheckMicroBenchmark, filter, $TypeCheckMicroBenchmark$JobArray*, $Pattern*, $TypeCheckMicroBenchmark$JobArray*)},
		{"intArg", "([Ljava/lang/String;Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeCheckMicroBenchmark, intArg, int32_t, $StringArray*, $String*, int32_t)},
		{"keywordValue", "([Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeCheckMicroBenchmark, keywordValue, $String*, $StringArray*, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeCheckMicroBenchmark, main, void, $StringArray*), "java.lang.Throwable"},
		{"patternArg", "([Ljava/lang/String;Ljava/lang/String;)Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeCheckMicroBenchmark, patternArg, $Pattern*, $StringArray*, $String*)},
		{"time", "([LTypeCheckMicroBenchmark$Job;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(TypeCheckMicroBenchmark, time, void, $TypeCheckMicroBenchmark$JobArray*), "java.lang.Throwable"},
		{"time0", "([LTypeCheckMicroBenchmark$Job;)[J", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(TypeCheckMicroBenchmark, time0, $longs*, $TypeCheckMicroBenchmark$JobArray*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
		{"TypeCheckMicroBenchmark$6", nullptr, nullptr, 0},
		{"TypeCheckMicroBenchmark$5", nullptr, nullptr, 0},
		{"TypeCheckMicroBenchmark$4", nullptr, nullptr, 0},
		{"TypeCheckMicroBenchmark$3", nullptr, nullptr, 0},
		{"TypeCheckMicroBenchmark$2", nullptr, nullptr, 0},
		{"TypeCheckMicroBenchmark$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TypeCheckMicroBenchmark",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TypeCheckMicroBenchmark$Job,TypeCheckMicroBenchmark$6,TypeCheckMicroBenchmark$5,TypeCheckMicroBenchmark$4,TypeCheckMicroBenchmark$3,TypeCheckMicroBenchmark$2,TypeCheckMicroBenchmark$1"
	};
	$loadClass(TypeCheckMicroBenchmark, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeCheckMicroBenchmark);
	});
	return class$;
}

$Class* TypeCheckMicroBenchmark::class$ = nullptr;