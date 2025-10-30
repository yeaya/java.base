#include <Bug4912404.h>

#include <java/text/BreakIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BreakIterator = ::java::text::BreakIterator;

$MethodInfo _Bug4912404_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug4912404::*)()>(&Bug4912404::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug4912404::main))},
	{}
};

$ClassInfo _Bug4912404_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4912404",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug4912404_MethodInfo_
};

$Object* allocate$Bug4912404($Class* clazz) {
	return $of($alloc(Bug4912404));
}

void Bug4912404::init$() {
}

void Bug4912404::main($StringArray* args) {
	$var($BreakIterator, b, $BreakIterator::getWordInstance());
	$nc(b)->setText("abc"_s);
	if ($of(b)->equals(nullptr)) {
		$throwNew($RuntimeException, "BreakIterator.equals(null) should return false."_s);
	}
}

Bug4912404::Bug4912404() {
}

$Class* Bug4912404::load$($String* name, bool initialize) {
	$loadClass(Bug4912404, name, initialize, &_Bug4912404_ClassInfo_, allocate$Bug4912404);
	return class$;
}

$Class* Bug4912404::class$ = nullptr;