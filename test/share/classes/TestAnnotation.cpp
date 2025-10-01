#include <TestAnnotation.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $Annotation = ::java::lang::annotation::Annotation;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

class TestAnnotation$$Lambda$lambda$static$0 : public $Runnable {
	$class(TestAnnotation$$Lambda$lambda$static$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestAnnotation::lambda$static$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestAnnotation$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestAnnotation$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestAnnotation$$Lambda$lambda$static$0::*)()>(&TestAnnotation$$Lambda$lambda$static$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestAnnotation$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestAnnotation$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestAnnotation$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(TestAnnotation$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestAnnotation$$Lambda$lambda$static$0::class$ = nullptr;

$NamedAttribute TestAnnotation_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _TestAnnotation_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", TestAnnotation_Attribute_var$0},
	{}
};


$FieldInfo _TestAnnotation_FieldInfo_[] = {
	{"r", "Ljava/lang/Runnable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestAnnotation, r)},
	{}
};

$MethodInfo _TestAnnotation_MethodInfo_[] = {
	{"lambda$static$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestAnnotation::lambda$static$0))},
	{}
};

$ClassInfo _TestAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestAnnotation",
	nullptr,
	"java.lang.annotation.Annotation",
	_TestAnnotation_FieldInfo_,
	_TestAnnotation_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TestAnnotation_Annotations_
};

$Object* allocate$TestAnnotation($Class* clazz) {
	return $of($alloc(TestAnnotation));
}

$Runnable* TestAnnotation::r = nullptr;

void TestAnnotation::lambda$static$0() {
	$init(TestAnnotation);
}

void clinit$TestAnnotation($Class* class$) {
	$assignStatic(TestAnnotation::r, static_cast<$Runnable*>($new(TestAnnotation$$Lambda$lambda$static$0)));
}

$Class* TestAnnotation::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestAnnotation$$Lambda$lambda$static$0::classInfo$.name)) {
			return TestAnnotation$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(TestAnnotation, name, initialize, &_TestAnnotation_ClassInfo_, clinit$TestAnnotation, allocate$TestAnnotation);
	return class$;
}

$Class* TestAnnotation::class$ = nullptr;