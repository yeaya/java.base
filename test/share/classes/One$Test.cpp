#include <One$Test.h>

#include <One.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $One = ::One;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$FieldInfo _One$Test_FieldInfo_[] = {
	{"isr", "Ljava/io/InputStreamReader;", nullptr, 0, $field(One$Test, isr)},
	{"sb", "Ljava/lang/StringBuffer;", nullptr, 0, $field(One$Test, sb)},
	{"expect", "Ljava/lang/String;", nullptr, 0, $field(One$Test, expect)},
	{}
};

$MethodInfo _One$Test_MethodInfo_[] = {
	{"<init>", "([BLjava/lang/String;)V", nullptr, 0, $method(static_cast<void(One$Test::*)($bytes*,$String*)>(&One$Test::init$)), "java.lang.Exception"},
	{"go", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"read", "()V", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _One$Test_InnerClassesInfo_[] = {
	{"One$Test", "One", "Test", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _One$Test_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"One$Test",
	"java.lang.Object",
	nullptr,
	_One$Test_FieldInfo_,
	_One$Test_MethodInfo_,
	nullptr,
	nullptr,
	_One$Test_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"One"
};

$Object* allocate$One$Test($Class* clazz) {
	return $of($alloc(One$Test));
}

void One$Test::init$($bytes* in, $String* expect) {
	$set(this, isr, $new($InputStreamReader, static_cast<$InputStream*>($$new($ByteArrayInputStream, in)), "UTF-8"_s));
	$set(this, sb, $new($StringBuffer, $nc(expect)->length()));
	$set(this, expect, expect);
	go();
}

void One$Test::go() {
	read();
	if (!$nc(this->expect)->equals($($nc(this->sb)->toString()))) {
		$throwNew($Exception, $$str({"Expected "_s, this->expect, ", got "_s, $($nc(this->sb)->toString())}));
	}
}

One$Test::One$Test() {
}

$Class* One$Test::load$($String* name, bool initialize) {
	$loadClass(One$Test, name, initialize, &_One$Test_ClassInfo_, allocate$One$Test);
	return class$;
}

$Class* One$Test::class$ = nullptr;