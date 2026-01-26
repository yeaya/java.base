#include <Bug4387255.h>

#include <java/text/ChoiceFormat.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ChoiceFormat = ::java::text::ChoiceFormat;

$FieldInfo _Bug4387255_FieldInfo_[] = {
	{"doubles", "[D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug4387255, doubles)},
	{"strings", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug4387255, strings)},
	{"pattern", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug4387255, pattern)},
	{}
};

$MethodInfo _Bug4387255_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Bug4387255, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug4387255, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Bug4387255_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4387255",
	"java.lang.Object",
	nullptr,
	_Bug4387255_FieldInfo_,
	_Bug4387255_MethodInfo_
};

$Object* allocate$Bug4387255($Class* clazz) {
	return $of($alloc(Bug4387255));
}

$doubles* Bug4387255::doubles = nullptr;
$StringArray* Bug4387255::strings = nullptr;
$String* Bug4387255::pattern = nullptr;

void Bug4387255::init$() {
}

void Bug4387255::main($StringArray* args) {
	$init(Bug4387255);
	$useLocalCurrentObjectStackCache();
	$var($ChoiceFormat, choiceFormat1, $new($ChoiceFormat, Bug4387255::doubles, Bug4387255::strings));
	$var($ChoiceFormat, choiceFormat2, $new($ChoiceFormat, Bug4387255::pattern));
	if (!choiceFormat1->equals(choiceFormat2)) {
		$nc($System::out)->println($$str({"choiceFormat1: "_s, $(choiceFormat1->toPattern())}));
		$nc($System::out)->println($$str({"choiceFormat2: "_s, $(choiceFormat2->toPattern())}));
		$throwNew($RuntimeException);
	}
	for (int32_t i = 0; i < $nc(Bug4387255::doubles)->length; ++i) {
		$var($String, result, choiceFormat2->format($nc(Bug4387255::doubles)->get(i)));
		if (!$nc(result)->equals($nc(Bug4387255::strings)->get(i))) {
			$throwNew($RuntimeException, $$str({"Wrong format result - expected "_s, $nc(Bug4387255::strings)->get(i), ", got "_s, result}));
		}
	}
}

void clinit$Bug4387255($Class* class$) {
	$assignStatic(Bug4387255::pattern, "0#0|1#1|2#2|3#3|4#4|5#5|6#6|7#7|8#8|9#9|10#A|11#B|12#C|13#D|14#E|15#F|16#G|17#H|18#I|19#J|20#K|21#L|22#M|23#N|24#O|25#P|26#Q|27#R|28#S|29#T|30#U|31#V|32#W|33#X|34#Y|35#Z"_s);
	$assignStatic(Bug4387255::doubles, $new($doubles, {
		(double)0,
		(double)1,
		(double)2,
		(double)3,
		(double)4,
		(double)5,
		(double)6,
		(double)7,
		(double)8,
		(double)9,
		(double)10,
		(double)11,
		(double)12,
		(double)13,
		(double)14,
		(double)15,
		(double)16,
		(double)17,
		(double)18,
		(double)19,
		(double)20,
		(double)21,
		(double)22,
		(double)23,
		(double)24,
		(double)25,
		(double)26,
		(double)27,
		(double)28,
		(double)29,
		(double)30,
		(double)31,
		(double)32,
		(double)33,
		(double)34,
		(double)35
	}));
	$assignStatic(Bug4387255::strings, $new($StringArray, {
		"0"_s,
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s,
		"5"_s,
		"6"_s,
		"7"_s,
		"8"_s,
		"9"_s,
		"A"_s,
		"B"_s,
		"C"_s,
		"D"_s,
		"E"_s,
		"F"_s,
		"G"_s,
		"H"_s,
		"I"_s,
		"J"_s,
		"K"_s,
		"L"_s,
		"M"_s,
		"N"_s,
		"O"_s,
		"P"_s,
		"Q"_s,
		"R"_s,
		"S"_s,
		"T"_s,
		"U"_s,
		"V"_s,
		"W"_s,
		"X"_s,
		"Y"_s,
		"Z"_s
	}));
}

Bug4387255::Bug4387255() {
}

$Class* Bug4387255::load$($String* name, bool initialize) {
	$loadClass(Bug4387255, name, initialize, &_Bug4387255_ClassInfo_, clinit$Bug4387255, allocate$Bug4387255);
	return class$;
}

$Class* Bug4387255::class$ = nullptr;