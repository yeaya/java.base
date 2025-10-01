#ifndef _FormatMicroBenchmark_h_
#define _FormatMicroBenchmark_h_
//$ class FormatMicroBenchmark
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FRACTIONAL_BENCH")
#undef FRACTIONAL_BENCH
#pragma push_macro("INTEGER_BENCH")
#undef INTEGER_BENCH
#pragma push_macro("NB_RUNS")
#undef NB_RUNS
#pragma push_macro("MAX_RANGE")
#undef MAX_RANGE
#pragma push_macro("TIE_BENCH")
#undef TIE_BENCH
#pragma push_macro("SMALL_INTEGRAL_BENCH")
#undef SMALL_INTEGRAL_BENCH
#pragma push_macro("FAIR_SIMPLE_BENCH")
#undef FAIR_SIMPLE_BENCH
#pragma push_macro("FRACTIONAL_ALL_NINES_BENCH")
#undef FRACTIONAL_ALL_NINES_BENCH
#pragma push_macro("ALL_NINES_BENCH")
#undef ALL_NINES_BENCH
#pragma push_macro("FAIR_BENCH")
#undef FAIR_BENCH

namespace java {
	namespace text {
		class NumberFormat;
	}
}

class $export FormatMicroBenchmark : public ::java::lang::Object {
	$class(FormatMicroBenchmark, 0, ::java::lang::Object)
public:
	FormatMicroBenchmark();
	void init$();
	static double allNinesThroughputLoad();
	static $String* benchFormatAllNines(::java::text::NumberFormat* nf, bool isCurrency);
	static $String* benchFormatFair(::java::text::NumberFormat* nf);
	static $String* benchFormatFairSimple(::java::text::NumberFormat* nf, bool isCurrency);
	static $String* benchFormatFractional(::java::text::NumberFormat* nf);
	static $String* benchFormatFractionalAllNines(::java::text::NumberFormat* nf, bool isCurrency);
	static $String* benchFormatInteger(::java::text::NumberFormat* nf);
	static $String* benchFormatSmallIntegral(::java::text::NumberFormat* nf);
	static $String* benchFormatTie(::java::text::NumberFormat* nf, bool isCurrency);
	static void calculateAllNinesThroughputLoad();
	static void calculateFairSimpleThroughputLoad();
	static void calculateFairThroughputLoad();
	static void calculateFractionalAllNinesThroughputLoad();
	static void calculateFractionalThroughputLoad();
	static void calculateIntegerThroughputLoad();
	static void calculateSmallIntegralThroughputLoad();
	static void calculateTieThroughputLoad(bool isCurrency);
	static double fairSimpleThroughputLoad();
	static double fairThroughputLoad();
	static double fractionalAllNinesThroughputLoad();
	static double fractionalThroughputLoad();
	static double integerThroughputLoad();
	static void main($StringArray* args);
	static void printPerfResults($longs* times, $String* benchName);
	static double smallIntegralThroughputLoad();
	static int64_t stabilizeMemory(bool reportConsumedMemory);
	static double tieThroughputLoad(bool isCurrency);
	static void usage();
	static const int32_t NB_RUNS = 20;
	static const int32_t MAX_RANGE = 0x0007A120;
	static bool Verbose;
	static bool DoIt;
	static $String* INTEGER_BENCH;
	static $String* FRACTIONAL_BENCH;
	static $String* SMALL_INTEGRAL_BENCH;
	static $String* FAIR_SIMPLE_BENCH;
	static $String* FRACTIONAL_ALL_NINES_BENCH;
	static $String* ALL_NINES_BENCH;
	static $String* FAIR_BENCH;
	static $String* TIE_BENCH;
};

#pragma pop_macro("FRACTIONAL_BENCH")
#pragma pop_macro("INTEGER_BENCH")
#pragma pop_macro("NB_RUNS")
#pragma pop_macro("MAX_RANGE")
#pragma pop_macro("TIE_BENCH")
#pragma pop_macro("SMALL_INTEGRAL_BENCH")
#pragma pop_macro("FAIR_SIMPLE_BENCH")
#pragma pop_macro("FRACTIONAL_ALL_NINES_BENCH")
#pragma pop_macro("ALL_NINES_BENCH")
#pragma pop_macro("FAIR_BENCH")

#endif // _FormatMicroBenchmark_h_