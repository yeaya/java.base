#include <ParseBoolean.h>

#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ParseBoolean_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ParseBoolean, init$, void)},
	{"checkFalse", "(Z)V", nullptr, $STATIC, $staticMethod(ParseBoolean, checkFalse, void, bool)},
	{"checkTrue", "(Z)V", nullptr, $STATIC, $staticMethod(ParseBoolean, checkTrue, void, bool)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ParseBoolean, main, void, $StringArray*)},
	{}
};

$ClassInfo _ParseBoolean_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ParseBoolean",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParseBoolean_MethodInfo_
};

$Object* allocate$ParseBoolean($Class* clazz) {
	return $of($alloc(ParseBoolean));
}

void ParseBoolean::init$() {
}

void ParseBoolean::main($StringArray* args) {
	checkTrue($Boolean::parseBoolean("TRUE"_s));
	checkTrue($Boolean::parseBoolean("true"_s));
	checkTrue($Boolean::parseBoolean("TrUe"_s));
	checkFalse($Boolean::parseBoolean("false"_s));
	checkFalse($Boolean::parseBoolean("FALSE"_s));
	checkFalse($Boolean::parseBoolean("FaLse"_s));
	checkFalse($Boolean::parseBoolean(nullptr));
	checkFalse($Boolean::parseBoolean("garbage"_s));
	checkFalse($Boolean::parseBoolean("TRUEE"_s));
}

void ParseBoolean::checkTrue(bool b) {
	if (!b) {
		$throwNew($RuntimeException, "test failed"_s);
	}
}

void ParseBoolean::checkFalse(bool b) {
	if (b) {
		$throwNew($RuntimeException, "test failed"_s);
	}
}

ParseBoolean::ParseBoolean() {
}

$Class* ParseBoolean::load$($String* name, bool initialize) {
	$loadClass(ParseBoolean, name, initialize, &_ParseBoolean_ClassInfo_, allocate$ParseBoolean);
	return class$;
}

$Class* ParseBoolean::class$ = nullptr;