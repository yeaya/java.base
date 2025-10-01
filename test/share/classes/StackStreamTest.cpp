#include <StackStreamTest.h>

#include <StackStreamTest$A.h>
#include <StackStreamTest$G.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE

using $StackStreamTest$A = ::StackStreamTest$A;
using $StackStreamTest$G = ::StackStreamTest$G;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

$MethodInfo _StackStreamTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest::*)()>(&StackStreamTest::init$))},
	{"caller", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&StackStreamTest::caller))},
	{"equalsOrThrow", "(Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/util/List<TT;>;Ljava/util/List<TT;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$List*,$List*)>(&StackStreamTest::equalsOrThrow))},
	{"isTestClass", "(Ljava/lang/StackWalker$StackFrame;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($StackWalker$StackFrame*)>(&StackStreamTest::isTestClass))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StackStreamTest::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StackStreamTest_InnerClassesInfo_[] = {
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

$ClassInfo _StackStreamTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StackStreamTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StackStreamTest_MethodInfo_,
	nullptr,
	nullptr,
	_StackStreamTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"StackStreamTest$K,StackStreamTest$K$Caller,StackStreamTest$G,StackStreamTest$F,StackStreamTest$E,StackStreamTest$D,StackStreamTest$C,StackStreamTest$B,StackStreamTest$A"
};

$Object* allocate$StackStreamTest($Class* clazz) {
	return $of($alloc(StackStreamTest));
}

void StackStreamTest::main($StringArray* argv) {
	$$new(StackStreamTest)->test();
}

void StackStreamTest::init$() {
}

void StackStreamTest::test() {
	$StackStreamTest$A::a();
}

bool StackStreamTest::isTestClass($StackWalker$StackFrame* f) {
	return $nc($($nc(f)->getClassName()))->startsWith("StackStreamTest"_s);
}

void StackStreamTest::equalsOrThrow($String* label, $List* list, $List* expected) {
	$init($System);
	$nc($System::out)->println($$str({"List:    "_s, list}));
	$nc($System::out)->println($$str({"Expectd: "_s, list}));
	if (!$nc(list)->equals(expected)) {
		$nc($System::err)->println($$str({"Observed "_s, label}));
		{
			$var($Iterator, i$, list->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, s1, i$->next());
				{
					$nc($System::out)->println($$str({"  "_s, s1}));
				}
			}
		}
		$nc($System::err)->println($$str({"Expected "_s, label}));
		{
			$var($Iterator, i$, $nc(expected)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, s2, i$->next());
				{
					$nc($System::out)->println($$str({"  "_s, s2}));
				}
			}
		}
		$throwNew($RuntimeException, $$str({"Error with "_s, label}));
	}
}

void StackStreamTest::caller() {
	$load(StackStreamTest);
	$beforeCallerSensitive();
	$init($StackWalker$Option);
	$Class* c = $nc($($StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE)))->getCallerClass();
	$init($System);
	$nc($System::out)->println($$str({"\ncaller class : "_s, c}));
	$load($StackStreamTest$G);
	if (c != $StackStreamTest$G::class$) {
		$throwNew($RuntimeException, $$str({"Unexpected caller class "_s, c}));
	}
}

StackStreamTest::StackStreamTest() {
}

$Class* StackStreamTest::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest, name, initialize, &_StackStreamTest_ClassInfo_, allocate$StackStreamTest);
	return class$;
}

$Class* StackStreamTest::class$ = nullptr;