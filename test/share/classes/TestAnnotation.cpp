#include <TestAnnotation.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

class TestAnnotation$$Lambda$lambda$static$0 : public $Runnable {
	$class(TestAnnotation$$Lambda$lambda$static$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestAnnotation::lambda$static$0();
	}
};
$Class* TestAnnotation$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestAnnotation$$Lambda$lambda$static$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestAnnotation$$Lambda$lambda$static$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestAnnotation$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestAnnotation$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestAnnotation$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* TestAnnotation$$Lambda$lambda$static$0::class$ = nullptr;

$Runnable* TestAnnotation::r = nullptr;

void TestAnnotation::lambda$static$0() {
	$init(TestAnnotation);
}

void TestAnnotation::clinit$($Class* clazz) {
	$assignStatic(TestAnnotation::r, $new(TestAnnotation$$Lambda$lambda$static$0));
}

$Class* TestAnnotation::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestAnnotation$$Lambda$lambda$static$0")) {
			return TestAnnotation$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"r", "Ljava/lang/Runnable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestAnnotation, r)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"lambda$static$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestAnnotation, lambda$static$0, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"TestAnnotation",
		nullptr,
		"java.lang.annotation.Annotation",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TestAnnotation, name, initialize, &classInfo$$, TestAnnotation::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestAnnotation);
	});
	return class$;
}

$Class* TestAnnotation::class$ = nullptr;