#include <LambdaClassFinal.h>
#include <LambdaClassFinal$I.h>
#include <LambdaClassFinal$Iser.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/SerializedLambda.h>
#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

#undef FINAL

using $LambdaClassFinal$I = ::LambdaClassFinal$I;
using $LambdaClassFinal$Iser = ::LambdaClassFinal$Iser;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SerializedLambda = ::java::lang::invoke::SerializedLambda;
using $Modifier = ::java::lang::reflect::Modifier;

class LambdaClassFinal$$Lambda$lambda$test$0 : public $LambdaClassFinal$I {
	$class(LambdaClassFinal$$Lambda$lambda$test$0, $NO_CLASS_INIT, $LambdaClassFinal$I)
public:
	void init$() {
	}
	virtual void m() override {
		LambdaClassFinal::lambda$test$0();
	}
};
$Class* LambdaClassFinal$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaClassFinal$$Lambda$lambda$test$0, init$, void)},
		{"m", "()V", nullptr, $PUBLIC, $virtualMethod(LambdaClassFinal$$Lambda$lambda$test$0, m, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"LambdaClassFinal$$Lambda$lambda$test$0",
		"java.lang.Object",
		"LambdaClassFinal$I",
		nullptr,
		methodInfos$$
	};
	$loadClass(LambdaClassFinal$$Lambda$lambda$test$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaClassFinal$$Lambda$lambda$test$0);
	});
	return class$;
}
$Class* LambdaClassFinal$$Lambda$lambda$test$0::class$ = nullptr;

class LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1 : public $LambdaClassFinal$Iser {
	$class(LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1, $NO_CLASS_INIT, $LambdaClassFinal$Iser)
public:
	void init$() {
	}
	virtual void m() override {
		LambdaClassFinal::lambda$test$e8a97009$1();
	}
};
$Class* LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1, init$, void)},
		{"m", "()V", nullptr, $PUBLIC, $virtualMethod(LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1, m, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1",
		"java.lang.Object",
		"LambdaClassFinal$Iser",
		nullptr,
		methodInfos$$
	};
	$loadClass(LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1);
	});
	return class$;
}
$Class* LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1::class$ = nullptr;

void LambdaClassFinal::init$() {
}

void LambdaClassFinal::assertTrue(bool cond) {
	if (!cond) {
		$throwNew($AssertionError);
	}
}

void LambdaClassFinal::main($StringArray* args) {
	$$new(LambdaClassFinal)->test();
}

void LambdaClassFinal::test() {
	$useLocalObjectStack();
	$var($LambdaClassFinal$I, lam, $new(LambdaClassFinal$$Lambda$lambda$test$0));
	assertTrue(($nc(lam)->getClass()->getModifiers() & $Modifier::FINAL) != 0);
	$var($LambdaClassFinal$Iser, slam, $new(LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1));
	assertTrue(($nc(slam)->getClass()->getModifiers() & $Modifier::FINAL) != 0);
}

$Object* LambdaClassFinal::$deserializeLambda$($SerializedLambda* lambda) {
	$useLocalObjectStack();
	{
		$var($String, s1214$, $nc(lambda)->getImplMethodName());
		int32_t tmp1214$ = -1;
		switch ($nc(s1214$)->hashCode()) {
		case (int32_t)0xaceb828f:
			if (s1214$->equals("lambda$test$e8a97009$1"_s)) {
				tmp1214$ = 0;
			}
			break;
		}
		switch (tmp1214$) {
		case 0:
			{
				bool var$4 = lambda->getImplMethodKind() == 6;
				bool var$3 = var$4 && $$nc(lambda->getFunctionalInterfaceClass())->equals("LambdaClassFinal$Iser"_s);
				bool var$2 = var$3 && $$nc(lambda->getFunctionalInterfaceMethodName())->equals("m"_s);
				bool var$1 = var$2 && $$nc(lambda->getFunctionalInterfaceMethodSignature())->equals("()V"_s);
				bool var$0 = var$1 && $$nc(lambda->getImplClass())->equals("LambdaClassFinal"_s);
				if (var$0 && $$nc(lambda->getImplMethodSignature())->equals("()V"_s)) {
					return $new(LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1);
				}
				break;
			}
		}
	}
	$throwNew($IllegalArgumentException, "Invalid lambda deserialization"_s);
}

void LambdaClassFinal::lambda$test$e8a97009$1() {
}

void LambdaClassFinal::lambda$test$0() {
}

LambdaClassFinal::LambdaClassFinal() {
}

$Class* LambdaClassFinal::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("LambdaClassFinal$$Lambda$lambda$test$0")) {
			return LambdaClassFinal$$Lambda$lambda$test$0::load$(name, initialize);
		}
		if (name->equals("LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1")) {
			return LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"$deserializeLambda$", "(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LambdaClassFinal, $deserializeLambda$, $Object*, $SerializedLambda*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaClassFinal, init$, void)},
		{"assertTrue", "(Z)V", nullptr, $STATIC, $staticMethod(LambdaClassFinal, assertTrue, void, bool)},
		{"lambda$test$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LambdaClassFinal, lambda$test$0, void)},
		{"lambda$test$e8a97009$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LambdaClassFinal, lambda$test$e8a97009$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LambdaClassFinal, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, 0, $virtualMethod(LambdaClassFinal, test, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LambdaClassFinal$Iser", "LambdaClassFinal", "Iser", $STATIC | $INTERFACE | $ABSTRACT},
		{"LambdaClassFinal$I", "LambdaClassFinal", "I", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LambdaClassFinal",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"LambdaClassFinal$Iser,LambdaClassFinal$I"
	};
	$loadClass(LambdaClassFinal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaClassFinal);
	});
	return class$;
}

$Class* LambdaClassFinal::class$ = nullptr;