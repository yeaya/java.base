#include <sun/net/ftp/FtpClient$TransferType.h>

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
#include <sun/net/ftp/FtpClient.h>
#include <jcpp.h>

#undef EBCDIC
#undef BINARY
#undef ASCII

using $FtpClient$TransferTypeArray = $Array<::sun::net::ftp::FtpClient$TransferType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FtpClient = ::sun::net::ftp::FtpClient;

namespace sun {
	namespace net {
		namespace ftp {

$FieldInfo _FtpClient$TransferType_FieldInfo_[] = {
	{"ASCII", "Lsun/net/ftp/FtpClient$TransferType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpClient$TransferType, ASCII)},
	{"BINARY", "Lsun/net/ftp/FtpClient$TransferType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpClient$TransferType, BINARY)},
	{"EBCDIC", "Lsun/net/ftp/FtpClient$TransferType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpClient$TransferType, EBCDIC)},
	{"$VALUES", "[Lsun/net/ftp/FtpClient$TransferType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FtpClient$TransferType, $VALUES)},
	{}
};

$MethodInfo _FtpClient$TransferType_MethodInfo_[] = {
	{"$values", "()[Lsun/net/ftp/FtpClient$TransferType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FtpClient$TransferTypeArray*(*)()>(&FtpClient$TransferType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(FtpClient$TransferType::*)($String*,int32_t)>(&FtpClient$TransferType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient$TransferType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FtpClient$TransferType*(*)($String*)>(&FtpClient$TransferType::valueOf))},
	{"values", "()[Lsun/net/ftp/FtpClient$TransferType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FtpClient$TransferTypeArray*(*)()>(&FtpClient$TransferType::values))},
	{}
};

$InnerClassInfo _FtpClient$TransferType_InnerClassesInfo_[] = {
	{"sun.net.ftp.FtpClient$TransferType", "sun.net.ftp.FtpClient", "TransferType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FtpClient$TransferType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.net.ftp.FtpClient$TransferType",
	"java.lang.Enum",
	nullptr,
	_FtpClient$TransferType_FieldInfo_,
	_FtpClient$TransferType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/net/ftp/FtpClient$TransferType;>;",
	nullptr,
	_FtpClient$TransferType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.ftp.FtpClient"
};

$Object* allocate$FtpClient$TransferType($Class* clazz) {
	return $of($alloc(FtpClient$TransferType));
}

FtpClient$TransferType* FtpClient$TransferType::ASCII = nullptr;
FtpClient$TransferType* FtpClient$TransferType::BINARY = nullptr;
FtpClient$TransferType* FtpClient$TransferType::EBCDIC = nullptr;
$FtpClient$TransferTypeArray* FtpClient$TransferType::$VALUES = nullptr;

$FtpClient$TransferTypeArray* FtpClient$TransferType::$values() {
	$init(FtpClient$TransferType);
	return $new($FtpClient$TransferTypeArray, {
		FtpClient$TransferType::ASCII,
		FtpClient$TransferType::BINARY,
		FtpClient$TransferType::EBCDIC
	});
}

$FtpClient$TransferTypeArray* FtpClient$TransferType::values() {
	$init(FtpClient$TransferType);
	return $cast($FtpClient$TransferTypeArray, FtpClient$TransferType::$VALUES->clone());
}

FtpClient$TransferType* FtpClient$TransferType::valueOf($String* name) {
	$init(FtpClient$TransferType);
	return $cast(FtpClient$TransferType, $Enum::valueOf(FtpClient$TransferType::class$, name));
}

void FtpClient$TransferType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$FtpClient$TransferType($Class* class$) {
	$assignStatic(FtpClient$TransferType::ASCII, $new(FtpClient$TransferType, "ASCII"_s, 0));
	$assignStatic(FtpClient$TransferType::BINARY, $new(FtpClient$TransferType, "BINARY"_s, 1));
	$assignStatic(FtpClient$TransferType::EBCDIC, $new(FtpClient$TransferType, "EBCDIC"_s, 2));
	$assignStatic(FtpClient$TransferType::$VALUES, FtpClient$TransferType::$values());
}

FtpClient$TransferType::FtpClient$TransferType() {
}

$Class* FtpClient$TransferType::load$($String* name, bool initialize) {
	$loadClass(FtpClient$TransferType, name, initialize, &_FtpClient$TransferType_ClassInfo_, clinit$FtpClient$TransferType, allocate$FtpClient$TransferType);
	return class$;
}

$Class* FtpClient$TransferType::class$ = nullptr;

		} // ftp
	} // net
} // sun