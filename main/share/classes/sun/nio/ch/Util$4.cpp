#include <sun/nio/ch/Util$4.h>

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

$MethodInfo _Util$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Util$4::*)()>(&Util$4::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Util$4_EnclosingMethodInfo_ = {
	"sun.nio.ch.Util",
	"initDBBRConstructor",
	"()V"
};

$InnerClassInfo _Util$4_InnerClassesInfo_[] = {
	{"sun.nio.ch.Util$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Util$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Util$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Util$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_Util$4_EnclosingMethodInfo_,
	_Util$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Util"
};

$Object* allocate$Util$4($Class* clazz) {
	return $of($alloc(Util$4));
}

void Util$4::init$() {
}

$Object* Util$4::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$Class* cl = $Class::forName("java.nio.DirectByteBufferR"_s);
		$init($Integer);
		$init($Long);
		$load($FileDescriptor);
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
		$assignStatic($Util::directByteBufferRConstructor, ctor);
	} catch ($ClassNotFoundException& x) {
		$throwNew($InternalError, static_cast<$Throwable*>(x));
	} catch ($NoSuchMethodException& x) {
		$throwNew($InternalError, static_cast<$Throwable*>(x));
	} catch ($IllegalArgumentException& x) {
		$throwNew($InternalError, static_cast<$Throwable*>(x));
	} catch ($ClassCastException& x) {
		$throwNew($InternalError, static_cast<$Throwable*>(x));
	}
	return $of(nullptr);
}

Util$4::Util$4() {
}

$Class* Util$4::load$($String* name, bool initialize) {
	$loadClass(Util$4, name, initialize, &_Util$4_ClassInfo_, allocate$Util$4);
	return class$;
}

$Class* Util$4::class$ = nullptr;

		} // ch
	} // nio
} // sun