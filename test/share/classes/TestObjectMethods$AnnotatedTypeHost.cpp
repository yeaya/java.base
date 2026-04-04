#include <TestObjectMethods$AnnotatedTypeHost.h>
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
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $TypeAnnotation = ::java::lang::TypeAnnotation;
using $List = ::java::util::List;
using $Set = ::java::util::Set;

void TestObjectMethods$AnnotatedTypeHost::init$() {
}

void TestObjectMethods$AnnotatedTypeHost::fooVoid() {
	return;
}

int32_t TestObjectMethods$AnnotatedTypeHost::foo() {
	return 0;
}

$String* TestObjectMethods$AnnotatedTypeHost::fooString() {
	return nullptr;
}

$ints* TestObjectMethods$AnnotatedTypeHost::fooIntArray() {
	return nullptr;
}

$StringArray* TestObjectMethods$AnnotatedTypeHost::fooStringArray() {
	return nullptr;
}

$StringArray2* TestObjectMethods$AnnotatedTypeHost::fooStringArrayArray() {
	return nullptr;
}

$Set* TestObjectMethods$AnnotatedTypeHost::fooSetString() {
	return nullptr;
}

$Set* TestObjectMethods$AnnotatedTypeHost::fooSetNumber() {
	return nullptr;
}

$Object* TestObjectMethods$AnnotatedTypeHost::fooE() {
	return nullptr;
}

$Number* TestObjectMethods$AnnotatedTypeHost::fooF() {
	return nullptr;
}

$Object* TestObjectMethods$AnnotatedTypeHost::fooG() {
	return nullptr;
}

$Set* TestObjectMethods$AnnotatedTypeHost::fooNumberSet() {
	return nullptr;
}

$Set* TestObjectMethods$AnnotatedTypeHost::fooNumberSet2() {
	return nullptr;
}

$Set* TestObjectMethods$AnnotatedTypeHost::fooNumberSet3() {
	return nullptr;
}

$Set* TestObjectMethods$AnnotatedTypeHost::fooObjectSet() {
	return nullptr;
}

$List* TestObjectMethods$AnnotatedTypeHost::fooObjectList() {
	return nullptr;
}

TestObjectMethods$AnnotatedTypeHost::TestObjectMethods$AnnotatedTypeHost() {
}

$Class* TestObjectMethods$AnnotatedTypeHost::load$($String* name, bool initialize) {
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "1"},
		{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
		{}
	};
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "1"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation foomethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", foomethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooEmethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "1"},
		{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
		{}
	};
	$NamedAttribute fooEmethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "9"},
		{}
	};
	$CompoundAttribute fooEmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooEmethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooEmethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooEmethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooFmethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "1"},
		{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
		{}
	};
	$NamedAttribute fooFmethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "10"},
		{}
	};
	$CompoundAttribute fooFmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooFmethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooFmethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooFmethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooGmethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "1"},
		{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
		{}
	};
	$NamedAttribute fooGmethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "11"},
		{}
	};
	$CompoundAttribute fooGmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooGmethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooGmethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooGmethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooIntArraymethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "1"},
		{"relation", 'e', "LTestObjectMethods$Relation; ARRAY"},
		{}
	};
	$NamedAttribute fooIntArraymethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$CompoundAttribute fooIntArraymethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooIntArraymethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooIntArraymethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooIntArraymethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooNumberSetmethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "1"},
		{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
		{}
	};
	$NamedAttribute fooNumberSetmethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "12"},
		{}
	};
	$CompoundAttribute fooNumberSetmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooNumberSetmethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooNumberSetmethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooNumberSetmethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooNumberSet2methodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "2"},
		{"relation", 'e', "LTestObjectMethods$Relation; STRIPPED"},
		{}
	};
	$NamedAttribute fooNumberSet2methodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "14"},
		{}
	};
	$NamedAttribute fooNumberSet2methodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 'I', "13"},
		{}
	};
	$CompoundAttribute fooNumberSet2methodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooNumberSet2methodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooNumberSet2methodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooNumberSet2methodTypeAnnotations$$$namedAttribute, "METHOD_RETURN, location = (TYPE_ARGUMENT(0))"},
		{"LTestObjectMethods$AnnotType;", fooNumberSet2methodTypeAnnotations$$$namedAttribute$1, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooNumberSet3methodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "2"},
		{"relation", 'e', "LTestObjectMethods$Relation; STRIPPED"},
		{}
	};
	$NamedAttribute fooNumberSet3methodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "16"},
		{}
	};
	$NamedAttribute fooNumberSet3methodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 'I', "15"},
		{}
	};
	$CompoundAttribute fooNumberSet3methodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooNumberSet3methodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooNumberSet3methodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooNumberSet3methodTypeAnnotations$$$namedAttribute, "METHOD_RETURN, location = (TYPE_ARGUMENT(0),WILDCARD)"},
		{"LTestObjectMethods$AnnotType;", fooNumberSet3methodTypeAnnotations$$$namedAttribute$1, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooObjectListmethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "2"},
		{"relation", 'e', "LTestObjectMethods$Relation; OTHER"},
		{}
	};
	$NamedAttribute fooObjectListmethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "19"},
		{}
	};
	$NamedAttribute fooObjectListmethodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 'I', "18"},
		{}
	};
	$CompoundAttribute fooObjectListmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooObjectListmethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooObjectListmethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooObjectListmethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN, location = (TYPE_ARGUMENT(0),WILDCARD)"},
		{"LTestObjectMethods$AnnotType;", fooObjectListmethodTypeAnnotations$$$namedAttribute$1, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooObjectSetmethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "2"},
		{"relation", 'e', "LTestObjectMethods$Relation; STRIPPED"},
		{}
	};
	$NamedAttribute fooObjectSetmethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "17"},
		{}
	};
	$NamedAttribute fooObjectSetmethodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 'I', "16"},
		{}
	};
	$CompoundAttribute fooObjectSetmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooObjectSetmethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooObjectSetmethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooObjectSetmethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN, location = (TYPE_ARGUMENT(0))"},
		{"LTestObjectMethods$AnnotType;", fooObjectSetmethodTypeAnnotations$$$namedAttribute$1, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooSetNumbermethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "2"},
		{"relation", 'e', "LTestObjectMethods$Relation; STRIPPED"},
		{}
	};
	$NamedAttribute fooSetNumbermethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "8"},
		{}
	};
	$NamedAttribute fooSetNumbermethodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 'I', "7"},
		{}
	};
	$CompoundAttribute fooSetNumbermethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooSetNumbermethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooSetNumbermethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooSetNumbermethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN, location = (TYPE_ARGUMENT(0))"},
		{"LTestObjectMethods$AnnotType;", fooSetNumbermethodTypeAnnotations$$$namedAttribute$1, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooSetStringmethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "1"},
		{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
		{}
	};
	$NamedAttribute fooSetStringmethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "6"},
		{}
	};
	$CompoundAttribute fooSetStringmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooSetStringmethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooSetStringmethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooSetStringmethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooStringmethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "1"},
		{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
		{}
	};
	$NamedAttribute fooStringmethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "2"},
		{}
	};
	$CompoundAttribute fooStringmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooStringmethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooStringmethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooStringmethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooStringArraymethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "1"},
		{"relation", 'e', "LTestObjectMethods$Relation; ARRAY"},
		{}
	};
	$NamedAttribute fooStringArraymethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "4"},
		{}
	};
	$CompoundAttribute fooStringArraymethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooStringArraymethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooStringArraymethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooStringArraymethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{}
	};
	$NamedAttribute fooStringArrayArraymethodAnnotations$$$namedAttribute[] = {
		{"count", 'I', "3"},
		{"relation", 'e', "LTestObjectMethods$Relation; ARRAY"},
		{}
	};
	$NamedAttribute fooStringArrayArraymethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "0"},
		{}
	};
	$NamedAttribute fooStringArrayArraymethodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 'I', "1"},
		{}
	};
	$NamedAttribute fooStringArrayArraymethodTypeAnnotations$$$namedAttribute$2[] = {
		{"value", 'I', "5"},
		{}
	};
	$CompoundAttribute fooStringArrayArraymethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", fooStringArrayArraymethodAnnotations$$$namedAttribute},
		{}
	};
	$TypeAnnotation fooStringArrayArraymethodTypeAnnotations$$[] = {
		{"LTestObjectMethods$AnnotType;", fooStringArrayArraymethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{"LTestObjectMethods$AnnotType;", fooStringArrayArraymethodTypeAnnotations$$$namedAttribute$1, "METHOD_RETURN, location = (ARRAY)"},
		{"LTestObjectMethods$AnnotType;", fooStringArrayArraymethodTypeAnnotations$$$namedAttribute$2, "METHOD_RETURN, location = (ARRAY,ARRAY)"},
		{}
	};
	$CompoundAttribute fooVoidmethodAnnotations$$[] = {
		{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestObjectMethods$AnnotatedTypeHost, init$, void)},
		{"foo", "()I", nullptr, $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, foo, int32_t), nullptr, nullptr, foomethodAnnotations$$, foomethodTypeAnnotations$$},
		{"fooE", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooE, $Object*), nullptr, nullptr, fooEmethodAnnotations$$, fooEmethodTypeAnnotations$$},
		{"fooF", "()Ljava/lang/Number;", "()TF;", $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooF, $Number*), nullptr, nullptr, fooFmethodAnnotations$$, fooFmethodTypeAnnotations$$},
		{"fooG", "()Ljava/lang/Object;", "<G:Ljava/lang/Object;>()TG;", $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooG, $Object*), nullptr, nullptr, fooGmethodAnnotations$$, fooGmethodTypeAnnotations$$},
		{"fooIntArray", "()[I", nullptr, $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooIntArray, $ints*), nullptr, nullptr, fooIntArraymethodAnnotations$$, fooIntArraymethodTypeAnnotations$$},
		{"fooNumberSet", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljava/lang/Number;>;", $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooNumberSet, $Set*), nullptr, nullptr, fooNumberSetmethodAnnotations$$, fooNumberSetmethodTypeAnnotations$$},
		{"fooNumberSet2", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljava/lang/Number;>;", $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooNumberSet2, $Set*), nullptr, nullptr, fooNumberSet2methodAnnotations$$, fooNumberSet2methodTypeAnnotations$$},
		{"fooNumberSet3", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljava/lang/Long;>;", $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooNumberSet3, $Set*), nullptr, nullptr, fooNumberSet3methodAnnotations$$, fooNumberSet3methodTypeAnnotations$$},
		{"fooObjectList", "()Ljava/util/List;", "()Ljava/util/List<+Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooObjectList, $List*), nullptr, nullptr, fooObjectListmethodAnnotations$$, fooObjectListmethodTypeAnnotations$$},
		{"fooObjectSet", "()Ljava/util/Set;", "()Ljava/util/Set<*>;", $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooObjectSet, $Set*), nullptr, nullptr, fooObjectSetmethodAnnotations$$, fooObjectSetmethodTypeAnnotations$$},
		{"fooSetNumber", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Number;>;", $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooSetNumber, $Set*), nullptr, nullptr, fooSetNumbermethodAnnotations$$, fooSetNumbermethodTypeAnnotations$$},
		{"fooSetString", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooSetString, $Set*), nullptr, nullptr, fooSetStringmethodAnnotations$$, fooSetStringmethodTypeAnnotations$$},
		{"fooString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooString, $String*), nullptr, nullptr, fooStringmethodAnnotations$$, fooStringmethodTypeAnnotations$$},
		{"fooStringArray", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooStringArray, $StringArray*), nullptr, nullptr, fooStringArraymethodAnnotations$$, fooStringArraymethodTypeAnnotations$$},
		{"fooStringArrayArray", "()[[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooStringArrayArray, $StringArray2*), nullptr, nullptr, fooStringArrayArraymethodAnnotations$$, fooStringArrayArraymethodTypeAnnotations$$},
		{"fooVoid", "()V", nullptr, $PUBLIC, $virtualMethod(TestObjectMethods$AnnotatedTypeHost, fooVoid, void), nullptr, nullptr, fooVoidmethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestObjectMethods$AnnotatedTypeHost", "TestObjectMethods", "AnnotatedTypeHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestObjectMethods$AnnotatedTypeHost",
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
	$loadClass(TestObjectMethods$AnnotatedTypeHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestObjectMethods$AnnotatedTypeHost);
	});
	return class$;
}

$Class* TestObjectMethods$AnnotatedTypeHost::class$ = nullptr;