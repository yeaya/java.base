#include <StackStreamTest.h>
#include <StackStreamTest$A.h>
#include <StackStreamTest$G.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE

using $StackStreamTest$A = ::StackStreamTest$A;
using $StackStreamTest$G = ::StackStreamTest$G;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

void StackStreamTest::main($StringArray* argv) {
	$$new(StackStreamTest)->test();
}

void StackStreamTest::init$() {
}

void StackStreamTest::test() {
	$StackStreamTest$A::a();
}

bool StackStreamTest::isTestClass($StackWalker$StackFrame* f) {
	return $$nc($nc(f)->getClassName())->startsWith("StackStreamTest"_s);
}

void StackStreamTest::equalsOrThrow($String* label, $List* list, $List* expected) {
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"List:    "_s, list}));
	$System::out->println($$str({"Expectd: "_s, list}));
	if (!$nc(list)->equals(expected)) {
		$nc($System::err)->println($$str({"Observed "_s, label}));
		{
			$var($Iterator, i$, list->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, s1, i$->next());
				{
					$System::out->println($$str({"  "_s, s1}));
				}
			}
		}
		$System::err->println($$str({"Expected "_s, label}));
		{
			$var($Iterator, i$, $nc(expected)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, s2, i$->next());
				{
					$System::out->println($$str({"  "_s, s2}));
				}
			}
		}
		$throwNew($RuntimeException, $$str({"Error with "_s, label}));
	}
}

void StackStreamTest::caller() {
	$useLocalObjectStack();
	$load(StackStreamTest);
	$beforeCallerSensitive();
	$init($StackWalker$Option);
	$Class* c = $$nc($StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE))->getCallerClass();
	$nc($System::out)->println($$str({"\ncaller class : "_s, c}));
	$load($StackStreamTest$G);
	if (c != $StackStreamTest$G::class$) {
		$throwNew($RuntimeException, $$str({"Unexpected caller class "_s, c}));
	}
}

StackStreamTest::StackStreamTest() {
}

$Class* StackStreamTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StackStreamTest, init$, void)},
		{"caller", "()V", nullptr, $STATIC, $staticMethod(StackStreamTest, caller, void)},
		{"equalsOrThrow", "(Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/util/List<TT;>;Ljava/util/List<TT;>;)V", $PRIVATE | $STATIC, $staticMethod(StackStreamTest, equalsOrThrow, void, $String*, $List*, $List*)},
		{"isTestClass", "(Ljava/lang/StackWalker$StackFrame;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(StackStreamTest, isTestClass, bool, $StackWalker$StackFrame*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamTest, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, $PUBLIC, $virtualMethod(StackStreamTest, test, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StackStreamTest$K", "StackStreamTest", "K", $STATIC},
		{"StackStreamTest$G", "StackStreamTest", "G", $STATIC},
		{"StackStreamTest$F", "StackStreamTest", "F", $STATIC},
		{"StackStreamTest$E", "StackStreamTest", "E", $STATIC},
		{"StackStreamTest$D", "StackStreamTest", "D", $STATIC},
		{"StackStreamTest$C", "StackStreamTest", "C", $STATIC},
		{"StackStreamTest$B", "StackStreamTest", "B", $STATIC},
		{"StackStreamTest$A", "StackStreamTest", "A", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StackStreamTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"StackStreamTest$K,StackStreamTest$K$Caller,StackStreamTest$G,StackStreamTest$F,StackStreamTest$E,StackStreamTest$D,StackStreamTest$C,StackStreamTest$B,StackStreamTest$A"
	};
	$loadClass(StackStreamTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackStreamTest);
	});
	return class$;
}

$Class* StackStreamTest::class$ = nullptr;