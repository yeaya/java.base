#include <StackOverflowTest.h>

#include <java/lang/StackOverflowError.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackOverflowError = ::java::lang::StackOverflowError;
using $Selector = ::java::nio::channels::Selector;

$MethodInfo _StackOverflowTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackOverflowTest::*)()>(&StackOverflowTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StackOverflowTest::main)), "java.lang.Exception"},
	{"recursiveSelect", "(Ljava/nio/channels/Selector;)V", nullptr, $STATIC, $method(static_cast<void(*)($Selector*)>(&StackOverflowTest::recursiveSelect)), "java.lang.Exception"},
	{}
};

$ClassInfo _StackOverflowTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StackOverflowTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StackOverflowTest_MethodInfo_
};

$Object* allocate$StackOverflowTest($Class* clazz) {
	return $of($alloc(StackOverflowTest));
}

void StackOverflowTest::init$() {
}

void StackOverflowTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Selector, sel, $Selector::open());
		{
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
	$loadClass(StackOverflowTest, name, initialize, &_StackOverflowTest_ClassInfo_, allocate$StackOverflowTest);
	return class$;
}

$Class* StackOverflowTest::class$ = nullptr;