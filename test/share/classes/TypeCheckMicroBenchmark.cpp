#include <TypeCheckMicroBenchmark.h>

#include <TypeCheckMicroBenchmark$1.h>
#include <TypeCheckMicroBenchmark$2.h>
#include <TypeCheckMicroBenchmark$3.h>
#include <TypeCheckMicroBenchmark$4.h>
#include <TypeCheckMicroBenchmark$5.h>
#include <TypeCheckMicroBenchmark$6.h>
#include <TypeCheckMicroBenchmark$Job.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
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
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Random = ::java::util::Random;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

$MethodInfo _TypeCheckMicroBenchmark_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeCheckMicroBenchmark::*)()>(&TypeCheckMicroBenchmark::init$))},
	{"collectAllGarbage", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TypeCheckMicroBenchmark::collectAllGarbage))},
	{"filter", "(Ljava/util/regex/Pattern;[LTypeCheckMicroBenchmark$Job;)[LTypeCheckMicroBenchmark$Job;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$TypeCheckMicroBenchmark$JobArray*(*)($Pattern*,$TypeCheckMicroBenchmark$JobArray*)>(&TypeCheckMicroBenchmark::filter))},
	{"intArg", "([Ljava/lang/String;Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($StringArray*,$String*,int32_t)>(&TypeCheckMicroBenchmark::intArg))},
	{"keywordValue", "([Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($StringArray*,$String*)>(&TypeCheckMicroBenchmark::keywordValue))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TypeCheckMicroBenchmark::main)), "java.lang.Throwable"},
	{"patternArg", "([Ljava/lang/String;Ljava/lang/String;)Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Pattern*(*)($StringArray*,$String*)>(&TypeCheckMicroBenchmark::patternArg))},
	{"time", "([LTypeCheckMicroBenchmark$Job;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($TypeCheckMicroBenchmark$JobArray*)>(&TypeCheckMicroBenchmark::time)), "java.lang.Throwable"},
	{"time0", "([LTypeCheckMicroBenchmark$Job;)[J", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$longs*(*)($TypeCheckMicroBenchmark$JobArray*)>(&TypeCheckMicroBenchmark::time0)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _TypeCheckMicroBenchmark_InnerClassesInfo_[] = {
	{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{"TypeCheckMicroBenchmark$6", nullptr, nullptr, 0},
	{"TypeCheckMicroBenchmark$5", nullptr, nullptr, 0},
	{"TypeCheckMicroBenchmark$4", nullptr, nullptr, 0},
	{"TypeCheckMicroBenchmark$3", nullptr, nullptr, 0},
	{"TypeCheckMicroBenchmark$2", nullptr, nullptr, 0},
	{"TypeCheckMicroBenchmark$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TypeCheckMicroBenchmark_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TypeCheckMicroBenchmark",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TypeCheckMicroBenchmark_MethodInfo_,
	nullptr,
	nullptr,
	_TypeCheckMicroBenchmark_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TypeCheckMicroBenchmark$Job,TypeCheckMicroBenchmark$6,TypeCheckMicroBenchmark$5,TypeCheckMicroBenchmark$4,TypeCheckMicroBenchmark$3,TypeCheckMicroBenchmark$2,TypeCheckMicroBenchmark$1"
};

$Object* allocate$TypeCheckMicroBenchmark($Class* clazz) {
	return $of($alloc(TypeCheckMicroBenchmark));
}

void TypeCheckMicroBenchmark::init$() {
}

void TypeCheckMicroBenchmark::collectAllGarbage() {
	$useLocalCurrentObjectStackCache();
	$var($CountDownLatch, drained, $new($CountDownLatch, 1));
	try {
		$System::gc();
		$new($TypeCheckMicroBenchmark$1, drained);
		$System::gc();
		drained->await();
		$System::gc();
	} catch ($InterruptedException&) {
		$var($InterruptedException, e, $catch());
		$throwNew($Error, static_cast<$Throwable*>(e));
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
	$useLocalCurrentObjectStackCache();
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
		nameWidth = $Math::max(nameWidth, $nc($($nc(jobs->get(i))->name()))->length());
		milliss->set(i, $div($nc(nanoss)->get(i), ((int64_t)1000 * (int64_t)1000)));
		millisWidth = $Math::max(millisWidth, $nc($($String::format("%d"_s, $$new($ObjectArray, {$($of($Long::valueOf(milliss->get(i))))}))))->length());
		ratios->set(i, (double)nanoss->get(i) / (double)nanoss->get(0));
		ratioWidth = $Math::max(ratioWidth, $nc($($String::format("%.3f"_s, $$new($ObjectArray, {$($of($Double::valueOf(ratios->get(i))))}))))->length());
	}
	$var($String, format, $String::format("%%-%ds %%%dd %%%d.3f%%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(nameWidth))),
		$($of($Integer::valueOf(millisWidth))),
		$($of($Integer::valueOf(ratioWidth)))
	})));
	$var($String, headerFormat, $String::format("%%-%ds %%%ds %%%ds%%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(nameWidth))),
		$($of($Integer::valueOf(millisWidth))),
		$($of($Integer::valueOf(ratioWidth)))
	})));
	$init($System);
	$nc($System::out)->printf(headerFormat, $$new($ObjectArray, {
		$of("Method"_s),
		$of("Millis"_s),
		$of("Ratio"_s)
	}));
	for (int32_t i = 0; i < jobs->length; ++i) {
		$nc($System::out)->printf(format, $$new($ObjectArray, {
			$($of($nc(jobs->get(i))->name())),
			$($of($Long::valueOf(milliss->get(i)))),
			$($of($Double::valueOf(ratios->get(i))))
		}));
	}
}

$String* TypeCheckMicroBenchmark::keywordValue($StringArray* args, $String* keyword) {
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray, arr$, args);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, arg, arr$->get(i$));
			if ($nc(arg)->startsWith(keyword)) {
				return arg->substring($nc(keyword)->length() + 1);
			}
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
	$useLocalCurrentObjectStackCache();
	if (filter == nullptr) {
		return jobs;
	}
	$var($TypeCheckMicroBenchmark$JobArray, newJobs, $new($TypeCheckMicroBenchmark$JobArray, $nc(jobs)->length));
	int32_t n = 0;
	{
		$var($TypeCheckMicroBenchmark$JobArray, arr$, jobs);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TypeCheckMicroBenchmark$Job, job, arr$->get(i$));
			if ($nc($($nc(filter)->matcher($($nc(job)->name()))))->find()) {
				newJobs->set(n++, job);
			}
		}
	}
	$var($TypeCheckMicroBenchmark$JobArray, ret, $new($TypeCheckMicroBenchmark$JobArray, n));
	$System::arraycopy(newJobs, 0, ret, 0, n);
	return ret;
}

void TypeCheckMicroBenchmark::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t iterations = intArg(args, "iterations"_s, 30000);
	int32_t size = intArg(args, "size"_s, 1000);
	$var($Pattern, filter, patternArg(args, "filter"_s));
	$var($List, list, $new($ArrayList));
	$var($Random, rnd, $new($Random));
	for (int32_t i = 0; i < size; ++i) {
		list->add($($Integer::valueOf(rnd->nextInt())));
	}
	$load($Integer);
	$Class* klazz = $Integer::class$;
	$var($TypeCheckMicroBenchmark$JobArray, jobs, $new($TypeCheckMicroBenchmark$JobArray, {
		static_cast<$TypeCheckMicroBenchmark$Job*>($$new($TypeCheckMicroBenchmark$2, "toArray(T[])"_s, iterations, list)),
		static_cast<$TypeCheckMicroBenchmark$Job*>($$new($TypeCheckMicroBenchmark$3, "isInstance"_s, iterations, list, klazz)),
		static_cast<$TypeCheckMicroBenchmark$Job*>($$new($TypeCheckMicroBenchmark$4, "Class.cast"_s, iterations, list, klazz)),
		static_cast<$TypeCheckMicroBenchmark$Job*>($$new($TypeCheckMicroBenchmark$5, "write into array"_s, iterations, list)),
		static_cast<$TypeCheckMicroBenchmark$Job*>($$new($TypeCheckMicroBenchmark$6, "write into dynamic array"_s, iterations, list, klazz))
	}));
	time($(TypeCheckMicroBenchmark::filter(filter, jobs)));
}

TypeCheckMicroBenchmark::TypeCheckMicroBenchmark() {
}

$Class* TypeCheckMicroBenchmark::load$($String* name, bool initialize) {
	$loadClass(TypeCheckMicroBenchmark, name, initialize, &_TypeCheckMicroBenchmark_ClassInfo_, allocate$TypeCheckMicroBenchmark);
	return class$;
}

$Class* TypeCheckMicroBenchmark::class$ = nullptr;