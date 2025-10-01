#include <One$2.h>

#include <One$Test.h>
#include <One.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
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
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _One$2_MethodInfo_[] = {
	{"<init>", "([BLjava/lang/String;)V", nullptr, 0, $method(static_cast<void(One$2::*)($bytes*,$String*)>(&One$2::init$)), "java.lang.Exception"},
	{"read", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _One$2_EnclosingMethodInfo_ = {
	"One",
	"test",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _One$2_InnerClassesInfo_[] = {
	{"One$2", nullptr, nullptr, 0},
	{"One$Test", "One", "Test", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _One$2_ClassInfo_ = {
	$ACC_SUPER,
	"One$2",
	"One$Test",
	nullptr,
	nullptr,
	_One$2_MethodInfo_,
	nullptr,
	&_One$2_EnclosingMethodInfo_,
	_One$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"One"
};

$Object* allocate$One$2($Class* clazz) {
	return $of($alloc(One$2));
}

void One$2::init$($bytes* in, $String* expect) {
	$One$Test::init$(in, expect);
}

void One$2::read() {
	for (;;) {
		$var($chars, cb, $new($chars, 1));
		if ($nc(this->isr)->read(cb) == -1) {
			break;
		}
		$nc(this->sb)->append(cb->get(0));
	}
}

One$2::One$2() {
}

$Class* One$2::load$($String* name, bool initialize) {
	$loadClass(One$2, name, initialize, &_One$2_ClassInfo_, allocate$One$2);
	return class$;
}

$Class* One$2::class$ = nullptr;