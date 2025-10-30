#include <IsEmpty.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _IsEmpty_FieldInfo_[] = {
	{"tests", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(IsEmpty, tests)},
	{}
};

$MethodInfo _IsEmpty_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsEmpty::*)()>(&IsEmpty::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IsEmpty::main))},
	{}
};

$ClassInfo _IsEmpty_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsEmpty",
	"java.lang.Object",
	nullptr,
	_IsEmpty_FieldInfo_,
	_IsEmpty_MethodInfo_
};

$Object* allocate$IsEmpty($Class* clazz) {
	return $of($alloc(IsEmpty));
}

$StringArray* IsEmpty::tests = nullptr;

void IsEmpty::init$() {
}

void IsEmpty::main($StringArray* args) {
	$init(IsEmpty);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(IsEmpty::tests)->length; ++i) {
		$var($String, s, $nc(IsEmpty::tests)->get(i));
		int32_t len = $nc(s)->length();
		bool empty = s->isEmpty();
		if ((len != 0 && empty) || (len == 0 && !empty)) {
			$throwNew($RuntimeException, $$str({"String \""_s, s, "\":  isEmpty = "_s, $$str(empty), ", length = "_s, $$str(len)}));
		}
	}
}

void clinit$IsEmpty($Class* class$) {
	$assignStatic(IsEmpty::tests, $new($StringArray, {
		""_s,
		" "_s,
		"a"_s,
		"It was the best of times, it was the worst of times, it was the age of wisdom, it was the age of foolishness, it was the epoch of belief, it was the epoch of incredulity, it was the season of Light, it was the season of Darkness, it was the spring of hope, it was the winter of despair, we had everything before us, we had nothing before us, we were all going direct to Heaven, we were all going direct the other way- in short, the period was so far like the present period, that some of its noisiest authorities insisted on its being received, for good or for evil, in the superlative degree of comparison only.  -- Charles Dickens, Tale of Two Cities"_s
	}));
}

IsEmpty::IsEmpty() {
}

$Class* IsEmpty::load$($String* name, bool initialize) {
	$loadClass(IsEmpty, name, initialize, &_IsEmpty_ClassInfo_, clinit$IsEmpty, allocate$IsEmpty);
	return class$;
}

$Class* IsEmpty::class$ = nullptr;