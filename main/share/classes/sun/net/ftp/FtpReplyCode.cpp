#include <sun/net/ftp/FtpReplyCode.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ACTION_ABORTED
#undef BAD_SEQUENCE
#undef CANT_OPEN_DATA_CONNECTION
#undef CLOSING_DATA_CONNECTION
#undef COMMAND_OK
#undef COMMAND_UNRECOGNIZED
#undef CONNECTION_CLOSED
#undef DATA_CONNECTION_ALREADY_OPEN
#undef DATA_CONNECTION_OPEN
#undef DIRECTORY_STATUS
#undef ENTERING_EXT_PASSIVE_MODE
#undef ENTERING_PASSIVE_MODE
#undef EXCEEDED_STORAGE
#undef FAILED_SECURITY_CHECK
#undef FILE_ACTION_NOT_TAKEN
#undef FILE_ACTION_OK
#undef FILE_ACTION_PENDING
#undef FILE_NAME_NOT_ALLOWED
#undef FILE_STATUS
#undef FILE_STATUS_OK
#undef FILE_UNAVAILABLE
#undef HELP_MESSAGE
#undef INSUFFICIENT_STORAGE
#undef INVALID_PARAMETER
#undef LOGGED_IN
#undef NAME_SYSTEM_TYPE
#undef NEED_ACCOUNT
#undef NEED_ACCOUNT_FOR_STORING
#undef NEED_ADAT
#undef NEED_MORE_ADAT
#undef NEED_PASSWORD
#undef NEED_SECURITY_RESOURCE
#undef NOT_IMPLEMENTED
#undef NOT_IMPLEMENTED_FOR_PARAMETER
#undef NOT_LOGGED_IN
#undef PAGE_TYPE_UNKNOWN
#undef PATHNAME_CREATED
#undef PROTECTED_REPLY
#undef PROT_LEVEL_DENIED
#undef PROT_LEVEL_NOT_SUPPORTED_BY_SECURITY
#undef REQUEST_DENIED
#undef RESTART_MARKER
#undef SECURELY_LOGGED_IN
#undef SECURITY_EXCHANGE_COMPLETE
#undef SECURITY_EXCHANGE_OK
#undef SERVICE_CLOSING
#undef SERVICE_NOT_AVAILABLE
#undef SERVICE_READY
#undef SERVICE_READY_IN
#undef SYSTEM_STATUS
#undef UNKNOWN_ERROR
#undef UNSUPPORTED_PROT_LEVEL

using $FtpReplyCodeArray = $Array<::sun::net::ftp::FtpReplyCode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace ftp {

$FieldInfo _FtpReplyCode_FieldInfo_[] = {
	{"RESTART_MARKER", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, RESTART_MARKER)},
	{"SERVICE_READY_IN", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, SERVICE_READY_IN)},
	{"DATA_CONNECTION_ALREADY_OPEN", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, DATA_CONNECTION_ALREADY_OPEN)},
	{"FILE_STATUS_OK", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, FILE_STATUS_OK)},
	{"COMMAND_OK", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, COMMAND_OK)},
	{"NOT_IMPLEMENTED", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, NOT_IMPLEMENTED)},
	{"SYSTEM_STATUS", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, SYSTEM_STATUS)},
	{"DIRECTORY_STATUS", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, DIRECTORY_STATUS)},
	{"FILE_STATUS", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, FILE_STATUS)},
	{"HELP_MESSAGE", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, HELP_MESSAGE)},
	{"NAME_SYSTEM_TYPE", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, NAME_SYSTEM_TYPE)},
	{"SERVICE_READY", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, SERVICE_READY)},
	{"SERVICE_CLOSING", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, SERVICE_CLOSING)},
	{"DATA_CONNECTION_OPEN", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, DATA_CONNECTION_OPEN)},
	{"CLOSING_DATA_CONNECTION", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, CLOSING_DATA_CONNECTION)},
	{"ENTERING_PASSIVE_MODE", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, ENTERING_PASSIVE_MODE)},
	{"ENTERING_EXT_PASSIVE_MODE", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, ENTERING_EXT_PASSIVE_MODE)},
	{"LOGGED_IN", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, LOGGED_IN)},
	{"SECURELY_LOGGED_IN", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, SECURELY_LOGGED_IN)},
	{"SECURITY_EXCHANGE_OK", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, SECURITY_EXCHANGE_OK)},
	{"SECURITY_EXCHANGE_COMPLETE", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, SECURITY_EXCHANGE_COMPLETE)},
	{"FILE_ACTION_OK", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, FILE_ACTION_OK)},
	{"PATHNAME_CREATED", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, PATHNAME_CREATED)},
	{"NEED_PASSWORD", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, NEED_PASSWORD)},
	{"NEED_ACCOUNT", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, NEED_ACCOUNT)},
	{"NEED_ADAT", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, NEED_ADAT)},
	{"NEED_MORE_ADAT", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, NEED_MORE_ADAT)},
	{"FILE_ACTION_PENDING", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, FILE_ACTION_PENDING)},
	{"SERVICE_NOT_AVAILABLE", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, SERVICE_NOT_AVAILABLE)},
	{"CANT_OPEN_DATA_CONNECTION", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, CANT_OPEN_DATA_CONNECTION)},
	{"CONNECTION_CLOSED", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, CONNECTION_CLOSED)},
	{"NEED_SECURITY_RESOURCE", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, NEED_SECURITY_RESOURCE)},
	{"FILE_ACTION_NOT_TAKEN", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, FILE_ACTION_NOT_TAKEN)},
	{"ACTION_ABORTED", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, ACTION_ABORTED)},
	{"INSUFFICIENT_STORAGE", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, INSUFFICIENT_STORAGE)},
	{"COMMAND_UNRECOGNIZED", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, COMMAND_UNRECOGNIZED)},
	{"INVALID_PARAMETER", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, INVALID_PARAMETER)},
	{"BAD_SEQUENCE", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, BAD_SEQUENCE)},
	{"NOT_IMPLEMENTED_FOR_PARAMETER", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, NOT_IMPLEMENTED_FOR_PARAMETER)},
	{"NOT_LOGGED_IN", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, NOT_LOGGED_IN)},
	{"NEED_ACCOUNT_FOR_STORING", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, NEED_ACCOUNT_FOR_STORING)},
	{"PROT_LEVEL_DENIED", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, PROT_LEVEL_DENIED)},
	{"REQUEST_DENIED", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, REQUEST_DENIED)},
	{"FAILED_SECURITY_CHECK", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, FAILED_SECURITY_CHECK)},
	{"UNSUPPORTED_PROT_LEVEL", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, UNSUPPORTED_PROT_LEVEL)},
	{"PROT_LEVEL_NOT_SUPPORTED_BY_SECURITY", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, PROT_LEVEL_NOT_SUPPORTED_BY_SECURITY)},
	{"FILE_UNAVAILABLE", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, FILE_UNAVAILABLE)},
	{"PAGE_TYPE_UNKNOWN", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, PAGE_TYPE_UNKNOWN)},
	{"EXCEEDED_STORAGE", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, EXCEEDED_STORAGE)},
	{"FILE_NAME_NOT_ALLOWED", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, FILE_NAME_NOT_ALLOWED)},
	{"PROTECTED_REPLY", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, PROTECTED_REPLY)},
	{"UNKNOWN_ERROR", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FtpReplyCode, UNKNOWN_ERROR)},
	{"$VALUES", "[Lsun/net/ftp/FtpReplyCode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FtpReplyCode, $VALUES)},
	{"value", "I", nullptr, $PRIVATE | $FINAL, $field(FtpReplyCode, value)},
	{}
};

$MethodInfo _FtpReplyCode_MethodInfo_[] = {
	{"$values", "()[Lsun/net/ftp/FtpReplyCode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FtpReplyCodeArray*(*)()>(&FtpReplyCode::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(FtpReplyCode::*)($String*,int32_t,int32_t)>(&FtpReplyCode::init$))},
	{"find", "(I)Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FtpReplyCode*(*)(int32_t)>(&FtpReplyCode::find))},
	{"getValue", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(FtpReplyCode::*)()>(&FtpReplyCode::getValue))},
	{"isAuthentication", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FtpReplyCode::*)()>(&FtpReplyCode::isAuthentication))},
	{"isConnection", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FtpReplyCode::*)()>(&FtpReplyCode::isConnection))},
	{"isFileSystem", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FtpReplyCode::*)()>(&FtpReplyCode::isFileSystem))},
	{"isInformation", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FtpReplyCode::*)()>(&FtpReplyCode::isInformation))},
	{"isPermanentNegative", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FtpReplyCode::*)()>(&FtpReplyCode::isPermanentNegative))},
	{"isPositiveCompletion", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FtpReplyCode::*)()>(&FtpReplyCode::isPositiveCompletion))},
	{"isPositiveIntermediate", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FtpReplyCode::*)()>(&FtpReplyCode::isPositiveIntermediate))},
	{"isPositivePreliminary", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FtpReplyCode::*)()>(&FtpReplyCode::isPositivePreliminary))},
	{"isProtectedReply", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FtpReplyCode::*)()>(&FtpReplyCode::isProtectedReply))},
	{"isSyntax", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FtpReplyCode::*)()>(&FtpReplyCode::isSyntax))},
	{"isTransientNegative", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FtpReplyCode::*)()>(&FtpReplyCode::isTransientNegative))},
	{"isUnspecified", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FtpReplyCode::*)()>(&FtpReplyCode::isUnspecified))},
	{"valueOf", "(Ljava/lang/String;)Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FtpReplyCode*(*)($String*)>(&FtpReplyCode::valueOf))},
	{"values", "()[Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FtpReplyCodeArray*(*)()>(&FtpReplyCode::values))},
	{}
};

$ClassInfo _FtpReplyCode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.net.ftp.FtpReplyCode",
	"java.lang.Enum",
	nullptr,
	_FtpReplyCode_FieldInfo_,
	_FtpReplyCode_MethodInfo_,
	"Ljava/lang/Enum<Lsun/net/ftp/FtpReplyCode;>;"
};

$Object* allocate$FtpReplyCode($Class* clazz) {
	return $of($alloc(FtpReplyCode));
}

FtpReplyCode* FtpReplyCode::RESTART_MARKER = nullptr;
FtpReplyCode* FtpReplyCode::SERVICE_READY_IN = nullptr;
FtpReplyCode* FtpReplyCode::DATA_CONNECTION_ALREADY_OPEN = nullptr;
FtpReplyCode* FtpReplyCode::FILE_STATUS_OK = nullptr;
FtpReplyCode* FtpReplyCode::COMMAND_OK = nullptr;
FtpReplyCode* FtpReplyCode::NOT_IMPLEMENTED = nullptr;
FtpReplyCode* FtpReplyCode::SYSTEM_STATUS = nullptr;
FtpReplyCode* FtpReplyCode::DIRECTORY_STATUS = nullptr;
FtpReplyCode* FtpReplyCode::FILE_STATUS = nullptr;
FtpReplyCode* FtpReplyCode::HELP_MESSAGE = nullptr;
FtpReplyCode* FtpReplyCode::NAME_SYSTEM_TYPE = nullptr;
FtpReplyCode* FtpReplyCode::SERVICE_READY = nullptr;
FtpReplyCode* FtpReplyCode::SERVICE_CLOSING = nullptr;
FtpReplyCode* FtpReplyCode::DATA_CONNECTION_OPEN = nullptr;
FtpReplyCode* FtpReplyCode::CLOSING_DATA_CONNECTION = nullptr;
FtpReplyCode* FtpReplyCode::ENTERING_PASSIVE_MODE = nullptr;
FtpReplyCode* FtpReplyCode::ENTERING_EXT_PASSIVE_MODE = nullptr;
FtpReplyCode* FtpReplyCode::LOGGED_IN = nullptr;
FtpReplyCode* FtpReplyCode::SECURELY_LOGGED_IN = nullptr;
FtpReplyCode* FtpReplyCode::SECURITY_EXCHANGE_OK = nullptr;
FtpReplyCode* FtpReplyCode::SECURITY_EXCHANGE_COMPLETE = nullptr;
FtpReplyCode* FtpReplyCode::FILE_ACTION_OK = nullptr;
FtpReplyCode* FtpReplyCode::PATHNAME_CREATED = nullptr;
FtpReplyCode* FtpReplyCode::NEED_PASSWORD = nullptr;
FtpReplyCode* FtpReplyCode::NEED_ACCOUNT = nullptr;
FtpReplyCode* FtpReplyCode::NEED_ADAT = nullptr;
FtpReplyCode* FtpReplyCode::NEED_MORE_ADAT = nullptr;
FtpReplyCode* FtpReplyCode::FILE_ACTION_PENDING = nullptr;
FtpReplyCode* FtpReplyCode::SERVICE_NOT_AVAILABLE = nullptr;
FtpReplyCode* FtpReplyCode::CANT_OPEN_DATA_CONNECTION = nullptr;
FtpReplyCode* FtpReplyCode::CONNECTION_CLOSED = nullptr;
FtpReplyCode* FtpReplyCode::NEED_SECURITY_RESOURCE = nullptr;
FtpReplyCode* FtpReplyCode::FILE_ACTION_NOT_TAKEN = nullptr;
FtpReplyCode* FtpReplyCode::ACTION_ABORTED = nullptr;
FtpReplyCode* FtpReplyCode::INSUFFICIENT_STORAGE = nullptr;
FtpReplyCode* FtpReplyCode::COMMAND_UNRECOGNIZED = nullptr;
FtpReplyCode* FtpReplyCode::INVALID_PARAMETER = nullptr;
FtpReplyCode* FtpReplyCode::BAD_SEQUENCE = nullptr;
FtpReplyCode* FtpReplyCode::NOT_IMPLEMENTED_FOR_PARAMETER = nullptr;
FtpReplyCode* FtpReplyCode::NOT_LOGGED_IN = nullptr;
FtpReplyCode* FtpReplyCode::NEED_ACCOUNT_FOR_STORING = nullptr;
FtpReplyCode* FtpReplyCode::PROT_LEVEL_DENIED = nullptr;
FtpReplyCode* FtpReplyCode::REQUEST_DENIED = nullptr;
FtpReplyCode* FtpReplyCode::FAILED_SECURITY_CHECK = nullptr;
FtpReplyCode* FtpReplyCode::UNSUPPORTED_PROT_LEVEL = nullptr;
FtpReplyCode* FtpReplyCode::PROT_LEVEL_NOT_SUPPORTED_BY_SECURITY = nullptr;
FtpReplyCode* FtpReplyCode::FILE_UNAVAILABLE = nullptr;
FtpReplyCode* FtpReplyCode::PAGE_TYPE_UNKNOWN = nullptr;
FtpReplyCode* FtpReplyCode::EXCEEDED_STORAGE = nullptr;
FtpReplyCode* FtpReplyCode::FILE_NAME_NOT_ALLOWED = nullptr;
FtpReplyCode* FtpReplyCode::PROTECTED_REPLY = nullptr;
FtpReplyCode* FtpReplyCode::UNKNOWN_ERROR = nullptr;
$FtpReplyCodeArray* FtpReplyCode::$VALUES = nullptr;

$FtpReplyCodeArray* FtpReplyCode::$values() {
	$init(FtpReplyCode);
	return $new($FtpReplyCodeArray, {
		FtpReplyCode::RESTART_MARKER,
		FtpReplyCode::SERVICE_READY_IN,
		FtpReplyCode::DATA_CONNECTION_ALREADY_OPEN,
		FtpReplyCode::FILE_STATUS_OK,
		FtpReplyCode::COMMAND_OK,
		FtpReplyCode::NOT_IMPLEMENTED,
		FtpReplyCode::SYSTEM_STATUS,
		FtpReplyCode::DIRECTORY_STATUS,
		FtpReplyCode::FILE_STATUS,
		FtpReplyCode::HELP_MESSAGE,
		FtpReplyCode::NAME_SYSTEM_TYPE,
		FtpReplyCode::SERVICE_READY,
		FtpReplyCode::SERVICE_CLOSING,
		FtpReplyCode::DATA_CONNECTION_OPEN,
		FtpReplyCode::CLOSING_DATA_CONNECTION,
		FtpReplyCode::ENTERING_PASSIVE_MODE,
		FtpReplyCode::ENTERING_EXT_PASSIVE_MODE,
		FtpReplyCode::LOGGED_IN,
		FtpReplyCode::SECURELY_LOGGED_IN,
		FtpReplyCode::SECURITY_EXCHANGE_OK,
		FtpReplyCode::SECURITY_EXCHANGE_COMPLETE,
		FtpReplyCode::FILE_ACTION_OK,
		FtpReplyCode::PATHNAME_CREATED,
		FtpReplyCode::NEED_PASSWORD,
		FtpReplyCode::NEED_ACCOUNT,
		FtpReplyCode::NEED_ADAT,
		FtpReplyCode::NEED_MORE_ADAT,
		FtpReplyCode::FILE_ACTION_PENDING,
		FtpReplyCode::SERVICE_NOT_AVAILABLE,
		FtpReplyCode::CANT_OPEN_DATA_CONNECTION,
		FtpReplyCode::CONNECTION_CLOSED,
		FtpReplyCode::NEED_SECURITY_RESOURCE,
		FtpReplyCode::FILE_ACTION_NOT_TAKEN,
		FtpReplyCode::ACTION_ABORTED,
		FtpReplyCode::INSUFFICIENT_STORAGE,
		FtpReplyCode::COMMAND_UNRECOGNIZED,
		FtpReplyCode::INVALID_PARAMETER,
		FtpReplyCode::BAD_SEQUENCE,
		FtpReplyCode::NOT_IMPLEMENTED_FOR_PARAMETER,
		FtpReplyCode::NOT_LOGGED_IN,
		FtpReplyCode::NEED_ACCOUNT_FOR_STORING,
		FtpReplyCode::PROT_LEVEL_DENIED,
		FtpReplyCode::REQUEST_DENIED,
		FtpReplyCode::FAILED_SECURITY_CHECK,
		FtpReplyCode::UNSUPPORTED_PROT_LEVEL,
		FtpReplyCode::PROT_LEVEL_NOT_SUPPORTED_BY_SECURITY,
		FtpReplyCode::FILE_UNAVAILABLE,
		FtpReplyCode::PAGE_TYPE_UNKNOWN,
		FtpReplyCode::EXCEEDED_STORAGE,
		FtpReplyCode::FILE_NAME_NOT_ALLOWED,
		FtpReplyCode::PROTECTED_REPLY,
		FtpReplyCode::UNKNOWN_ERROR
	});
}

$FtpReplyCodeArray* FtpReplyCode::values() {
	$init(FtpReplyCode);
	return $cast($FtpReplyCodeArray, FtpReplyCode::$VALUES->clone());
}

FtpReplyCode* FtpReplyCode::valueOf($String* name) {
	$init(FtpReplyCode);
	return $cast(FtpReplyCode, $Enum::valueOf(FtpReplyCode::class$, name));
}

void FtpReplyCode::init$($String* $enum$name, int32_t $enum$ordinal, int32_t val) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->value = val;
}

int32_t FtpReplyCode::getValue() {
	return this->value;
}

bool FtpReplyCode::isPositivePreliminary() {
	return this->value >= 100 && this->value < 200;
}

bool FtpReplyCode::isPositiveCompletion() {
	return this->value >= 200 && this->value < 300;
}

bool FtpReplyCode::isPositiveIntermediate() {
	return this->value >= 300 && this->value < 400;
}

bool FtpReplyCode::isTransientNegative() {
	return this->value >= 400 && this->value < 500;
}

bool FtpReplyCode::isPermanentNegative() {
	return this->value >= 500 && this->value < 600;
}

bool FtpReplyCode::isProtectedReply() {
	return this->value >= 600 && this->value < 700;
}

bool FtpReplyCode::isSyntax() {
	return ((this->value / 10) - ((this->value / 100) * 10)) == 0;
}

bool FtpReplyCode::isInformation() {
	return ((this->value / 10) - ((this->value / 100) * 10)) == 1;
}

bool FtpReplyCode::isConnection() {
	return ((this->value / 10) - ((this->value / 100) * 10)) == 2;
}

bool FtpReplyCode::isAuthentication() {
	return ((this->value / 10) - ((this->value / 100) * 10)) == 3;
}

bool FtpReplyCode::isUnspecified() {
	return ((this->value / 10) - ((this->value / 100) * 10)) == 4;
}

bool FtpReplyCode::isFileSystem() {
	return ((this->value / 10) - ((this->value / 100) * 10)) == 5;
}

FtpReplyCode* FtpReplyCode::find(int32_t v) {
	$init(FtpReplyCode);
	{
		$var($FtpReplyCodeArray, arr$, FtpReplyCode::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			FtpReplyCode* code = arr$->get(i$);
			{
				if ($nc(code)->getValue() == v) {
					return code;
				}
			}
		}
	}
	return FtpReplyCode::UNKNOWN_ERROR;
}

void clinit$FtpReplyCode($Class* class$) {
	$assignStatic(FtpReplyCode::RESTART_MARKER, $new(FtpReplyCode, "RESTART_MARKER"_s, 0, 110));
	$assignStatic(FtpReplyCode::SERVICE_READY_IN, $new(FtpReplyCode, "SERVICE_READY_IN"_s, 1, 120));
	$assignStatic(FtpReplyCode::DATA_CONNECTION_ALREADY_OPEN, $new(FtpReplyCode, "DATA_CONNECTION_ALREADY_OPEN"_s, 2, 125));
	$assignStatic(FtpReplyCode::FILE_STATUS_OK, $new(FtpReplyCode, "FILE_STATUS_OK"_s, 3, 150));
	$assignStatic(FtpReplyCode::COMMAND_OK, $new(FtpReplyCode, "COMMAND_OK"_s, 4, 200));
	$assignStatic(FtpReplyCode::NOT_IMPLEMENTED, $new(FtpReplyCode, "NOT_IMPLEMENTED"_s, 5, 202));
	$assignStatic(FtpReplyCode::SYSTEM_STATUS, $new(FtpReplyCode, "SYSTEM_STATUS"_s, 6, 211));
	$assignStatic(FtpReplyCode::DIRECTORY_STATUS, $new(FtpReplyCode, "DIRECTORY_STATUS"_s, 7, 212));
	$assignStatic(FtpReplyCode::FILE_STATUS, $new(FtpReplyCode, "FILE_STATUS"_s, 8, 213));
	$assignStatic(FtpReplyCode::HELP_MESSAGE, $new(FtpReplyCode, "HELP_MESSAGE"_s, 9, 214));
	$assignStatic(FtpReplyCode::NAME_SYSTEM_TYPE, $new(FtpReplyCode, "NAME_SYSTEM_TYPE"_s, 10, 215));
	$assignStatic(FtpReplyCode::SERVICE_READY, $new(FtpReplyCode, "SERVICE_READY"_s, 11, 220));
	$assignStatic(FtpReplyCode::SERVICE_CLOSING, $new(FtpReplyCode, "SERVICE_CLOSING"_s, 12, 221));
	$assignStatic(FtpReplyCode::DATA_CONNECTION_OPEN, $new(FtpReplyCode, "DATA_CONNECTION_OPEN"_s, 13, 225));
	$assignStatic(FtpReplyCode::CLOSING_DATA_CONNECTION, $new(FtpReplyCode, "CLOSING_DATA_CONNECTION"_s, 14, 226));
	$assignStatic(FtpReplyCode::ENTERING_PASSIVE_MODE, $new(FtpReplyCode, "ENTERING_PASSIVE_MODE"_s, 15, 227));
	$assignStatic(FtpReplyCode::ENTERING_EXT_PASSIVE_MODE, $new(FtpReplyCode, "ENTERING_EXT_PASSIVE_MODE"_s, 16, 229));
	$assignStatic(FtpReplyCode::LOGGED_IN, $new(FtpReplyCode, "LOGGED_IN"_s, 17, 230));
	$assignStatic(FtpReplyCode::SECURELY_LOGGED_IN, $new(FtpReplyCode, "SECURELY_LOGGED_IN"_s, 18, 232));
	$assignStatic(FtpReplyCode::SECURITY_EXCHANGE_OK, $new(FtpReplyCode, "SECURITY_EXCHANGE_OK"_s, 19, 234));
	$assignStatic(FtpReplyCode::SECURITY_EXCHANGE_COMPLETE, $new(FtpReplyCode, "SECURITY_EXCHANGE_COMPLETE"_s, 20, 235));
	$assignStatic(FtpReplyCode::FILE_ACTION_OK, $new(FtpReplyCode, "FILE_ACTION_OK"_s, 21, 250));
	$assignStatic(FtpReplyCode::PATHNAME_CREATED, $new(FtpReplyCode, "PATHNAME_CREATED"_s, 22, 257));
	$assignStatic(FtpReplyCode::NEED_PASSWORD, $new(FtpReplyCode, "NEED_PASSWORD"_s, 23, 331));
	$assignStatic(FtpReplyCode::NEED_ACCOUNT, $new(FtpReplyCode, "NEED_ACCOUNT"_s, 24, 332));
	$assignStatic(FtpReplyCode::NEED_ADAT, $new(FtpReplyCode, "NEED_ADAT"_s, 25, 334));
	$assignStatic(FtpReplyCode::NEED_MORE_ADAT, $new(FtpReplyCode, "NEED_MORE_ADAT"_s, 26, 335));
	$assignStatic(FtpReplyCode::FILE_ACTION_PENDING, $new(FtpReplyCode, "FILE_ACTION_PENDING"_s, 27, 350));
	$assignStatic(FtpReplyCode::SERVICE_NOT_AVAILABLE, $new(FtpReplyCode, "SERVICE_NOT_AVAILABLE"_s, 28, 421));
	$assignStatic(FtpReplyCode::CANT_OPEN_DATA_CONNECTION, $new(FtpReplyCode, "CANT_OPEN_DATA_CONNECTION"_s, 29, 425));
	$assignStatic(FtpReplyCode::CONNECTION_CLOSED, $new(FtpReplyCode, "CONNECTION_CLOSED"_s, 30, 426));
	$assignStatic(FtpReplyCode::NEED_SECURITY_RESOURCE, $new(FtpReplyCode, "NEED_SECURITY_RESOURCE"_s, 31, 431));
	$assignStatic(FtpReplyCode::FILE_ACTION_NOT_TAKEN, $new(FtpReplyCode, "FILE_ACTION_NOT_TAKEN"_s, 32, 450));
	$assignStatic(FtpReplyCode::ACTION_ABORTED, $new(FtpReplyCode, "ACTION_ABORTED"_s, 33, 451));
	$assignStatic(FtpReplyCode::INSUFFICIENT_STORAGE, $new(FtpReplyCode, "INSUFFICIENT_STORAGE"_s, 34, 452));
	$assignStatic(FtpReplyCode::COMMAND_UNRECOGNIZED, $new(FtpReplyCode, "COMMAND_UNRECOGNIZED"_s, 35, 500));
	$assignStatic(FtpReplyCode::INVALID_PARAMETER, $new(FtpReplyCode, "INVALID_PARAMETER"_s, 36, 501));
	$assignStatic(FtpReplyCode::BAD_SEQUENCE, $new(FtpReplyCode, "BAD_SEQUENCE"_s, 37, 503));
	$assignStatic(FtpReplyCode::NOT_IMPLEMENTED_FOR_PARAMETER, $new(FtpReplyCode, "NOT_IMPLEMENTED_FOR_PARAMETER"_s, 38, 504));
	$assignStatic(FtpReplyCode::NOT_LOGGED_IN, $new(FtpReplyCode, "NOT_LOGGED_IN"_s, 39, 530));
	$assignStatic(FtpReplyCode::NEED_ACCOUNT_FOR_STORING, $new(FtpReplyCode, "NEED_ACCOUNT_FOR_STORING"_s, 40, 532));
	$assignStatic(FtpReplyCode::PROT_LEVEL_DENIED, $new(FtpReplyCode, "PROT_LEVEL_DENIED"_s, 41, 533));
	$assignStatic(FtpReplyCode::REQUEST_DENIED, $new(FtpReplyCode, "REQUEST_DENIED"_s, 42, 534));
	$assignStatic(FtpReplyCode::FAILED_SECURITY_CHECK, $new(FtpReplyCode, "FAILED_SECURITY_CHECK"_s, 43, 535));
	$assignStatic(FtpReplyCode::UNSUPPORTED_PROT_LEVEL, $new(FtpReplyCode, "UNSUPPORTED_PROT_LEVEL"_s, 44, 536));
	$assignStatic(FtpReplyCode::PROT_LEVEL_NOT_SUPPORTED_BY_SECURITY, $new(FtpReplyCode, "PROT_LEVEL_NOT_SUPPORTED_BY_SECURITY"_s, 45, 537));
	$assignStatic(FtpReplyCode::FILE_UNAVAILABLE, $new(FtpReplyCode, "FILE_UNAVAILABLE"_s, 46, 550));
	$assignStatic(FtpReplyCode::PAGE_TYPE_UNKNOWN, $new(FtpReplyCode, "PAGE_TYPE_UNKNOWN"_s, 47, 551));
	$assignStatic(FtpReplyCode::EXCEEDED_STORAGE, $new(FtpReplyCode, "EXCEEDED_STORAGE"_s, 48, 552));
	$assignStatic(FtpReplyCode::FILE_NAME_NOT_ALLOWED, $new(FtpReplyCode, "FILE_NAME_NOT_ALLOWED"_s, 49, 553));
	$assignStatic(FtpReplyCode::PROTECTED_REPLY, $new(FtpReplyCode, "PROTECTED_REPLY"_s, 50, 631));
	$assignStatic(FtpReplyCode::UNKNOWN_ERROR, $new(FtpReplyCode, "UNKNOWN_ERROR"_s, 51, 999));
	$assignStatic(FtpReplyCode::$VALUES, FtpReplyCode::$values());
}

FtpReplyCode::FtpReplyCode() {
}

$Class* FtpReplyCode::load$($String* name, bool initialize) {
	$loadClass(FtpReplyCode, name, initialize, &_FtpReplyCode_ClassInfo_, clinit$FtpReplyCode, allocate$FtpReplyCode);
	return class$;
}

$Class* FtpReplyCode::class$ = nullptr;

		} // ftp
	} // net
} // sun