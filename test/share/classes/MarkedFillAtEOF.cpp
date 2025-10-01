#include <MarkedFillAtEOF.h>

#include <java/io/BufferedReader.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MarkedFillAtEOF_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MarkedFillAtEOF::*)()>(&MarkedFillAtEOF::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MarkedFillAtEOF::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _MarkedFillAtEOF_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MarkedFillAtEOF",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MarkedFillAtEOF_MethodInfo_
};

$Object* allocate$MarkedFillAtEOF($Class* clazz) {
	return $of($alloc(MarkedFillAtEOF));
}

void MarkedFillAtEOF::init$() {
}

void MarkedFillAtEOF::main($StringArray* args) {
	$var($BufferedReader, r, $new($BufferedReader, $$new($StringReader, "12"_s)));
	int32_t count = 0;
	r->read();
	r->mark(2);
	while (r->read() != -1) {
	}
	r->reset();
	while (r->read() != -1) {
		++count;
	}
	if (count != 1) {
		$throwNew($Exception, $$str({"Expect 1 character, but got "_s, $$str(count)}));
	}
}

MarkedFillAtEOF::MarkedFillAtEOF() {
}

$Class* MarkedFillAtEOF::load$($String* name, bool initialize) {
	$loadClass(MarkedFillAtEOF, name, initialize, &_MarkedFillAtEOF_ClassInfo_, allocate$MarkedFillAtEOF);
	return class$;
}

$Class* MarkedFillAtEOF::class$ = nullptr;