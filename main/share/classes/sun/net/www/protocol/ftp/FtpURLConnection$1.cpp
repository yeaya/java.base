#include <sun/net/www/protocol/ftp/FtpURLConnection$1.h>
#include <java/net/ProxySelector.h>
#include <sun/net/www/protocol/ftp/FtpURLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProxySelector = ::java::net::ProxySelector;
using $FtpURLConnection = ::sun::net::www::protocol::ftp::FtpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace ftp {

void FtpURLConnection$1::init$($FtpURLConnection* this$0) {
	$set(this, this$0, this$0);
}

$Object* FtpURLConnection$1::run() {
	return $ProxySelector::getDefault();
}

FtpURLConnection$1::FtpURLConnection$1() {
}

$Class* FtpURLConnection$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/protocol/ftp/FtpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(FtpURLConnection$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/protocol/ftp/FtpURLConnection;)V", nullptr, 0, $method(FtpURLConnection$1, init$, void, $FtpURLConnection*)},
		{"run", "()Ljava/net/ProxySelector;", nullptr, $PUBLIC, $virtualMethod(FtpURLConnection$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.ftp.FtpURLConnection",
		"connect",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.ftp.FtpURLConnection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.ftp.FtpURLConnection$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/ProxySelector;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.ftp.FtpURLConnection"
	};
	$loadClass(FtpURLConnection$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FtpURLConnection$1);
	});
	return class$;
}

$Class* FtpURLConnection$1::class$ = nullptr;

				} // ftp
			} // protocol
		} // www
	} // net
} // sun