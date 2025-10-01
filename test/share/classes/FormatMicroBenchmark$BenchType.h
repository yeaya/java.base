#ifndef _FormatMicroBenchmark$BenchType_h_
#define _FormatMicroBenchmark$BenchType_h_
//$ class FormatMicroBenchmark$BenchType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FRACTIONAL_BENCH")
#undef FRACTIONAL_BENCH
#pragma push_macro("INTEGER_BENCH")
#undef INTEGER_BENCH
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

class $export FormatMicroBenchmark$BenchType : public ::java::lang::Enum {
	$class(FormatMicroBenchmark$BenchType, 0, ::java::lang::Enum)
public:
	FormatMicroBenchmark$BenchType();
	static $Array<FormatMicroBenchmark$BenchType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name);
	virtual $String* runBenchAndPrintStatistics(int32_t nbRuns, ::java::text::NumberFormat* nf, bool isCurrency);
	static ::FormatMicroBenchmark$BenchType* valueOf($String* name);
	static $Array<FormatMicroBenchmark$BenchType>* values();
	static ::FormatMicroBenchmark$BenchType* INTEGER_BENCH;
	static ::FormatMicroBenchmark$BenchType* FRACTIONAL_BENCH;
	static ::FormatMicroBenchmark$BenchType* SMALL_INTEGRAL_BENCH;
	static ::FormatMicroBenchmark$BenchType* FAIR_SIMPLE_BENCH;
	static ::FormatMicroBenchmark$BenchType* FRACTIONAL_ALL_NINES_BENCH;
	static ::FormatMicroBenchmark$BenchType* ALL_NINES_BENCH;
	static ::FormatMicroBenchmark$BenchType* FAIR_BENCH;
	static ::FormatMicroBenchmark$BenchType* TIE_BENCH;
	static $Array<FormatMicroBenchmark$BenchType>* $VALUES;
	$String* name$ = nullptr;
};

#pragma pop_macro("FRACTIONAL_BENCH")
#pragma pop_macro("INTEGER_BENCH")
#pragma pop_macro("TIE_BENCH")
#pragma pop_macro("SMALL_INTEGRAL_BENCH")
#pragma pop_macro("FAIR_SIMPLE_BENCH")
#pragma pop_macro("FRACTIONAL_ALL_NINES_BENCH")
#pragma pop_macro("ALL_NINES_BENCH")
#pragma pop_macro("FAIR_BENCH")

#endif // _FormatMicroBenchmark$BenchType_h_