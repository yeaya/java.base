#include <Skip.h>

#include <java/io/StringReader.h>
#include <jcpp.h>

using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _Skip_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Skip::*)()>(&Skip::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Skip::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Skip_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Skip",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Skip_MethodInfo_
};

$Object* allocate$Skip($Class* clazz) {
	return $of($alloc(Skip));
}

void Skip::init$() {
}

void Skip::main($StringArray* argv) {
	$var($StringReader, in, $new($StringReader, "1234567"_s));
	if (in->skip(3) != 3) {
		$throwNew($RuntimeException, "skip(3) failed"_s);
	}
	if (in->read() != u'4') {
		$throwNew($RuntimeException, "post skip read failure"_s);
	}
	if (in->skip(-2) != -2) {
		$throwNew($RuntimeException, "skip(-2) failed"_s);
	}
	if (in->read() != u'3') {
		$throwNew($RuntimeException, "read failed after negative skip"_s);
	}
	if (in->skip(-6) != -3) {
		$throwNew($RuntimeException, "skip(-6) failed"_s);
	}
	if (in->read() != u'1') {
		$throwNew($RuntimeException, "read after skip past beginning failed"_s);
	}
	if (in->skip(30) != 6) {
		$throwNew($RuntimeException, "skip(30) failed"_s);
	}
	if (in->read() != -1) {
		$throwNew($RuntimeException, "read at EOF failed"_s);
	}
	if (in->skip(30) != 0) {
		$throwNew($RuntimeException, "skip(30) failed"_s);
	}
	if (in->skip(-30) != 0) {
		$throwNew($RuntimeException, "skip(30) failed"_s);
	}
}

Skip::Skip() {
}

$Class* Skip::load$($String* name, bool initialize) {
	$loadClass(Skip, name, initialize, &_Skip_ClassInfo_, allocate$Skip);
	return class$;
}

$Class* Skip::class$ = nullptr;