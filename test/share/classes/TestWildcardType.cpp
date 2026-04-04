#include <TestWildcardType.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;
using $List = ::java::util::List;

void TestWildcardType::init$() {
}

$List* TestWildcardType::foo() {
	return nullptr;
}

TestWildcardType::TestWildcardType() {
}

$Class* TestWildcardType::load$($String* name, bool initialize) {
	$NamedAttribute f1fieldTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "1"},
		{}
	};
	$NamedAttribute f1fieldTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "2"},
		{}
	};
	$TypeAnnotation f1fieldTypeAnnotations$$[] = {
		{"LTypeAnno;", f1fieldTypeAnnotations$$$namedAttribute, "FIELD, location = (TYPE_ARGUMENT(0))"},
		{"LTypeAnno;", f1fieldTypeAnnotations$$$namedAttribute$1, "FIELD, location = (TYPE_ARGUMENT(0),WILDCARD)"},
		{}
	};
	$NamedAttribute f2fieldTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "3"},
		{}
	};
	$NamedAttribute f2fieldTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "4"},
		{}
	};
	$TypeAnnotation f2fieldTypeAnnotations$$[] = {
		{"LTypeAnno;", f2fieldTypeAnnotations$$$namedAttribute, "FIELD, location = (TYPE_ARGUMENT(0))"},
		{"LTypeAnno;", f2fieldTypeAnnotations$$$namedAttribute$1, "FIELD, location = (TYPE_ARGUMENT(0),WILDCARD)"},
		{}
	};
	$NamedAttribute f3fieldTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "5"},
		{}
	};
	$TypeAnnotation f3fieldTypeAnnotations$$[] = {
		{"LTypeAnno;", f3fieldTypeAnnotations$$$namedAttribute, "FIELD, location = (TYPE_ARGUMENT(0))"},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"f1", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;", $PUBLIC, $field(TestWildcardType, f1), nullptr, f1fieldTypeAnnotations$$},
		{"f2", "Ljava/lang/Class;", "Ljava/lang/Class<-Ljava/lang/annotation/Annotation;>;", $PUBLIC, $field(TestWildcardType, f2), nullptr, f2fieldTypeAnnotations$$},
		{"f3", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PUBLIC, $field(TestWildcardType, f3), nullptr, f3fieldTypeAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestWildcardType, init$, void)},
		{"foo", "()Ljava/util/List;", "<T:Ljava/lang/Object;>()Ljava/util/List<-TT;>;", $PUBLIC, $virtualMethod(TestWildcardType, foo, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"TestWildcardType",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestWildcardType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestWildcardType);
	});
	return class$;
}

$Class* TestWildcardType::class$ = nullptr;