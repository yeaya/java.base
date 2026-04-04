#include <WithoutParameters$Foo.h>
#include <WithoutParameters.h>
#include <java/util/List.h>
#include <jcpp.h>

using $WithoutParameters = ::WithoutParameters;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $List = ::java::util::List;

void WithoutParameters$Foo::init$($WithoutParameters* this$0) {
	$set(this, this$0, this$0);
}

void WithoutParameters$Foo::qux(int32_t quux, WithoutParameters$Foo* quuux, $List* l, $List* l2, $List* l3, $StringArray* rest) {
}

WithoutParameters$Foo::WithoutParameters$Foo() {
}

$Class* WithoutParameters$Foo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LWithoutParameters;", nullptr, $FINAL | $SYNTHETIC, $field(WithoutParameters$Foo, this$0)},
		{"thing", "I", nullptr, 0, $field(WithoutParameters$Foo, thing)},
		{}
	};
	$Attribute $attribute[] = {
		{'c', "I"},
		{'c', "LWithoutParameters$Foo;"},
		{'c', "Ljava/util/List;"},
		{'c', "Ljava/util/List;"},
		{'c', "Ljava/util/List;"},
		{'c', "[Ljava/lang/String;"},
		{'-'}
	};
	$NamedAttribute quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'c', "Ljava/lang/Class;"},
		{}
	};
$CompoundAttribute quxmethodAnnotations$$$namedAttribute$compoundAttribute = {
	"LWithoutParameters$ParameterizedInfo;", quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'c', "Ljava/lang/Class;"},
		{}
	};
$CompoundAttribute quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute = {
	"LWithoutParameters$ParameterizedInfo;", quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'c', "Ljava/lang/reflect/ParameterizedType;"},
		{"string", 's', "java.util.List<?>"},
		{}
	};
$CompoundAttribute quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute = {
	"LWithoutParameters$ParameterizedInfo;", quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'c', "Ljava/lang/reflect/ParameterizedType;"},
		{"string", 's', "java.util.List<WithoutParameters$Foo>"},
		{}
	};
$CompoundAttribute quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute = {
	"LWithoutParameters$ParameterizedInfo;", quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'c', "Ljava/lang/reflect/ParameterizedType;"},
		{"string", 's', "java.util.List<? extends WithoutParameters$Foo>"},
		{}
	};
$CompoundAttribute quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute = {
	"LWithoutParameters$ParameterizedInfo;", quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'c', "Ljava/lang/Class;"},
		{}
	};
$CompoundAttribute quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute = {
	"LWithoutParameters$ParameterizedInfo;", quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$1[] = {
		{'@', &quxmethodAnnotations$$$namedAttribute$compoundAttribute},
		{'@', &quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute},
		{'@', &quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute},
		{'@', &quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute},
		{'@', &quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute},
		{'@', &quxmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute quxmethodAnnotations$$$namedAttribute[] = {
		{"parameterCount", 'I', "6"},
		{"parameterTypes", '[', $attribute},
		{"parameterizedTypes", '[', $attribute$1},
		{"isVarArgs", 'Z', "true"},
		{}
	};
	$CompoundAttribute quxmethodAnnotations$$[] = {
		{"LWithoutParameters$ExpectedParameterInfo;", quxmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LWithoutParameters;)V", nullptr, $PUBLIC, $method(WithoutParameters$Foo, init$, void, $WithoutParameters*)},
		{"qux", "(ILWithoutParameters$Foo;Ljava/util/List;Ljava/util/List;Ljava/util/List;[Ljava/lang/String;)V", "(ILWithoutParameters$Foo;Ljava/util/List<*>;Ljava/util/List<LWithoutParameters$Foo;>;Ljava/util/List<+LWithoutParameters$Foo;>;[Ljava/lang/String;)V", $PUBLIC | $TRANSIENT, $virtualMethod(WithoutParameters$Foo, qux, void, int32_t, WithoutParameters$Foo*, $List*, $List*, $List*, $StringArray*), nullptr, nullptr, quxmethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WithoutParameters$Foo", "WithoutParameters", "Foo", $PUBLIC},
		{"WithoutParameters$Foo$Inner", "WithoutParameters$Foo", "Inner", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WithoutParameters$Foo",
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
		"WithoutParameters"
	};
	$loadClass(WithoutParameters$Foo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WithoutParameters$Foo);
	});
	return class$;
}

$Class* WithoutParameters$Foo::class$ = nullptr;