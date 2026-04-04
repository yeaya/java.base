#include <ImplicitStringConcatOrder.h>
#include <ImplicitStringConcatOrder$MyClass.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ImplicitStringConcatOrder$MyClass = ::ImplicitStringConcatOrder$MyClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$ImplicitStringConcatOrder$MyClass* ImplicitStringConcatOrder::c = nullptr;

void ImplicitStringConcatOrder::init$() {
}

void ImplicitStringConcatOrder::main($StringArray* args) {
	$init(ImplicitStringConcatOrder);
	$useLocalObjectStack();
	test("foo123bar"_s, $$str({"foo"_s, ImplicitStringConcatOrder::c, ImplicitStringConcatOrder::c, ImplicitStringConcatOrder::c, "bar"_s}));
	test("bazxyz456abc"_s, $$str({"baz"_s, ($$str({"xyz"_s, ImplicitStringConcatOrder::c, ImplicitStringConcatOrder::c})), ImplicitStringConcatOrder::c, "abc"_s}));
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("caf"_s);
	var$0->append(ImplicitStringConcatOrder::c);
	var$0->append("eba"_s);
	var$0->append(ImplicitStringConcatOrder::c);
	var$0->append(ImplicitStringConcatOrder::c);
	var$0->append("be"_s);
	test("caf7eba89be"_s, $$str(var$0));
}

void ImplicitStringConcatOrder::test($String* expected, $String* actual) {
	$init(ImplicitStringConcatOrder);
	$useLocalObjectStack();
	if (!$nc(expected)->equals(actual)) {
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("Expected = "_s);
		sb->append(expected);
		sb->append(", actual = "_s);
		sb->append(actual);
		$throwNew($IllegalStateException, $(sb->toString()));
	}
}

void ImplicitStringConcatOrder::clinit$($Class* clazz) {
	$assignStatic(ImplicitStringConcatOrder::c, $new($ImplicitStringConcatOrder$MyClass));
}

ImplicitStringConcatOrder::ImplicitStringConcatOrder() {
}

$Class* ImplicitStringConcatOrder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c", "LImplicitStringConcatOrder$MyClass;", nullptr, $STATIC, $staticField(ImplicitStringConcatOrder, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImplicitStringConcatOrder, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ImplicitStringConcatOrder, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ImplicitStringConcatOrder, test, void, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ImplicitStringConcatOrder$MyClass", "ImplicitStringConcatOrder", "MyClass", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ImplicitStringConcatOrder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ImplicitStringConcatOrder$MyClass"
	};
	$loadClass(ImplicitStringConcatOrder, name, initialize, &classInfo$$, ImplicitStringConcatOrder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ImplicitStringConcatOrder);
	});
	return class$;
}

$Class* ImplicitStringConcatOrder::class$ = nullptr;