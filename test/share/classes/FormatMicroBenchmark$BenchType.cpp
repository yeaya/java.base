#include <FormatMicroBenchmark$BenchType.h>

#include <FormatMicroBenchmark$1.h>
#include <FormatMicroBenchmark.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/NumberFormat.h>
#include <jcpp.h>

#undef FRACTIONAL_BENCH
#undef INTEGER_BENCH
#undef TIE_BENCH
#undef SMALL_INTEGRAL_BENCH
#undef FAIR_SIMPLE_BENCH
#undef FRACTIONAL_ALL_NINES_BENCH
#undef ALL_NINES_BENCH
#undef FAIR_BENCH

using $FormatMicroBenchmark = ::FormatMicroBenchmark;
using $FormatMicroBenchmark$1 = ::FormatMicroBenchmark$1;
using $FormatMicroBenchmark$BenchTypeArray = $Array<FormatMicroBenchmark$BenchType>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormat = ::java::text::NumberFormat;

$FieldInfo _FormatMicroBenchmark$BenchType_FieldInfo_[] = {
	{"INTEGER_BENCH", "LFormatMicroBenchmark$BenchType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormatMicroBenchmark$BenchType, INTEGER_BENCH)},
	{"FRACTIONAL_BENCH", "LFormatMicroBenchmark$BenchType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormatMicroBenchmark$BenchType, FRACTIONAL_BENCH)},
	{"SMALL_INTEGRAL_BENCH", "LFormatMicroBenchmark$BenchType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormatMicroBenchmark$BenchType, SMALL_INTEGRAL_BENCH)},
	{"FAIR_SIMPLE_BENCH", "LFormatMicroBenchmark$BenchType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormatMicroBenchmark$BenchType, FAIR_SIMPLE_BENCH)},
	{"FRACTIONAL_ALL_NINES_BENCH", "LFormatMicroBenchmark$BenchType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormatMicroBenchmark$BenchType, FRACTIONAL_ALL_NINES_BENCH)},
	{"ALL_NINES_BENCH", "LFormatMicroBenchmark$BenchType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormatMicroBenchmark$BenchType, ALL_NINES_BENCH)},
	{"FAIR_BENCH", "LFormatMicroBenchmark$BenchType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormatMicroBenchmark$BenchType, FAIR_BENCH)},
	{"TIE_BENCH", "LFormatMicroBenchmark$BenchType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormatMicroBenchmark$BenchType, TIE_BENCH)},
	{"$VALUES", "[LFormatMicroBenchmark$BenchType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FormatMicroBenchmark$BenchType, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FormatMicroBenchmark$BenchType, name$)},
	{}
};

$MethodInfo _FormatMicroBenchmark$BenchType_MethodInfo_[] = {
	{"$values", "()[LFormatMicroBenchmark$BenchType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FormatMicroBenchmark$BenchTypeArray*(*)()>(&FormatMicroBenchmark$BenchType::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(FormatMicroBenchmark$BenchType::*)($String*,int32_t,$String*)>(&FormatMicroBenchmark$BenchType::init$))},
	{"runBenchAndPrintStatistics", "(ILjava/text/NumberFormat;Z)Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(FormatMicroBenchmark$BenchType::*)(int32_t,$NumberFormat*,bool)>(&FormatMicroBenchmark$BenchType::runBenchAndPrintStatistics))},
	{"valueOf", "(Ljava/lang/String;)LFormatMicroBenchmark$BenchType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FormatMicroBenchmark$BenchType*(*)($String*)>(&FormatMicroBenchmark$BenchType::valueOf))},
	{"values", "()[LFormatMicroBenchmark$BenchType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FormatMicroBenchmark$BenchTypeArray*(*)()>(&FormatMicroBenchmark$BenchType::values))},
	{}
};

$InnerClassInfo _FormatMicroBenchmark$BenchType_InnerClassesInfo_[] = {
	{"FormatMicroBenchmark$BenchType", "FormatMicroBenchmark", "BenchType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FormatMicroBenchmark$BenchType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"FormatMicroBenchmark$BenchType",
	"java.lang.Enum",
	nullptr,
	_FormatMicroBenchmark$BenchType_FieldInfo_,
	_FormatMicroBenchmark$BenchType_MethodInfo_,
	"Ljava/lang/Enum<LFormatMicroBenchmark$BenchType;>;",
	nullptr,
	_FormatMicroBenchmark$BenchType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FormatMicroBenchmark"
};

$Object* allocate$FormatMicroBenchmark$BenchType($Class* clazz) {
	return $of($alloc(FormatMicroBenchmark$BenchType));
}

FormatMicroBenchmark$BenchType* FormatMicroBenchmark$BenchType::INTEGER_BENCH = nullptr;
FormatMicroBenchmark$BenchType* FormatMicroBenchmark$BenchType::FRACTIONAL_BENCH = nullptr;
FormatMicroBenchmark$BenchType* FormatMicroBenchmark$BenchType::SMALL_INTEGRAL_BENCH = nullptr;
FormatMicroBenchmark$BenchType* FormatMicroBenchmark$BenchType::FAIR_SIMPLE_BENCH = nullptr;
FormatMicroBenchmark$BenchType* FormatMicroBenchmark$BenchType::FRACTIONAL_ALL_NINES_BENCH = nullptr;
FormatMicroBenchmark$BenchType* FormatMicroBenchmark$BenchType::ALL_NINES_BENCH = nullptr;
FormatMicroBenchmark$BenchType* FormatMicroBenchmark$BenchType::FAIR_BENCH = nullptr;
FormatMicroBenchmark$BenchType* FormatMicroBenchmark$BenchType::TIE_BENCH = nullptr;
$FormatMicroBenchmark$BenchTypeArray* FormatMicroBenchmark$BenchType::$VALUES = nullptr;

$FormatMicroBenchmark$BenchTypeArray* FormatMicroBenchmark$BenchType::$values() {
	$init(FormatMicroBenchmark$BenchType);
	return $new($FormatMicroBenchmark$BenchTypeArray, {
		FormatMicroBenchmark$BenchType::INTEGER_BENCH,
		FormatMicroBenchmark$BenchType::FRACTIONAL_BENCH,
		FormatMicroBenchmark$BenchType::SMALL_INTEGRAL_BENCH,
		FormatMicroBenchmark$BenchType::FAIR_SIMPLE_BENCH,
		FormatMicroBenchmark$BenchType::FRACTIONAL_ALL_NINES_BENCH,
		FormatMicroBenchmark$BenchType::ALL_NINES_BENCH,
		FormatMicroBenchmark$BenchType::FAIR_BENCH,
		FormatMicroBenchmark$BenchType::TIE_BENCH
	});
}

$FormatMicroBenchmark$BenchTypeArray* FormatMicroBenchmark$BenchType::values() {
	$init(FormatMicroBenchmark$BenchType);
	return $cast($FormatMicroBenchmark$BenchTypeArray, FormatMicroBenchmark$BenchType::$VALUES->clone());
}

FormatMicroBenchmark$BenchType* FormatMicroBenchmark$BenchType::valueOf($String* name) {
	$init(FormatMicroBenchmark$BenchType);
	return $cast(FormatMicroBenchmark$BenchType, $Enum::valueOf(FormatMicroBenchmark$BenchType::class$, name));
}

void FormatMicroBenchmark$BenchType::init$($String* $enum$name, int32_t $enum$ordinal, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
}

$String* FormatMicroBenchmark$BenchType::runBenchAndPrintStatistics(int32_t nbRuns, $NumberFormat* nf, bool isCurrency) {
	$var($longs, elapsedTimes, $new($longs, nbRuns - 3));
	$init($System);
	$nc($System::out)->println($$str({"Now running "_s, $$str(nbRuns), " times bench "_s, this->name$}));
	$var($String, str, ""_s);
	for (int32_t i = 1; i <= nbRuns; ++i) {
		$FormatMicroBenchmark::stabilizeMemory(false);
		int64_t startTime = $System::nanoTime();
		$init($FormatMicroBenchmark$1);
		switch ($nc($FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType)->get((this)->ordinal())) {
		case 1:
			{
				$assign(str, $FormatMicroBenchmark::benchFormatInteger(nf));
				break;
			}
		case 2:
			{
				$assign(str, $FormatMicroBenchmark::benchFormatFractional(nf));
				break;
			}
		case 3:
			{
				$assign(str, $FormatMicroBenchmark::benchFormatSmallIntegral(nf));
				break;
			}
		case 4:
			{
				$assign(str, $FormatMicroBenchmark::benchFormatFractionalAllNines(nf, isCurrency));
				break;
			}
		case 5:
			{
				$assign(str, $FormatMicroBenchmark::benchFormatAllNines(nf, isCurrency));
				break;
			}
		case 6:
			{
				$assign(str, $FormatMicroBenchmark::benchFormatFairSimple(nf, isCurrency));
				break;
			}
		case 7:
			{
				$assign(str, $FormatMicroBenchmark::benchFormatFair(nf));
				break;
			}
		case 8:
			{
				$assign(str, $FormatMicroBenchmark::benchFormatTie(nf, isCurrency));
				break;
			}
		default:
			{}
		}
		int64_t estimatedTime = $System::nanoTime() - startTime;
		if (i > 3) {
			elapsedTimes->set(i - 4, estimatedTime / 1000);
		}
		if ($FormatMicroBenchmark::Verbose) {
			$nc($System::out)->println($$str({"calculated time for "_s, this->name$, " bench "_s, $$str(i), " is = "_s, $$str((estimatedTime / 1000)), " microseconds"_s}));
		} else {
			$nc($System::out)->print("."_s);
		}
		$FormatMicroBenchmark::stabilizeMemory(true);
	}
	$nc($System::out)->println($$str({this->name$, " Done."_s}));
	$FormatMicroBenchmark::printPerfResults(elapsedTimes, this->name$);
	return str;
}

void clinit$FormatMicroBenchmark$BenchType($Class* class$) {
	$assignStatic(FormatMicroBenchmark$BenchType::INTEGER_BENCH, $new(FormatMicroBenchmark$BenchType, "INTEGER_BENCH"_s, 0, "benchFormatInteger"_s));
	$assignStatic(FormatMicroBenchmark$BenchType::FRACTIONAL_BENCH, $new(FormatMicroBenchmark$BenchType, "FRACTIONAL_BENCH"_s, 1, "benchFormatFractional"_s));
	$assignStatic(FormatMicroBenchmark$BenchType::SMALL_INTEGRAL_BENCH, $new(FormatMicroBenchmark$BenchType, "SMALL_INTEGRAL_BENCH"_s, 2, "benchFormatSmallIntegral"_s));
	$assignStatic(FormatMicroBenchmark$BenchType::FAIR_SIMPLE_BENCH, $new(FormatMicroBenchmark$BenchType, "FAIR_SIMPLE_BENCH"_s, 3, "benchFormatFairSimple"_s));
	$assignStatic(FormatMicroBenchmark$BenchType::FRACTIONAL_ALL_NINES_BENCH, $new(FormatMicroBenchmark$BenchType, "FRACTIONAL_ALL_NINES_BENCH"_s, 4, "benchFormatFractionalAllNines"_s));
	$assignStatic(FormatMicroBenchmark$BenchType::ALL_NINES_BENCH, $new(FormatMicroBenchmark$BenchType, "ALL_NINES_BENCH"_s, 5, "benchFormatAllNines"_s));
	$assignStatic(FormatMicroBenchmark$BenchType::FAIR_BENCH, $new(FormatMicroBenchmark$BenchType, "FAIR_BENCH"_s, 6, "benchFormatFair"_s));
	$assignStatic(FormatMicroBenchmark$BenchType::TIE_BENCH, $new(FormatMicroBenchmark$BenchType, "TIE_BENCH"_s, 7, "benchFormatTie"_s));
	$assignStatic(FormatMicroBenchmark$BenchType::$VALUES, FormatMicroBenchmark$BenchType::$values());
}

FormatMicroBenchmark$BenchType::FormatMicroBenchmark$BenchType() {
}

$Class* FormatMicroBenchmark$BenchType::load$($String* name, bool initialize) {
	$loadClass(FormatMicroBenchmark$BenchType, name, initialize, &_FormatMicroBenchmark$BenchType_ClassInfo_, clinit$FormatMicroBenchmark$BenchType, allocate$FormatMicroBenchmark$BenchType);
	return class$;
}

$Class* FormatMicroBenchmark$BenchType::class$ = nullptr;