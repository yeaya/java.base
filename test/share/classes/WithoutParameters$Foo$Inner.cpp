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

void WithoutParameters$Foo$Inner::init$($WithoutParameters$Foo* this$1, int32_t theng) {
	$set(this, this$1, this$1);
	this->thang = theng + this$1->thing;
}

WithoutParameters$Foo$Inner::WithoutParameters$Foo$Inner() {
}

$Class* WithoutParameters$Foo$Inner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LWithoutParameters$Foo;", nullptr, $FINAL | $SYNTHETIC, $field(WithoutParameters$Foo$Inner, this$1)},
		{"thang", "I", nullptr, 0, $field(WithoutParameters$Foo$Inner, thang)},
		{}
	};
	$Attribute $attribute[] = {
		{'c', "LWithoutParameters$Foo;"},
		{'c', "I"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"parameterCount", 'I', "2"},
		{"parameterTypes", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"LWithoutParameters$ExpectedParameterInfo;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LWithoutParameters$Foo;I)V", nullptr, $PUBLIC, $method(WithoutParameters$Foo$Inner, init$, void, $WithoutParameters$Foo*, int32_t), nullptr, nullptr, init$methodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WithoutParameters$Foo", "WithoutParameters", "Foo", $PUBLIC},
		{"WithoutParameters$Foo$Inner", "WithoutParameters$Foo", "Inner", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WithoutParameters$Foo$Inner",
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
	$loadClass(WithoutParameters$Foo$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WithoutParameters$Foo$Inner);
	});
	return class$;
}

$Class* WithoutParameters$Foo$Inner::class$ = nullptr;