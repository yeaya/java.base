#include <Bug7003643.h>

#include <java/lang/Math.h>
#include <java/text/MessageFormat.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef N

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MessageFormat = ::java::text::MessageFormat;
using $Random = ::java::util::Random;

$FieldInfo _Bug7003643_FieldInfo_[] = {
	{"N", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Bug7003643, N)},
	{"elements", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug7003643, elements)},
	{}
};

$MethodInfo _Bug7003643_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug7003643::*)()>(&Bug7003643::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug7003643::main))},
	{}
};

$ClassInfo _Bug7003643_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug7003643",
	"java.lang.Object",
	nullptr,
	_Bug7003643_FieldInfo_,
	_Bug7003643_MethodInfo_
};

$Object* allocate$Bug7003643($Class* clazz) {
	return $of($alloc(Bug7003643));
}

$StringArray* Bug7003643::elements = nullptr;

void Bug7003643::init$() {
}

void Bug7003643::main($StringArray* args) {
	$init(Bug7003643);
	$useLocalCurrentObjectStackCache();
	$var($Random, rand, $new($Random));
	int32_t count = 0;
	int32_t max = $cast(int32_t, ($Math::pow((double)$nc(Bug7003643::elements)->length, (double)Bug7003643::N) / 0.52));
	while (count < max) {
		$var($StringBuilder, sb, $new($StringBuilder));
		for (int32_t i = 0; i < Bug7003643::N; ++i) {
			sb->append($nc(Bug7003643::elements)->get(rand->nextInt($nc(Bug7003643::elements)->length)));
		}
		$var($String, pattern, sb->toString());
		$var($MessageFormat, mf, nullptr);
		try {
			$assign(mf, $new($MessageFormat, pattern));
		} catch ($IllegalArgumentException& e) {
		}
		if (mf == nullptr) {
			continue;
		}
		++count;
		$var($String, res1, $MessageFormat::format(pattern, $$new($ObjectArray, {$($of($Integer::valueOf(123)))})));
		$var($String, toPattern, $nc(mf)->toPattern());
		$var($String, res2, $MessageFormat::format(toPattern, $$new($ObjectArray, {$($of($Integer::valueOf(123)))})));
		if (!$nc(res1)->equals(res2)) {
			$var($String, s, $String::format("Failed%n      pattern=\"%s\"  =>  result=\"%s\"%n  toPattern()=\"%s\"  =>  result=\"%s\"%n"_s, $$new($ObjectArray, {
				$of(pattern),
				$of(res1),
				$of(toPattern),
				$of(res2)
			})));
			$throwNew($RuntimeException, s);
		}
	}
}

void clinit$Bug7003643($Class* class$) {
	$assignStatic(Bug7003643::elements, $new($StringArray, {
		"\'{\'"_s,
		"\'{"_s,
		"{"_s,
		"\'\'"_s,
		"}"_s,
		"a"_s,
		"\'"_s
	}));
}

Bug7003643::Bug7003643() {
}

$Class* Bug7003643::load$($String* name, bool initialize) {
	$loadClass(Bug7003643, name, initialize, &_Bug7003643_ClassInfo_, clinit$Bug7003643, allocate$Bug7003643);
	return class$;
}

$Class* Bug7003643::class$ = nullptr;