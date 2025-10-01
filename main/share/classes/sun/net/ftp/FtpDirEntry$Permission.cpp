#include <sun/net/ftp/FtpDirEntry$Permission.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/net/ftp/FtpDirEntry.h>
#include <jcpp.h>

#undef GROUP
#undef OTHERS
#undef USER

using $FtpDirEntry$PermissionArray = $Array<::sun::net::ftp::FtpDirEntry$Permission>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FtpDirEntry = ::sun::net::ftp::FtpDirEntry;

namespace sun {
	namespace net {
		namespace ftp {

$FieldInfo _FtpDirEntry$Permission_FieldInfo_[] = {
	{"USER", "Lsun/net/ftp/FtpDirEntry$Permission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpDirEntry$Permission, USER)},
	{"GROUP", "Lsun/net/ftp/FtpDirEntry$Permission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpDirEntry$Permission, GROUP)},
	{"OTHERS", "Lsun/net/ftp/FtpDirEntry$Permission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpDirEntry$Permission, OTHERS)},
	{"$VALUES", "[Lsun/net/ftp/FtpDirEntry$Permission;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FtpDirEntry$Permission, $VALUES)},
	{"value", "I", nullptr, 0, $field(FtpDirEntry$Permission, value)},
	{}
};

$MethodInfo _FtpDirEntry$Permission_MethodInfo_[] = {
	{"$values", "()[Lsun/net/ftp/FtpDirEntry$Permission;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FtpDirEntry$PermissionArray*(*)()>(&FtpDirEntry$Permission::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(FtpDirEntry$Permission::*)($String*,int32_t,int32_t)>(&FtpDirEntry$Permission::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/net/ftp/FtpDirEntry$Permission;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FtpDirEntry$Permission*(*)($String*)>(&FtpDirEntry$Permission::valueOf))},
	{"values", "()[Lsun/net/ftp/FtpDirEntry$Permission;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FtpDirEntry$PermissionArray*(*)()>(&FtpDirEntry$Permission::values))},
	{}
};

$InnerClassInfo _FtpDirEntry$Permission_InnerClassesInfo_[] = {
	{"sun.net.ftp.FtpDirEntry$Permission", "sun.net.ftp.FtpDirEntry", "Permission", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FtpDirEntry$Permission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.net.ftp.FtpDirEntry$Permission",
	"java.lang.Enum",
	nullptr,
	_FtpDirEntry$Permission_FieldInfo_,
	_FtpDirEntry$Permission_MethodInfo_,
	"Ljava/lang/Enum<Lsun/net/ftp/FtpDirEntry$Permission;>;",
	nullptr,
	_FtpDirEntry$Permission_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.ftp.FtpDirEntry"
};

$Object* allocate$FtpDirEntry$Permission($Class* clazz) {
	return $of($alloc(FtpDirEntry$Permission));
}

FtpDirEntry$Permission* FtpDirEntry$Permission::USER = nullptr;
FtpDirEntry$Permission* FtpDirEntry$Permission::GROUP = nullptr;
FtpDirEntry$Permission* FtpDirEntry$Permission::OTHERS = nullptr;
$FtpDirEntry$PermissionArray* FtpDirEntry$Permission::$VALUES = nullptr;

$FtpDirEntry$PermissionArray* FtpDirEntry$Permission::$values() {
	$init(FtpDirEntry$Permission);
	return $new($FtpDirEntry$PermissionArray, {
		FtpDirEntry$Permission::USER,
		FtpDirEntry$Permission::GROUP,
		FtpDirEntry$Permission::OTHERS
	});
}

$FtpDirEntry$PermissionArray* FtpDirEntry$Permission::values() {
	$init(FtpDirEntry$Permission);
	return $cast($FtpDirEntry$PermissionArray, FtpDirEntry$Permission::$VALUES->clone());
}

FtpDirEntry$Permission* FtpDirEntry$Permission::valueOf($String* name) {
	$init(FtpDirEntry$Permission);
	return $cast(FtpDirEntry$Permission, $Enum::valueOf(FtpDirEntry$Permission::class$, name));
}

void FtpDirEntry$Permission::init$($String* $enum$name, int32_t $enum$ordinal, int32_t v) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->value = v;
}

void clinit$FtpDirEntry$Permission($Class* class$) {
	$assignStatic(FtpDirEntry$Permission::USER, $new(FtpDirEntry$Permission, "USER"_s, 0, 0));
	$assignStatic(FtpDirEntry$Permission::GROUP, $new(FtpDirEntry$Permission, "GROUP"_s, 1, 1));
	$assignStatic(FtpDirEntry$Permission::OTHERS, $new(FtpDirEntry$Permission, "OTHERS"_s, 2, 2));
	$assignStatic(FtpDirEntry$Permission::$VALUES, FtpDirEntry$Permission::$values());
}

FtpDirEntry$Permission::FtpDirEntry$Permission() {
}

$Class* FtpDirEntry$Permission::load$($String* name, bool initialize) {
	$loadClass(FtpDirEntry$Permission, name, initialize, &_FtpDirEntry$Permission_ClassInfo_, clinit$FtpDirEntry$Permission, allocate$FtpDirEntry$Permission);
	return class$;
}

$Class* FtpDirEntry$Permission::class$ = nullptr;

		} // ftp
	} // net
} // sun