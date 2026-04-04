#include <StackRecorderUtil$TestFrame.h>
#include <StackRecorderUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StackRecorderUtil$TestFrame::init$($Class* declaringClass, $String* methodName, $String* fileName) {
	$set(this, fileName, nullptr);
	$set(this, declaringClass, declaringClass);
	$set(this, methodName, methodName);
	$set(this, fileName, fileName);
}

$String* StackRecorderUtil$TestFrame::className() {
	return $nc(this->declaringClass)->getName();
}

$String* StackRecorderUtil$TestFrame::toString() {
	$useLocalObjectStack();
	return $str({"TestFrame: "_s, $(className()), "."_s, this->methodName, (this->fileName == nullptr ? ""_s : $$str({"("_s, this->fileName, ")"_s}))});
}

StackRecorderUtil$TestFrame::StackRecorderUtil$TestFrame() {
}

$Class* StackRecorderUtil$TestFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"declaringClass", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(StackRecorderUtil$TestFrame, declaringClass)},
		{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StackRecorderUtil$TestFrame, methodName)},
		{"fileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StackRecorderUtil$TestFrame, fileName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StackRecorderUtil$TestFrame, init$, void, $Class*, $String*, $String*)},
		{"className", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StackRecorderUtil$TestFrame, className, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StackRecorderUtil$TestFrame, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StackRecorderUtil$TestFrame", "StackRecorderUtil", "TestFrame", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StackRecorderUtil$TestFrame",
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
		"StackRecorderUtil"
	};
	$loadClass(StackRecorderUtil$TestFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackRecorderUtil$TestFrame);
	});
	return class$;
}

$Class* StackRecorderUtil$TestFrame::class$ = nullptr;