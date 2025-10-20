#include <FormatMicroBenchmark.h>

#include <FormatMicroBenchmark$BenchType.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DecimalFormat.h>
#include <java/text/NumberFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ALL_NINES_BENCH
#undef FAIR_BENCH
#undef FAIR_SIMPLE_BENCH
#undef FRACTIONAL_ALL_NINES_BENCH
#undef FRACTIONAL_BENCH
#undef INTEGER_BENCH
#undef MAX_RANGE
#undef NB_RUNS
#undef SMALL_INTEGRAL_BENCH
#undef TIE_BENCH
#undef US

using $FormatMicroBenchmark$BenchType = ::FormatMicroBenchmark$BenchType;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $DecimalFormat = ::java::text::DecimalFormat;
using $NumberFormat = ::java::text::NumberFormat;
using $Locale = ::java::util::Locale;

$FieldInfo _FormatMicroBenchmark_FieldInfo_[] = {
	{"NB_RUNS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FormatMicroBenchmark, NB_RUNS)},
	{"MAX_RANGE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FormatMicroBenchmark, MAX_RANGE)},
	{"Verbose", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FormatMicroBenchmark, Verbose)},
	{"DoIt", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FormatMicroBenchmark, DoIt)},
	{"INTEGER_BENCH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FormatMicroBenchmark, INTEGER_BENCH)},
	{"FRACTIONAL_BENCH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FormatMicroBenchmark, FRACTIONAL_BENCH)},
	{"SMALL_INTEGRAL_BENCH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FormatMicroBenchmark, SMALL_INTEGRAL_BENCH)},
	{"FAIR_SIMPLE_BENCH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FormatMicroBenchmark, FAIR_SIMPLE_BENCH)},
	{"FRACTIONAL_ALL_NINES_BENCH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FormatMicroBenchmark, FRACTIONAL_ALL_NINES_BENCH)},
	{"ALL_NINES_BENCH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FormatMicroBenchmark, ALL_NINES_BENCH)},
	{"FAIR_BENCH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FormatMicroBenchmark, FAIR_BENCH)},
	{"TIE_BENCH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FormatMicroBenchmark, TIE_BENCH)},
	{}
};

$MethodInfo _FormatMicroBenchmark_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatMicroBenchmark::*)()>(&FormatMicroBenchmark::init$))},
	{"allNinesThroughputLoad", "()D", nullptr, $STATIC, $method(static_cast<double(*)()>(&FormatMicroBenchmark::allNinesThroughputLoad))},
	{"benchFormatAllNines", "(Ljava/text/NumberFormat;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($NumberFormat*,bool)>(&FormatMicroBenchmark::benchFormatAllNines))},
	{"benchFormatFair", "(Ljava/text/NumberFormat;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($NumberFormat*)>(&FormatMicroBenchmark::benchFormatFair))},
	{"benchFormatFairSimple", "(Ljava/text/NumberFormat;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($NumberFormat*,bool)>(&FormatMicroBenchmark::benchFormatFairSimple))},
	{"benchFormatFractional", "(Ljava/text/NumberFormat;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($NumberFormat*)>(&FormatMicroBenchmark::benchFormatFractional))},
	{"benchFormatFractionalAllNines", "(Ljava/text/NumberFormat;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($NumberFormat*,bool)>(&FormatMicroBenchmark::benchFormatFractionalAllNines))},
	{"benchFormatInteger", "(Ljava/text/NumberFormat;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($NumberFormat*)>(&FormatMicroBenchmark::benchFormatInteger))},
	{"benchFormatSmallIntegral", "(Ljava/text/NumberFormat;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($NumberFormat*)>(&FormatMicroBenchmark::benchFormatSmallIntegral))},
	{"benchFormatTie", "(Ljava/text/NumberFormat;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($NumberFormat*,bool)>(&FormatMicroBenchmark::benchFormatTie))},
	{"calculateAllNinesThroughputLoad", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&FormatMicroBenchmark::calculateAllNinesThroughputLoad))},
	{"calculateFairSimpleThroughputLoad", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&FormatMicroBenchmark::calculateFairSimpleThroughputLoad))},
	{"calculateFairThroughputLoad", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&FormatMicroBenchmark::calculateFairThroughputLoad))},
	{"calculateFractionalAllNinesThroughputLoad", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&FormatMicroBenchmark::calculateFractionalAllNinesThroughputLoad))},
	{"calculateFractionalThroughputLoad", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&FormatMicroBenchmark::calculateFractionalThroughputLoad))},
	{"calculateIntegerThroughputLoad", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&FormatMicroBenchmark::calculateIntegerThroughputLoad))},
	{"calculateSmallIntegralThroughputLoad", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&FormatMicroBenchmark::calculateSmallIntegralThroughputLoad))},
	{"calculateTieThroughputLoad", "(Z)V", nullptr, $STATIC, $method(static_cast<void(*)(bool)>(&FormatMicroBenchmark::calculateTieThroughputLoad))},
	{"fairSimpleThroughputLoad", "()D", nullptr, $STATIC, $method(static_cast<double(*)()>(&FormatMicroBenchmark::fairSimpleThroughputLoad))},
	{"fairThroughputLoad", "()D", nullptr, $STATIC, $method(static_cast<double(*)()>(&FormatMicroBenchmark::fairThroughputLoad))},
	{"fractionalAllNinesThroughputLoad", "()D", nullptr, $STATIC, $method(static_cast<double(*)()>(&FormatMicroBenchmark::fractionalAllNinesThroughputLoad))},
	{"fractionalThroughputLoad", "()D", nullptr, $STATIC, $method(static_cast<double(*)()>(&FormatMicroBenchmark::fractionalThroughputLoad))},
	{"integerThroughputLoad", "()D", nullptr, $STATIC, $method(static_cast<double(*)()>(&FormatMicroBenchmark::integerThroughputLoad))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FormatMicroBenchmark::main))},
	{"printPerfResults", "([JLjava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($longs*,$String*)>(&FormatMicroBenchmark::printPerfResults))},
	{"smallIntegralThroughputLoad", "()D", nullptr, $STATIC, $method(static_cast<double(*)()>(&FormatMicroBenchmark::smallIntegralThroughputLoad))},
	{"stabilizeMemory", "(Z)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(bool)>(&FormatMicroBenchmark::stabilizeMemory))},
	{"tieThroughputLoad", "(Z)D", nullptr, $STATIC, $method(static_cast<double(*)(bool)>(&FormatMicroBenchmark::tieThroughputLoad))},
	{"usage", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&FormatMicroBenchmark::usage))},
	{}
};

$InnerClassInfo _FormatMicroBenchmark_InnerClassesInfo_[] = {
	{"FormatMicroBenchmark$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"FormatMicroBenchmark$BenchType", "FormatMicroBenchmark", "BenchType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FormatMicroBenchmark_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FormatMicroBenchmark",
	"java.lang.Object",
	nullptr,
	_FormatMicroBenchmark_FieldInfo_,
	_FormatMicroBenchmark_MethodInfo_,
	nullptr,
	nullptr,
	_FormatMicroBenchmark_InnerClassesInfo_,
	nullptr,
	nullptr,
	"FormatMicroBenchmark$1,FormatMicroBenchmark$BenchType"
};

$Object* allocate$FormatMicroBenchmark($Class* clazz) {
	return $of($alloc(FormatMicroBenchmark));
}

bool FormatMicroBenchmark::Verbose = false;
bool FormatMicroBenchmark::DoIt = false;
$String* FormatMicroBenchmark::INTEGER_BENCH = nullptr;
$String* FormatMicroBenchmark::FRACTIONAL_BENCH = nullptr;
$String* FormatMicroBenchmark::SMALL_INTEGRAL_BENCH = nullptr;
$String* FormatMicroBenchmark::FAIR_SIMPLE_BENCH = nullptr;
$String* FormatMicroBenchmark::FRACTIONAL_ALL_NINES_BENCH = nullptr;
$String* FormatMicroBenchmark::ALL_NINES_BENCH = nullptr;
$String* FormatMicroBenchmark::FAIR_BENCH = nullptr;
$String* FormatMicroBenchmark::TIE_BENCH = nullptr;

void FormatMicroBenchmark::init$() {
}

void FormatMicroBenchmark::usage() {
	$init(FormatMicroBenchmark);
	$init($System);
	$nc($System::out)->println("This is a set of micro-benchmarks testing throughput of java.text.DecimalFormat.format(). It never fails.\n\nUsage and arguments:\n - Run with no argument skips the whole benchmark and exits.\n - Run with \"-help\" as first argument prints this message and exits.\n - Run with \"-doit\" runs the benchmark with summary details.\n - Run with \"-verbose\" provides additional details on the run.\n\nExample run :\n   java -Xms500m -Xmx500m -XX:NewSize=400m FormatMicroBenchmark -doit -verbose\n\nNote: \n - Vm options -Xms, -Xmx, -XX:NewSize must be set correctly for \n   getting reliable numbers. Otherwise GC activity may corrupt results.\n   As of jdk80b48 using \"-Xms500m -Xmx500m -XX:NewSize=400m\" covers \n   all cases.\n - Optionally using \"-Xlog:gc\" option provides information that \n   helps checking any GC activity while benches are run.\n\nLook at the heading comments and description in source code for detailed information.\n"_s);
}

int64_t FormatMicroBenchmark::stabilizeMemory(bool reportConsumedMemory) {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	int64_t oneMegabyte = (int64_t)1024 * (int64_t)1024;
	int64_t refMemory = 0;
	int64_t initialMemoryLeft = $nc($($Runtime::getRuntime()))->freeMemory();
	int64_t currMemoryLeft = initialMemoryLeft;
	int32_t nbGCCalls = 0;
	do {
		++nbGCCalls;
		refMemory = currMemoryLeft;
		$System::gc();
		currMemoryLeft = $nc($($Runtime::getRuntime()))->freeMemory();
	} while (($Math::abs(currMemoryLeft - refMemory) > oneMegabyte) && (nbGCCalls < 10));
	if (FormatMicroBenchmark::Verbose && reportConsumedMemory) {
		$init($System);
		$nc($System::out)->println($$str({"Memory consumed by previous run : "_s, $$str($div((currMemoryLeft - initialMemoryLeft), oneMegabyte)), "Mbs."_s}));
	}
	return currMemoryLeft;
}

$String* FormatMicroBenchmark::benchFormatInteger($NumberFormat* nf) {
	$init(FormatMicroBenchmark);
	$var($String, str, ""_s);
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		$assign(str, $nc(nf)->format((double)j));
	}
	return str;
}

double FormatMicroBenchmark::integerThroughputLoad() {
	$init(FormatMicroBenchmark);
	double d = 0.0;
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		d = (double)j;
	}
	return d;
}

void FormatMicroBenchmark::calculateIntegerThroughputLoad() {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	int32_t nbRuns = FormatMicroBenchmark::NB_RUNS;
	int64_t elapsedTime = 0;
	double foo = 0.0;
	for (int32_t i = 1; i <= nbRuns; ++i) {
		int64_t startTime = $System::nanoTime();
		foo = integerThroughputLoad();
		int64_t estimatedTime = $System::nanoTime() - startTime;
		if (i > 3) {
			elapsedTime += estimatedTime / 1000;
		}
	}
	if (FormatMicroBenchmark::Verbose) {
		$init($System);
		$nc($System::out)->println($$str({"calculated throughput load for "_s, FormatMicroBenchmark::INTEGER_BENCH, " bench is = "_s, $$str(($div(elapsedTime, (nbRuns - 3)))), " microseconds"_s}));
	}
}

$String* FormatMicroBenchmark::benchFormatFractional($NumberFormat* nf) {
	$init(FormatMicroBenchmark);
	$var($String, str, ""_s);
	double floatingN = $div(1.0, (double)FormatMicroBenchmark::MAX_RANGE);
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		$assign(str, $nc(nf)->format(floatingN * (double)j));
	}
	return str;
}

double FormatMicroBenchmark::fractionalThroughputLoad() {
	$init(FormatMicroBenchmark);
	double d = 0.0;
	double floatingN = $div(1.0, (double)FormatMicroBenchmark::MAX_RANGE);
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		d = floatingN * (double)j;
	}
	return d;
}

void FormatMicroBenchmark::calculateFractionalThroughputLoad() {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	int32_t nbRuns = FormatMicroBenchmark::NB_RUNS;
	int64_t elapsedTime = 0;
	double foo = 0.0;
	for (int32_t i = 1; i <= nbRuns; ++i) {
		int64_t startTime = $System::nanoTime();
		foo = fractionalThroughputLoad();
		int64_t estimatedTime = $System::nanoTime() - startTime;
		if (i > 3) {
			elapsedTime += estimatedTime / 1000;
		}
	}
	if (FormatMicroBenchmark::Verbose) {
		$init($System);
		$nc($System::out)->println($$str({"calculated throughput load for "_s, FormatMicroBenchmark::FRACTIONAL_BENCH, " bench is = "_s, $$str(($div(elapsedTime, (nbRuns - 3)))), " microseconds"_s}));
	}
}

$String* FormatMicroBenchmark::benchFormatSmallIntegral($NumberFormat* nf) {
	$init(FormatMicroBenchmark);
	$var($String, str, ""_s);
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		$assign(str, $nc(nf)->format(((double)j) / 1000.0));
	}
	return str;
}

double FormatMicroBenchmark::smallIntegralThroughputLoad() {
	$init(FormatMicroBenchmark);
	double d = 0.0;
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		d = (double)j / 1000.0;
	}
	return d;
}

void FormatMicroBenchmark::calculateSmallIntegralThroughputLoad() {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	int32_t nbRuns = FormatMicroBenchmark::NB_RUNS;
	int64_t elapsedTime = 0;
	double foo = 0.0;
	for (int32_t i = 1; i <= nbRuns; ++i) {
		int64_t startTime = $System::nanoTime();
		foo = smallIntegralThroughputLoad();
		int64_t estimatedTime = $System::nanoTime() - startTime;
		if (i > 3) {
			elapsedTime += estimatedTime / 1000;
		}
	}
	if (FormatMicroBenchmark::Verbose) {
		$init($System);
		$nc($System::out)->println($$str({"calculated throughput load for "_s, FormatMicroBenchmark::SMALL_INTEGRAL_BENCH, " bench is = "_s, $$str(($div(elapsedTime, (nbRuns - 3)))), " microseconds"_s}));
	}
}

$String* FormatMicroBenchmark::benchFormatFairSimple($NumberFormat* nf, bool isCurrency) {
	$init(FormatMicroBenchmark);
	$var($String, str, ""_s);
	double seed = isCurrency ? 0.001020304050607081 : 1.0203040506070809E-4;
	double d = (double)-FormatMicroBenchmark::MAX_RANGE;
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		d = d + 1.0 + seed;
		$assign(str, $nc(nf)->format(d));
	}
	return str;
}

double FormatMicroBenchmark::fairSimpleThroughputLoad() {
	$init(FormatMicroBenchmark);
	double seed = 1.0203040506070809E-4;
	double delta = 0.0;
	double d = (double)-FormatMicroBenchmark::MAX_RANGE;
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		d = d + 1.0 + seed;
	}
	return d;
}

void FormatMicroBenchmark::calculateFairSimpleThroughputLoad() {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	int32_t nbRuns = FormatMicroBenchmark::NB_RUNS;
	int64_t elapsedTime = 0;
	double foo = 0.0;
	for (int32_t i = 1; i <= nbRuns; ++i) {
		int64_t startTime = $System::nanoTime();
		foo = fairSimpleThroughputLoad();
		int64_t estimatedTime = $System::nanoTime() - startTime;
		if (i > 3) {
			elapsedTime += estimatedTime / 1000;
		}
	}
	if (FormatMicroBenchmark::Verbose) {
		$init($System);
		$nc($System::out)->println($$str({"calculated throughput load for "_s, FormatMicroBenchmark::FAIR_SIMPLE_BENCH, " bench is = "_s, $$str(($div(elapsedTime, (nbRuns - 3)))), " microseconds"_s}));
	}
}

$String* FormatMicroBenchmark::benchFormatFractionalAllNines($NumberFormat* nf, bool isCurrency) {
	$init(FormatMicroBenchmark);
	$var($String, str, ""_s);
	double fractionalEven = isCurrency ? 0.993000001 : 0.99930000001;
	double fractionalOdd = isCurrency ? 0.996000001 : 0.99960000001;
	double fractional = 0.0;
	double d = 0.0;
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		if (((int32_t)(j & (uint32_t)1)) == 0) {
			fractional = fractionalEven;
		} else {
			fractional = fractionalOdd;
		}
		if (j >= 0) {
			d = (double)j + fractional;
		} else {
			d = (double)j - fractional;
		}
		$assign(str, $nc(nf)->format(d));
	}
	return str;
}

double FormatMicroBenchmark::fractionalAllNinesThroughputLoad() {
	$init(FormatMicroBenchmark);
	double fractionalEven = 0.99930000001;
	double fractionalOdd = 0.99960000001;
	double fractional = 0.0;
	double d = 0.0;
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		if (((int32_t)(j & (uint32_t)1)) == 0) {
			fractional = fractionalEven;
		} else {
			fractional = fractionalOdd;
		}
		if (j >= 0) {
			d = (double)j + fractional;
		} else {
			d = (double)j - fractional;
		}
	}
	return d;
}

void FormatMicroBenchmark::calculateFractionalAllNinesThroughputLoad() {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	int32_t nbRuns = FormatMicroBenchmark::NB_RUNS;
	int64_t elapsedTime = 0;
	double foo = 0.0;
	for (int32_t i = 1; i <= nbRuns; ++i) {
		int64_t startTime = $System::nanoTime();
		foo = fractionalAllNinesThroughputLoad();
		int64_t estimatedTime = $System::nanoTime() - startTime;
		if (i > 3) {
			elapsedTime += estimatedTime / 1000;
		}
	}
	if (FormatMicroBenchmark::Verbose) {
		$init($System);
		$nc($System::out)->println($$str({"calculated throughput load for "_s, FormatMicroBenchmark::FRACTIONAL_ALL_NINES_BENCH, " bench is = "_s, $$str(($div(elapsedTime, (nbRuns - 3)))), " microseconds"_s}));
	}
}

$String* FormatMicroBenchmark::benchFormatAllNines($NumberFormat* nf, bool isCurrency) {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	$var($String, str, ""_s);
	$var($doubles, decimaAllNines, $new($doubles, {
		9.9993,
		99.9993,
		999.9993,
		9999.9993,
		99999.9993,
		999999.9993,
		9999999.9993,
		9.99999999993E7,
		9.999999999993E8
	}));
	$var($doubles, currencyAllNines, $new($doubles, {
		9.993,
		99.993,
		999.993,
		9999.993,
		99999.993,
		999999.993,
		9999999.993,
		9.9999999993E7,
		9.99999999993E8
	}));
	$var($doubles, valuesArray, (isCurrency) ? currencyAllNines : decimaAllNines);
	double seed = $div(1.0, (double)FormatMicroBenchmark::MAX_RANGE);
	double d = 0.0;
	int32_t id = 0;
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		id = (j >= 0) ? j % 9 : -j % 9;
		if (((int32_t)(j & (uint32_t)1)) == 0) {
			d = $nc(valuesArray)->get(id) + id * seed;
		} else {
			d = $nc(valuesArray)->get(id) - id * seed;
		}
		$assign(str, $nc(nf)->format(d));
	}
	return str;
}

double FormatMicroBenchmark::allNinesThroughputLoad() {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	$var($doubles, decimaAllNines, $new($doubles, {
		9.9993,
		99.9993,
		999.9993,
		9999.9993,
		99999.9993,
		999999.9993,
		9999999.9993,
		9.99999999993E7,
		9.999999999993E8
	}));
	$var($doubles, valuesArray, decimaAllNines);
	double seed = $div(1.0, (double)FormatMicroBenchmark::MAX_RANGE);
	double d = 0.0;
	int32_t id = 0;
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		id = (j >= 0) ? j % 9 : -j % 9;
		if (((int32_t)(j & (uint32_t)1)) == 0) {
			d = valuesArray->get(id) + id * seed;
		} else {
			d = valuesArray->get(id) - id * seed;
		}
	}
	return d;
}

void FormatMicroBenchmark::calculateAllNinesThroughputLoad() {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	int32_t nbRuns = FormatMicroBenchmark::NB_RUNS;
	int64_t elapsedTime = 0;
	double foo = 0.0;
	for (int32_t i = 1; i <= nbRuns; ++i) {
		int64_t startTime = $System::nanoTime();
		foo = allNinesThroughputLoad();
		int64_t estimatedTime = $System::nanoTime() - startTime;
		if (i > 3) {
			elapsedTime += estimatedTime / 1000;
		}
	}
	if (FormatMicroBenchmark::Verbose) {
		$init($System);
		$nc($System::out)->println($$str({"calculated throughput load for "_s, FormatMicroBenchmark::ALL_NINES_BENCH, " bench is = "_s, $$str(($div(elapsedTime, (nbRuns - 3)))), " microseconds"_s}));
	}
}

$String* FormatMicroBenchmark::benchFormatFair($NumberFormat* nf) {
	$init(FormatMicroBenchmark);
	$var($String, str, ""_s);
	double k = $div(1000.0, (double)FormatMicroBenchmark::MAX_RANGE);
	k *= k;
	double d = 0.0;
	double absj = 0.0;
	double jPowerOf2 = 0.0;
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		absj = (double)j;
		jPowerOf2 = absj * absj;
		d = k * jPowerOf2;
		if (j < 0) {
			d = -d;
		}
		$assign(str, $nc(nf)->format(d));
	}
	return str;
}

double FormatMicroBenchmark::fairThroughputLoad() {
	$init(FormatMicroBenchmark);
	double k = $div(1000.0, (double)FormatMicroBenchmark::MAX_RANGE);
	k *= k;
	double d = 0.0;
	double absj = 0.0;
	double jPowerOf2 = 0.0;
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		absj = (double)j;
		jPowerOf2 = absj * absj;
		d = k * jPowerOf2;
		if (j < 0) {
			d = -d;
		}
	}
	return d;
}

void FormatMicroBenchmark::calculateFairThroughputLoad() {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	int32_t nbRuns = FormatMicroBenchmark::NB_RUNS;
	int64_t elapsedTime = 0;
	double foo = 0.0;
	for (int32_t i = 1; i <= nbRuns; ++i) {
		int64_t startTime = $System::nanoTime();
		foo = fairThroughputLoad();
		int64_t estimatedTime = $System::nanoTime() - startTime;
		if (i > 3) {
			elapsedTime += estimatedTime / 1000;
		}
	}
	if (FormatMicroBenchmark::Verbose) {
		$init($System);
		$nc($System::out)->println($$str({"calculated throughput load for "_s, FormatMicroBenchmark::FAIR_BENCH, " bench is = "_s, $$str(($div(elapsedTime, (nbRuns - 3)))), " microseconds"_s}));
	}
}

$String* FormatMicroBenchmark::benchFormatTie($NumberFormat* nf, bool isCurrency) {
	$init(FormatMicroBenchmark);
	double d = 0.0;
	$var($String, str, ""_s);
	double fractionaScaling = (isCurrency) ? 1000.0 : 10000.0;
	int32_t fixedFractionalPart = (isCurrency) ? 125 : 1235;
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		d = (((double)j * fractionaScaling) + (double)fixedFractionalPart) / fractionaScaling;
		$assign(str, $nc(nf)->format(d));
	}
	return str;
}

double FormatMicroBenchmark::tieThroughputLoad(bool isCurrency) {
	$init(FormatMicroBenchmark);
	double d = 0.0;
	double fractionaScaling = (isCurrency) ? 1000.0 : 10000.0;
	int32_t fixedFractionalPart = (isCurrency) ? 125 : 1235;
	for (int32_t j = -FormatMicroBenchmark::MAX_RANGE; j <= FormatMicroBenchmark::MAX_RANGE; ++j) {
		d = (((double)j * fractionaScaling) + (double)fixedFractionalPart) / fractionaScaling;
	}
	return d;
}

void FormatMicroBenchmark::calculateTieThroughputLoad(bool isCurrency) {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	int32_t nbRuns = FormatMicroBenchmark::NB_RUNS;
	int64_t elapsedTime = 0;
	double foo = 0.0;
	for (int32_t i = 1; i <= nbRuns; ++i) {
		int64_t startTime = $System::nanoTime();
		foo = tieThroughputLoad(isCurrency);
		int64_t estimatedTime = $System::nanoTime() - startTime;
		if (i > 3) {
			elapsedTime += estimatedTime / 1000;
		}
	}
	if (FormatMicroBenchmark::Verbose) {
		$init($System);
		$nc($System::out)->println($$str({"calculated throughput load for "_s, FormatMicroBenchmark::TIE_BENCH, " bench is = "_s, $$str(($div(elapsedTime, (nbRuns - 3)))), " microseconds"_s}));
	}
}

void FormatMicroBenchmark::printPerfResults($longs* times, $String* benchName) {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	int32_t nbBenches = $nc(times)->length;
	int64_t totalTimeSpent = 0;
	int64_t meanTimeSpent = 0;
	double variance = (double)0;
	double standardDeviation = (double)0;
	for (int32_t i = 1; i <= nbBenches; ++i) {
		totalTimeSpent += times->get(i - 1);
	}
	meanTimeSpent = $div(totalTimeSpent, nbBenches);
	for (int32_t j = 1; j <= nbBenches; ++j) {
		variance += $Math::pow(((double)times->get(j - 1) - (double)meanTimeSpent), (double)2);
	}
	variance = variance / (double)times->length;
	standardDeviation = $Math::sqrt(variance) / meanTimeSpent;
	$init($System);
	$nc($System::out)->println($$str({"Statistics (starting at 4th bench) for bench "_s, benchName, "\n for last "_s, $$str(nbBenches), " runs out of "_s, $$str(FormatMicroBenchmark::NB_RUNS), " , each with 2x"_s, $$str(FormatMicroBenchmark::MAX_RANGE), " format(double) calls : \n  mean exec time = "_s, $$str(meanTimeSpent), " microseconds\n  standard deviation = "_s, $($String::format("%.3f"_s, $$new($ObjectArray, {$($of($Double::valueOf(standardDeviation)))}))), "% \n"_s}));
}

void FormatMicroBenchmark::main($StringArray* args) {
	$init(FormatMicroBenchmark);
	$useLocalCurrentObjectStackCache();
	if ($nc(args)->length >= 1) {
		if ($nc(args->get(0))->equals("-help"_s)) {
			usage();
			return;
		}
		{
			$var($StringArray, arr$, args);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, s, arr$->get(i$));
				{
					if ($nc(s)->equals("-doit"_s)) {
						FormatMicroBenchmark::DoIt = true;
					} else if (s->equals("-verbose"_s)) {
						FormatMicroBenchmark::Verbose = true;
					}
				}
			}
		}
	} else {
		$init($System);
		$nc($System::out)->println("Test skipped with success by default. See -help for details."_s);
		return;
	}
	if (!FormatMicroBenchmark::DoIt) {
		if (FormatMicroBenchmark::Verbose) {
			usage();
		}
		$init($System);
		$nc($System::out)->println("Test skipped and considered successful."_s);
		return;
	}
	$init($System);
	$nc($System::out)->println("Single Threaded micro benchmark evaluating the throughput of java.text.DecimalFormat.format() call stack.\n"_s);
	$var($String, fooString, ""_s);
	$init($Locale);
	$var($DecimalFormat, df, $cast($DecimalFormat, $NumberFormat::getInstance($Locale::US)));
	$nc($System::out)->println("Running with a decimal instance of DecimalFormat."_s);
	calculateIntegerThroughputLoad();
	$init($FormatMicroBenchmark$BenchType);
	$assign(fooString, $FormatMicroBenchmark$BenchType::INTEGER_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, df, false));
	calculateFractionalThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::FRACTIONAL_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, df, false));
	calculateSmallIntegralThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::SMALL_INTEGRAL_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, df, false));
	calculateFractionalAllNinesThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::FRACTIONAL_ALL_NINES_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, df, false));
	calculateAllNinesThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::ALL_NINES_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, df, false));
	calculateFairSimpleThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::FAIR_SIMPLE_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, df, false));
	calculateFairThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::FAIR_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, df, false));
	calculateTieThroughputLoad(false);
	$assign(fooString, $FormatMicroBenchmark$BenchType::TIE_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, df, false));
	$var($DecimalFormat, cf, $cast($DecimalFormat, $NumberFormat::getCurrencyInstance($Locale::US)));
	$nc($System::out)->println("Running with a currency instance of DecimalFormat."_s);
	calculateIntegerThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::INTEGER_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, cf, false));
	calculateFractionalThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::FRACTIONAL_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, cf, false));
	calculateSmallIntegralThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::SMALL_INTEGRAL_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, cf, false));
	calculateFractionalAllNinesThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::FRACTIONAL_ALL_NINES_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, cf, false));
	calculateAllNinesThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::ALL_NINES_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, cf, false));
	calculateFairSimpleThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::FAIR_SIMPLE_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, cf, false));
	calculateFairThroughputLoad();
	$assign(fooString, $FormatMicroBenchmark$BenchType::FAIR_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, cf, false));
	calculateTieThroughputLoad(false);
	$assign(fooString, $FormatMicroBenchmark$BenchType::TIE_BENCH->runBenchAndPrintStatistics(FormatMicroBenchmark::NB_RUNS, cf, false));
}

void clinit$FormatMicroBenchmark($Class* class$) {
	$assignStatic(FormatMicroBenchmark::INTEGER_BENCH, "benchFormatInteger"_s);
	$assignStatic(FormatMicroBenchmark::FRACTIONAL_BENCH, "benchFormatFractional"_s);
	$assignStatic(FormatMicroBenchmark::SMALL_INTEGRAL_BENCH, "benchFormatSmallIntegral"_s);
	$assignStatic(FormatMicroBenchmark::FAIR_SIMPLE_BENCH, "benchFormatFairSimple"_s);
	$assignStatic(FormatMicroBenchmark::FRACTIONAL_ALL_NINES_BENCH, "benchFormatFractionalAllNines"_s);
	$assignStatic(FormatMicroBenchmark::ALL_NINES_BENCH, "benchFormatAllNines"_s);
	$assignStatic(FormatMicroBenchmark::FAIR_BENCH, "benchFormatFair"_s);
	$assignStatic(FormatMicroBenchmark::TIE_BENCH, "benchFormatTie"_s);
	FormatMicroBenchmark::Verbose = false;
	FormatMicroBenchmark::DoIt = false;
}

FormatMicroBenchmark::FormatMicroBenchmark() {
}

$Class* FormatMicroBenchmark::load$($String* name, bool initialize) {
	$loadClass(FormatMicroBenchmark, name, initialize, &_FormatMicroBenchmark_ClassInfo_, clinit$FormatMicroBenchmark, allocate$FormatMicroBenchmark);
	return class$;
}

$Class* FormatMicroBenchmark::class$ = nullptr;