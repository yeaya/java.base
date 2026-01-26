#include <WithoutParameters$Foo$Inner.h>

#include <WithoutParameters$Foo.h>
#include <jcpp.h>

using $WithoutParameters$Foo = ::WithoutParameters$Foo;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Attribute WithoutParameters$Foo$Inner_Attribute_var$1[] = {
	{'c', "LWithoutParameters$Foo;"},
	{'c', "I"},
	{'-'}
};

$NamedAttribute WithoutParameters$Foo$Inner_Attribute_var$0[] = {
	{"parameterCount", 'I', "2"},
	{"parameterTypes", '[', WithoutParameters$Foo$Inner_Attribute_var$1},
	{}
};

$CompoundAttribute _WithoutParameters$Foo$Inner_MethodAnnotations_init$0[] = {
	{"LWithoutParameters$ExpectedParameterInfo;", WithoutParameters$Foo$Inner_Attribute_var$0},
	{}
};

$FieldInfo _WithoutParameters$Foo$Inner_FieldInfo_[] = {
	{"this$1", "LWithoutParameters$Foo;", nullptr, $FINAL | $SYNTHETIC, $field(WithoutParameters$Foo$Inner, this$1)},
	{"thang", "I", nullptr, 0, $field(WithoutParameters$Foo$Inner, thang)},
	{}
};

$MethodInfo _WithoutParameters$Foo$Inner_MethodInfo_[] = {
	{"<init>", "(LWithoutParameters$Foo;I)V", nullptr, $PUBLIC, $method(WithoutParameters$Foo$Inner, init$, void, $WithoutParameters$Foo*, int32_t), nullptr, nullptr, _WithoutParameters$Foo$Inner_MethodAnnotations_init$0},
	{}
};

$InnerClassInfo _WithoutParameters$Foo$Inner_InnerClassesInfo_[] = {
	{"WithoutParameters$Foo", "WithoutParameters", "Foo", $PUBLIC},
	{"WithoutParameters$Foo$Inner", "WithoutParameters$Foo", "Inner", $PUBLIC},
	{}
};

$ClassInfo _WithoutParameters$Foo$Inner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WithoutParameters$Foo$Inner",
	"java.lang.Object",
	nullptr,
	_WithoutParameters$Foo$Inner_FieldInfo_,
	_WithoutParameters$Foo$Inner_MethodInfo_,
	nullptr,
	nullptr,
	_WithoutParameters$Foo$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WithoutParameters"
};

$Object* allocate$WithoutParameters$Foo$Inner($Class* clazz) {
	return $of($alloc(WithoutParameters$Foo$Inner));
}

void WithoutParameters$Foo$Inner::init$($WithoutParameters$Foo* this$1, int32_t theng) {
	$set(this, this$1, this$1);
	this->thang = theng + this$1->thing;
}

WithoutParameters$Foo$Inner::WithoutParameters$Foo$Inner() {
}

$Class* WithoutParameters$Foo$Inner::load$($String* name, bool initialize) {
	$loadClass(WithoutParameters$Foo$Inner, name, initialize, &_WithoutParameters$Foo$Inner_ClassInfo_, allocate$WithoutParameters$Foo$Inner);
	return class$;
}

$Class* WithoutParameters$Foo$Inner::class$ = nullptr;