#include <sun/nio/ch/Util$3.h>
#include <java/io/FileDescriptor.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/InternalError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/Constructor.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <sun/nio/ch/Util.h>
#include <jcpp.h>

#undef TYPE

using $FileDescriptor = ::java::io::FileDescriptor;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Runnable = ::java::lang::Runnable;
using $Constructor = ::java::lang::reflect::Constructor;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Util = ::sun::nio::ch::Util;

namespace sun {
	namespace nio {
		namespace ch {

void Util$3::init$() {
}

$Object* Util$3::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$Class* cl = $Class::forName("java.nio.DirectByteBuffer"_s);
		$load($FileDescriptor);
		$load($MemorySegmentProxy);
		$var($Constructor, ctor, cl->getDeclaredConstructor($$new($ClassArray, {
			$Integer::TYPE,
			$Long::TYPE,
			$FileDescriptor::class$,
			$Runnable::class$,
			$Boolean::TYPE,
			$MemorySegmentProxy::class$
		})));
		$nc(ctor)->setAccessible(true);
		$init($Util);
		$assignStatic($Util::directByteBufferConstructor, ctor);
	} catch ($ClassNotFoundException& x) {
		$throwNew($InternalError, x);
	} catch ($NoSuchMethodException& x) {
		$throwNew($InternalError, x);
	} catch ($IllegalArgumentException& x) {
		$throwNew($InternalError, x);
	} catch ($ClassCastException& x) {
		$throwNew($InternalError, x);
	}
	return nullptr;
}

Util$3::Util$3() {
}

$Class* Util$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Util$3, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Util$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.Util",
		"initDBBConstructor",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Util$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.Util$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Util"
	};
	$loadClass(Util$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Util$3);
	});
	return class$;
}

$Class* Util$3::class$ = nullptr;

		} // ch
	} // nio
} // sun