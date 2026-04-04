#include <Bug6278616.h>
#include <java/text/NumberFormat.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $NumberFormat = ::java::text::NumberFormat;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;

$ints* Bug6278616::ints = nullptr;
$longs* Bug6278616::longs = nullptr;

void Bug6278616::init$() {
}

void Bug6278616::main($StringArray* args) {
	$init(Bug6278616);
	$useLocalObjectStack();
	$var($NumberFormat, nf, $NumberFormat::getInstance());
	for (int32_t j = 0; j < Bug6278616::ints->length; ++j) {
		$var($String, s_i, $nc(nf)->format((int64_t)Bug6278616::ints->get(j)));
		$var($String, s_ai, nf->format($$new($AtomicInteger, Bug6278616::ints->get(j))));
		if (!$nc(s_i)->equals(s_ai)) {
			$throwNew($RuntimeException, $$str({"format(AtomicInteger "_s, s_ai, ") doesn\'t equal format(Integer "_s, s_i, ")"_s}));
		}
	}
	for (int32_t j = 0; j < Bug6278616::longs->length; ++j) {
		$var($String, s_l, $nc(nf)->format(Bug6278616::longs->get(j)));
		$var($String, s_al, nf->format($$new($AtomicLong, Bug6278616::longs->get(j))));
		if (!$nc(s_l)->equals(s_al)) {
			$throwNew($RuntimeException, $$str({"format(AtomicLong "_s, s_al, ") doesn\'t equal format(Long "_s, s_l, ")"_s}));
		}
	}
}

void Bug6278616::clinit$($Class* clazz) {
	$assignStatic(Bug6278616::ints, $new($ints, {
		$Integer::MIN_VALUE,
		-1,
		0,
		1,
		$Integer::MAX_VALUE
	}));
	$assignStatic(Bug6278616::longs, $new($longs, {
		$Long::MIN_VALUE,
		-1,
		0,
		1,
		$Long::MAX_VALUE
	}));
}

Bug6278616::Bug6278616() {
}

$Class* Bug6278616::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ints", "[I", nullptr, $STATIC | $FINAL, $staticField(Bug6278616, ints)},
		{"longs", "[J", nullptr, $STATIC | $FINAL, $staticField(Bug6278616, longs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug6278616, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug6278616, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug6278616",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bug6278616, name, initialize, &classInfo$$, Bug6278616::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Bug6278616);
	});
	return class$;
}

$Class* Bug6278616::class$ = nullptr;