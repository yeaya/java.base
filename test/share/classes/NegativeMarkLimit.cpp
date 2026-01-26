#include <NegativeMarkLimit.h>

#include <java/io/StringReader.h>
#include <jcpp.h>

using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _NegativeMarkLimit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NegativeMarkLimit, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NegativeMarkLimit, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _NegativeMarkLimit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NegativeMarkLimit",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NegativeMarkLimit_MethodInfo_
};

$Object* allocate$NegativeMarkLimit($Class* clazz) {
	return $of($alloc(NegativeMarkLimit));
}

void NegativeMarkLimit::init$() {
}

void NegativeMarkLimit::main($StringArray* argv) {
	$var($StringReader, in, $new($StringReader, "aaaaaaaaaaaaaaa"_s));
	try {
		in->mark(-1);
	} catch ($IllegalArgumentException& e) {
		return;
	}
	$throwNew($Exception, " Negative marklimit value should throw an exception"_s);
}

NegativeMarkLimit::NegativeMarkLimit() {
}

$Class* NegativeMarkLimit::load$($String* name, bool initialize) {
	$loadClass(NegativeMarkLimit, name, initialize, &_NegativeMarkLimit_ClassInfo_, allocate$NegativeMarkLimit);
	return class$;
}

$Class* NegativeMarkLimit::class$ = nullptr;