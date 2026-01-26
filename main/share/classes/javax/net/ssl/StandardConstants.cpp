#include <javax/net/ssl/StandardConstants.h>

#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef SNI_HOST_NAME

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _StandardConstants_FieldInfo_[] = {
	{"SNI_HOST_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StandardConstants, SNI_HOST_NAME)},
	{}
};

$MethodInfo _StandardConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(StandardConstants, init$, void)},
	{}
};

$ClassInfo _StandardConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.net.ssl.StandardConstants",
	"java.lang.Object",
	nullptr,
	_StandardConstants_FieldInfo_,
	_StandardConstants_MethodInfo_
};

$Object* allocate$StandardConstants($Class* clazz) {
	return $of($alloc(StandardConstants));
}

void StandardConstants::init$() {
	$throwNew($AssertionError, $of("No javax.net.ssl.StandardConstants instances for you!"_s));
}

StandardConstants::StandardConstants() {
}

$Class* StandardConstants::load$($String* name, bool initialize) {
	$loadClass(StandardConstants, name, initialize, &_StandardConstants_ClassInfo_, allocate$StandardConstants);
	return class$;
}

$Class* StandardConstants::class$ = nullptr;

		} // ssl
	} // net
} // javax