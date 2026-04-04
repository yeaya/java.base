#include <Test7087570$TestMethodData.h>
#include <Test7087570.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodType = ::java::lang::invoke::MethodType;

void Test7087570$TestMethodData::init$($Class* clazz, $String* name, $MethodType* methodType, $Class* declaringClass, int32_t referenceKind) {
	$set(this, clazz, clazz);
	$set(this, name, name);
	$set(this, methodType, methodType);
	$set(this, declaringClass, declaringClass);
	this->referenceKind = referenceKind;
}

Test7087570$TestMethodData::Test7087570$TestMethodData() {
}

$Class* Test7087570$TestMethodData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(Test7087570$TestMethodData, clazz)},
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(Test7087570$TestMethodData, name)},
		{"methodType", "Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(Test7087570$TestMethodData, methodType)},
		{"declaringClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(Test7087570$TestMethodData, declaringClass)},
		{"referenceKind", "I", nullptr, $FINAL, $field(Test7087570$TestMethodData, referenceKind)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class;I)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class<*>;I)V", $PUBLIC, $method(Test7087570$TestMethodData, init$, void, $Class*, $String*, $MethodType*, $Class*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test7087570$TestMethodData", "Test7087570", "TestMethodData", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test7087570$TestMethodData",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test7087570"
	};
	$loadClass(Test7087570$TestMethodData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test7087570$TestMethodData);
	});
	return class$;
}

$Class* Test7087570$TestMethodData::class$ = nullptr;