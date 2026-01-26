#include <SelectNowWhenEmpty.h>

#include <java/nio/channels/Selector.h>
#include <java/nio/channels/spi/AbstractSelector.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Selector = ::java::nio::channels::Selector;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;

$MethodInfo _SelectNowWhenEmpty_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SelectNowWhenEmpty, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SelectNowWhenEmpty, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _SelectNowWhenEmpty_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SelectNowWhenEmpty",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SelectNowWhenEmpty_MethodInfo_
};

$Object* allocate$SelectNowWhenEmpty($Class* clazz) {
	return $of($alloc(SelectNowWhenEmpty));
}

void SelectNowWhenEmpty::init$() {
}

void SelectNowWhenEmpty::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Selector, s, $nc($($SelectorProvider::provider()))->openSelector());
	$nc(s)->selectNow();
}

SelectNowWhenEmpty::SelectNowWhenEmpty() {
}

$Class* SelectNowWhenEmpty::load$($String* name, bool initialize) {
	$loadClass(SelectNowWhenEmpty, name, initialize, &_SelectNowWhenEmpty_ClassInfo_, allocate$SelectNowWhenEmpty);
	return class$;
}

$Class* SelectNowWhenEmpty::class$ = nullptr;