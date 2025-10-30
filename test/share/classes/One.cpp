#include <One.h>

#include <One$1.h>
#include <One$2.h>
#include <One$3.h>
#include <jcpp.h>

using $One$1 = ::One$1;
using $One$2 = ::One$2;
using $One$3 = ::One$3;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _One_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(One::*)()>(&One::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&One::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&One::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _One_InnerClassesInfo_[] = {
	{"One$Test", "One", "Test", $PRIVATE | $STATIC | $ABSTRACT},
	{"One$3", nullptr, nullptr, 0},
	{"One$2", nullptr, nullptr, 0},
	{"One$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _One_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"One",
	"java.lang.Object",
	nullptr,
	nullptr,
	_One_MethodInfo_,
	nullptr,
	nullptr,
	_One_InnerClassesInfo_,
	nullptr,
	nullptr,
	"One$Test,One$3,One$2,One$1"
};

$Object* allocate$One($Class* clazz) {
	return $of($alloc(One));
}

void One::init$() {
}

void One::test($String* expect) {
	$var($bytes, in, $nc(expect)->getBytes("UTF-8"_s));
	$new($One$1, in, expect);
	$new($One$2, in, expect);
	$new($One$3, in, expect);
}

void One::main($StringArray* args) {
	test("x"_s);
	test("xy"_s);
	test("xyz"_s);
	test($cstr({0x10000}));
	test($cstr({'x', 0x10000}));
}

One::One() {
}

$Class* One::load$($String* name, bool initialize) {
	$loadClass(One, name, initialize, &_One_ClassInfo_, allocate$One);
	return class$;
}

$Class* One::class$ = nullptr;