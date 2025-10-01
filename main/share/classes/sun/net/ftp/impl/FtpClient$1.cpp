#include <sun/net/ftp/impl/FtpClient$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/net/ftp/impl/FtpClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FtpClient = ::sun::net::ftp::impl::FtpClient;

namespace sun {
	namespace net {
		namespace ftp {
			namespace impl {

$FieldInfo _FtpClient$1_FieldInfo_[] = {
	{"val$vals", "[I", nullptr, $FINAL | $SYNTHETIC, $field(FtpClient$1, val$vals)},
	{"val$acceptPasvAddress", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(FtpClient$1, val$acceptPasvAddress)},
	{}
};

$MethodInfo _FtpClient$1_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;[I)V", "()V", 0, $method(static_cast<void(FtpClient$1::*)($StringArray*,$ints*)>(&FtpClient$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FtpClient$1_EnclosingMethodInfo_ = {
	"sun.net.ftp.impl.FtpClient",
	nullptr,
	nullptr
};

$InnerClassInfo _FtpClient$1_InnerClassesInfo_[] = {
	{"sun.net.ftp.impl.FtpClient$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FtpClient$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.ftp.impl.FtpClient$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_FtpClient$1_FieldInfo_,
	_FtpClient$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_FtpClient$1_EnclosingMethodInfo_,
	_FtpClient$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.ftp.impl.FtpClient"
};

$Object* allocate$FtpClient$1($Class* clazz) {
	return $of($alloc(FtpClient$1));
}

void FtpClient$1::init$($StringArray* val$acceptPasvAddress, $ints* val$vals) {
	$set(this, val$acceptPasvAddress, val$acceptPasvAddress);
	$set(this, val$vals, val$vals);
}

$Object* FtpClient$1::run() {
	$nc(this->val$acceptPasvAddress)->set(0, $($System::getProperty("jdk.net.ftp.trustPasvAddress"_s, "false"_s)));
	$nc(this->val$vals)->set(0, $nc($($Integer::getInteger("sun.net.client.defaultReadTimeout"_s, 0x000493E0)))->intValue());
	$nc(this->val$vals)->set(1, $nc($($Integer::getInteger("sun.net.client.defaultConnectTimeout"_s, 0x000493E0)))->intValue());
	return $of($System::getProperty("file.encoding"_s, "ISO8859_1"_s));
}

FtpClient$1::FtpClient$1() {
}

$Class* FtpClient$1::load$($String* name, bool initialize) {
	$loadClass(FtpClient$1, name, initialize, &_FtpClient$1_ClassInfo_, allocate$FtpClient$1);
	return class$;
}

$Class* FtpClient$1::class$ = nullptr;

			} // impl
		} // ftp
	} // net
} // sun