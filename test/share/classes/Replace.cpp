#include <Replace.h>

#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _Replace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Replace, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Replace, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Replace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Replace",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Replace_MethodInfo_
};

$Object* allocate$Replace($Class* clazz) {
	return $of($alloc(Replace));
}

void Replace::init$() {
}

void Replace::main($StringArray* arg) {
	$var($StringBuffer, sb, $new($StringBuffer));
	for (int32_t i = 0; i < 200; ++i) {
		sb->replace(i, i + 1, "a"_s);
	}
}

Replace::Replace() {
}

$Class* Replace::load$($String* name, bool initialize) {
	$loadClass(Replace, name, initialize, &_Replace_ClassInfo_, allocate$Replace);
	return class$;
}

$Class* Replace::class$ = nullptr;