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

$Attribute WithoutParameters$Foo_Attribute_var$1[] = {
	{'c', "I"},
	{'c', "LWithoutParameters$Foo;"},
	{'c', "Ljava/util/List;"},
	{'c', "Ljava/util/List;"},
	{'c', "Ljava/util/List;"},
	{'c', "[Ljava/lang/String;"},
	{'-'}
};

$NamedAttribute WithoutParameters$Foo_Attribute_var$4[] = {
	{"value", 'c', "Ljava/lang/Class;"},
	{}
};

$CompoundAttribute WithoutParameters$Foo_CompoundAttribute_var$3 = {
"LWithoutParameters$ParameterizedInfo;", WithoutParameters$Foo_Attribute_var$4
};

$NamedAttribute WithoutParameters$Foo_Attribute_var$6[] = {
	{"value", 'c', "Ljava/lang/Class;"},
	{}
};

$CompoundAttribute WithoutParameters$Foo_CompoundAttribute_var$5 = {
"LWithoutParameters$ParameterizedInfo;", WithoutParameters$Foo_Attribute_var$6
};

$NamedAttribute WithoutParameters$Foo_Attribute_var$8[] = {
	{"value", 'c', "Ljava/lang/reflect/ParameterizedType;"},
	{"string", 's', "java.util.List<?>"},
	{}
};

$CompoundAttribute WithoutParameters$Foo_CompoundAttribute_var$7 = {
"LWithoutParameters$ParameterizedInfo;", WithoutParameters$Foo_Attribute_var$8
};

$NamedAttribute WithoutParameters$Foo_Attribute_var$10[] = {
	{"value", 'c', "Ljava/lang/reflect/ParameterizedType;"},
	{"string", 's', "java.util.List<WithoutParameters$Foo>"},
	{}
};

$CompoundAttribute WithoutParameters$Foo_CompoundAttribute_var$9 = {
"LWithoutParameters$ParameterizedInfo;", WithoutParameters$Foo_Attribute_var$10
};

$NamedAttribute WithoutParameters$Foo_Attribute_var$12[] = {
	{"value", 'c', "Ljava/lang/reflect/ParameterizedType;"},
	{"string", 's', "java.util.List<? extends WithoutParameters$Foo>"},
	{}
};

$CompoundAttribute WithoutParameters$Foo_CompoundAttribute_var$11 = {
"LWithoutParameters$ParameterizedInfo;", WithoutParameters$Foo_Attribute_var$12
};

$NamedAttribute WithoutParameters$Foo_Attribute_var$14[] = {
	{"value", 'c', "Ljava/lang/Class;"},
	{}
};

$CompoundAttribute WithoutParameters$Foo_CompoundAttribute_var$13 = {
"LWithoutParameters$ParameterizedInfo;", WithoutParameters$Foo_Attribute_var$14
};

$Attribute WithoutParameters$Foo_Attribute_var$2[] = {
	{'@', &WithoutParameters$Foo_CompoundAttribute_var$3},
	{'@', &WithoutParameters$Foo_CompoundAttribute_var$5},
	{'@', &WithoutParameters$Foo_CompoundAttribute_var$7},
	{'@', &WithoutParameters$Foo_CompoundAttribute_var$9},
	{'@', &WithoutParameters$Foo_CompoundAttribute_var$11},
	{'@', &WithoutParameters$Foo_CompoundAttribute_var$13},
	{'-'}
};

$NamedAttribute WithoutParameters$Foo_Attribute_var$0[] = {
	{"parameterCount", 'I', "6"},
	{"parameterTypes", '[', WithoutParameters$Foo_Attribute_var$1},
	{"parameterizedTypes", '[', WithoutParameters$Foo_Attribute_var$2},
	{"isVarArgs", 'Z', "true"},
	{}
};

$CompoundAttribute _WithoutParameters$Foo_MethodAnnotations_qux1[] = {
	{"LWithoutParameters$ExpectedParameterInfo;", WithoutParameters$Foo_Attribute_var$0},
	{}
};

$FieldInfo _WithoutParameters$Foo_FieldInfo_[] = {
	{"this$0", "LWithoutParameters;", nullptr, $FINAL | $SYNTHETIC, $field(WithoutParameters$Foo, this$0)},
	{"thing", "I", nullptr, 0, $field(WithoutParameters$Foo, thing)},
	{}
};

$MethodInfo _WithoutParameters$Foo_MethodInfo_[] = {
	{"<init>", "(LWithoutParameters;)V", nullptr, $PUBLIC, $method(WithoutParameters$Foo, init$, void, $WithoutParameters*)},
	{"qux", "(ILWithoutParameters$Foo;Ljava/util/List;Ljava/util/List;Ljava/util/List;[Ljava/lang/String;)V", "(ILWithoutParameters$Foo;Ljava/util/List<*>;Ljava/util/List<LWithoutParameters$Foo;>;Ljava/util/List<+LWithoutParameters$Foo;>;[Ljava/lang/String;)V", $PUBLIC | $TRANSIENT, $virtualMethod(WithoutParameters$Foo, qux, void, int32_t, WithoutParameters$Foo*, $List*, $List*, $List*, $StringArray*), nullptr, nullptr, _WithoutParameters$Foo_MethodAnnotations_qux1},
	{}
};

$InnerClassInfo _WithoutParameters$Foo_InnerClassesInfo_[] = {
	{"WithoutParameters$Foo", "WithoutParameters", "Foo", $PUBLIC},
	{"WithoutParameters$Foo$Inner", "WithoutParameters$Foo", "Inner", $PUBLIC},
	{}
};

$ClassInfo _WithoutParameters$Foo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WithoutParameters$Foo",
	"java.lang.Object",
	nullptr,
	_WithoutParameters$Foo_FieldInfo_,
	_WithoutParameters$Foo_MethodInfo_,
	nullptr,
	nullptr,
	_WithoutParameters$Foo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WithoutParameters"
};

$Object* allocate$WithoutParameters$Foo($Class* clazz) {
	return $of($alloc(WithoutParameters$Foo));
}

void WithoutParameters$Foo::init$($WithoutParameters* this$0) {
	$set(this, this$0, this$0);
}

void WithoutParameters$Foo::qux(int32_t quux, WithoutParameters$Foo* quuux, $List* l, $List* l2, $List* l3, $StringArray* rest) {
}

WithoutParameters$Foo::WithoutParameters$Foo() {
}

$Class* WithoutParameters$Foo::load$($String* name, bool initialize) {
	$loadClass(WithoutParameters$Foo, name, initialize, &_WithoutParameters$Foo_ClassInfo_, allocate$WithoutParameters$Foo);
	return class$;
}

$Class* WithoutParameters$Foo::class$ = nullptr;