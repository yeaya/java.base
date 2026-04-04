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

void SocketExceptions$1::init$($IOException* val$e, $String* val$msg) {
	$set(this, val$e, val$e);
	$set(this, val$msg, val$msg);
}

$Object* SocketExceptions$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$Class* clazz = $nc(this->val$e)->getClass();
		$var($Constructor, ctor, clazz->getConstructor($$new($ClassArray, {$String::class$})));
		$var($IOException, e1, $cast($IOException, $nc(ctor)->newInstance($$new($ObjectArray, {this->val$msg}))));
		$nc(e1)->setStackTrace($(this->val$e->getStackTrace()));
		return e1;
	} catch ($Exception& e0) {
		return this->val$e;
	}
	$shouldNotReachHere();
}

SocketExceptions$1::SocketExceptions$1() {
}

$Class* SocketExceptions$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$msg", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SocketExceptions$1, val$msg)},
		{"val$e", "Ljava/io/IOException;", nullptr, $FINAL | $SYNTHETIC, $field(SocketExceptions$1, val$e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/IOException;Ljava/lang/String;)V", "()V", 0, $method(SocketExceptions$1, init$, void, $IOException*, $String*)},
		{"run", "()Ljava/io/IOException;", nullptr, $PUBLIC, $virtualMethod(SocketExceptions$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.util.SocketExceptions",
		"create",
		"(Ljava/io/IOException;Ljava/lang/String;)Ljava/io/IOException;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.util.SocketExceptions$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.util.SocketExceptions$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/IOException;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.util.SocketExceptions"
	};
	$loadClass(SocketExceptions$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketExceptions$1);
	});
	return class$;
}

$Class* SocketExceptions$1::class$ = nullptr;

		} // util
	} // net
} // sun