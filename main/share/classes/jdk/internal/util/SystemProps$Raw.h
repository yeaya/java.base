#ifndef _jdk_internal_util_SystemProps$Raw_h_
#define _jdk_internal_util_SystemProps$Raw_h_
//$ class jdk.internal.util.SystemProps$Raw
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FIXED_LENGTH")
#undef FIXED_LENGTH

namespace java {
	namespace util {
		class HashMap;
	}
}

namespace jdk {
	namespace internal {
		namespace util {

class $export SystemProps$Raw : public ::java::lang::Object {
	$class(SystemProps$Raw, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	SystemProps$Raw();
	void init$();
	::java::util::HashMap* cmdProperties();
	static $StringArray* platformProperties();
	virtual $String* propDefault(int32_t index);
	static $StringArray* vmProperties();
	static const int32_t _display_country_NDX = 0;
	static const int32_t _display_language_NDX = 1; // 1 + _display_country_NDX
	static const int32_t _display_script_NDX = 2; // 1 + _display_language_NDX
	static const int32_t _display_variant_NDX = 3; // 1 + _display_script_NDX
	static const int32_t _file_encoding_NDX = 4; // 1 + _display_variant_NDX
	static const int32_t _file_separator_NDX = 5; // 1 + _file_encoding_NDX
	static const int32_t _format_country_NDX = 6; // 1 + _file_separator_NDX
	static const int32_t _format_language_NDX = 7; // 1 + _format_country_NDX
	static const int32_t _format_script_NDX = 8; // 1 + _format_language_NDX
	static const int32_t _format_variant_NDX = 9; // 1 + _format_script_NDX
	static const int32_t _ftp_nonProxyHosts_NDX = 10; // 1 + _format_variant_NDX
	static const int32_t _ftp_proxyHost_NDX = 11; // 1 + _ftp_nonProxyHosts_NDX
	static const int32_t _ftp_proxyPort_NDX = 12; // 1 + _ftp_proxyHost_NDX
	static const int32_t _http_nonProxyHosts_NDX = 13; // 1 + _ftp_proxyPort_NDX
	static const int32_t _http_proxyHost_NDX = 14; // 1 + _http_nonProxyHosts_NDX
	static const int32_t _http_proxyPort_NDX = 15; // 1 + _http_proxyHost_NDX
	static const int32_t _https_proxyHost_NDX = 16; // 1 + _http_proxyPort_NDX
	static const int32_t _https_proxyPort_NDX = 17; // 1 + _https_proxyHost_NDX
	static const int32_t _java_io_tmpdir_NDX = 18; // 1 + _https_proxyPort_NDX
	static const int32_t _line_separator_NDX = 19; // 1 + _java_io_tmpdir_NDX
	static const int32_t _os_arch_NDX = 20; // 1 + _line_separator_NDX
	static const int32_t _os_name_NDX = 21; // 1 + _os_arch_NDX
	static const int32_t _os_version_NDX = 22; // 1 + _os_name_NDX
	static const int32_t _path_separator_NDX = 23; // 1 + _os_version_NDX
	static const int32_t _socksNonProxyHosts_NDX = 24; // 1 + _path_separator_NDX
	static const int32_t _socksProxyHost_NDX = 25; // 1 + _socksNonProxyHosts_NDX
	static const int32_t _socksProxyPort_NDX = 26; // 1 + _socksProxyHost_NDX
	static const int32_t _sun_arch_abi_NDX = 27; // 1 + _socksProxyPort_NDX
	static const int32_t _sun_arch_data_model_NDX = 28; // 1 + _sun_arch_abi_NDX
	static const int32_t _sun_cpu_endian_NDX = 29; // 1 + _sun_arch_data_model_NDX
	static const int32_t _sun_cpu_isalist_NDX = 30; // 1 + _sun_cpu_endian_NDX
	static const int32_t _sun_io_unicode_encoding_NDX = 31; // 1 + _sun_cpu_isalist_NDX
	static const int32_t _sun_jnu_encoding_NDX = 32; // 1 + _sun_io_unicode_encoding_NDX
	static const int32_t _sun_os_patch_level_NDX = 33; // 1 + _sun_jnu_encoding_NDX
	static const int32_t _sun_stderr_encoding_NDX = 34; // 1 + _sun_os_patch_level_NDX
	static const int32_t _sun_stdout_encoding_NDX = 35; // 1 + _sun_stderr_encoding_NDX
	static const int32_t _user_dir_NDX = 36; // 1 + _sun_stdout_encoding_NDX
	static const int32_t _user_home_NDX = 37; // 1 + _user_dir_NDX
	static const int32_t _user_name_NDX = 38; // 1 + _user_home_NDX
	static const int32_t FIXED_LENGTH = 39; // 1 + _user_name_NDX
	$StringArray* platformProps = nullptr;
};

		} // util
	} // internal
} // jdk

#pragma pop_macro("FIXED_LENGTH")

#endif // _jdk_internal_util_SystemProps$Raw_h_