#include <sun/net/ftp/FtpDirEntry$Type.h>

#include <java/lang/Enum.h>
#include <sun/net/ftp/FtpDirEntry.h>
#include <jcpp.h>

#undef CDIR
#undef DIR
#undef FILE
#undef LINK
#undef PDIR

using $FtpDirEntry$TypeArray = $Array<::sun::net::ftp::FtpDirEntry$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FtpDirEntry = ::sun::net::ftp::FtpDirEntry;

namespace sun {
	namespace net {
		namespace ftp {

$FieldInfo _FtpDirEntry$Type_FieldInfo_[] = {
	{"FILE", "Lsun/net/ftp/FtpDirEntry$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpDirEntry$Type, FILE)},
	{"DIR", "Lsun/net/ftp/FtpDirEntry$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpDirEntry$Type, DIR)},
	{"PDIR", "Lsun/net/ftp/FtpDirEntry$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpDirEntry$Type, PDIR)},
	{"CDIR", "Lsun/net/ftp/FtpDirEntry$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpDirEntry$Type, CDIR)},
	{"LINK", "Lsun/net/ftp/FtpDirEntry$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpDirEntry$Type, LINK)},
	{"$VALUES", "[Lsun/net/ftp/FtpDirEntry$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FtpDirEntry$Type, $VALUES)},
	{}
};

$MethodInfo _FtpDirEntry$Type_MethodInfo_[] = {
	{"$values", "()[Lsun/net/ftp/FtpDirEntry$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FtpDirEntry$TypeArray*(*)()>(&FtpDirEntry$Type::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(FtpDirEntry$Type::*)($String*,int32_t)>(&FtpDirEntry$Type::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/net/ftp/FtpDirEntry$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FtpDirEntry$Type*(*)($String*)>(&FtpDirEntry$Type::valueOf))},
	{"values", "()[Lsun/net/ftp/FtpDirEntry$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FtpDirEntry$TypeArray*(*)()>(&FtpDirEntry$Type::values))},
	{}
};

$InnerClassInfo _FtpDirEntry$Type_InnerClassesInfo_[] = {
	{"sun.net.ftp.FtpDirEntry$Type", "sun.net.ftp.FtpDirEntry", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FtpDirEntry$Type_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.net.ftp.FtpDirEntry$Type",
	"java.lang.Enum",
	nullptr,
	_FtpDirEntry$Type_FieldInfo_,
	_FtpDirEntry$Type_MethodInfo_,
	"Ljava/lang/Enum<Lsun/net/ftp/FtpDirEntry$Type;>;",
	nullptr,
	_FtpDirEntry$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.ftp.FtpDirEntry"
};

$Object* allocate$FtpDirEntry$Type($Class* clazz) {
	return $of($alloc(FtpDirEntry$Type));
}

FtpDirEntry$Type* FtpDirEntry$Type::FILE = nullptr;
FtpDirEntry$Type* FtpDirEntry$Type::DIR = nullptr;
FtpDirEntry$Type* FtpDirEntry$Type::PDIR = nullptr;
FtpDirEntry$Type* FtpDirEntry$Type::CDIR = nullptr;
FtpDirEntry$Type* FtpDirEntry$Type::LINK = nullptr;
$FtpDirEntry$TypeArray* FtpDirEntry$Type::$VALUES = nullptr;

$FtpDirEntry$TypeArray* FtpDirEntry$Type::$values() {
	$init(FtpDirEntry$Type);
	return $new($FtpDirEntry$TypeArray, {
		FtpDirEntry$Type::FILE,
		FtpDirEntry$Type::DIR,
		FtpDirEntry$Type::PDIR,
		FtpDirEntry$Type::CDIR,
		FtpDirEntry$Type::LINK
	});
}

$FtpDirEntry$TypeArray* FtpDirEntry$Type::values() {
	$init(FtpDirEntry$Type);
	return $cast($FtpDirEntry$TypeArray, FtpDirEntry$Type::$VALUES->clone());
}

FtpDirEntry$Type* FtpDirEntry$Type::valueOf($String* name) {
	$init(FtpDirEntry$Type);
	return $cast(FtpDirEntry$Type, $Enum::valueOf(FtpDirEntry$Type::class$, name));
}

void FtpDirEntry$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$FtpDirEntry$Type($Class* class$) {
	$assignStatic(FtpDirEntry$Type::FILE, $new(FtpDirEntry$Type, "FILE"_s, 0));
	$assignStatic(FtpDirEntry$Type::DIR, $new(FtpDirEntry$Type, "DIR"_s, 1));
	$assignStatic(FtpDirEntry$Type::PDIR, $new(FtpDirEntry$Type, "PDIR"_s, 2));
	$assignStatic(FtpDirEntry$Type::CDIR, $new(FtpDirEntry$Type, "CDIR"_s, 3));
	$assignStatic(FtpDirEntry$Type::LINK, $new(FtpDirEntry$Type, "LINK"_s, 4));
	$assignStatic(FtpDirEntry$Type::$VALUES, FtpDirEntry$Type::$values());
}

FtpDirEntry$Type::FtpDirEntry$Type() {
}

$Class* FtpDirEntry$Type::load$($String* name, bool initialize) {
	$loadClass(FtpDirEntry$Type, name, initialize, &_FtpDirEntry$Type_ClassInfo_, clinit$FtpDirEntry$Type, allocate$FtpDirEntry$Type);
	return class$;
}

$Class* FtpDirEntry$Type::class$ = nullptr;

		} // ftp
	} // net
} // sun