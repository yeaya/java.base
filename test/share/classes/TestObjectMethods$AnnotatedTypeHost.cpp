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

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$0[] = {
	{"count", 'I', "1"},
	{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$1[] = {
	{"value", 'I', "1"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_foo1[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$0},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_foo1[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$1, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$2[] = {
	{"count", 'I', "1"},
	{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$3[] = {
	{"value", 'I', "9"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooE2[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$2},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooE2[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$3, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$4[] = {
	{"count", 'I', "1"},
	{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$5[] = {
	{"value", 'I', "10"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooF3[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$4},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooF3[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$5, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$6[] = {
	{"count", 'I', "1"},
	{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$7[] = {
	{"value", 'I', "11"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooG4[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$6},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooG4[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$7, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$8[] = {
	{"count", 'I', "1"},
	{"relation", 'e', "LTestObjectMethods$Relation; ARRAY"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$9[] = {
	{"value", 'I', "3"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooIntArray5[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$8},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooIntArray5[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$9, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$10[] = {
	{"count", 'I', "1"},
	{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$11[] = {
	{"value", 'I', "12"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooNumberSet6[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$10},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooNumberSet6[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$11, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$12[] = {
	{"count", 'I', "2"},
	{"relation", 'e', "LTestObjectMethods$Relation; STRIPPED"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$13[] = {
	{"value", 'I', "14"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$14[] = {
	{"value", 'I', "13"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooNumberSet27[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$12},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooNumberSet27[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$13, "METHOD_RETURN, location = (TYPE_ARGUMENT(0))"},
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$14, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$15[] = {
	{"count", 'I', "2"},
	{"relation", 'e', "LTestObjectMethods$Relation; STRIPPED"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$16[] = {
	{"value", 'I', "16"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$17[] = {
	{"value", 'I', "15"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooNumberSet38[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$15},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooNumberSet38[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$16, "METHOD_RETURN, location = (TYPE_ARGUMENT(0),WILDCARD)"},
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$17, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$18[] = {
	{"count", 'I', "2"},
	{"relation", 'e', "LTestObjectMethods$Relation; OTHER"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$19[] = {
	{"value", 'I', "19"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$20[] = {
	{"value", 'I', "18"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooObjectList9[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$18},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooObjectList9[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$19, "METHOD_RETURN, location = (TYPE_ARGUMENT(0),WILDCARD)"},
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$20, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$21[] = {
	{"count", 'I', "2"},
	{"relation", 'e', "LTestObjectMethods$Relation; STRIPPED"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$22[] = {
	{"value", 'I', "17"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$23[] = {
	{"value", 'I', "16"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooObjectSet10[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$21},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooObjectSet10[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$22, "METHOD_RETURN, location = (TYPE_ARGUMENT(0))"},
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$23, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$24[] = {
	{"count", 'I', "2"},
	{"relation", 'e', "LTestObjectMethods$Relation; STRIPPED"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$25[] = {
	{"value", 'I', "8"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$26[] = {
	{"value", 'I', "7"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooSetNumber11[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$24},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooSetNumber11[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$25, "METHOD_RETURN, location = (TYPE_ARGUMENT(0))"},
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$26, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$27[] = {
	{"count", 'I', "1"},
	{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$28[] = {
	{"value", 'I', "6"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooSetString12[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$27},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooSetString12[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$28, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$29[] = {
	{"count", 'I', "1"},
	{"relation", 'e', "LTestObjectMethods$Relation; POSTFIX"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$30[] = {
	{"value", 'I', "2"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooString13[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$29},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooString13[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$30, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$31[] = {
	{"count", 'I', "1"},
	{"relation", 'e', "LTestObjectMethods$Relation; ARRAY"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$32[] = {
	{"value", 'I', "4"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooStringArray14[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$31},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooStringArray14[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$32, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$33[] = {
	{"count", 'I', "3"},
	{"relation", 'e', "LTestObjectMethods$Relation; ARRAY"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$34[] = {
	{"value", 'I', "0"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$35[] = {
	{"value", 'I', "1"},
	{}
};

$NamedAttribute TestObjectMethods$AnnotatedTypeHost_Attribute_var$36[] = {
	{"value", 'I', "5"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooStringArrayArray15[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$33},
	{}
};

$TypeAnnotation _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooStringArrayArray15[] = {
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$34, "METHOD_RETURN"},
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$35, "METHOD_RETURN, location = (ARRAY)"},
	{"LTestObjectMethods$AnnotType;", TestObjectMethods$AnnotatedTypeHost_Attribute_var$36, "METHOD_RETURN, location = (ARRAY,ARRAY)"},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooVoid16[] = {
	{"LTestObjectMethods$AnnotTypeInfo;", nullptr},
	{}
};

$MethodInfo _TestObjectMethods$AnnotatedTypeHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestObjectMethods$AnnotatedTypeHost::*)()>(&TestObjectMethods$AnnotatedTypeHost::init$))},
	{"foo", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_foo1, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_foo1},
	{"fooE", "()Ljava/lang/Object;", "()TE;", $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooE2, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooE2},
	{"fooF", "()Ljava/lang/Number;", "()TF;", $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooF3, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooF3},
	{"fooG", "()Ljava/lang/Object;", "<G:Ljava/lang/Object;>()TG;", $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooG4, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooG4},
	{"fooIntArray", "()[I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooIntArray5, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooIntArray5},
	{"fooNumberSet", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljava/lang/Number;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooNumberSet6, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooNumberSet6},
	{"fooNumberSet2", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljava/lang/Number;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooNumberSet27, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooNumberSet27},
	{"fooNumberSet3", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljava/lang/Long;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooNumberSet38, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooNumberSet38},
	{"fooObjectList", "()Ljava/util/List;", "()Ljava/util/List<+Ljava/lang/Object;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooObjectList9, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooObjectList9},
	{"fooObjectSet", "()Ljava/util/Set;", "()Ljava/util/Set<*>;", $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooObjectSet10, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooObjectSet10},
	{"fooSetNumber", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Number;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooSetNumber11, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooSetNumber11},
	{"fooSetString", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooSetString12, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooSetString12},
	{"fooString", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooString13, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooString13},
	{"fooStringArray", "()[Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooStringArray14, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooStringArray14},
	{"fooStringArrayArray", "()[[Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooStringArrayArray15, _TestObjectMethods$AnnotatedTypeHost_MethodTypeAnnotations_fooStringArrayArray15},
	{"fooVoid", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestObjectMethods$AnnotatedTypeHost_MethodAnnotations_fooVoid16},
	{}
};

$InnerClassInfo _TestObjectMethods$AnnotatedTypeHost_InnerClassesInfo_[] = {
	{"TestObjectMethods$AnnotatedTypeHost", "TestObjectMethods", "AnnotatedTypeHost", $STATIC},
	{}
};

$ClassInfo _TestObjectMethods$AnnotatedTypeHost_ClassInfo_ = {
	$ACC_SUPER,
	"TestObjectMethods$AnnotatedTypeHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestObjectMethods$AnnotatedTypeHost_MethodInfo_,
	"<E:Ljava/lang/Object;F:Ljava/lang/Number;>Ljava/lang/Object;",
	nullptr,
	_TestObjectMethods$AnnotatedTypeHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestObjectMethods"
};

$Object* allocate$TestObjectMethods$AnnotatedTypeHost($Class* clazz) {
	return $of($alloc(TestObjectMethods$AnnotatedTypeHost));
}

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
	return $of(nullptr);
}

$Number* TestObjectMethods$AnnotatedTypeHost::fooF() {
	return nullptr;
}

$Object* TestObjectMethods$AnnotatedTypeHost::fooG() {
	return $of(nullptr);
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
	$loadClass(TestObjectMethods$AnnotatedTypeHost, name, initialize, &_TestObjectMethods$AnnotatedTypeHost_ClassInfo_, allocate$TestObjectMethods$AnnotatedTypeHost);
	return class$;
}

$Class* TestObjectMethods$AnnotatedTypeHost::class$ = nullptr;