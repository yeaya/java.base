#include <ClassAttributesTest.h>

#include <ClassAttributesTest$1.h>
#include <ClassAttributesTest$1LocalClass.h>
#include <ClassAttributesTest$NestedClass.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassAttributesTest$1 = ::ClassAttributesTest$1;
using $ClassAttributesTest$1LocalClass = ::ClassAttributesTest$1LocalClass;
using $ClassAttributesTest$NestedClass = ::ClassAttributesTest$NestedClass;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

class ClassAttributesTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(ClassAttributesTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ClassAttributesTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassAttributesTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ClassAttributesTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassAttributesTest$$Lambda$lambda$main$0::*)()>(&ClassAttributesTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassAttributesTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ClassAttributesTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ClassAttributesTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(ClassAttributesTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassAttributesTest$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _ClassAttributesTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassAttributesTest::*)()>(&ClassAttributesTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ClassAttributesTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ClassAttributesTest::main))},
	{"test", "(Ljava/lang/Class;ZZZ)I", "(Ljava/lang/Class<*>;ZZZ)I", $STATIC, $method(static_cast<int32_t(*)($Class*,bool,bool,bool)>(&ClassAttributesTest::test))},
	{}
};

$InnerClassInfo _ClassAttributesTest_InnerClassesInfo_[] = {
	{"ClassAttributesTest$NestedClass", "ClassAttributesTest", "NestedClass", 0},
	{"ClassAttributesTest$1", nullptr, nullptr, 0},
	{"ClassAttributesTest$1LocalClass", nullptr, "LocalClass", 0},
	{}
};

$ClassInfo _ClassAttributesTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClassAttributesTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClassAttributesTest_MethodInfo_,
	nullptr,
	nullptr,
	_ClassAttributesTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ClassAttributesTest$NestedClass,ClassAttributesTest$1,ClassAttributesTest$1LocalClass"
};

$Object* allocate$ClassAttributesTest($Class* clazz) {
	return $of($alloc(ClassAttributesTest));
}

void ClassAttributesTest::init$() {
}

int32_t ClassAttributesTest::test($Class* clazz, bool anonymous, bool local, bool member) {
	if ($nc(clazz)->isAnonymousClass() != anonymous) {
		$init($System);
		$nc($System::err)->println($$str({"Unexpected isAnonymousClass value for "_s, $(clazz->getName()), " expected: "_s, $$str(anonymous), " got: "_s, $$str((!anonymous))}));
		return 1;
	}
	if ($nc(clazz)->isLocalClass() != local) {
		$init($System);
		$nc($System::err)->println($$str({"Unexpected isLocalClass value for "_s, $(clazz->getName()), " expected: "_s, $$str(local), " got: "_s, $$str((!local))}));
		return 1;
	}
	if ($nc(clazz)->isMemberClass() != member) {
		$init($System);
		$nc($System::err)->println($$str({"Unexpected isMemberClass status for "_s, $(clazz->getName()), " expected: "_s, $$str(member), " got: "_s, $$str((!member))}));
		return 1;
	}
	return 0;
}

void ClassAttributesTest::main($StringArray* argv) {
	int32_t failures = 0;
	{
	}
	$var($Cloneable, clone, $new($ClassAttributesTest$1));
	$var($Runnable, lambda, static_cast<$Runnable*>($new(ClassAttributesTest$$Lambda$lambda$main$0)));
	$load(ClassAttributesTest);
	failures += test(ClassAttributesTest::class$, false, false, false);
	$load($ClassAttributesTest$NestedClass);
	failures += test($ClassAttributesTest$NestedClass::class$, false, false, true);
	$load($ClassAttributesTest$1LocalClass);
	failures += test($ClassAttributesTest$1LocalClass::class$, false, true, false);
	failures += test($of(clone)->getClass(), true, false, false);
	failures += test($nc($of(lambda))->getClass(), false, false, false);
	if (failures != 0) {
		$throwNew($RuntimeException, $$str({"Test failed with "_s, $$str(failures), " failures."_s}));
	}
}

void ClassAttributesTest::lambda$main$0() {
	$init($System);
	$nc($System::out)->println("run"_s);
}

ClassAttributesTest::ClassAttributesTest() {
}

$Class* ClassAttributesTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClassAttributesTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return ClassAttributesTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(ClassAttributesTest, name, initialize, &_ClassAttributesTest_ClassInfo_, allocate$ClassAttributesTest);
	return class$;
}

$Class* ClassAttributesTest::class$ = nullptr;