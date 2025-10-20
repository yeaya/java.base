#include <sun/net/ext/ExtendedSocketOptions$NoExtendedSocketOptions.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/SocketOption.h>
#include <java/util/Collections.h>
#include <java/util/Set.h>
#include <sun/net/ext/ExtendedSocketOptions.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $SocketOption = ::java::net::SocketOption;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;
using $ExtendedSocketOptions = ::sun::net::ext::ExtendedSocketOptions;

namespace sun {
	namespace net {
		namespace ext {

$MethodInfo _ExtendedSocketOptions$NoExtendedSocketOptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ExtendedSocketOptions$NoExtendedSocketOptions::*)()>(&ExtendedSocketOptions$NoExtendedSocketOptions::init$))},
	{"getOption", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption;)Ljava/lang/Object;", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption<*>;)Ljava/lang/Object;", $PUBLIC, nullptr, "java.net.SocketException"},
	{"setOption", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption;Ljava/lang/Object;)V", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption<*>;Ljava/lang/Object;)V", $PUBLIC, nullptr, "java.net.SocketException"},
	{}
};

$InnerClassInfo _ExtendedSocketOptions$NoExtendedSocketOptions_InnerClassesInfo_[] = {
	{"sun.net.ext.ExtendedSocketOptions$NoExtendedSocketOptions", "sun.net.ext.ExtendedSocketOptions", "NoExtendedSocketOptions", $STATIC | $FINAL},
	{}
};

$ClassInfo _ExtendedSocketOptions$NoExtendedSocketOptions_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.net.ext.ExtendedSocketOptions$NoExtendedSocketOptions",
	"sun.net.ext.ExtendedSocketOptions",
	nullptr,
	nullptr,
	_ExtendedSocketOptions$NoExtendedSocketOptions_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedSocketOptions$NoExtendedSocketOptions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.ext.ExtendedSocketOptions"
};

$Object* allocate$ExtendedSocketOptions$NoExtendedSocketOptions($Class* clazz) {
	return $of($alloc(ExtendedSocketOptions$NoExtendedSocketOptions));
}

void ExtendedSocketOptions$NoExtendedSocketOptions::init$() {
	$ExtendedSocketOptions::init$($($Collections::emptySet()));
}

void ExtendedSocketOptions$NoExtendedSocketOptions::setOption($FileDescriptor* fd, $SocketOption* option, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$throwNew($UnsupportedOperationException, $$str({"no extended options: "_s, $($nc(option)->name())}));
}

$Object* ExtendedSocketOptions$NoExtendedSocketOptions::getOption($FileDescriptor* fd, $SocketOption* option) {
	$useLocalCurrentObjectStackCache();
	$throwNew($UnsupportedOperationException, $$str({"no extended options: "_s, $($nc(option)->name())}));
	$shouldNotReachHere();
}

ExtendedSocketOptions$NoExtendedSocketOptions::ExtendedSocketOptions$NoExtendedSocketOptions() {
}

$Class* ExtendedSocketOptions$NoExtendedSocketOptions::load$($String* name, bool initialize) {
	$loadClass(ExtendedSocketOptions$NoExtendedSocketOptions, name, initialize, &_ExtendedSocketOptions$NoExtendedSocketOptions_ClassInfo_, allocate$ExtendedSocketOptions$NoExtendedSocketOptions);
	return class$;
}

$Class* ExtendedSocketOptions$NoExtendedSocketOptions::class$ = nullptr;

		} // ext
	} // net
} // sun