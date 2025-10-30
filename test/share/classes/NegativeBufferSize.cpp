#include <NegativeBufferSize.h>

#include <MyStringWriter.h>
#include <jcpp.h>

using $MyStringWriter = ::MyStringWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _NegativeBufferSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NegativeBufferSize::*)()>(&NegativeBufferSize::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NegativeBufferSize::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _NegativeBufferSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NegativeBufferSize",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NegativeBufferSize_MethodInfo_
};

$Object* allocate$NegativeBufferSize($Class* clazz) {
	return $of($alloc(NegativeBufferSize));
}

void NegativeBufferSize::init$() {
}

void NegativeBufferSize::main($StringArray* argv) {
	try {
		$var($MyStringWriter, s, $new($MyStringWriter, -1));
	} catch ($IllegalArgumentException& e) {
		return;
	}
	$throwNew($Exception, "StringWriter constructor must not accept < 0  buffer sizes"_s);
}

NegativeBufferSize::NegativeBufferSize() {
}

$Class* NegativeBufferSize::load$($String* name, bool initialize) {
	$loadClass(NegativeBufferSize, name, initialize, &_NegativeBufferSize_ClassInfo_, allocate$NegativeBufferSize);
	return class$;
}

$Class* NegativeBufferSize::class$ = nullptr;