#include <Indent.h>

#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef ENDS
#undef MIDDLES

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

class Indent$$Lambda$lambda$test1$0 : public $Function {
	$class(Indent$$Lambda$lambda$test1$0, $NO_CLASS_INIT, $Function)
public:
	void init$($String* spaces) {
		$set(this, spaces, spaces);
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(Indent::lambda$test1$0(spaces, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Indent$$Lambda$lambda$test1$0>());
	}
	$String* spaces = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Indent$$Lambda$lambda$test1$0::fieldInfos[2] = {
	{"spaces", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Indent$$Lambda$lambda$test1$0, spaces)},
	{}
};
$MethodInfo Indent$$Lambda$lambda$test1$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Indent$$Lambda$lambda$test1$0::*)($String*)>(&Indent$$Lambda$lambda$test1$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Indent$$Lambda$lambda$test1$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Indent$$Lambda$lambda$test1$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Indent$$Lambda$lambda$test1$0::load$($String* name, bool initialize) {
	$loadClass(Indent$$Lambda$lambda$test1$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Indent$$Lambda$lambda$test1$0::class$ = nullptr;

class Indent$$Lambda$lambda$test1$1$1 : public $Function {
	$class(Indent$$Lambda$lambda$test1$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$(int32_t adjust) {
		this->adjust = adjust;
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(Indent::lambda$test1$1(adjust, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Indent$$Lambda$lambda$test1$1$1>());
	}
	int32_t adjust = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Indent$$Lambda$lambda$test1$1$1::fieldInfos[2] = {
	{"adjust", "I", nullptr, $PUBLIC, $field(Indent$$Lambda$lambda$test1$1$1, adjust)},
	{}
};
$MethodInfo Indent$$Lambda$lambda$test1$1$1::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Indent$$Lambda$lambda$test1$1$1::*)(int32_t)>(&Indent$$Lambda$lambda$test1$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Indent$$Lambda$lambda$test1$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Indent$$Lambda$lambda$test1$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Indent$$Lambda$lambda$test1$1$1::load$($String* name, bool initialize) {
	$loadClass(Indent$$Lambda$lambda$test1$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Indent$$Lambda$lambda$test1$1$1::class$ = nullptr;

$FieldInfo _Indent_FieldInfo_[] = {
	{"ENDS", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(Indent, ENDS)},
	{"MIDDLES", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(Indent, MIDDLES)},
	{}
};

$MethodInfo _Indent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Indent::*)()>(&Indent::init$))},
	{"getBody", "([Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringArray*(*)($StringArray*)>(&Indent::getBody))},
	{"indexOfNonWhitespace", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&Indent::indexOfNonWhitespace))},
	{"lambda$test1$0", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*,$String*)>(&Indent::lambda$test1$0))},
	{"lambda$test1$1", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)(int32_t,$String*)>(&Indent::lambda$test1$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Indent::main))},
	{"report", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*,$String*,$String*)>(&Indent::report))},
	{"test1", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Indent::test1))},
	{}
};

$ClassInfo _Indent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Indent",
	"java.lang.Object",
	nullptr,
	_Indent_FieldInfo_,
	_Indent_MethodInfo_
};

$Object* allocate$Indent($Class* clazz) {
	return $of($alloc(Indent));
}

$List* Indent::ENDS = nullptr;
$List* Indent::MIDDLES = nullptr;

void Indent::init$() {
}

void Indent::main($StringArray* args) {
	$init(Indent);
	test1();
}

void Indent::test1() {
	$init(Indent);
	$useLocalCurrentObjectStackCache();
	{
		$var($ints, arr$, $new($ints, {
			-8,
			-7,
			-4,
			-3,
			-2,
			-1,
			0,
			1,
			2,
			3,
			4,
			7,
			8
		}));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t adjust = arr$->get(i$);
			{
				{
					$var($Iterator, i$, $nc(Indent::ENDS)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, prefix, $cast($String, i$->next()));
						{
							{
								$var($Iterator, i$, $nc(Indent::ENDS)->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($String, suffix, $cast($String, i$->next()));
									{
										{
											$var($Iterator, i$, $nc(Indent::MIDDLES)->iterator());
											for (; $nc(i$)->hasNext();) {
												$var($String, middle, $cast($String, i$->next()));
												{
													$var($String, input, $str({prefix, "   abc   \n"_s, middle, "\n   def   \n"_s, suffix}));
													$var($String, output, $nc(input)->indent(adjust));
													$var($Stream, stream, input->lines());
													if (adjust > 0) {
														$var($String, spaces, " "_s->repeat(adjust));
														$assign(stream, stream->map(static_cast<$Function*>($$new(Indent$$Lambda$lambda$test1$0, spaces))));
													} else if (adjust < 0) {
														$assign(stream, stream->map(static_cast<$Function*>($$new(Indent$$Lambda$lambda$test1$1$1, adjust))));
													}
													$var($String, expected, $cast($String, stream->collect($($Collectors::joining("\n"_s, ""_s, "\n"_s)))));
													if (!$nc(output)->equals(expected)) {
														report("String::indent(int n)"_s, "Result indentation not as expected"_s, expected, output);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int32_t Indent::indexOfNonWhitespace($String* s) {
	$init(Indent);
	int32_t left = 0;
	while (left < $nc(s)->length()) {
		char16_t ch = s->charAt(left);
		if (ch != u' ' && ch != u'\t' && !$Character::isWhitespace(ch)) {
			break;
		}
		++left;
	}
	return left;
}

$StringArray* Indent::getBody($StringArray* inLines) {
	$init(Indent);
	$useLocalCurrentObjectStackCache();
	int32_t from = -1;
	int32_t to = -1;
	for (int32_t i = 0; i < $nc(inLines)->length; ++i) {
		$var($String, line, inLines->get(i));
		if (!$nc(line)->isBlank()) {
			if (from == -1) {
				from = i;
			}
			to = i + 1;
		}
	}
	return $fcast($StringArray, $Arrays::copyOfRange(inLines, from, to));
}

void Indent::report($String* test, $String* message, $String* input, $String* output) {
	$init(Indent);
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println($$str({"Testing "_s, test, ": "_s, message}));
	$nc($System::err)->println();
	$nc($System::err)->println($$str({"Input: length = "_s, $$str($nc(input)->length())}));
	$nc($System::err)->println($("_"_s->repeat(40)));
	$nc($System::err)->print($($nc(input)->replaceAll(" "_s, "."_s)));
	$nc($System::err)->println($("_"_s->repeat(40)));
	$nc($System::err)->println();
	$nc($System::err)->println($$str({"Output: length = "_s, $$str($nc(output)->length())}));
	$nc($System::err)->println($("_"_s->repeat(40)));
	$nc($System::err)->print($($nc(output)->replaceAll(" "_s, "."_s)));
	$nc($System::err)->println($("_"_s->repeat(40)));
	$throwNew($RuntimeException);
}

$String* Indent::lambda$test1$1(int32_t adjust, $String* s) {
	$init(Indent);
	return $nc(s)->substring($Math::min(-adjust, indexOfNonWhitespace(s)));
}

$String* Indent::lambda$test1$0($String* spaces, $String* s) {
	$init(Indent);
	return $str({spaces, s});
}

void clinit$Indent($Class* class$) {
	$assignStatic(Indent::ENDS, $List::of(""_s, "\n"_s, "   \n"_s, "\n\n"_s, "\n\n\n"_s));
	$assignStatic(Indent::MIDDLES, $List::of($$new($StringArray, {
		""_s,
		"xyz"_s,
		"   xyz"_s,
		"      xyz"_s,
		"xyz   "_s,
		"   xyz   "_s,
		"      xyz   "_s,
		u"xyz•"_s,
		u"   xyz•"_s,
		u"xyz•   "_s,
		u"   xyz•   "_s,
		"   // comment"_s
	})));
}

Indent::Indent() {
}

$Class* Indent::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Indent$$Lambda$lambda$test1$0::classInfo$.name)) {
			return Indent$$Lambda$lambda$test1$0::load$(name, initialize);
		}
		if (name->equals(Indent$$Lambda$lambda$test1$1$1::classInfo$.name)) {
			return Indent$$Lambda$lambda$test1$1$1::load$(name, initialize);
		}
	}
	$loadClass(Indent, name, initialize, &_Indent_ClassInfo_, clinit$Indent, allocate$Indent);
	return class$;
}

$Class* Indent::class$ = nullptr;