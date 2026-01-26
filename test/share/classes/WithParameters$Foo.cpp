#include <WithParameters$Foo.h>

#include <WithParameters.h>
#include <java/util/List.h>
#include <jcpp.h>

using $WithParameters = ::WithParameters;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;
using $List = ::java::util::List;

$ParameterAnnotation _WithParameters$Foo_MethodParamAnnotations_qux1[] = {
	{"LWithParameters$Thing;", nullptr, 1},
	{}
};

$FieldInfo _WithParameters$Foo_FieldInfo_[] = {
	{"this$0", "LWithParameters;", nullptr, $FINAL | $SYNTHETIC, $field(WithParameters$Foo, this$0)},
	{"thing", "I", nullptr, 0, $field(WithParameters$Foo, thing)},
	{}
};

$MethodInfo _WithParameters$Foo_MethodInfo_[] = {
	{"<init>", "(LWithParameters;)V", nullptr, $PUBLIC, $method(WithParameters$Foo, init$, void, $WithParameters*)},
	{"qux", "(ILWithParameters$Foo;Ljava/util/List;Ljava/util/List;Ljava/util/List;[Ljava/lang/String;)V", "(ILWithParameters$Foo;Ljava/util/List<*>;Ljava/util/List<LWithParameters$Foo;>;Ljava/util/List<+LWithParameters$Foo;>;[Ljava/lang/String;)V", $PUBLIC | $TRANSIENT, $virtualMethod(WithParameters$Foo, qux, void, int32_t, WithParameters$Foo*, $List*, $List*, $List*, $StringArray*), nullptr, nullptr, nullptr, nullptr, _WithParameters$Foo_MethodParamAnnotations_qux1},
	{}
};

$InnerClassInfo _WithParameters$Foo_InnerClassesInfo_[] = {
	{"WithParameters$Foo", "WithParameters", "Foo", $PUBLIC},
	{}
};

$ClassInfo _WithParameters$Foo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WithParameters$Foo",
	"java.lang.Object",
	nullptr,
	_WithParameters$Foo_FieldInfo_,
	_WithParameters$Foo_MethodInfo_,
	nullptr,
	nullptr,
	_WithParameters$Foo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WithParameters"
};

$Object* allocate$WithParameters$Foo($Class* clazz) {
	return $of($alloc(WithParameters$Foo));
}

void WithParameters$Foo::init$($WithParameters* this$0) {
	$set(this, this$0, this$0);
}

void WithParameters$Foo::qux(int32_t quux, WithParameters$Foo* quuux, $List* l, $List* l2, $List* l3, $StringArray* rest) {
}

WithParameters$Foo::WithParameters$Foo() {
}

$Class* WithParameters$Foo::load$($String* name, bool initialize) {
	$loadClass(WithParameters$Foo, name, initialize, &_WithParameters$Foo_ClassInfo_, allocate$WithParameters$Foo);
	return class$;
}

$Class* WithParameters$Foo::class$ = nullptr;