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

$FieldInfo _ImplicitStringConcatOrder_FieldInfo_[] = {
	{"c", "LImplicitStringConcatOrder$MyClass;", nullptr, $STATIC, $staticField(ImplicitStringConcatOrder, c)},
	{}
};

$MethodInfo _ImplicitStringConcatOrder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ImplicitStringConcatOrder, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ImplicitStringConcatOrder, main, void, $StringArray*), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ImplicitStringConcatOrder, test, void, $String*, $String*)},
	{}
};

$InnerClassInfo _ImplicitStringConcatOrder_InnerClassesInfo_[] = {
	{"ImplicitStringConcatOrder$MyClass", "ImplicitStringConcatOrder", "MyClass", $STATIC},
	{}
};

$ClassInfo _ImplicitStringConcatOrder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ImplicitStringConcatOrder",
	"java.lang.Object",
	nullptr,
	_ImplicitStringConcatOrder_FieldInfo_,
	_ImplicitStringConcatOrder_MethodInfo_,
	nullptr,
	nullptr,
	_ImplicitStringConcatOrder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ImplicitStringConcatOrder$MyClass"
};

$Object* allocate$ImplicitStringConcatOrder($Class* clazz) {
	return $of($alloc(ImplicitStringConcatOrder));
}

$ImplicitStringConcatOrder$MyClass* ImplicitStringConcatOrder::c = nullptr;

void ImplicitStringConcatOrder::init$() {
}

void ImplicitStringConcatOrder::main($StringArray* args) {
	$init(ImplicitStringConcatOrder);
	$useLocalCurrentObjectStackCache();
	test("foo123bar"_s, $$str({"foo"_s, ImplicitStringConcatOrder::c, ImplicitStringConcatOrder::c, ImplicitStringConcatOrder::c, "bar"_s}));
	test("bazxyz456abc"_s, $$str({"baz"_s, ($$str({"xyz"_s, ImplicitStringConcatOrder::c, ImplicitStringConcatOrder::c})), ImplicitStringConcatOrder::c, "abc"_s}));
	$var($String, var$1, $$str({"caf"_s, ImplicitStringConcatOrder::c}));
	$var($String, var$0, $$concat(var$1, ($$str({"eba"_s, ImplicitStringConcatOrder::c, ImplicitStringConcatOrder::c}))));
	test("caf7eba89be"_s, $$concat(var$0, "be"_s));
}

void ImplicitStringConcatOrder::test($String* expected, $String* actual) {
	$init(ImplicitStringConcatOrder);
	$useLocalCurrentObjectStackCache();
	if (!$nc(expected)->equals(actual)) {
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("Expected = "_s);
		sb->append(expected);
		sb->append(", actual = "_s);
		sb->append(actual);
		$throwNew($IllegalStateException, $(sb->toString()));
	}
}

void clinit$ImplicitStringConcatOrder($Class* class$) {
	$assignStatic(ImplicitStringConcatOrder::c, $new($ImplicitStringConcatOrder$MyClass));
}

ImplicitStringConcatOrder::ImplicitStringConcatOrder() {
}

$Class* ImplicitStringConcatOrder::load$($String* name, bool initialize) {
	$loadClass(ImplicitStringConcatOrder, name, initialize, &_ImplicitStringConcatOrder_ClassInfo_, clinit$ImplicitStringConcatOrder, allocate$ImplicitStringConcatOrder);
	return class$;
}

$Class* ImplicitStringConcatOrder::class$ = nullptr;