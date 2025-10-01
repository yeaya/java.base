#include <sun/nio/ch/Util$3.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Runnable = ::java::lang::Runnable;
using $Constructor = ::java::lang::reflect::Constructor;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Util = ::sun::nio::ch::Util;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _Util$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Util$3::*)()>(&Util$3::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Util$3_EnclosingMethodInfo_ = {
	"sun.nio.ch.Util",
	"initDBBConstructor",
	"()V"
};

$InnerClassInfo _Util$3_InnerClassesInfo_[] = {
	{"sun.nio.ch.Util$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Util$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Util$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Util$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_Util$3_EnclosingMethodInfo_,
	_Util$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Util"
};

$Object* allocate$Util$3($Class* clazz) {
	return $of($alloc(Util$3));
}

void Util$3::init$() {
}

$Object* Util$3::run() {
	$beforeCallerSensitive();
	try {
		$Class* cl = $Class::forName("java.nio.DirectByteBuffer"_s);
			$init($Integer);
			$init($Long);
			$load($FileDescriptor);
			$load($Runnable);
			$init($Boolean);
			$load($MemorySegmentProxy);
		$var($Constructor, ctor, $nc(cl)->getDeclaredConstructor($$new($ClassArray, {
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
	} catch ($ClassNotFoundException&) {
		$var($Exception, x, $catch());
		$throwNew($InternalError, static_cast<$Throwable*>(x));
	} catch ($NoSuchMethodException&) {
		$var($Exception, x, $catch());
		$throwNew($InternalError, static_cast<$Throwable*>(x));
	} catch ($IllegalArgumentException&) {
		$var($Exception, x, $catch());
		$throwNew($InternalError, static_cast<$Throwable*>(x));
	} catch ($ClassCastException&) {
		$var($Exception, x, $catch());
		$throwNew($InternalError, static_cast<$Throwable*>(x));
	}
	return $of(nullptr);
}

Util$3::Util$3() {
}

$Class* Util$3::load$($String* name, bool initialize) {
	$loadClass(Util$3, name, initialize, &_Util$3_ClassInfo_, allocate$Util$3);
	return class$;
}

$Class* Util$3::class$ = nullptr;

		} // ch
	} // nio
} // sun