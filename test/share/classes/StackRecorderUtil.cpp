#include <StackRecorderUtil.h>
#include <StackRecorderUtil$TestFrame.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE

using $StackRecorderUtil$TestFrame = ::StackRecorderUtil$TestFrame;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;

void StackRecorderUtil::init$($Set* swOptions) {
	$set(this, testFrames, $new($LinkedList));
	this->compareClassNames = true;
	this->compareMethodNames = true;
	$init($StackWalker$Option);
	this->compareClasses = $nc(swOptions)->contains($StackWalker$Option::RETAIN_CLASS_REFERENCE);
	this->compareSTEs = true;
}

void StackRecorderUtil::add($Class* declaringClass, $String* methodName, $String* fileName) {
	$nc(this->testFrames)->add(0, $$new($StackRecorderUtil$TestFrame, declaringClass, methodName, fileName));
}

int32_t StackRecorderUtil::frameCount() {
	return $nc(this->testFrames)->size();
}

void StackRecorderUtil::compareFrame(int32_t index, $StackWalker$StackFrame* sf) {
	$useLocalObjectStack();
	$var($StackRecorderUtil$TestFrame, tf, $cast($StackRecorderUtil$TestFrame, $nc(this->testFrames)->get(index)));
	if (this->compareClasses) {
		if (!$nc($nc(tf)->declaringClass)->equals($nc(sf)->getDeclaringClass())) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Expected class: "_s);
			var$0->append($(tf->declaringClass->toString()));
			var$0->append(", but got: "_s);
			var$0->append($($nc(sf->getDeclaringClass())->toString()));
			$throwNew($RuntimeException, $$str(var$0));
		}
	} else {
		bool caught = false;
		try {
			$nc(sf)->getDeclaringClass();
		} catch ($UnsupportedOperationException& e) {
			caught = true;
		}
		if (!caught) {
			$throwNew($RuntimeException, "StackWalker did not have RETAIN_CLASS_REFERENCE Option, but did not throw UnsupportedOperationException"_s);
		}
	}
	if (this->compareClassNames && !$$nc($nc(tf)->className())->equals($($nc(sf)->getClassName()))) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("Expected class name: "_s);
		var$1->append($(tf->className()));
		var$1->append(", but got: "_s);
		var$1->append($(sf->getClassName()));
		$throwNew($RuntimeException, $$str(var$1));
	}
	if (this->compareMethodNames && !$nc($nc(tf)->methodName)->equals($($nc(sf)->getMethodName()))) {
		$throwNew($RuntimeException, $$str({"Expected method name: "_s, tf->methodName, ", but got: "_s, $(sf->getMethodName())}));
	}
	if (this->compareSTEs) {
		$var($StackTraceElement, ste, $nc(sf)->toStackTraceElement());
		bool var$3 = $$nc($nc(ste)->getClassName())->equals($($nc(tf)->className()));
		bool var$2 = !(var$3 && $$nc(ste->getMethodName())->equals(tf->methodName));
		if (var$2 && $$nc(ste->getFileName())->equals(tf->fileName)) {
			$throwNew($RuntimeException, $$str({"Expected StackTraceElement info: "_s, tf, ", but got: "_s, ste}));
		}
		$var($Object, var$8, ste->getClassName());
		bool var$7 = !$Objects::equals(var$8, $(sf->getClassName()));
		if (!var$7) {
			$var($Object, var$9, ste->getMethodName());
			var$7 = !$Objects::equals(var$9, $(sf->getMethodName()));
		}
		bool var$6 = var$7;
		if (!var$6) {
			$var($Object, var$10, ste->getFileName());
			var$6 = !$Objects::equals(var$10, $(sf->getFileName()));
		}
		bool var$5 = var$6;
		if (!var$5) {
			$var($Object, var$11, $Integer::valueOf(ste->getLineNumber()));
			var$5 = !$Objects::equals(var$11, $($Integer::valueOf(sf->getLineNumber())));
		}
		bool var$4 = var$5;
		if (!var$4) {
			$var($Object, var$12, $Boolean::valueOf(ste->isNativeMethod()));
			var$4 = !$Objects::equals(var$12, $($Boolean::valueOf(sf->isNativeMethod())));
		}
		if (var$4) {
			$throwNew($RuntimeException, $$str({"StackFrame and StackTraceElement differ: sf="_s, sf, ", ste="_s, ste}));
		}
	}
}

$Iterator* StackRecorderUtil::iterator() {
	return $nc(this->testFrames)->iterator();
}

StackRecorderUtil::StackRecorderUtil() {
}

$Class* StackRecorderUtil::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"testFrames", "Ljava/util/List;", "Ljava/util/List<LStackRecorderUtil$TestFrame;>;", $PRIVATE, $field(StackRecorderUtil, testFrames)},
		{"compareClasses", "Z", nullptr, $PRIVATE, $field(StackRecorderUtil, compareClasses)},
		{"compareClassNames", "Z", nullptr, $PRIVATE, $field(StackRecorderUtil, compareClassNames)},
		{"compareMethodNames", "Z", nullptr, $PRIVATE, $field(StackRecorderUtil, compareMethodNames)},
		{"compareSTEs", "Z", nullptr, $PRIVATE, $field(StackRecorderUtil, compareSTEs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/StackWalker$Option;>;)V", $PUBLIC, $method(StackRecorderUtil, init$, void, $Set*)},
		{"add", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(StackRecorderUtil, add, void, $Class*, $String*, $String*)},
		{"compareFrame", "(ILjava/lang/StackWalker$StackFrame;)V", nullptr, $PUBLIC, $virtualMethod(StackRecorderUtil, compareFrame, void, int32_t, $StackWalker$StackFrame*)},
		{"frameCount", "()I", nullptr, $PUBLIC, $virtualMethod(StackRecorderUtil, frameCount, int32_t)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<LStackRecorderUtil$TestFrame;>;", $PUBLIC, $virtualMethod(StackRecorderUtil, iterator, $Iterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StackRecorderUtil$TestFrame", "StackRecorderUtil", "TestFrame", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StackRecorderUtil",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Iterable<LStackRecorderUtil$TestFrame;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"StackRecorderUtil$TestFrame"
	};
	$loadClass(StackRecorderUtil, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackRecorderUtil);
	});
	return class$;
}

$Class* StackRecorderUtil::class$ = nullptr;