#include <sun/net/www/protocol/ftp/FtpURLConnection$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ProxySelector.h>
#include <sun/net/www/protocol/ftp/FtpURLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProxySelector = ::java::net::ProxySelector;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FtpURLConnection = ::sun::net::www::protocol::ftp::FtpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace ftp {

$FieldInfo _FtpURLConnection$1_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/ftp/FtpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(FtpURLConnection$1, this$0)},
	{}
};

$MethodInfo _FtpURLConnection$1_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/ftp/FtpURLConnection;)V", nullptr, 0, $method(static_cast<void(FtpURLConnection$1::*)($FtpURLConnection*)>(&FtpURLConnection$1::init$))},
	{"run", "()Ljava/net/ProxySelector;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FtpURLConnection$1_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.ftp.FtpURLConnection",
	"connect",
	"()V"
};

$InnerClassInfo _FtpURLConnection$1_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.ftp.FtpURLConnection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FtpURLConnection$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.ftp.FtpURLConnection$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_FtpURLConnection$1_FieldInfo_,
	_FtpURLConnection$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/ProxySelector;>;",
	&_FtpURLConnection$1_EnclosingMethodInfo_,
	_FtpURLConnection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.ftp.FtpURLConnection"
};

$Object* allocate$FtpURLConnection$1($Class* clazz) {
	return $of($alloc(FtpURLConnection$1));
}

void FtpURLConnection$1::init$($FtpURLConnection* this$0) {
	$set(this, this$0, this$0);
}

$Object* FtpURLConnection$1::run() {
	return $of($ProxySelector::getDefault());
}

FtpURLConnection$1::FtpURLConnection$1() {
}

$Class* FtpURLConnection$1::load$($String* name, bool initialize) {
	$loadClass(FtpURLConnection$1, name, initialize, &_FtpURLConnection$1_ClassInfo_, allocate$FtpURLConnection$1);
	return class$;
}

$Class* FtpURLConnection$1::class$ = nullptr;

				} // ftp
			} // protocol
		} // www
	} // net
} // sun