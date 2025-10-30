#include <TestWildcardType.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;
using $List = ::java::util::List;

$NamedAttribute TestWildcardType_Attribute_var$0[] = {
	{"value", 's', "1"},
	{}
};

$NamedAttribute TestWildcardType_Attribute_var$1[] = {
	{"value", 's', "2"},
	{}
};

$TypeAnnotation _TestWildcardType_FieldTypeAnnotations_f1[] = {
	{"LTypeAnno;", TestWildcardType_Attribute_var$0, "FIELD, location = (TYPE_ARGUMENT(0))"},
	{"LTypeAnno;", TestWildcardType_Attribute_var$1, "FIELD, location = (TYPE_ARGUMENT(0),WILDCARD)"},
	{}
};

$NamedAttribute TestWildcardType_Attribute_var$2[] = {
	{"value", 's', "3"},
	{}
};

$NamedAttribute TestWildcardType_Attribute_var$3[] = {
	{"value", 's', "4"},
	{}
};

$TypeAnnotation _TestWildcardType_FieldTypeAnnotations_f2[] = {
	{"LTypeAnno;", TestWildcardType_Attribute_var$2, "FIELD, location = (TYPE_ARGUMENT(0))"},
	{"LTypeAnno;", TestWildcardType_Attribute_var$3, "FIELD, location = (TYPE_ARGUMENT(0),WILDCARD)"},
	{}
};

$NamedAttribute TestWildcardType_Attribute_var$4[] = {
	{"value", 's', "5"},
	{}
};

$TypeAnnotation _TestWildcardType_FieldTypeAnnotations_f3[] = {
	{"LTypeAnno;", TestWildcardType_Attribute_var$4, "FIELD, location = (TYPE_ARGUMENT(0))"},
	{}
};

$FieldInfo _TestWildcardType_FieldInfo_[] = {
	{"f1", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;", $PUBLIC, $field(TestWildcardType, f1), nullptr, _TestWildcardType_FieldTypeAnnotations_f1},
	{"f2", "Ljava/lang/Class;", "Ljava/lang/Class<-Ljava/lang/annotation/Annotation;>;", $PUBLIC, $field(TestWildcardType, f2), nullptr, _TestWildcardType_FieldTypeAnnotations_f2},
	{"f3", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PUBLIC, $field(TestWildcardType, f3), nullptr, _TestWildcardType_FieldTypeAnnotations_f3},
	{}
};

$MethodInfo _TestWildcardType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestWildcardType::*)()>(&TestWildcardType::init$))},
	{"foo", "()Ljava/util/List;", "<T:Ljava/lang/Object;>()Ljava/util/List<-TT;>;", $PUBLIC},
	{}
};

$ClassInfo _TestWildcardType_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"TestWildcardType",
	"java.lang.Object",
	nullptr,
	_TestWildcardType_FieldInfo_,
	_TestWildcardType_MethodInfo_
};

$Object* allocate$TestWildcardType($Class* clazz) {
	return $of($alloc(TestWildcardType));
}

void TestWildcardType::init$() {
}

$List* TestWildcardType::foo() {
	return nullptr;
}

TestWildcardType::TestWildcardType() {
}

$Class* TestWildcardType::load$($String* name, bool initialize) {
	$loadClass(TestWildcardType, name, initialize, &_TestWildcardType_ClassInfo_, allocate$TestWildcardType);
	return class$;
}

$Class* TestWildcardType::class$ = nullptr;