#include <One$Test.h>
#include <One.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

void One$Test::init$($bytes* in, $String* expect) {
	$set(this, isr, $new($InputStreamReader, $$new($ByteArrayInputStream, in), "UTF-8"_s));
	$set(this, sb, $new($StringBuffer, $nc(expect)->length()));
	$set(this, expect, expect);
	go();
}

void One$Test::go() {
	$useLocalObjectStack();
	read();
	if (!$nc(this->expect)->equals($($nc(this->sb)->toString()))) {
		$throwNew($Exception, $$str({"Expected "_s, this->expect, ", got "_s, $(this->sb->toString())}));
	}
}

One$Test::One$Test() {
}

$Class* One$Test::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isr", "Ljava/io/InputStreamReader;", nullptr, 0, $field(One$Test, isr)},
		{"sb", "Ljava/lang/StringBuffer;", nullptr, 0, $field(One$Test, sb)},
		{"expect", "Ljava/lang/String;", nullptr, 0, $field(One$Test, expect)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BLjava/lang/String;)V", nullptr, 0, $method(One$Test, init$, void, $bytes*, $String*), "java.lang.Exception"},
		{"go", "()V", nullptr, 0, $virtualMethod(One$Test, go, void), "java.lang.Exception"},
		{"read", "()V", nullptr, $ABSTRACT, $virtualMethod(One$Test, read, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"One$Test", "One", "Test", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"One$Test",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"One"
	};
	$loadClass(One$Test, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(One$Test);
	});
	return class$;
}

$Class* One$Test::class$ = nullptr;