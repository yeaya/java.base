#include <ClassAttributesTest.h>
#include <ClassAttributesTest$1.h>
#include <ClassAttributesTest$1LocalClass.h>
#include <ClassAttributesTest$NestedClass.h>
#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $ClassAttributesTest$1 = ::ClassAttributesTest$1;
using $ClassAttributesTest$1LocalClass = ::ClassAttributesTest$1LocalClass;
using $ClassAttributesTest$NestedClass = ::ClassAttributesTest$NestedClass;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

class ClassAttributesTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(ClassAttributesTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ClassAttributesTest::lambda$main$0();
	}
};
$Class* ClassAttributesTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassAttributesTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ClassAttributesTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ClassAttributesTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ClassAttributesTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassAttributesTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* ClassAttributesTest$$Lambda$lambda$main$0::class$ = nullptr;

void ClassAttributesTest::init$() {
}

int32_t ClassAttributesTest::test($Class* clazz, bool anonymous, bool local, bool member) {
	$useLocalObjectStack();
	if ($nc(clazz)->isAnonymousClass() != anonymous) {
		$nc($System::err)->println($$str({"Unexpected isAnonymousClass value for "_s, $(clazz->getName()), " expected: "_s, $$str(anonymous), " got: "_s, $$str((!anonymous))}));
		return 1;
	}
	if (clazz->isLocalClass() != local) {
		$nc($System::err)->println($$str({"Unexpected isLocalClass value for "_s, $(clazz->getName()), " expected: "_s, $$str(local), " got: "_s, $$str((!local))}));
		return 1;
	}
	if (clazz->isMemberClass() != member) {
		$nc($System::err)->println($$str({"Unexpected isMemberClass status for "_s, $(clazz->getName()), " expected: "_s, $$str(member), " got: "_s, $$str((!member))}));
		return 1;
	}
	return 0;
}

void ClassAttributesTest::main($StringArray* argv) {
	$useLocalObjectStack();
	int32_t failures = 0;
	{
	}
	$var($Cloneable, clone, $new($ClassAttributesTest$1));
	$var($Runnable, lambda, $new(ClassAttributesTest$$Lambda$lambda$main$0));
	$load(ClassAttributesTest);
	failures += test(ClassAttributesTest::class$, false, false, false);
	$load($ClassAttributesTest$NestedClass);
	failures += test($ClassAttributesTest$NestedClass::class$, false, false, true);
	$load($ClassAttributesTest$1LocalClass);
	failures += test($ClassAttributesTest$1LocalClass::class$, false, true, false);
	failures += test(clone->getClass(), true, false, false);
	failures += test($nc(lambda)->getClass(), false, false, false);
	if (failures != 0) {
		$throwNew($RuntimeException, $$str({"Test failed with "_s, $$str(failures), " failures."_s}));
	}
}

void ClassAttributesTest::lambda$main$0() {
	$nc($System::out)->println("run"_s);
}

ClassAttributesTest::ClassAttributesTest() {
}

$Class* ClassAttributesTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("ClassAttributesTest$$Lambda$lambda$main$0")) {
			return ClassAttributesTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassAttributesTest, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ClassAttributesTest, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ClassAttributesTest, main, void, $StringArray*)},
		{"test", "(Ljava/lang/Class;ZZZ)I", "(Ljava/lang/Class<*>;ZZZ)I", $STATIC, $staticMethod(ClassAttributesTest, test, int32_t, $Class*, bool, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ClassAttributesTest$NestedClass", "ClassAttributesTest", "NestedClass", 0},
		{"ClassAttributesTest$1", nullptr, nullptr, 0},
		{"ClassAttributesTest$1LocalClass", nullptr, "LocalClass", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ClassAttributesTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ClassAttributesTest$NestedClass,ClassAttributesTest$1,ClassAttributesTest$1LocalClass"
	};
	$loadClass(ClassAttributesTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassAttributesTest);
	});
	return class$;
}

$Class* ClassAttributesTest::class$ = nullptr;