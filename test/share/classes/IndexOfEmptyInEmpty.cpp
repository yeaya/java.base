#include <IndexOfEmptyInEmpty.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _IndexOfEmptyInEmpty_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IndexOfEmptyInEmpty::*)()>(&IndexOfEmptyInEmpty::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IndexOfEmptyInEmpty::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _IndexOfEmptyInEmpty_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IndexOfEmptyInEmpty",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IndexOfEmptyInEmpty_MethodInfo_
};

$Object* allocate$IndexOfEmptyInEmpty($Class* clazz) {
	return $of($alloc(IndexOfEmptyInEmpty));
}

void IndexOfEmptyInEmpty::init$() {
}

void IndexOfEmptyInEmpty::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t result = $$new($String, ""_s)->indexOf(""_s);
	if (result != 0) {
		$throwNew($Exception, $$str({"new String(\"\").indexOf(\"\") must be 0, but got "_s, $$str(result)}));
	}
}

IndexOfEmptyInEmpty::IndexOfEmptyInEmpty() {
}

$Class* IndexOfEmptyInEmpty::load$($String* name, bool initialize) {
	$loadClass(IndexOfEmptyInEmpty, name, initialize, &_IndexOfEmptyInEmpty_ClassInfo_, allocate$IndexOfEmptyInEmpty);
	return class$;
}

$Class* IndexOfEmptyInEmpty::class$ = nullptr;