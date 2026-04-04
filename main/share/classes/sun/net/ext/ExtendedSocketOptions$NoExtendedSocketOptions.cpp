#include <sun/net/ext/ExtendedSocketOptions$NoExtendedSocketOptions.h>
#include <java/io/FileDescriptor.h>
#include <java/lang/UnsupportedOperationException.h>
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
using $ExtendedSocketOptions = ::sun::net::ext::ExtendedSocketOptions;

namespace sun {
	namespace net {
		namespace ext {

void ExtendedSocketOptions$NoExtendedSocketOptions::init$() {
	$ExtendedSocketOptions::init$($($Collections::emptySet()));
}

void ExtendedSocketOptions$NoExtendedSocketOptions::setOption($FileDescriptor* fd, $SocketOption* option, Object$* value) {
	$useLocalObjectStack();
	$throwNew($UnsupportedOperationException, $$str({"no extended options: "_s, $($nc(option)->name())}));
}

$Object* ExtendedSocketOptions$NoExtendedSocketOptions::getOption($FileDescriptor* fd, $SocketOption* option) {
	$useLocalObjectStack();
	$throwNew($UnsupportedOperationException, $$str({"no extended options: "_s, $($nc(option)->name())}));
	$shouldNotReachHere();
}

ExtendedSocketOptions$NoExtendedSocketOptions::ExtendedSocketOptions$NoExtendedSocketOptions() {
}

$Class* ExtendedSocketOptions$NoExtendedSocketOptions::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ExtendedSocketOptions$NoExtendedSocketOptions, init$, void)},
		{"getOption", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption;)Ljava/lang/Object;", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption<*>;)Ljava/lang/Object;", $PUBLIC, $virtualMethod(ExtendedSocketOptions$NoExtendedSocketOptions, getOption, $Object*, $FileDescriptor*, $SocketOption*), "java.net.SocketException"},
		{"setOption", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption;Ljava/lang/Object;)V", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption<*>;Ljava/lang/Object;)V", $PUBLIC, $virtualMethod(ExtendedSocketOptions$NoExtendedSocketOptions, setOption, void, $FileDescriptor*, $SocketOption*, Object$*), "java.net.SocketException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.ext.ExtendedSocketOptions$NoExtendedSocketOptions", "sun.net.ext.ExtendedSocketOptions", "NoExtendedSocketOptions", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.net.ext.ExtendedSocketOptions$NoExtendedSocketOptions",
		"sun.net.ext.ExtendedSocketOptions",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.ext.ExtendedSocketOptions"
	};
	$loadClass(ExtendedSocketOptions$NoExtendedSocketOptions, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedSocketOptions$NoExtendedSocketOptions);
	});
	return class$;
}

$Class* ExtendedSocketOptions$NoExtendedSocketOptions::class$ = nullptr;

		} // ext
	} // net
} // sun