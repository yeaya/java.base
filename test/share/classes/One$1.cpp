#include <One$1.h>

#include <One$Test.h>
#include <One.h>
#include <java/io/InputStreamReader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $One = ::One;
using $One$Test = ::One$Test;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _One$1_MethodInfo_[] = {
	{"<init>", "([BLjava/lang/String;)V", nullptr, 0, $method(static_cast<void(One$1::*)($bytes*,$String*)>(&One$1::init$)), "java.lang.Exception"},
	{"read", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _One$1_EnclosingMethodInfo_ = {
	"One",
	"test",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _One$1_InnerClassesInfo_[] = {
	{"One$1", nullptr, nullptr, 0},
	{"One$Test", "One", "Test", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _One$1_ClassInfo_ = {
	$ACC_SUPER,
	"One$1",
	"One$Test",
	nullptr,
	nullptr,
	_One$1_MethodInfo_,
	nullptr,
	&_One$1_EnclosingMethodInfo_,
	_One$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"One"
};

$Object* allocate$One$1($Class* clazz) {
	return $of($alloc(One$1));
}

void One$1::init$($bytes* in, $String* expect) {
	$One$Test::init$(in, expect);
}

void One$1::read() {
	for (;;) {
		int32_t c = 0;
		if ((c = $nc(this->isr)->read()) == -1) {
			break;
		}
		$nc(this->sb)->append((char16_t)c);
	}
}

One$1::One$1() {
}

$Class* One$1::load$($String* name, bool initialize) {
	$loadClass(One$1, name, initialize, &_One$1_ClassInfo_, allocate$One$1);
	return class$;
}

$Class* One$1::class$ = nullptr;