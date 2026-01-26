#include <StringRepeat.h>

#include <java/lang/OutOfMemoryError.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef REPEATS
#undef STRINGS

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _StringRepeat_FieldInfo_[] = {
	{"REPEATS", "[I", nullptr, $STATIC, $staticField(StringRepeat, REPEATS)},
	{"STRINGS", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(StringRepeat, STRINGS)},
	{}
};

$MethodInfo _StringRepeat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringRepeat, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(StringRepeat, main, void, $StringArray*)},
	{"test1", "()V", nullptr, $STATIC, $staticMethod(StringRepeat, test1, void)},
	{"test2", "()V", nullptr, $STATIC, $staticMethod(StringRepeat, test2, void)},
	{"truncate", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(StringRepeat, truncate, $String*, $String*)},
	{"verify", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $STATIC, $staticMethod(StringRepeat, verify, void, $String*, $String*, int32_t)},
	{}
};

$ClassInfo _StringRepeat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StringRepeat",
	"java.lang.Object",
	nullptr,
	_StringRepeat_FieldInfo_,
	_StringRepeat_MethodInfo_
};

$Object* allocate$StringRepeat($Class* clazz) {
	return $of($alloc(StringRepeat));
}

$ints* StringRepeat::REPEATS = nullptr;
$StringArray* StringRepeat::STRINGS = nullptr;

void StringRepeat::init$() {
}

void StringRepeat::main($StringArray* args) {
	$init(StringRepeat);
	if ($nc(args)->length > 0) {
		$assignStatic(StringRepeat::REPEATS, $new($ints, args->length));
		for (int32_t i = 0; i < args->length; ++i) {
			$nc(StringRepeat::REPEATS)->set(i, $Integer::parseInt(args->get(i)));
		}
	}
	test1();
	test2();
}

void StringRepeat::test1() {
	$init(StringRepeat);
	$useLocalCurrentObjectStackCache();
	{
		$var($ints, arr$, StringRepeat::REPEATS);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t repeat = arr$->get(i$);
			{
				{
					$var($StringArray, arr$, StringRepeat::STRINGS);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($String, string, arr$->get(i$));
						{
							int64_t limit = (int64_t)$nc(string)->length() * (int64_t)repeat;
							if ((int64_t)($Integer::MAX_VALUE >> 1) <= limit) {
								break;
							}
							verify($(string->repeat(repeat)), string, repeat);
						}
					}
				}
			}
		}
	}
}

void StringRepeat::test2() {
	$init(StringRepeat);
	try {
		"abc"_s->repeat(-1);
		$throwNew($RuntimeException, "No exception for negative repeat count"_s);
	} catch ($IllegalArgumentException& ex) {
	}
	try {
		"abc"_s->repeat($Integer::MAX_VALUE - 1);
		$throwNew($RuntimeException, "No exception for large repeat count"_s);
	} catch ($OutOfMemoryError& ex) {
	}
}

$String* StringRepeat::truncate($String* string) {
	$init(StringRepeat);
	if ($nc(string)->length() < 80) {
		return string;
	}
	return $str({$($nc(string)->substring(0, 80)), "..."_s});
}

void StringRepeat::verify($String* result, $String* string, int32_t repeat) {
	$init(StringRepeat);
	$useLocalCurrentObjectStackCache();
	if ($nc(string)->isEmpty() || repeat == 0) {
		if (!$nc(result)->isEmpty()) {
			$nc($System::err)->format("\"%s\".repeat(%d)%n"_s, $$new($ObjectArray, {
				$($of(truncate(string))),
				$($of($Integer::valueOf(repeat)))
			}));
			$nc($System::err)->format("Result \"%s\"%n"_s, $$new($ObjectArray, {$($of(truncate(result)))}));
			$nc($System::err)->format("Result expected to be empty, found string of length %d%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(result->length())))}));
			$throwNew($RuntimeException);
		}
	} else {
		int32_t expected = 0;
		int32_t count = 0;
		for (int32_t offset = $nc(result)->indexOf(string, expected); 0 <= offset; offset = result->indexOf(string, expected)) {
			++count;
			if (offset != expected) {
				$nc($System::err)->format("\"%s\".repeat(%d)%n"_s, $$new($ObjectArray, {
					$($of(truncate(string))),
					$($of($Integer::valueOf(repeat)))
				}));
				$nc($System::err)->format("Result \"%s\"%n"_s, $$new($ObjectArray, {$($of(truncate(result)))}));
				$nc($System::err)->format("Repeat expected at %d, found at = %d%n"_s, $$new($ObjectArray, {
					$($of($Integer::valueOf(expected))),
					$($of($Integer::valueOf(offset)))
				}));
				$throwNew($RuntimeException);
			}
			expected += $nc(string)->length();
		}
		if (count != repeat) {
			$nc($System::err)->format("\"%s\".repeat(%d)%n"_s, $$new($ObjectArray, {
				$($of(truncate(string))),
				$($of($Integer::valueOf(repeat)))
			}));
			$nc($System::err)->format("Result \"%s\"%n"_s, $$new($ObjectArray, {$($of(truncate(result)))}));
			$nc($System::err)->format("Repeat count expected to be %d, found %d%n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(repeat))),
				$($of($Integer::valueOf(count)))
			}));
			$throwNew($RuntimeException);
		}
	}
}

void clinit$StringRepeat($Class* class$) {
	$assignStatic(StringRepeat::REPEATS, $new($ints, {
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		10,
		11,
		12,
		13,
		14,
		15,
		16,
		32,
		64,
		128,
		256,
		512,
		1024,
		64 * 1024,
		1024 * 1024
	}));
	$assignStatic(StringRepeat::STRINGS, $new($StringArray, {
		""_s,
		$cstr({'\0'}),
		" "_s,
		"a"_s,
		"$"_s,
		u"•"_s,
		"ab"_s,
		"abc"_s,
		"abcd"_s,
		"abcde"_s,
		"The quick brown fox jumps over the lazy dog."_s
	}));
}

StringRepeat::StringRepeat() {
}

$Class* StringRepeat::load$($String* name, bool initialize) {
	$loadClass(StringRepeat, name, initialize, &_StringRepeat_ClassInfo_, clinit$StringRepeat, allocate$StringRepeat);
	return class$;
}

$Class* StringRepeat::class$ = nullptr;