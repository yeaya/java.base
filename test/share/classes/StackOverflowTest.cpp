#include <StackOverflowTest.h>
#include <java/lang/StackOverflowError.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackOverflowError = ::java::lang::StackOverflowError;
using $Selector = ::java::nio::channels::Selector;

void StackOverflowTest::init$() {
}

void StackOverflowTest::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($Selector, sel, $Selector::open());
		$var($Throwable, var$0, nullptr);
		try {
			try {
				recursiveSelect(sel);
			} catch ($Throwable& t$) {
				if (sel != nullptr) {
					try {
						sel->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (sel != nullptr) {
				sel->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($StackOverflowError& e) {
	}
}

void StackOverflowTest::recursiveSelect($Selector* sel) {
	$nc(sel)->selectNow();
	recursiveSelect(sel);
}

StackOverflowTest::StackOverflowTest() {
}

$Class* StackOverflowTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StackOverflowTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StackOverflowTest, main, void, $StringArray*), "java.lang.Exception"},
		{"recursiveSelect", "(Ljava/nio/channels/Selector;)V", nullptr, $STATIC, $staticMethod(StackOverflowTest, recursiveSelect, void, $Selector*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StackOverflowTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StackOverflowTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackOverflowTest);
	});
	return class$;
}

$Class* StackOverflowTest::class$ = nullptr;