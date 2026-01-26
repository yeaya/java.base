#include <Bug4932583.h>

#include <java/text/BreakIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;

$MethodInfo _Bug4932583_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Bug4932583, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug4932583, main, void, $StringArray*)},
	{}
};

$ClassInfo _Bug4932583_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4932583",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug4932583_MethodInfo_
};

$Object* allocate$Bug4932583($Class* clazz) {
	return $of($alloc(Bug4932583));
}

void Bug4932583::init$() {
}

void Bug4932583::main($StringArray* args) {
	$var($BreakIterator, iterator, $BreakIterator::getCharacterInstance());
	$nc(iterator)->setText($cstr({0xE03FF}));
	int32_t boundary = iterator->next();
}

Bug4932583::Bug4932583() {
}

$Class* Bug4932583::load$($String* name, bool initialize) {
	$loadClass(Bug4932583, name, initialize, &_Bug4932583_ClassInfo_, allocate$Bug4932583);
	return class$;
}

$Class* Bug4932583::class$ = nullptr;