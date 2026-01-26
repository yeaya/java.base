#include <One$3.h>

#include <One$Test.h>
#include <One.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $One$Test = ::One$Test;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _One$3_MethodInfo_[] = {
	{"<init>", "([BLjava/lang/String;)V", nullptr, 0, $method(One$3, init$, void, $bytes*, $String*), "java.lang.Exception"},
	{"read", "()V", nullptr, $PUBLIC, $virtualMethod(One$3, read, void), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _One$3_EnclosingMethodInfo_ = {
	"One",
	"test",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _One$3_InnerClassesInfo_[] = {
	{"One$3", nullptr, nullptr, 0},
	{"One$Test", "One", "Test", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _One$3_ClassInfo_ = {
	$ACC_SUPER,
	"One$3",
	"One$Test",
	nullptr,
	nullptr,
	_One$3_MethodInfo_,
	nullptr,
	&_One$3_EnclosingMethodInfo_,
	_One$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"One"
};

$Object* allocate$One$3($Class* clazz) {
	return $of($alloc(One$3));
}

void One$3::init$($bytes* in, $String* expect) {
	$One$Test::init$(in, expect);
}

void One$3::read() {
	$useLocalCurrentObjectStackCache();
	for (;;) {
		$var($chars, cb, $new($chars, 2));
		int32_t n = 0;
		if ((n = $nc(this->isr)->read(cb)) == -1) {
			break;
		}
		$nc(this->sb)->append(cb->get(0));
		if (n == 2) {
			$nc(this->sb)->append(cb->get(1));
		}
	}
}

One$3::One$3() {
}

$Class* One$3::load$($String* name, bool initialize) {
	$loadClass(One$3, name, initialize, &_One$3_ClassInfo_, allocate$One$3);
	return class$;
}

$Class* One$3::class$ = nullptr;