#include <Split.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Random.h>
#include <java/util/regex/Pattern.h>
#include <java/util/regex/PatternSyntaxException.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $Random = ::java::util::Random;
using $Pattern = ::java::util::regex::Pattern;
using $PatternSyntaxException = ::java::util::regex::PatternSyntaxException;

$MethodInfo _Split_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Split::*)()>(&Split::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Split::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Split_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Split",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Split_MethodInfo_
};

$Object* allocate$Split($Class* clazz) {
	return $of($alloc(Split));
}

void Split::init$() {
}

void Split::main($StringArray* args) {
	$var($String, source, "0123456789"_s);
	for (int32_t limit = -2; limit < 3; ++limit) {
		for (int32_t x = 0; x < 10; ++x) {
			$var($StringArray, result, source->split($($Integer::toString(x)), limit));
			int32_t expectedLength = limit < 1 ? 2 : limit;
			if ((limit == 0) && (x == 9)) {
				if (result->length != 1) {
					$throwNew($RuntimeException, "String.split failure 1"_s);
				}
				if (!$nc(result->get(0))->equals("012345678"_s)) {
					$throwNew($RuntimeException, "String.split failure 2"_s);
				}
			} else {
				if (result->length != expectedLength) {
					$throwNew($RuntimeException, "String.split failure 3"_s);
				}
				if (!$nc(result->get(0))->equals($(source->substring(0, x)))) {
					if (limit != 1) {
						$throwNew($RuntimeException, "String.split failure 4"_s);
					} else if (!$nc($nc(result)->get(0))->equals($($nc(source)->substring(0, 10)))) {
						$throwNew($RuntimeException, "String.split failure 10"_s);
					}
				}
				if (expectedLength > 1) {
					if (!$nc(result->get(1))->equals($(source->substring(x + 1, 10)))) {
						$throwNew($RuntimeException, "String.split failure 5"_s);
					}
				}
			}
		}
	}
	for (int32_t limit = -2; limit < 3; ++limit) {
		$var($StringArray, result, source->split("e"_s, limit));
		if (result->length != 1) {
			$throwNew($RuntimeException, "String.split failure 6"_s);
		}
		if (!$nc(result->get(0))->equals(source)) {
			$throwNew($RuntimeException, "String.split failure 7"_s);
		}
	}
	$assign(source, ""_s);
	$var($StringArray, result, source->split("e"_s, 0));
	if (result->length != 1) {
		$throwNew($RuntimeException, "String.split failure 8"_s);
	}
	if (!$nc(result->get(0))->equals(source)) {
		$throwNew($RuntimeException, "String.split failure 9"_s);
	}
	$assign(source, "0123456789abcdefgABCDEFG"_s);
	$var($Random, r, $new($Random));
	{
		$var($booleans, arr$, $new($booleans, {
			false,
			true
		}));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			bool doEscape = arr$->get(i$);
			{
				for (int32_t cp = 0; cp < 0x00011000; ++cp) {
					$var($Pattern, p, nullptr);
					$var($String, regex, $new($String, $($Character::toChars(cp))));
					if (doEscape) {
						$assign(regex, $str({"\\"_s, regex}));
					}
					try {
						$assign(p, $Pattern::compile(regex));
					} catch ($PatternSyntaxException&) {
						$var($PatternSyntaxException, pse, $catch());
						try {
							"abc"_s->split(regex);
						} catch ($PatternSyntaxException&) {
							$var($PatternSyntaxException, pse0, $catch());
							continue;
						}
						$throwNew($RuntimeException, "String.split failure 11"_s);
					}
					int32_t off = r->nextInt(source->length());
						$var($String, var$4, $$str({$(source->substring(0, 3)), regex}));
						$var($String, var$3, $$concat(var$4, $(source->substring(3, 9))));
						$var($String, var$2, $$concat(var$3, regex));
						$var($String, var$1, $$concat(var$2, $(source->substring(9, 15))));
						$var($String, var$0, $$concat(var$1, regex));
						$var($String, var$5, $$str({$(source->substring(0, off)), regex}));
					$var($StringArray, srcStrs, $new($StringArray, {
						""_s,
						source,
						$$str({regex, source}),
						$$str({source, regex}),
						$$concat(var$0, $(source->substring(15))),
						$$concat(var$5, $(source->substring(off)))
					}));
					{
						$var($StringArray, arr$, srcStrs);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($String, src, arr$->get(i$));
							{
								for (int32_t limit = -2; limit < 3; ++limit) {
									$var($ObjectArray, var$6, $nc(src)->split(regex, limit));
									if (!$Arrays::equals(var$6, $($nc(p)->split(src, limit)))) {
										$throwNew($RuntimeException, "String.split failure 12"_s);
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

Split::Split() {
}

$Class* Split::load$($String* name, bool initialize) {
	$loadClass(Split, name, initialize, &_Split_ClassInfo_, allocate$Split);
	return class$;
}

$Class* Split::class$ = nullptr;