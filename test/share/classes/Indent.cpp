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
	$String* spaces = nullptr;
};
$Class* Indent$$Lambda$lambda$test1$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"spaces", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Indent$$Lambda$lambda$test1$0, spaces)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Indent$$Lambda$lambda$test1$0, init$, void, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Indent$$Lambda$lambda$test1$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Indent$$Lambda$lambda$test1$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Indent$$Lambda$lambda$test1$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Indent$$Lambda$lambda$test1$0);
	});
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
	int32_t adjust = 0;
};
$Class* Indent$$Lambda$lambda$test1$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"adjust", "I", nullptr, $PUBLIC, $field(Indent$$Lambda$lambda$test1$1$1, adjust)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Indent$$Lambda$lambda$test1$1$1, init$, void, int32_t)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Indent$$Lambda$lambda$test1$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Indent$$Lambda$lambda$test1$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Indent$$Lambda$lambda$test1$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Indent$$Lambda$lambda$test1$1$1);
	});
	return class$;
}
$Class* Indent$$Lambda$lambda$test1$1$1::class$ = nullptr;

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
	$useLocalObjectStack();
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
			$var($Iterator, i$, $nc(Indent::ENDS)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, prefix, $cast($String, i$->next()));
				{
					$var($Iterator, i$, Indent::ENDS->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, suffix, $cast($String, i$->next()));
						{
							$var($Iterator, i$, $nc(Indent::MIDDLES)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($String, middle, $cast($String, i$->next()));
								{
									$var($String, input, $str({prefix, "   abc   \n"_s, middle, "\n   def   \n"_s, suffix}));
									$var($String, output, input->indent(adjust));
									$var($Stream, stream, input->lines());
									if (adjust > 0) {
										$var($String, spaces, " "_s->repeat(adjust));
										$assign(stream, stream->map($$new(Indent$$Lambda$lambda$test1$0, spaces)));
									} else if (adjust < 0) {
										$assign(stream, stream->map($$new(Indent$$Lambda$lambda$test1$1$1, adjust)));
									}
									$var($String, expected, $cast($String, $nc(stream)->collect($($Collectors::joining("\n"_s, ""_s, "\n"_s)))));
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
	$useLocalObjectStack();
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
	return $cast($StringArray, $Arrays::copyOfRange(inLines, from, to));
}

void Indent::report($String* test, $String* message, $String* input, $String* output) {
	$init(Indent);
	$useLocalObjectStack();
	$nc($System::err)->println($$str({"Testing "_s, test, ": "_s, message}));
	$System::err->println();
	$System::err->println($$str({"Input: length = "_s, $$str($nc(input)->length())}));
	$System::err->println($("_"_s->repeat(40)));
	$System::err->print($(input->replaceAll(" "_s, "."_s)));
	$System::err->println($("_"_s->repeat(40)));
	$System::err->println();
	$System::err->println($$str({"Output: length = "_s, $$str($nc(output)->length())}));
	$System::err->println($("_"_s->repeat(40)));
	$System::err->print($(output->replaceAll(" "_s, "."_s)));
	$System::err->println($("_"_s->repeat(40)));
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

void Indent::clinit$($Class* clazz) {
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
		if (name->equals("Indent$$Lambda$lambda$test1$0")) {
			return Indent$$Lambda$lambda$test1$0::load$(name, initialize);
		}
		if (name->equals("Indent$$Lambda$lambda$test1$1$1")) {
			return Indent$$Lambda$lambda$test1$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"ENDS", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(Indent, ENDS)},
		{"MIDDLES", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(Indent, MIDDLES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Indent, init$, void)},
		{"getBody", "([Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Indent, getBody, $StringArray*, $StringArray*)},
		{"indexOfNonWhitespace", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Indent, indexOfNonWhitespace, int32_t, $String*)},
		{"lambda$test1$0", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Indent, lambda$test1$0, $String*, $String*, $String*)},
		{"lambda$test1$1", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Indent, lambda$test1$1, $String*, int32_t, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Indent, main, void, $StringArray*)},
		{"report", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Indent, report, void, $String*, $String*, $String*, $String*)},
		{"test1", "()V", nullptr, $STATIC, $staticMethod(Indent, test1, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Indent",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Indent, name, initialize, &classInfo$$, Indent::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Indent);
	});
	return class$;
}

$Class* Indent::class$ = nullptr;