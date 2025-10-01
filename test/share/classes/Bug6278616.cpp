#include <Bug6278616.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Format = ::java::text::Format;
using $NumberFormat = ::java::text::NumberFormat;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;

$FieldInfo _Bug6278616_FieldInfo_[] = {
	{"ints", "[I", nullptr, $STATIC | $FINAL, $staticField(Bug6278616, ints)},
	{"longs", "[J", nullptr, $STATIC | $FINAL, $staticField(Bug6278616, longs)},
	{}
};

$MethodInfo _Bug6278616_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug6278616::*)()>(&Bug6278616::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug6278616::main))},
	{}
};

$ClassInfo _Bug6278616_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug6278616",
	"java.lang.Object",
	nullptr,
	_Bug6278616_FieldInfo_,
	_Bug6278616_MethodInfo_
};

$Object* allocate$Bug6278616($Class* clazz) {
	return $of($alloc(Bug6278616));
}

$ints* Bug6278616::ints = nullptr;
$longs* Bug6278616::longs = nullptr;

void Bug6278616::init$() {
}

void Bug6278616::main($StringArray* args) {
	$init(Bug6278616);
	$var($NumberFormat, nf, $NumberFormat::getInstance());
	for (int32_t j = 0; j < $nc(Bug6278616::ints)->length; ++j) {
		$var($String, s_i, $nc(nf)->format((int64_t)$nc(Bug6278616::ints)->get(j)));
		$var($String, s_ai, nf->format($$new($AtomicInteger, $nc(Bug6278616::ints)->get(j))));
		if (!$nc(s_i)->equals(s_ai)) {
			$throwNew($RuntimeException, $$str({"format(AtomicInteger "_s, s_ai, ") doesn\'t equal format(Integer "_s, s_i, ")"_s}));
		}
	}
	for (int32_t j = 0; j < $nc(Bug6278616::longs)->length; ++j) {
		$var($String, s_l, $nc(nf)->format($nc(Bug6278616::longs)->get(j)));
		$var($String, s_al, nf->format($$new($AtomicLong, $nc(Bug6278616::longs)->get(j))));
		if (!$nc(s_l)->equals(s_al)) {
			$throwNew($RuntimeException, $$str({"format(AtomicLong "_s, s_al, ") doesn\'t equal format(Long "_s, s_l, ")"_s}));
		}
	}
}

void clinit$Bug6278616($Class* class$) {
	$assignStatic(Bug6278616::ints, $new($ints, {
		$Integer::MIN_VALUE,
		-1,
		0,
		1,
		$Integer::MAX_VALUE
	}));
	$assignStatic(Bug6278616::longs, $new($longs, {
		$Long::MIN_VALUE,
		(int64_t)-1,
		(int64_t)0,
		(int64_t)1,
		$Long::MAX_VALUE
	}));
}

Bug6278616::Bug6278616() {
}

$Class* Bug6278616::load$($String* name, bool initialize) {
	$loadClass(Bug6278616, name, initialize, &_Bug6278616_ClassInfo_, clinit$Bug6278616, allocate$Bug6278616);
	return class$;
}

$Class* Bug6278616::class$ = nullptr;