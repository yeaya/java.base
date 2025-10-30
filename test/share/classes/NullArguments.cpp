#include <NullArguments.h>

#include <java/io/IOException.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProxySelector.h>
#include <java/net/SocketAddress.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/util/List.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProxySelector = ::java::net::ProxySelector;
using $SocketAddress = ::java::net::SocketAddress;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $List = ::java::util::List;

$MethodInfo _NullArguments_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullArguments::*)()>(&NullArguments::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullArguments::main))},
	{}
};

$ClassInfo _NullArguments_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullArguments",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NullArguments_MethodInfo_
};

$Object* allocate$NullArguments($Class* clazz) {
	return $of($alloc(NullArguments));
}

void NullArguments::init$() {
}

void NullArguments::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ProxySelector, ps, $ProxySelector::getDefault());
	$var($List, p, nullptr);
	bool ok = false;
	if (ps != nullptr) {
		try {
			$assign(p, ps->select(nullptr));
		} catch ($IllegalArgumentException& iae) {
			$nc($System::out)->println("OK"_s);
			ok = true;
		}
		if (!ok) {
			$throwNew($RuntimeException, "Expected IllegalArgumentException!"_s);
		}
		$var($URI, uri, nullptr);
		try {
			$assign(uri, $new($URI, "http://java.sun.com"_s));
		} catch ($URISyntaxException& use) {
		}
		$var($SocketAddress, sa, $new($InetSocketAddress, "localhost"_s, 80));
		$var($IOException, ioe, $new($IOException, "dummy IOE"_s));
		ok = false;
		try {
			ps->connectFailed(uri, sa, nullptr);
		} catch ($IllegalArgumentException& iae) {
			$nc($System::out)->println("OK"_s);
			ok = true;
		}
		if (!ok) {
			$throwNew($RuntimeException, "Expected IllegalArgumentException!"_s);
		}
		ok = false;
		try {
			ps->connectFailed(uri, nullptr, ioe);
		} catch ($IllegalArgumentException& iae) {
			$nc($System::out)->println("OK"_s);
			ok = true;
		}
		if (!ok) {
			$throwNew($RuntimeException, "Expected IllegalArgumentException!"_s);
		}
		ok = false;
		try {
			ps->connectFailed(nullptr, sa, ioe);
		} catch ($IllegalArgumentException& iae) {
			$nc($System::out)->println("OK"_s);
			ok = true;
		}
		if (!ok) {
			$throwNew($RuntimeException, "Expected IllegalArgumentException!"_s);
		}
	}
}

NullArguments::NullArguments() {
}

$Class* NullArguments::load$($String* name, bool initialize) {
	$loadClass(NullArguments, name, initialize, &_NullArguments_ClassInfo_, allocate$NullArguments);
	return class$;
}

$Class* NullArguments::class$ = nullptr;