#include <sun/net/www/protocol/file/UNCFileURLConnection.h>
#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/net/URL.h>
#include <java/security/Permission.h>
#include <sun/net/www/protocol/file/FileURLConnection.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FilePermission = ::java::io::FilePermission;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Permission = ::java::security::Permission;
using $FileURLConnection = ::sun::net::www::protocol::file::FileURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace file {

void UNCFileURLConnection::init$($URL* u, $File* file, $String* effectivePath) {
	$FileURLConnection::init$(u, file);
	$set(this, effectivePath, effectivePath);
}

$Permission* UNCFileURLConnection::getPermission() {
	$var($Permission, perm, this->permission);
	if (perm == nullptr) {
		$set(this, permission, $assign(perm, $new($FilePermission, this->effectivePath, "read"_s)));
	}
	return perm;
}

UNCFileURLConnection::UNCFileURLConnection() {
}

$Class* UNCFileURLConnection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"effectivePath", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UNCFileURLConnection, effectivePath)},
		{"permission", "Ljava/security/Permission;", nullptr, $PRIVATE | $VOLATILE, $field(UNCFileURLConnection, permission)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/URL;Ljava/io/File;Ljava/lang/String;)V", nullptr, 0, $method(UNCFileURLConnection, init$, void, $URL*, $File*, $String*)},
		{"getPermission", "()Ljava/security/Permission;", nullptr, $PUBLIC, $virtualMethod(UNCFileURLConnection, getPermission, $Permission*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.net.www.protocol.file.UNCFileURLConnection",
		"sun.net.www.protocol.file.FileURLConnection",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UNCFileURLConnection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UNCFileURLConnection);
	});
	return class$;
}

$Class* UNCFileURLConnection::class$ = nullptr;

				} // file
			} // protocol
		} // www
	} // net
} // sun