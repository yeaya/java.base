#include <sun/net/ftp/impl/FtpClient$1.h>
#include <sun/net/ftp/impl/FtpClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace ftp {
			namespace impl {

void FtpClient$1::init$($StringArray* val$acceptPasvAddress, $ints* val$vals) {
	$set(this, val$acceptPasvAddress, val$acceptPasvAddress);
	$set(this, val$vals, val$vals);
}

$Object* FtpClient$1::run() {
	$useLocalObjectStack();
	$nc(this->val$acceptPasvAddress)->set(0, $($System::getProperty("jdk.net.ftp.trustPasvAddress"_s, "false"_s)));
	$nc(this->val$vals)->set(0, $$nc($Integer::getInteger("sun.net.client.defaultReadTimeout"_s, 300000))->intValue());
	this->val$vals->set(1, $$nc($Integer::getInteger("sun.net.client.defaultConnectTimeout"_s, 300000))->intValue());
	return $of($System::getProperty("file.encoding"_s, "ISO8859_1"_s));
}

FtpClient$1::FtpClient$1() {
}

$Class* FtpClient$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$vals", "[I", nullptr, $FINAL | $SYNTHETIC, $field(FtpClient$1, val$vals)},
		{"val$acceptPasvAddress", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(FtpClient$1, val$acceptPasvAddress)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/String;[I)V", "()V", 0, $method(FtpClient$1, init$, void, $StringArray*, $ints*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FtpClient$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.ftp.impl.FtpClient",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.ftp.impl.FtpClient$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.ftp.impl.FtpClient$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.ftp.impl.FtpClient"
	};
	$loadClass(FtpClient$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FtpClient$1);
	});
	return class$;
}

$Class* FtpClient$1::class$ = nullptr;

			} // impl
		} // ftp
	} // net
} // sun