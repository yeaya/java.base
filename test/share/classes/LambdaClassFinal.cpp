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
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $SerializedLambda = ::java::lang::invoke::SerializedLambda;
using $Modifier = ::java::lang::reflect::Modifier;

class LambdaClassFinal$$Lambda$lambda$test$0 : public $LambdaClassFinal$I, public $Serializable {
	$class(LambdaClassFinal$$Lambda$lambda$test$0, $NO_CLASS_INIT, $LambdaClassFinal$I, $Serializable)
public:
virtual $Object0* toObject0$() const override {return ($Object0*)(void*)this;}
	void init$() {
	}
	virtual void m() override {
		LambdaClassFinal::lambda$test$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaClassFinal$$Lambda$lambda$test$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LambdaClassFinal$$Lambda$lambda$test$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LambdaClassFinal$$Lambda$lambda$test$0::*)()>(&LambdaClassFinal$$Lambda$lambda$test$0::init$))},
	{"m", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaClassFinal$$Lambda$lambda$test$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"LambdaClassFinal$$Lambda$lambda$test$0",
	"java.lang.Object",
	"LambdaClassFinal$I,java.io.Serializable",
	nullptr,
	methodInfos
};
$Class* LambdaClassFinal$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$loadClass(LambdaClassFinal$$Lambda$lambda$test$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1::*)()>(&LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1::init$))},
	{"m", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1",
	"java.lang.Object",
	"LambdaClassFinal$Iser",
	nullptr,
	methodInfos
};
$Class* LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1::load$($String* name, bool initialize) {
	$loadClass(LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1::class$ = nullptr;

$MethodInfo _LambdaClassFinal_MethodInfo_[] = {
	{"$deserializeLambda$", "(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($SerializedLambda*)>(&LambdaClassFinal::$deserializeLambda$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LambdaClassFinal::*)()>(&LambdaClassFinal::init$))},
	{"assertTrue", "(Z)V", nullptr, $STATIC, $method(static_cast<void(*)(bool)>(&LambdaClassFinal::assertTrue))},
	{"lambda$test$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&LambdaClassFinal::lambda$test$0))},
	{"lambda$test$e8a97009$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&LambdaClassFinal::lambda$test$e8a97009$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LambdaClassFinal::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _LambdaClassFinal_InnerClassesInfo_[] = {
	{"LambdaClassFinal$Iser", "LambdaClassFinal", "Iser", $STATIC | $INTERFACE | $ABSTRACT},
	{"LambdaClassFinal$I", "LambdaClassFinal", "I", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LambdaClassFinal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LambdaClassFinal",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LambdaClassFinal_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaClassFinal_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LambdaClassFinal$Iser,LambdaClassFinal$I"
};

$Object* allocate$LambdaClassFinal($Class* clazz) {
	return $of($alloc(LambdaClassFinal));
}

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
	$useLocalCurrentObjectStackCache();
	$var($LambdaClassFinal$I, lam, static_cast<$LambdaClassFinal$I*>($new(LambdaClassFinal$$Lambda$lambda$test$0)));
	assertTrue(((int32_t)($nc($of(lam))->getClass()->getModifiers() & (uint32_t)$Modifier::FINAL)) != 0);
	$var($LambdaClassFinal$Iser, slam, static_cast<$LambdaClassFinal$Iser*>($new(LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1)));
	assertTrue(((int32_t)($nc($of(slam))->getClass()->getModifiers() & (uint32_t)$Modifier::FINAL)) != 0);
}

$Object* LambdaClassFinal::$deserializeLambda$($SerializedLambda* lambda) {
	$useLocalCurrentObjectStackCache();
	{
		$var($String, s1214$, $nc(lambda)->getImplMethodName());
		int32_t tmp1214$ = -1;
		switch ($nc(s1214$)->hashCode()) {
		case (int32_t)0xACEB828F:
			{
				if (s1214$->equals("lambda$test$e8a97009$1"_s)) {
					tmp1214$ = 0;
				}
				break;
			}
		}
		switch (tmp1214$) {
		case 0:
			{
				bool var$4 = lambda->getImplMethodKind() == 6;
				bool var$3 = var$4 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("LambdaClassFinal$Iser"_s);
				bool var$2 = var$3 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("m"_s);
				bool var$1 = var$2 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("()V"_s);
				bool var$0 = var$1 && $nc($of($(lambda->getImplClass())))->equals("LambdaClassFinal"_s);
				if (var$0 && $nc($of($(lambda->getImplMethodSignature())))->equals("()V"_s)) {
					return $of(static_cast<$LambdaClassFinal$Iser*>($new(LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1)));
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
		if (name->equals(LambdaClassFinal$$Lambda$lambda$test$0::classInfo$.name)) {
			return LambdaClassFinal$$Lambda$lambda$test$0::load$(name, initialize);
		}
		if (name->equals(LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1::classInfo$.name)) {
			return LambdaClassFinal$$Lambda$lambda$test$e8a97009$1$1::load$(name, initialize);
		}
	}
	$loadClass(LambdaClassFinal, name, initialize, &_LambdaClassFinal_ClassInfo_, allocate$LambdaClassFinal);
	return class$;
}

$Class* LambdaClassFinal::class$ = nullptr;