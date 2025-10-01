#include <NullCreate.h>

#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _NullCreate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullCreate::*)()>(&NullCreate::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullCreate::main))},
	{}
};

$ClassInfo _NullCreate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullCreate",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NullCreate_MethodInfo_
};

$Object* allocate$NullCreate($Class* clazz) {
	return $of($alloc(NullCreate));
}

void NullCreate::init$() {
}

void NullCreate::main($StringArray* args) {
	try {
		$var($OutputStreamWriter, osw, $new($OutputStreamWriter, nullptr));
	} catch ($NullPointerException&) {
		$var($NullPointerException, e, $catch());
		return;
	}
	$throwNew($RuntimeException, "Create with null did not throw an error"_s);
}

NullCreate::NullCreate() {
}

$Class* NullCreate::load$($String* name, bool initialize) {
	$loadClass(NullCreate, name, initialize, &_NullCreate_ClassInfo_, allocate$NullCreate);
	return class$;
}

$Class* NullCreate::class$ = nullptr;