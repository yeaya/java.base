#include <TestObjectMethods$TypeHost.h>
#include <TestObjectMethods.h>
#include <java/lang/Number.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $List = ::java::util::List;
using $Set = ::java::util::Set;

void TestObjectMethods$TypeHost::init$() {
}

void TestObjectMethods$TypeHost::fooVoid() {
	return;
}

int32_t TestObjectMethods$TypeHost::foo() {
	return 0;
}

$String* TestObjectMethods$TypeHost::fooString() {
	return nullptr;
}

$ints* TestObjectMethods$TypeHost::fooIntArray() {
	return nullptr;
}

$StringArray* TestObjectMethods$TypeHost::fooStringArray() {
	return nullptr;
}

$StringArray2* TestObjectMethods$TypeHost::fooStringArrayArray() {
	return nullptr;
}

$Set* TestObjectMethods$TypeHost::fooSetString() {
	return nullptr;
}

$Set* TestObjectMethods$TypeHost::fooSetNumber() {
	return nullptr;
}

$Object* TestObjectMethods$TypeHost::fooE() {
	return nullptr;
}

$Number* TestObjectMethods$TypeHost::fooF() {
	return nullptr;
}

$Object* TestObjectMethods$TypeHost::fooG() {
	return nullptr;
}

$Set* TestObjectMethods$TypeHost::fooNumberSet() {
	return nullptr;
}

$Set* TestObjectMethods$TypeHost::fooNumberSet2() {
	return nullptr;
}

$Set* TestObjectMethods$TypeHost::fooNumberSet3() {
	return nullptr;
}

$Set* TestObjectMethods$TypeHost::fooObjectSet() {
	return nullptr;
}

$List* TestObjectMethods$TypeHost::fooObjectList() {
	return nullptr;
}

TestObjectMethods$TypeHost::TestObjectMethods$TypeHost() {
}

$Class* TestObjectMethods$TypeHost::load$($String* name, bool initialize) {
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooEmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooFmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooGmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooIntArraymethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooNumberSetmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooNumberSet2methodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooNumberSet3methodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooObjectListmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooObjectSetmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooSetNumbermethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooSetStringmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooStringmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooStringArraymethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooStringArrayArraymethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$CompoundAttribute fooVoidmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestObjectMethods$TypeHost, init$, void)},
		{"foo", "()I", nullptr, $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, foo, int32_t), nullptr, nullptr, foomethodAnnotations$$},
		{"fooE", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooE, $Object*), nullptr, nullptr, fooEmethodAnnotations$$},
		{"fooF", "()Ljava/lang/Number;", "()TF;", $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooF, $Number*), nullptr, nullptr, fooFmethodAnnotations$$},
		{"fooG", "()Ljava/lang/Object;", "<G:Ljava/lang/Object;>()TG;", $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooG, $Object*), nullptr, nullptr, fooGmethodAnnotations$$},
		{"fooIntArray", "()[I", nullptr, $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooIntArray, $ints*), nullptr, nullptr, fooIntArraymethodAnnotations$$},
		{"fooNumberSet", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljava/lang/Number;>;", $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooNumberSet, $Set*), nullptr, nullptr, fooNumberSetmethodAnnotations$$},
		{"fooNumberSet2", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljava/lang/Integer;>;", $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooNumberSet2, $Set*), nullptr, nullptr, fooNumberSet2methodAnnotations$$},
		{"fooNumberSet3", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljava/lang/Long;>;", $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooNumberSet3, $Set*), nullptr, nullptr, fooNumberSet3methodAnnotations$$},
		{"fooObjectList", "()Ljava/util/List;", "()Ljava/util/List<+Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooObjectList, $List*), nullptr, nullptr, fooObjectListmethodAnnotations$$},
		{"fooObjectSet", "()Ljava/util/Set;", "()Ljava/util/Set<*>;", $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooObjectSet, $Set*), nullptr, nullptr, fooObjectSetmethodAnnotations$$},
		{"fooSetNumber", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Number;>;", $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooSetNumber, $Set*), nullptr, nullptr, fooSetNumbermethodAnnotations$$},
		{"fooSetString", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooSetString, $Set*), nullptr, nullptr, fooSetStringmethodAnnotations$$},
		{"fooString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooString, $String*), nullptr, nullptr, fooStringmethodAnnotations$$},
		{"fooStringArray", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooStringArray, $StringArray*), nullptr, nullptr, fooStringArraymethodAnnotations$$},
		{"fooStringArrayArray", "()[[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooStringArrayArray, $StringArray2*), nullptr, nullptr, fooStringArrayArraymethodAnnotations$$},
		{"fooVoid", "()V", nullptr, $PUBLIC, $virtualMethod(TestObjectMethods$TypeHost, fooVoid, void), nullptr, nullptr, fooVoidmethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestObjectMethods$TypeHost", "TestObjectMethods", "TypeHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestObjectMethods$TypeHost",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;F:Ljava/lang/Number;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestObjectMethods"
	};
	$loadClass(TestObjectMethods$TypeHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestObjectMethods$TypeHost);
	});
	return class$;
}

$Class* TestObjectMethods$TypeHost::class$ = nullptr;