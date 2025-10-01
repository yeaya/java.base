#ifndef _sun_net_ftp_FtpReplyCode_h_
#define _sun_net_ftp_FtpReplyCode_h_
//$ class sun.net.ftp.FtpReplyCode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BAD_SEQUENCE")
#undef BAD_SEQUENCE
#pragma push_macro("PROT_LEVEL_DENIED")
#undef PROT_LEVEL_DENIED
#pragma push_macro("RESTART_MARKER")
#undef RESTART_MARKER
#pragma push_macro("NEED_ACCOUNT")
#undef NEED_ACCOUNT
#pragma push_macro("UNSUPPORTED_PROT_LEVEL")
#undef UNSUPPORTED_PROT_LEVEL
#pragma push_macro("COMMAND_UNRECOGNIZED")
#undef COMMAND_UNRECOGNIZED
#pragma push_macro("FILE_ACTION_OK")
#undef FILE_ACTION_OK
#pragma push_macro("SERVICE_CLOSING")
#undef SERVICE_CLOSING
#pragma push_macro("FILE_STATUS_OK")
#undef FILE_STATUS_OK
#pragma push_macro("NEED_SECURITY_RESOURCE")
#undef NEED_SECURITY_RESOURCE
#pragma push_macro("REQUEST_DENIED")
#undef REQUEST_DENIED
#pragma push_macro("NAME_SYSTEM_TYPE")
#undef NAME_SYSTEM_TYPE
#pragma push_macro("PAGE_TYPE_UNKNOWN")
#undef PAGE_TYPE_UNKNOWN
#pragma push_macro("NEED_PASSWORD")
#undef NEED_PASSWORD
#pragma push_macro("INVALID_PARAMETER")
#undef INVALID_PARAMETER
#pragma push_macro("DATA_CONNECTION_OPEN")
#undef DATA_CONNECTION_OPEN
#pragma push_macro("ENTERING_EXT_PASSIVE_MODE")
#undef ENTERING_EXT_PASSIVE_MODE
#pragma push_macro("NOT_LOGGED_IN")
#undef NOT_LOGGED_IN
#pragma push_macro("NEED_ACCOUNT_FOR_STORING")
#undef NEED_ACCOUNT_FOR_STORING
#pragma push_macro("CANT_OPEN_DATA_CONNECTION")
#undef CANT_OPEN_DATA_CONNECTION
#pragma push_macro("FILE_ACTION_NOT_TAKEN")
#undef FILE_ACTION_NOT_TAKEN
#pragma push_macro("CLOSING_DATA_CONNECTION")
#undef CLOSING_DATA_CONNECTION
#pragma push_macro("FILE_ACTION_PENDING")
#undef FILE_ACTION_PENDING
#pragma push_macro("FAILED_SECURITY_CHECK")
#undef FAILED_SECURITY_CHECK
#pragma push_macro("LOGGED_IN")
#undef LOGGED_IN
#pragma push_macro("PROT_LEVEL_NOT_SUPPORTED_BY_SECURITY")
#undef PROT_LEVEL_NOT_SUPPORTED_BY_SECURITY
#pragma push_macro("SECURITY_EXCHANGE_OK")
#undef SECURITY_EXCHANGE_OK
#pragma push_macro("INSUFFICIENT_STORAGE")
#undef INSUFFICIENT_STORAGE
#pragma push_macro("DIRECTORY_STATUS")
#undef DIRECTORY_STATUS
#pragma push_macro("SERVICE_NOT_AVAILABLE")
#undef SERVICE_NOT_AVAILABLE
#pragma push_macro("UNKNOWN_ERROR")
#undef UNKNOWN_ERROR
#pragma push_macro("EXCEEDED_STORAGE")
#undef EXCEEDED_STORAGE
#pragma push_macro("DATA_CONNECTION_ALREADY_OPEN")
#undef DATA_CONNECTION_ALREADY_OPEN
#pragma push_macro("SERVICE_READY")
#undef SERVICE_READY
#pragma push_macro("COMMAND_OK")
#undef COMMAND_OK
#pragma push_macro("FILE_STATUS")
#undef FILE_STATUS
#pragma push_macro("FILE_UNAVAILABLE")
#undef FILE_UNAVAILABLE
#pragma push_macro("ACTION_ABORTED")
#undef ACTION_ABORTED
#pragma push_macro("NEED_ADAT")
#undef NEED_ADAT
#pragma push_macro("PROTECTED_REPLY")
#undef PROTECTED_REPLY
#pragma push_macro("SECURITY_EXCHANGE_COMPLETE")
#undef SECURITY_EXCHANGE_COMPLETE
#pragma push_macro("CONNECTION_CLOSED")
#undef CONNECTION_CLOSED
#pragma push_macro("ENTERING_PASSIVE_MODE")
#undef ENTERING_PASSIVE_MODE
#pragma push_macro("NOT_IMPLEMENTED")
#undef NOT_IMPLEMENTED
#pragma push_macro("SECURELY_LOGGED_IN")
#undef SECURELY_LOGGED_IN
#pragma push_macro("FILE_NAME_NOT_ALLOWED")
#undef FILE_NAME_NOT_ALLOWED
#pragma push_macro("PATHNAME_CREATED")
#undef PATHNAME_CREATED
#pragma push_macro("HELP_MESSAGE")
#undef HELP_MESSAGE
#pragma push_macro("NEED_MORE_ADAT")
#undef NEED_MORE_ADAT
#pragma push_macro("NOT_IMPLEMENTED_FOR_PARAMETER")
#undef NOT_IMPLEMENTED_FOR_PARAMETER
#pragma push_macro("SERVICE_READY_IN")
#undef SERVICE_READY_IN
#pragma push_macro("SYSTEM_STATUS")
#undef SYSTEM_STATUS

namespace sun {
	namespace net {
		namespace ftp {

class FtpReplyCode : public ::java::lang::Enum {
	$class(FtpReplyCode, 0, ::java::lang::Enum)
public:
	FtpReplyCode();
	static $Array<::sun::net::ftp::FtpReplyCode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t val);
	static ::sun::net::ftp::FtpReplyCode* find(int32_t v);
	virtual int32_t getValue();
	virtual bool isAuthentication();
	virtual bool isConnection();
	virtual bool isFileSystem();
	virtual bool isInformation();
	virtual bool isPermanentNegative();
	virtual bool isPositiveCompletion();
	virtual bool isPositiveIntermediate();
	virtual bool isPositivePreliminary();
	virtual bool isProtectedReply();
	virtual bool isSyntax();
	virtual bool isTransientNegative();
	virtual bool isUnspecified();
	static ::sun::net::ftp::FtpReplyCode* valueOf($String* name);
	static $Array<::sun::net::ftp::FtpReplyCode>* values();
	static ::sun::net::ftp::FtpReplyCode* RESTART_MARKER;
	static ::sun::net::ftp::FtpReplyCode* SERVICE_READY_IN;
	static ::sun::net::ftp::FtpReplyCode* DATA_CONNECTION_ALREADY_OPEN;
	static ::sun::net::ftp::FtpReplyCode* FILE_STATUS_OK;
	static ::sun::net::ftp::FtpReplyCode* COMMAND_OK;
	static ::sun::net::ftp::FtpReplyCode* NOT_IMPLEMENTED;
	static ::sun::net::ftp::FtpReplyCode* SYSTEM_STATUS;
	static ::sun::net::ftp::FtpReplyCode* DIRECTORY_STATUS;
	static ::sun::net::ftp::FtpReplyCode* FILE_STATUS;
	static ::sun::net::ftp::FtpReplyCode* HELP_MESSAGE;
	static ::sun::net::ftp::FtpReplyCode* NAME_SYSTEM_TYPE;
	static ::sun::net::ftp::FtpReplyCode* SERVICE_READY;
	static ::sun::net::ftp::FtpReplyCode* SERVICE_CLOSING;
	static ::sun::net::ftp::FtpReplyCode* DATA_CONNECTION_OPEN;
	static ::sun::net::ftp::FtpReplyCode* CLOSING_DATA_CONNECTION;
	static ::sun::net::ftp::FtpReplyCode* ENTERING_PASSIVE_MODE;
	static ::sun::net::ftp::FtpReplyCode* ENTERING_EXT_PASSIVE_MODE;
	static ::sun::net::ftp::FtpReplyCode* LOGGED_IN;
	static ::sun::net::ftp::FtpReplyCode* SECURELY_LOGGED_IN;
	static ::sun::net::ftp::FtpReplyCode* SECURITY_EXCHANGE_OK;
	static ::sun::net::ftp::FtpReplyCode* SECURITY_EXCHANGE_COMPLETE;
	static ::sun::net::ftp::FtpReplyCode* FILE_ACTION_OK;
	static ::sun::net::ftp::FtpReplyCode* PATHNAME_CREATED;
	static ::sun::net::ftp::FtpReplyCode* NEED_PASSWORD;
	static ::sun::net::ftp::FtpReplyCode* NEED_ACCOUNT;
	static ::sun::net::ftp::FtpReplyCode* NEED_ADAT;
	static ::sun::net::ftp::FtpReplyCode* NEED_MORE_ADAT;
	static ::sun::net::ftp::FtpReplyCode* FILE_ACTION_PENDING;
	static ::sun::net::ftp::FtpReplyCode* SERVICE_NOT_AVAILABLE;
	static ::sun::net::ftp::FtpReplyCode* CANT_OPEN_DATA_CONNECTION;
	static ::sun::net::ftp::FtpReplyCode* CONNECTION_CLOSED;
	static ::sun::net::ftp::FtpReplyCode* NEED_SECURITY_RESOURCE;
	static ::sun::net::ftp::FtpReplyCode* FILE_ACTION_NOT_TAKEN;
	static ::sun::net::ftp::FtpReplyCode* ACTION_ABORTED;
	static ::sun::net::ftp::FtpReplyCode* INSUFFICIENT_STORAGE;
	static ::sun::net::ftp::FtpReplyCode* COMMAND_UNRECOGNIZED;
	static ::sun::net::ftp::FtpReplyCode* INVALID_PARAMETER;
	static ::sun::net::ftp::FtpReplyCode* BAD_SEQUENCE;
	static ::sun::net::ftp::FtpReplyCode* NOT_IMPLEMENTED_FOR_PARAMETER;
	static ::sun::net::ftp::FtpReplyCode* NOT_LOGGED_IN;
	static ::sun::net::ftp::FtpReplyCode* NEED_ACCOUNT_FOR_STORING;
	static ::sun::net::ftp::FtpReplyCode* PROT_LEVEL_DENIED;
	static ::sun::net::ftp::FtpReplyCode* REQUEST_DENIED;
	static ::sun::net::ftp::FtpReplyCode* FAILED_SECURITY_CHECK;
	static ::sun::net::ftp::FtpReplyCode* UNSUPPORTED_PROT_LEVEL;
	static ::sun::net::ftp::FtpReplyCode* PROT_LEVEL_NOT_SUPPORTED_BY_SECURITY;
	static ::sun::net::ftp::FtpReplyCode* FILE_UNAVAILABLE;
	static ::sun::net::ftp::FtpReplyCode* PAGE_TYPE_UNKNOWN;
	static ::sun::net::ftp::FtpReplyCode* EXCEEDED_STORAGE;
	static ::sun::net::ftp::FtpReplyCode* FILE_NAME_NOT_ALLOWED;
	static ::sun::net::ftp::FtpReplyCode* PROTECTED_REPLY;
	static ::sun::net::ftp::FtpReplyCode* UNKNOWN_ERROR;
	static $Array<::sun::net::ftp::FtpReplyCode>* $VALUES;
	int32_t value = 0;
};

		} // ftp
	} // net
} // sun

#pragma pop_macro("BAD_SEQUENCE")
#pragma pop_macro("PROT_LEVEL_DENIED")
#pragma pop_macro("RESTART_MARKER")
#pragma pop_macro("NEED_ACCOUNT")
#pragma pop_macro("UNSUPPORTED_PROT_LEVEL")
#pragma pop_macro("COMMAND_UNRECOGNIZED")
#pragma pop_macro("FILE_ACTION_OK")
#pragma pop_macro("SERVICE_CLOSING")
#pragma pop_macro("FILE_STATUS_OK")
#pragma pop_macro("NEED_SECURITY_RESOURCE")
#pragma pop_macro("REQUEST_DENIED")
#pragma pop_macro("NAME_SYSTEM_TYPE")
#pragma pop_macro("PAGE_TYPE_UNKNOWN")
#pragma pop_macro("NEED_PASSWORD")
#pragma pop_macro("INVALID_PARAMETER")
#pragma pop_macro("DATA_CONNECTION_OPEN")
#pragma pop_macro("ENTERING_EXT_PASSIVE_MODE")
#pragma pop_macro("NOT_LOGGED_IN")
#pragma pop_macro("NEED_ACCOUNT_FOR_STORING")
#pragma pop_macro("CANT_OPEN_DATA_CONNECTION")
#pragma pop_macro("FILE_ACTION_NOT_TAKEN")
#pragma pop_macro("CLOSING_DATA_CONNECTION")
#pragma pop_macro("FILE_ACTION_PENDING")
#pragma pop_macro("FAILED_SECURITY_CHECK")
#pragma pop_macro("LOGGED_IN")
#pragma pop_macro("PROT_LEVEL_NOT_SUPPORTED_BY_SECURITY")
#pragma pop_macro("SECURITY_EXCHANGE_OK")
#pragma pop_macro("INSUFFICIENT_STORAGE")
#pragma pop_macro("DIRECTORY_STATUS")
#pragma pop_macro("SERVICE_NOT_AVAILABLE")
#pragma pop_macro("UNKNOWN_ERROR")
#pragma pop_macro("EXCEEDED_STORAGE")
#pragma pop_macro("DATA_CONNECTION_ALREADY_OPEN")
#pragma pop_macro("SERVICE_READY")
#pragma pop_macro("COMMAND_OK")
#pragma pop_macro("FILE_STATUS")
#pragma pop_macro("FILE_UNAVAILABLE")
#pragma pop_macro("ACTION_ABORTED")
#pragma pop_macro("NEED_ADAT")
#pragma pop_macro("PROTECTED_REPLY")
#pragma pop_macro("SECURITY_EXCHANGE_COMPLETE")
#pragma pop_macro("CONNECTION_CLOSED")
#pragma pop_macro("ENTERING_PASSIVE_MODE")
#pragma pop_macro("NOT_IMPLEMENTED")
#pragma pop_macro("SECURELY_LOGGED_IN")
#pragma pop_macro("FILE_NAME_NOT_ALLOWED")
#pragma pop_macro("PATHNAME_CREATED")
#pragma pop_macro("HELP_MESSAGE")
#pragma pop_macro("NEED_MORE_ADAT")
#pragma pop_macro("NOT_IMPLEMENTED_FOR_PARAMETER")
#pragma pop_macro("SERVICE_READY_IN")
#pragma pop_macro("SYSTEM_STATUS")

#endif // _sun_net_ftp_FtpReplyCode_h_