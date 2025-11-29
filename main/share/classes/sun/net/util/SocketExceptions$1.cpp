#include <sun/net/util/SocketExceptions$1.h>

#include <java/io/IOException.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/reflect/Constructor.h>
#include <sun/net/util/SocketExceptions.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;

namespace sun {
	namespace net {
		namespace util {

$FieldInfo _SocketExceptions$1_FieldInfo_[] = {
	{"val$msg", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SocketExceptions$1, val$msg)},
	{"val$e", "Ljava/io/IOException;", nullptr, $FINAL | $SYNTHETIC, $field(SocketExceptions$1, val$e)},
	{}
};

$MethodInfo _SocketExceptions$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/IOException;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(SocketExceptions$1::*)($IOException*,$String*)>(&SocketExceptions$1::init$))},
	{"run", "()Ljava/io/IOException;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SocketExceptions$1_EnclosingMethodInfo_ = {
	"sun.net.util.SocketExceptions",
	"create",
	"(Ljava/io/IOException;Ljava/lang/String;)Ljava/io/IOException;"
};

$InnerClassInfo _SocketExceptions$1_InnerClassesInfo_[] = {
	{"sun.net.util.SocketExceptions$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SocketExceptions$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.util.SocketExceptions$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SocketExceptions$1_FieldInfo_,
	_SocketExceptions$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/IOException;>;",
	&_SocketExceptions$1_EnclosingMethodInfo_,
	_SocketExceptions$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.util.SocketExceptions"
};

$Object* allocate$SocketExceptions$1($Class* clazz) {
	return $of($alloc(SocketExceptions$1));
}

void SocketExceptions$1::init$($IOException* val$e, $String* val$msg) {
	$set(this, val$e, val$e);
	$set(this, val$msg, val$msg);
}

$Object* SocketExceptions$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$Class* clazz = $nc($of(this->val$e))->getClass();
		$var($Constructor, ctor, $nc(clazz)->getConstructor($$new($ClassArray, {$String::class$})));
		$var($IOException, e1, ($cast($IOException, $nc(ctor)->newInstance($$new($ObjectArray, {$of(this->val$msg)})))));
		$nc(e1)->setStackTrace($($nc(this->val$e)->getStackTrace()));
		return $of(e1);
	} catch ($Exception& e0) {
		return $of(this->val$e);
	}
	$shouldNotReachHere();
}

SocketExceptions$1::SocketExceptions$1() {
}

$Class* SocketExceptions$1::load$($String* name, bool initialize) {
	$loadClass(SocketExceptions$1, name, initialize, &_SocketExceptions$1_ClassInfo_, allocate$SocketExceptions$1);
	return class$;
}

$Class* SocketExceptions$1::class$ = nullptr;

		} // util
	} // net
} // sun