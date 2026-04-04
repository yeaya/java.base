#include <GetCallerClassTest.h>
#include <GetCallerClassTest$1.h>
#include <GetCallerClassTest$InnerClassCaller.h>
#include <GetCallerClassTest$LambdaTest.h>
#include <GetCallerClassTest$Nested$NestedClassCaller.h>
#include <GetCallerClassTest$Nested.h>
#include <GetCallerClassTest$ReflectionTest.h>
#include <GetCallerClassTest$TopLevelCaller.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Permissions.h>
#include <java/security/Policy.h>
#include <java/util/Arrays.h>
#include <java/util/EnumSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef DEFAULT_POLICY
#undef RETAIN_CLASS_REFERENCE
#undef SHOW_HIDDEN_FRAMES

using $GetCallerClassTest$1 = ::GetCallerClassTest$1;
using $GetCallerClassTest$InnerClassCaller = ::GetCallerClassTest$InnerClassCaller;
using $GetCallerClassTest$LambdaTest = ::GetCallerClassTest$LambdaTest;
using $GetCallerClassTest$Nested = ::GetCallerClassTest$Nested;
using $GetCallerClassTest$ReflectionTest = ::GetCallerClassTest$ReflectionTest;
using $GetCallerClassTest$TopLevelCaller = ::GetCallerClassTest$TopLevelCaller;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Method = ::java::lang::reflect::Method;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Permissions = ::java::security::Permissions;
using $Policy = ::java::security::Policy;
using $Arrays = ::java::util::Arrays;
using $EnumSet = ::java::util::EnumSet;
using $List = ::java::util::List;
using $Consumer = ::java::util::function::Consumer;

class GetCallerClassTest$$Lambda$start : public $Consumer {
	$class(GetCallerClassTest$$Lambda$start, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$) override {
		$sure($Thread, inst$)->start();
	}
};
$Class* GetCallerClassTest$$Lambda$start::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetCallerClassTest$$Lambda$start, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(GetCallerClassTest$$Lambda$start, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"GetCallerClassTest$$Lambda$start",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(GetCallerClassTest$$Lambda$start, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetCallerClassTest$$Lambda$start);
	});
	return class$;
}
$Class* GetCallerClassTest$$Lambda$start::class$ = nullptr;

class GetCallerClassTest$$Lambda$lambda$test$0$1 : public $Consumer {
	$class(GetCallerClassTest$$Lambda$lambda$test$0$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* t) override {
		GetCallerClassTest::lambda$test$0($cast($Thread, t));
	}
};
$Class* GetCallerClassTest$$Lambda$lambda$test$0$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetCallerClassTest$$Lambda$lambda$test$0$1, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(GetCallerClassTest$$Lambda$lambda$test$0$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"GetCallerClassTest$$Lambda$lambda$test$0$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(GetCallerClassTest$$Lambda$lambda$test$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetCallerClassTest$$Lambda$lambda$test$0$1);
	});
	return class$;
}
$Class* GetCallerClassTest$$Lambda$lambda$test$0$1::class$ = nullptr;

$Policy* GetCallerClassTest::DEFAULT_POLICY = nullptr;

void GetCallerClassTest::init$($StackWalker* sw, bool expect) {
	$set(this, walker, sw);
	this->expectUOE = expect;
}

void GetCallerClassTest::main($StringArray* args) {
	$init(GetCallerClassTest);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if ($nc(args)->length > 0 && $nc(args->get(0))->equals("sm"_s)) {
		$var($PermissionCollection, perms, $new($Permissions));
		perms->add($$new($RuntimePermission, "getStackWalkerWithClassReference"_s));
		$Policy::setPolicy($$new($GetCallerClassTest$1, perms));
		$System::setSecurityManager($$new($SecurityManager));
	}
	$$new(GetCallerClassTest, $($StackWalker::getInstance()), true)->test();
	$init($StackWalker$Option);
	$$new(GetCallerClassTest, $($StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE)), false)->test();
	$$new(GetCallerClassTest, $($StackWalker::getInstance($($EnumSet::of($StackWalker$Option::RETAIN_CLASS_REFERENCE, $StackWalker$Option::SHOW_HIDDEN_FRAMES)))), false)->test();
}

void GetCallerClassTest::test() {
	$useLocalObjectStack();
	$$new($GetCallerClassTest$TopLevelCaller, this)->run();
	$$new($GetCallerClassTest$LambdaTest, this)->run();
	$$nc($$new($GetCallerClassTest$Nested, this)->createNestedCaller())->run();
	$$new($GetCallerClassTest$InnerClassCaller, this)->run();
	$$new($GetCallerClassTest$ReflectionTest, this)->run();
	$var($List, threads, $Arrays::asList($$new($ThreadArray, {
		$$new($Thread, $$new($GetCallerClassTest$TopLevelCaller, this)),
		$$new($Thread, $$new($GetCallerClassTest$LambdaTest, this)),
		$$new($Thread, $($$new($GetCallerClassTest$Nested, this)->createNestedCaller())),
		$$new($Thread, $$new($GetCallerClassTest$InnerClassCaller, this)),
		$$new($Thread, $$new($GetCallerClassTest$ReflectionTest, this))
	})));
	$$nc($nc(threads)->stream())->forEach($$new(GetCallerClassTest$$Lambda$start));
	$$nc(threads->stream())->forEach($$new(GetCallerClassTest$$Lambda$lambda$test$0$1));
}

void GetCallerClassTest::staticGetCallerClass($StackWalker* stackWalker, $Class* expected, bool expectUOE) {
	$init(GetCallerClassTest);
	$beforeCallerSensitive();
	try {
		$Class* c = $nc(stackWalker)->getCallerClass();
		assertEquals(c, expected);
		if (expectUOE) {
			$throwNew($RuntimeException, "Didn\'t get expected exception"_s);
		}
	} catch ($RuntimeException& e) {
		if (expectUOE && causeIsUOE(e)) {
			return;
		}
		$nc($System::err)->println("Unexpected exception:"_s);
		$throw(e);
	}
}

void GetCallerClassTest::reflectiveGetCallerClass($StackWalker* stackWalker, $Class* expected, bool expectUOE) {
	$init(GetCallerClassTest);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$load($StackWalker);
		$var($Method, m, $StackWalker::class$->getMethod("getCallerClass"_s, $$new($ClassArray, 0)));
		$Class* c = $cast($Class, $nc(m)->invoke(stackWalker, $$new($ObjectArray, 0)));
		assertEquals(c, expected);
		if (expectUOE) {
			$throwNew($RuntimeException, "Didn\'t get expected exception"_s);
		}
	} catch ($Throwable& e) {
		if (expectUOE && causeIsUOE(e)) {
			return;
		}
		$nc($System::err)->println("Unexpected exception:"_s);
		$throwNew($RuntimeException, e);
	}
}

void GetCallerClassTest::methodHandleGetCallerClass($StackWalker* stackWalker, $Class* expected, bool expectUOE) {
	$init(GetCallerClassTest);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($MethodHandles$Lookup, lookup, $MethodHandles::lookup());
	try {
		$load($StackWalker);
		$var($MethodHandle, mh, $nc(lookup)->findVirtual($StackWalker::class$, "getCallerClass"_s, $($MethodType::methodType($Class::class$))));
		$Class* c = $cast($Class, $nc(mh)->invokeExact($$new($ObjectArray, {stackWalker})));
		assertEquals(c, expected);
		if (expectUOE) {
			$throwNew($RuntimeException, "Didn\'t get expected exception"_s);
		}
	} catch ($Throwable& e) {
		if (expectUOE && causeIsUOE(e)) {
			return;
		}
		$nc($System::err)->println("Unexpected exception:"_s);
		$throwNew($RuntimeException, e);
	}
}

void GetCallerClassTest::assertEquals($Class* c, $Class* expected) {
	$init(GetCallerClassTest);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (expected != c) {
		if ($nc(c)->getNestHost() == $nc(expected)->getNestHost()) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Got "_s);
			var$0->append(c);
			var$0->append(", expected "_s);
			var$0->append(expected);
			var$0->append(", nestHost "_s);
			var$0->append(c->getNestHost());
			$nc($System::out)->println($$str(var$0));
			return;
		}
		$throwNew($RuntimeException, $$str({"Got "_s, c, ", but expected "_s, expected}));
	}
}

bool GetCallerClassTest::causeIsUOE($Throwable* t$renamed) {
	$init(GetCallerClassTest);
	$var($Throwable, t, t$renamed);
	while (t != nullptr) {
		if ($instanceOf($UnsupportedOperationException, t)) {
			return true;
		}
		$assign(t, t->getCause());
	}
	return false;
}

void GetCallerClassTest::lambda$test$0($Thread* t) {
	$init(GetCallerClassTest);
	try {
		$nc(t)->join();
	} catch ($InterruptedException& e) {
		$throwNew($RuntimeException, e);
	}
}

void GetCallerClassTest::clinit$($Class* clazz) {
	$assignStatic(GetCallerClassTest::DEFAULT_POLICY, $Policy::getPolicy());
}

GetCallerClassTest::GetCallerClassTest() {
}

$Class* GetCallerClassTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("GetCallerClassTest$$Lambda$start")) {
			return GetCallerClassTest$$Lambda$start::load$(name, initialize);
		}
		if (name->equals("GetCallerClassTest$$Lambda$lambda$test$0$1")) {
			return GetCallerClassTest$$Lambda$lambda$test$0$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_POLICY", "Ljava/security/Policy;", nullptr, $STATIC | $FINAL, $staticField(GetCallerClassTest, DEFAULT_POLICY)},
		{"walker", "Ljava/lang/StackWalker;", nullptr, $PRIVATE | $FINAL, $field(GetCallerClassTest, walker)},
		{"expectUOE", "Z", nullptr, $PRIVATE | $FINAL, $field(GetCallerClassTest, expectUOE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/StackWalker;Z)V", nullptr, $PUBLIC, $method(GetCallerClassTest, init$, void, $StackWalker*, bool)},
		{"assertEquals", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $staticMethod(GetCallerClassTest, assertEquals, void, $Class*, $Class*)},
		{"causeIsUOE", "(Ljava/lang/Throwable;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(GetCallerClassTest, causeIsUOE, bool, $Throwable*)},
		{"lambda$test$0", "(Ljava/lang/Thread;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GetCallerClassTest, lambda$test$0, void, $Thread*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(GetCallerClassTest, main, void, $StringArray*), "java.lang.Exception"},
		{"methodHandleGetCallerClass", "(Ljava/lang/StackWalker;Ljava/lang/Class;Z)V", "(Ljava/lang/StackWalker;Ljava/lang/Class<*>;Z)V", $PUBLIC | $STATIC, $staticMethod(GetCallerClassTest, methodHandleGetCallerClass, void, $StackWalker*, $Class*, bool)},
		{"reflectiveGetCallerClass", "(Ljava/lang/StackWalker;Ljava/lang/Class;Z)V", "(Ljava/lang/StackWalker;Ljava/lang/Class<*>;Z)V", $PUBLIC | $STATIC, $staticMethod(GetCallerClassTest, reflectiveGetCallerClass, void, $StackWalker*, $Class*, bool)},
		{"staticGetCallerClass", "(Ljava/lang/StackWalker;Ljava/lang/Class;Z)V", "(Ljava/lang/StackWalker;Ljava/lang/Class<*>;Z)V", $PUBLIC | $STATIC, $staticMethod(GetCallerClassTest, staticGetCallerClass, void, $StackWalker*, $Class*, bool)},
		{"test", "()V", nullptr, $PUBLIC, $virtualMethod(GetCallerClassTest, test, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetCallerClassTest$ReflectionTest", "GetCallerClassTest", "ReflectionTest", 0},
		{"GetCallerClassTest$InnerClassCaller", "GetCallerClassTest", "InnerClassCaller", 0},
		{"GetCallerClassTest$Nested", "GetCallerClassTest", "Nested", 0},
		{"GetCallerClassTest$LambdaTest", "GetCallerClassTest", "LambdaTest", 0},
		{"GetCallerClassTest$TopLevelCaller", "GetCallerClassTest", "TopLevelCaller", 0},
		{"GetCallerClassTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetCallerClassTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"GetCallerClassTest$ReflectionTest,GetCallerClassTest$InnerClassCaller,GetCallerClassTest$InnerClassCaller$Inner,GetCallerClassTest$Nested,GetCallerClassTest$Nested$NestedClassCaller,GetCallerClassTest$LambdaTest,GetCallerClassTest$TopLevelCaller,GetCallerClassTest$1"
	};
	$loadClass(GetCallerClassTest, name, initialize, &classInfo$$, GetCallerClassTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GetCallerClassTest);
	});
	return class$;
}

$Class* GetCallerClassTest::class$ = nullptr;